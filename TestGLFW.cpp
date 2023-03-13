#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <ranges>
#include <string>
#include <unordered_map>
#include <vector>

#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"

#include "imgui_stdlib.h"

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

		float range_min{};
		float range_max{};

		std::function<float(float)> approximationFunction{};
		float approximationDomanMin{};
		float approximationDomanMax{};

		std::function<float(float)> referenceFunction{};
		float referenceDomanMin{};
		float referenceDomanMax{};

		bool normalize = false;

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
		void accuracy_test(auto approximation, auto reference, float min_x, float max_x, float ref_min_x, float ref_max_x, bool normalize_) {
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

			this->normalize = normalize_;

			this->calculateAccuracyOnDomain();
		}

		float calculateError(float approximation_x, float reference_x) {
			auto res = this->approximationFunction(approximation_x);
			auto ref = this->referenceFunction(reference_x);
			if (this->normalize) {
				return std::abs((res - ref) / ref);
			}
			else {
				return std::abs((res - ref));
			}
		}

		void calculateAccuracyOnDomain() {
			auto const N = 10000;

			for (size_t i = 0; i < N - 1; i++) {
				auto x = this->approximationDomanMin + (this->approximationDomanMax - this->approximationDomanMin) * i / N;
				auto x_ref = this->referenceDomanMin + (this->referenceDomanMax - this->referenceDomanMin) * i / N;

				float res = this->approximationFunction(x);
				float ref = this->referenceFunction(x_ref);

				float const e = std::abs(res - ref);
				if (this->normalize) {
					this->maximumError = std::max(maximumError, e / std::abs(ref));
				}
				else {
					this->maximumError = std::max(maximumError, e);
				}

				this->error += e / N;
			}
		}

		void calculateDomain(float maximumNormalizedError) {
			auto approximation_x = (this->approximationDomanMin + this->approximationDomanMax) * 0.5f;
			auto approximation_dx = (this->approximationDomanMax - this->approximationDomanMin) * 0.001f;

			auto reference_x = (this->referenceDomanMin + this->referenceDomanMax) * 0.5f;
			auto reference_dx = (this->referenceDomanMax - this->referenceDomanMin) * 0.001f;

			{
				size_t i = 0;
				for (; i < 10000; i++) {
					auto approx_x = approximation_x + approximation_dx * i;
					auto ref_x = reference_x + reference_dx * i;

					if (this->calculateError(approx_x, ref_x) > maximumNormalizedError) {
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

					if (this->calculateError(approx_x, ref_x) > maximumNormalizedError) {
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
	std::unordered_map<std::string, bool> tags{};
	std::vector<std::string_view> searchTags{};

	float maxErrorDecibels = -60.0f;
	float maxError = 0.001f;

	float minDomainMin = -10.0f;
	float maxDomainMax = 10.0f;

	void show() {
		ImGui::InputText("OR", &this->filterString0);
		ImGui::InputText("AND", &this->filterString1);
		searchTags.clear();

		for (auto& entry : this->entries) {
			for (auto& tag : entry.tags) {
				this->tags[tag];
			}
		}

		int j = 0;
		for (auto& [tag, b] : this->tags) {
			if (j % 10 != 0) {
				ImGui::SameLine();
			}
			ImGui::Checkbox(tag.c_str(), &b);
			if (b) {
				this->searchTags.push_back(tag);
			}
			j++;
		}

		if (ImGui::SliderFloat("max error", &this->maxErrorDecibels, -100.0f, 0.0f, "%.3fdB")) {
			if (this->maxErrorDecibels == 0.0f) {
				this->maxError = std::numeric_limits<float>::max();
			}
			else {
				this->maxError = std::pow(10.0f, this->maxErrorDecibels / 20.0f);
			}
			for (auto& entry : this->entries) {
				entry.calculateDomain(this->maxError);
			}
		}
		ImGui::Text("Maximum error on domain: %f", this->maxError);
		if (ImGui::SliderFloat("Min Domain", &this->minDomainMin, -10.0f, 10.0f)) {
			this->maxDomainMax = std::max(this->minDomainMin, this->maxDomainMax);
		}

		if (ImGui::SliderFloat("Max Domain", &this->maxDomainMax, -10.0f, 10.0f)) {
			this->minDomainMin = std::min(this->minDomainMin, this->maxDomainMax);
		}

		ImGui::BeginChild("Child", {}, true);
		ImGui::BeginTable("Things", 6, ImGuiTableFlags_Sortable | ImGuiTableFlags_RowBg | ImGuiTableFlags_Resizable);
		ImGui::TableSetupColumn("Name");
		ImGui::TableSetupColumn("Error");
		ImGui::TableSetupColumn("Maximum Normalized Error");
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
					return entry0.range_min < entry1.range_min;
				}
				else if (i == 4) {
					return entry0.range_max < entry1.range_max;
				}
				else if (i == 5) {
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
					return entry0.range_min > entry1.range_min;
				}
				else if (i == 4) {
					return entry0.range_max > entry1.range_max;
				}
				else if (i == 5) {
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

			for (auto tag : this->searchTags) {
				if (!std::ranges::contains(entry.tags, tag)) {
					tagFound = false;
					break;
				}
			}

			if (!this->searchTags.empty() && !tagFound) {
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
			ImGui::Text(entry.subName.c_str());
			ImGui::TableNextColumn();
			ImGui::Text("%10.10f", entry.error);
			ImGui::TableNextColumn();
			ImGui::Text("%10.10f", entry.maximumError);

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
		}

		ImGui::EndTable();
		ImGui::EndChild();
	}
};

int main() {
	using namespace cr;
	TestResult testResult{};

	 auto constexpr M = 6'000'000;
	// auto constexpr M = 1'000'000;
	//auto constexpr M = 1'000;

#include "function_testing.h"

	for (auto& entry : testResult.entries) {
		entry.calculateDomain(testResult.maxError);
	}

	if (!glfwInit()) {
		return 1;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

	GLFWwindow* window = glfwCreateWindow(1280, 720, "Dear ImGui GLFW+OpenGL3 example", NULL, NULL);
	if (window == NULL) {
		return 1;
	}
	glfwMaximizeWindow(window);
	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);

	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();

	auto fontBuffer = getBuffer(font_resources_enum::Nunito_Medium_ttf);

	if (fontBuffer->getSize<char>() <= static_cast<size_t>(std::numeric_limits<int>::max())) {
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

		ImGui::Begin("Result", nullptr);
		testResult.show();
		ImGui::End();

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