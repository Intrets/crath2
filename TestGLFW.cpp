#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <ranges>
#include <string>
#include <unordered_map>
#include <vector>

#include <imgui.h>
#include <imgui_impl_glfw.h>
#include <imgui_impl_opengl3.h>
#include <implot.h>

#include <imgui_stdlib.h>

#include <GLFW/glfw3.h>

#include <font_resources.h>

#include "crath/StdContext.h"
#include "crath/simd/float2x4.h"

thread_local ImGuiContext* MyImGuiTLS;

struct TestResult
{
	std::string name{};

	struct Entry
	{
		std::string subName{};
		std::vector<std::string> tags{};
		uint64_t picoseconds{};

		float error{};
		float maximumError{};
		float maximumNormalizedError{};
		std::tuple<float, float, float> maximumErrorinfo{};

		float range_min{};
		float range_max{};

		float range_Normalizedmin{};
		float range_Normalizedmax{};

		std::function<float(float)> approximationFunction{};
		float approximationDomanMin{};
		float approximationDomanMax{};

		std::function<float(float)> referenceFunction{};
		float referenceDomanMin{};
		float referenceDomanMax{};

		bool selected = false;

		template<class F>
		void time(auto approximation, int N, float min_x, float max_x) {
			std::vector<F> data{};
			data.resize(N);
			auto rng = std::minstd_rand(std::random_device()());

			for (size_t i = 0; i < N; i++) {
				data[i] = F(std::uniform_real<float>(min_x, max_x)(rng));
			}

			auto start = std::chrono::steady_clock::now();

			F total{};
			for (auto x : data) {
				total += approximation(x);
			}

			auto duration = std::chrono::duration_cast<std::chrono::duration<uint64_t, std::femto>>(std::chrono::steady_clock::now() - start) / N;
			this->picoseconds = duration.count() / 1000;

			std::cout << *reinterpret_cast<float*>(&total) << "\n";
		}

		template<class F>
		void time2(auto approximation, int N, float min_x, float max_x) {
			std::vector<std::pair<F, F>> data{};
			data.resize(N);
			auto rng = std::minstd_rand(std::random_device()());

			for (size_t i = 0; i < N; i++) {
				data[i] = { F(std::uniform_real<float>(min_x, max_x)(rng)), F(std::uniform_real<float>(min_x, max_x)(rng)) };
			}

			auto start = std::chrono::steady_clock::now();

			F total{};
			for (auto [x, y] : data) {
				total += approximation(x, y);
			}

			auto duration = std::chrono::duration_cast<std::chrono::duration<uint64_t, std::femto>>(std::chrono::steady_clock::now() - start) / N;
			this->picoseconds = duration.count() / 1000;

			std::cout << total << "\n";
		}

		template<class F>
		void accuracy_test(auto approximation, auto reference, float min_x, float max_x, float ref_min_x, float ref_max_x) {
			if constexpr (std::same_as<F, float>) {
				this->approximationFunction = approximation;
			}
			else {
				this->approximationFunction = [=](float x) {
					return approximation(x)[0];
				};
			}
			this->referenceFunction = reference;

			this->approximationDomanMin = min_x;
			this->approximationDomanMax = max_x;

			this->referenceDomanMin = ref_min_x;
			this->referenceDomanMax = ref_max_x;

			this->calculateAccuracyOnDomain();
		}

		float calculateError(float approximation_x, float reference_x, bool normalize) {
			auto res = this->approximationFunction(approximation_x);
			auto ref = this->referenceFunction(reference_x);
			if (normalize) {
				return std::abs((res - ref) / ref);
			}
			else {
				return std::abs((res - ref));
			}
		}

		void calculateAccuracyOnDomain() {
			auto const N = 10000;

			for (size_t i = 0; i < N + 1; i++) {
				auto x = this->approximationDomanMin + (this->approximationDomanMax - this->approximationDomanMin) * i / N;
				auto x_ref = this->referenceDomanMin + (this->referenceDomanMax - this->referenceDomanMin) * i / N;

				float res = this->approximationFunction(x);
				float ref = this->referenceFunction(x_ref);

				float const e = std::abs(res - ref);
				if (std::abs(ref) > 0.0000001f) {
					auto candidate = e / std::abs(ref);
					if (candidate > this->maximumNormalizedError) {
						this->maximumNormalizedError = candidate;
						this->maximumErrorinfo = { x, res, ref };
					}
				}
				this->maximumError = std::max(maximumError, e);

				this->error += e / N;
			}
		}

		void calculateDomain(float errorLimit, bool normalize) {
			auto approximation_x = (this->approximationDomanMin + this->approximationDomanMax) * 0.5f;
			auto approximation_dx = (this->approximationDomanMax - this->approximationDomanMin) * 0.001f;

			auto reference_x = (this->referenceDomanMin + this->referenceDomanMax) * 0.5f;
			auto reference_dx = (this->referenceDomanMax - this->referenceDomanMin) * 0.001f;

			{
				size_t i = 0;
				for (; i < 10000; i++) {
					auto approx_x = approximation_x + approximation_dx * i;
					auto ref_x = reference_x + reference_dx * i;

					if (this->calculateError(approx_x, ref_x, normalize) > errorLimit) {
						break;
					}
				}

				this->range_max = approximation_x + approximation_dx * i;
			}
			{
				size_t i = 0;
				for (; i < 10000; i++) {
					auto approx_x = approximation_x - approximation_dx * i;
					auto ref_x = reference_x - reference_dx * i;

					if (this->calculateError(approx_x, ref_x, normalize) > errorLimit) {
						break;
					}
				}

				this->range_min = approximation_x - approximation_dx * i;
			}
		}
	};

	std::string filterString0{};
	std::string filterString1{};
	std::vector<Entry> entries{};
	Entry* hoveredEntry = nullptr;
	struct TagInfo
	{
		bool includeTag = false;
		bool excludeTag = false;
	};
	std::unordered_map<std::string, TagInfo> tags{};
	std::vector<std::string_view> searchTags{};
	std::vector<std::string_view> filterTags{};

	float maxErrorDecibels = 0.0f;
	float maxError0 = 0.001f;
	float maxError = std::numeric_limits<float>::max();
	bool domainErrorNormalized = true;

	bool multiplyDomainByPi = false;
	float minDomainMinRaw = 0.0f;
	float maxDomainMaxRaw = 1.0f;
	float minDomainMin = 0.0f;
	float maxDomainMax = 1.0f;

	bool showError = false;
	bool autoFit = true;
	bool autoFitOnChange = false;
	bool changedData = false;

	void show() {
		ImGui::InputText("OR", &this->filterString0);
		ImGui::InputText("AND", &this->filterString1);
		this->searchTags.clear();
		this->filterTags.clear();

		for (auto& entry : this->entries) {
			for (auto& tag : entry.tags) {
				this->tags[tag];
			}
		}

		int id = 0;
		ImGui::SeparatorText("Tags");
		{
			int j = 0;
			for (auto& [tag, info] : this->tags) {
				if (j % 10 != 0) {
					ImGui::SameLine();
				}
				ImGui::PushID(id++);
				ImGui::Checkbox(tag.c_str(), &info.includeTag);
				ImGui::PopID();
				if (info.includeTag) {
					this->searchTags.push_back(tag);
				}
				j++;
			}
		}
		ImGui::SeparatorText("Filter");
		{
			int j = 0;
			for (auto& [tag, info] : this->tags) {
				if (j % 10 != 0) {
					ImGui::SameLine();
				}
				ImGui::PushID(id++);
				ImGui::Checkbox(tag.c_str(), &info.excludeTag);
				ImGui::PopID();
				if (info.excludeTag) {
					this->filterTags.push_back(tag);
				}
				j++;
			}
		}

		ImGui::Checkbox("normalized error", &this->domainErrorNormalized);
		ImGui::SameLine();
		auto changed = std::invoke([&] {
			if (this->domainErrorNormalized) {
				auto result = ImGui::SliderFloat("max error", &this->maxErrorDecibels, -100.0f, 0.0f, "%.3fdB");
				if (this->maxErrorDecibels == 0.0f) {
					this->maxError = std::numeric_limits<float>::max();
				}
				else {
					this->maxError = std::pow(10.0f, this->maxErrorDecibels / 20.0f);
				}
				return result;
			}
			else {
				auto result = ImGui::SliderFloat("max error", &this->maxError0, 0.0000001f, 10.0f, "%10.10f", ImGuiSliderFlags_Logarithmic);
				this->maxError = this->maxError0;
				return result;
			}
		});

		if (changed) {
			for (auto& entry : this->entries) {
				entry.calculateDomain(this->maxError, this->domainErrorNormalized);
			}
		}
		ImGui::Text("Maximum error on domain: %f", this->maxError);

		if (ImGui::SliderFloat("Min Domain", &this->minDomainMinRaw, -10.0f, 10.0f)) {
			this->maxDomainMaxRaw = std::max(this->minDomainMinRaw, this->maxDomainMaxRaw);
		}

		if (ImGui::SliderFloat("Max Domain", &this->maxDomainMaxRaw, -10.0f, 10.0f)) {
			this->minDomainMinRaw = std::min(this->minDomainMinRaw, this->maxDomainMaxRaw);
		}
		ImGui::SameLine();
		ImGui::Checkbox("Multiply domain by pi", &this->multiplyDomainByPi);
		this->maxDomainMax = this->maxDomainMaxRaw;
		this->minDomainMin = this->minDomainMinRaw;
		if (this->multiplyDomainByPi) {
			this->maxDomainMax *= std::numbers::pi_v<float>;
			this->minDomainMin *= std::numbers::pi_v<float>;
		}

		std::vector<Entry*> plotEntries{};

		ImGui::BeginChild("Child", {}, true);
		if (ImGui::BeginTable("Things", 8, ImGuiTableFlags_Sortable | ImGuiTableFlags_RowBg | ImGuiTableFlags_SizingFixedFit)) {
			ImGui::TableSetupColumn("Name");
			ImGui::TableSetupColumn("Error");
			ImGui::TableSetupColumn("Absolute Error");
			ImGui::TableSetupColumn("Normalized Error");
			ImGui::TableSetupColumn("Domain Min");
			ImGui::TableSetupColumn("Domain Max");
			ImGui::TableSetupColumn("Time");

			ImGuiTableSortSpecs* sorts_specs = ImGui::TableGetSortSpecs();
			if (sorts_specs && sorts_specs->SpecsDirty) {
				sorts_specs->SpecsDirty = false;
				auto i = sorts_specs->Specs->ColumnIndex;
				auto direction = sorts_specs->Specs->SortDirection;

				auto cmpLT = [=](Entry& entry0, Entry& entry1) {
					if (i == 0) {
						return entry0.subName < entry1.subName;
					}
					else if (i == 1) {
						return entry0.error < entry1.error;
					}
					else if (i == 2) {
						return entry0.maximumError < entry1.maximumError;
					}
					else if (i == 3) {
						return entry0.maximumNormalizedError < entry1.maximumNormalizedError;
					}
					else if (i == 4) {
						return entry0.range_min < entry1.range_min;
					}
					else if (i == 5) {
						return entry0.range_max < entry1.range_max;
					}
					else if (i == 6) {
						return entry0.picoseconds < entry1.picoseconds;
					}
					else {
						return false;
					}
				};

				auto cmpGT = [=](Entry& entry0, Entry& entry1) {
					if (i == 0) {
						return entry0.subName > entry1.subName;
					}
					else if (i == 1) {
						return entry0.error > entry1.error;
					}
					else if (i == 2) {
						return entry0.maximumError > entry1.maximumError;
					}
					else if (i == 3) {
						return entry0.maximumNormalizedError > entry1.maximumNormalizedError;
					}
					else if (i == 4) {
						return entry0.range_min > entry1.range_min;
					}
					else if (i == 5) {
						return entry0.range_max > entry1.range_max;
					}
					else if (i == 6) {
						return entry0.picoseconds > entry1.picoseconds;
					}
					else {
						return false;
					}
				};

				if (direction == ImGuiSortDirection_Descending) {
					std::ranges::sort(this->entries, cmpGT);
				}
				else {
					std::ranges::sort(this->entries, cmpLT);
				}
			}

			ImGui::TableHeadersRow();
			for (auto& entry : this->entries) {
				if (entry.range_min != entry.range_max) {
					if (entry.range_min > this->minDomainMin) {
						continue;
					}
					if (entry.range_max < this->maxDomainMax) {
						continue;
					}
				}
				else {
					continue;
				}

				bool tagFound = true;

				for (auto const& tag : this->searchTags) {
					if (!std::ranges::contains(entry.tags, tag)) {
						tagFound = false;
						break;
					}
				}

				if (!this->searchTags.empty() && !tagFound) {
					continue;
				}

				bool breakOut = false;
				for (auto const& tag : this->filterTags) {
					if (std::ranges::contains(entry.tags, tag)) {
						breakOut = true;
						break;
					}
				}
				if (breakOut) {
					continue;
				}

				auto display0 = this->filterString0.empty();
				if (!display0) {
					for (auto word : std::views::split(this->filterString0, ' ')) {
						if (entry.subName.contains(std::string_view(word.begin(), word.end()))) {
							display0 = true;
							break;
						}
					}
				}

				auto display1 = this->filterString1.empty();
				if (!display1) {
					display1 = true;
					for (auto word : std::views::split(this->filterString1, ' ')) {
						if (!entry.subName.contains(std::string_view(word.begin(), word.end()))) {
							display1 = false;
							break;
						}
					}
				}

				if (!display0 || !display1) {
					continue;
				}
				ImGui::TableNextRow();

				ImGui::TableNextColumn();
				auto old = entry.selected;
				ImGui::Selectable(entry.subName.c_str(), &entry.selected);
				if (!entry.selected && ImGui::IsItemHovered()) {
					plotEntries.push_back(&entry);
				}
				if (old != entry.selected) {
					this->changedData = true;
				}
				ImGui::TableNextColumn();
				ImGui::Text("%10.10f", entry.error);
				ImGui::TableNextColumn();
				ImGui::Text("%10.10f", entry.maximumError);
				ImGui::TableNextColumn();
				ImGui::Text("%10.10f", entry.maximumNormalizedError);

				if (entry.range_min == entry.range_max) {
					ImGui::TableNextColumn();
					ImGui::TableNextColumn();
				}
				else {
					ImGui::TableNextColumn();
					ImGui::Text("%f", entry.range_min);
					ImGui::TableNextColumn();
					ImGui::Text("%f", entry.range_max);
				}

				ImGui::TableNextColumn();
				ImGui::Text("%dps", entry.picoseconds);

				ImGui::TableNextColumn();
				auto&& [x, ref, res] = entry.maximumErrorinfo;
				ImGui::Text("%10.10f, %10.10f, %10.10f", x, ref, res);
			}

			for (auto& entry : this->entries) {
				if (entry.selected) {
					plotEntries.push_back(&entry);
				}
			}

			ImGui::EndTable();
		}
		ImGui::EndChild();

		if (ImGui::Begin("plot test")) {
			ImGui::Checkbox("Show Error", &this->showError);
			ImGui::SameLine();
			if (ImGui::Button("Clear all")) {
				for (auto& entry : this->entries) {
					entry.selected = false;
					if (entry.selected) {
						this->changedData = true;
					}
				}
			}
			ImGui::SameLine();
			if (ImGui::Button("View Active")) {
				ImGui::OpenPopup("active entries list");
			}
			this->hoveredEntry = nullptr;
			if (ImGui::BeginPopup("active entries list")) {
				ImGui::Text("Remove:");
				integer_t count = 0;
				for (auto& entry : this->entries) {
					if (entry.selected) {
						if (ImGui::Button(entry.subName.c_str())) {
							entry.selected = false;
							this->changedData = true;
						}
						if (ImGui::IsItemHovered()) {
							this->hoveredEntry = &entry;
						}
						count++;
					}
				}

				if (count == 0) {
					ImGui::Text("Empty");
				}

				ImGui::EndPopup();
			}
			ImGui::SameLine();
			ImGui::Checkbox("Auto Fit", &this->autoFit);
			ImGui::SameLine();
			ImGui::Checkbox("Auto Fit On Change", &this->autoFitOnChange);

			std::vector<float> xs{};
			std::vector<float> ys{};

			if (ImPlot::BeginPlot("Test", ImVec2(-1, -1))) {
				ImPlotAxisFlags xflags{};
				ImPlotAxisFlags yflags{};
				if (!this->hoveredEntry && (this->autoFit || (this->autoFitOnChange && this->changedData))) {
					xflags |= ImPlotAxisFlags_AutoFit;
					yflags |= ImPlotAxisFlags_AutoFit;
				}
				this->changedData = false;
				ImPlot::SetupAxes("x", "y", xflags, yflags);

				for (auto entry : plotEntries) {
					if (this->hoveredEntry != nullptr && entry != this->hoveredEntry) {
						continue;
					}
					xs.clear();
					ys.clear();

					auto N = 500;
					float begin = entry->approximationDomanMin;
					float end = entry->approximationDomanMax;
					float d = end - begin;

					float ref_begin = entry->referenceDomanMin;
					float ref_end = entry->referenceDomanMax;
					float ref_d = ref_end - ref_begin;
					for (integer_t i = 0; i < N; i++) {
						auto s = (static_cast<float>(i) / (N - 1));
						auto x = begin + d * s;
						auto ref_x = ref_begin + ref_d * s;
						xs.push_back(x);
						if (this->showError) {
							ys.push_back(std::abs(entry->referenceFunction(ref_x) - entry->approximationFunction(x)));
						}
						else {
							ys.push_back(entry->approximationFunction(x));
						}
					}

					ImPlot::PlotLine(entry->subName.c_str(), xs.data(), ys.data(), static_cast<int>(xs.size()));
				}
				ImPlot::EndPlot();
			}
		}
		ImGui::End();
	}
};

int main() {
	using namespace cr;
	TestResult testResult{};

	 auto constexpr M = 6'000'000;
	//     auto constexpr M = 1'000'000;
	//    auto constexpr M = 1'000;
	//auto constexpr M = 1;

#include "function_testing.h"

	for (auto& entry : testResult.entries) {
		entry.calculateDomain(testResult.maxError, testResult.domainErrorNormalized);
	}

	if (!glfwInit()) {
		return 1;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

	GLFWwindow* window = glfwCreateWindow(1280, 720, "Approximations Accuracy and Timings", NULL, NULL);
	if (window == NULL) {
		return 1;
	}
	glfwMaximizeWindow(window);
	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);

	ImGui::CreateContext();
	ImPlot::CreateContext();
	ImGuiIO& io = ImGui::GetIO();

	auto fontBuffer = getBuffer(font_resources_enum::Nunito_Medium_ttf);

	if (fontBuffer->getSize<char>() <= static_cast<integer_t>(std::numeric_limits<int>::max())) {
		void* freeBuffer = ImGui::MemAlloc(fontBuffer->getSize<char>());

		std::memcpy(freeBuffer, fontBuffer->getData<void*>(), fontBuffer->getSize<char>());

		auto size = static_cast<int>(fontBuffer->getSize<char>());
		io.Fonts->AddFontFromMemoryTTF(freeBuffer, size, 17.0f);
	}

	ImGui::StyleColorsLight();

	if (!wrangled::gl::init()) {
		return 1;
	}

	ImGui_ImplGlfw_InitForOpenGL(window, true);
	ImGui_ImplOpenGL3_Init_Custom(io);

	ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();

		ImGui_ImplOpenGL3_NewFrame();
		ImGui_ImplGlfw_NewFrame();
		ImGui::NewFrame();

		ImGui::ShowDemoWindow();

		ImGui::Begin("Result", nullptr);
		testResult.show();
		ImGui::End();

		ImPlot::ShowDemoWindow();

		ImGui::Render();
		int display_w, display_h;
		glfwGetFramebufferSize(window, &display_w, &display_h);
		glViewport(0, 0, display_w, display_h);
		glClearColor(clear_color.x * clear_color.w, clear_color.y * clear_color.w, clear_color.z * clear_color.w, clear_color.w);
		glClear(GL_COLOR_BUFFER_BIT);
		ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

		glfwSwapBuffers(window);
	}

	ImGui_ImplOpenGL3_Shutdown_Custom(io);
	ImGui_ImplGlfw_Shutdown();
	ImGui::DestroyContext();

	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;
}