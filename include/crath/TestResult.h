#pragma once

#include <algorithm>
#include <chrono>
#include <functional>
#include <iostream>
#include <random>
#include <ranges>
#include <string>
#include <thread>
#include <unordered_map>
#include <vector>

#include <imgui.h>
#include <imgui_impl_glfw.h>
#include <imgui_impl_opengl3.h>
#include <implot.h>

#include <imgui_stdlib.h>

#include "crath/StdContext.h"
#include "crath/simd/float1x4.h"
#include "crath/simd/float2x4.h"

#include <mem/MutexedObject.h>

struct TestResult
{
	std::string name{};

	struct TimingAuxilery
	{
		std::minstd_rand rng{ std::random_device()() };
		std::vector<float> dataBufferFloat{};
		std::vector<cr::simd::float1x4> dataBuffer1x4{};
		std::vector<cr::simd::float2x4> dataBuffer2x4{};

		template<class T>
		auto& getBuffer() {
			if constexpr (std::same_as<T, float>) {
				return this->dataBufferFloat;
			}
			else if constexpr (std::same_as<T, cr::simd::float1x4>) {
				return this->dataBuffer1x4;
			}
			else {
				return this->dataBuffer2x4;
			}
		}
	};

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
		float range_error{};
		bool range_normalizedError{};

		std::function<float(float)> approximationFunction{};
		float approximationDomanMin{};
		float approximationDomanMax{};

		std::function<float(float)> referenceFunction{};
		float referenceDomanMin{};
		float referenceDomanMax{};

		bool selected = false;

		std::function<void(TimingAuxilery&, int)> timeFunction{};

		std::chrono::steady_clock::duration duration{};
		int64_t count = 0;
		std::atomic<uint64_t> picosecondsShared = 0;

		template<class F>
		void time(auto approximation, float min_x, float max_x) {
			this->timeFunction = [this, min_x, max_x, approximation](TimingAuxilery& aux, int N) {
				auto& buffer = aux.getBuffer<F>();
				buffer.clear();
				for (size_t i = 0; i < N; i++) {
					buffer.push_back(std::uniform_real<float>(min_x, max_x)(aux.rng));
				}

				auto start = std::chrono::steady_clock::now();
				F total = approximation(buffer);
				this->duration += std::chrono::steady_clock::now() - start;
				this->count += N;

				this->picosecondsShared.store(std::chrono::duration_cast<std::chrono::duration<uint64_t, std::pico>>(this->duration).count() / this->count);
				std::cout << *reinterpret_cast<float*>(&total) << "\n";
			};
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
			if (std::abs(ref) > 0.00001f) {
				if (normalize) {
					return std::abs((res - ref) / ref);
				}
				else {
					return std::abs((res - ref));
				}
			}
			else {
				return 0.0f;
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
				if (std::abs(ref) > 0.00001f) {
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

			this->range_error = errorLimit;
			this->range_normalizedError = normalize;

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
	std::vector<std::unique_ptr<Entry>> entries{};
	mem::MutexedObject<std::vector<Entry*>> visibleEntries{};
	std::vector<Entry*> visibleEntriesBuffer{};
	Entry& make();

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
	bool doDomainFiltering = true;
	float minDomainMinRaw = 0.0f;
	float maxDomainMaxRaw = 1.0f;
	float minDomainMin = 0.0f;
	float maxDomainMax = 1.0f;

	bool autoFit = true;
	bool autoFitOnChange = false;
	bool changedData = false;
	bool plotRelativeError = false;
	bool showSelected = false;
	float evalValue = 0.0f;

	void work(std::stop_token stop) {
		TimingAuxilery aux{};

		while (true) {
			if (stop.stop_requested()) {
				return;
			}
			auto [target, count] = std::invoke([&] {
				auto access = this->visibleEntries.acquire();

				Entry* target = nullptr;
				int64_t count = std::numeric_limits<int64_t>::max();
				for (auto entry : *access) {
					if (entry->count < count) {
						count = entry->count;
						target = entry;
					}
				}

				return std::make_pair(target, count);
			});

			if (target != nullptr) {
				if (count > 500'000'000) {
					std::this_thread::sleep_for(std::chrono::milliseconds(100));
				}
				else {
					target->timeFunction(aux, 1'000'000);
				}
			}
			else {
				std::this_thread::sleep_for(std::chrono::milliseconds(100));
			}
		}
	}

	void show() {
		ImGui::InputText("OR", &this->filterString0);
		ImGui::InputText("AND", &this->filterString1);
		this->searchTags.clear();
		this->filterTags.clear();

		for (auto& entry : this->entries) {
			entry->picoseconds = entry->picosecondsShared.load();
			for (auto& tag : entry->tags) {
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
				entry->calculateDomain(this->maxError, this->domainErrorNormalized);
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
		ImGui::SameLine();
		ImGui::Checkbox("Do Domain Filtering", &this->doDomainFiltering);
		this->maxDomainMax = this->maxDomainMaxRaw;
		this->minDomainMin = this->minDomainMinRaw;
		if (this->multiplyDomainByPi) {
			this->maxDomainMax *= std::numbers::pi_v<float>;
			this->minDomainMin *= std::numbers::pi_v<float>;
		}
		ImGui::Checkbox("Show Selected", &this->showSelected);
		ImGui::SameLine();
		ImGui::SetNextItemWidth(10.0f * ImGui::GetFontSize());
		ImGui::InputFloat("Eval", &this->evalValue);

		std::vector<Entry*> plotEntries{};

		ImGui::BeginChild("Child", {}, true);
		if (ImGui::BeginTable("Things", 10, ImGuiTableFlags_Sortable | ImGuiTableFlags_RowBg | ImGuiTableFlags_SizingStretchProp | ImGuiTableFlags_BordersInnerV)) {
			ImGui::TableSetupColumn("Name");
			ImGui::TableSetupColumn("Eval");
			ImGui::TableSetupColumn("Eval Error");
			ImGui::TableSetupColumn("E. Rel. E.");
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

				auto cmpLT = [=](std::unique_ptr<Entry>& entry0_, std::unique_ptr<Entry>& entry1_) {
					auto& entry0 = *entry0_;
					auto& entry1 = *entry1_;

					if (i == 0) {
						return entry0.subName < entry1.subName;
					}
					else if (i == 4) {
						return entry0.error < entry1.error;
					}
					else if (i == 5) {
						return entry0.maximumError < entry1.maximumError;
					}
					else if (i == 6) {
						return entry0.maximumNormalizedError < entry1.maximumNormalizedError;
					}
					else if (i == 7) {
						return entry0.range_min < entry1.range_min;
					}
					else if (i == 8) {
						return entry0.range_max < entry1.range_max;
					}
					else if (i == 9) {
						return entry0.picoseconds < entry1.picoseconds;
					}
					else {
						return false;
					}
				};

				auto cmpGT = [=](std::unique_ptr<Entry>& entry0_, std::unique_ptr<Entry>& entry1_) {
					auto& entry0 = *entry0_;
					auto& entry1 = *entry1_;

					if (i == 0) {
						return entry0.subName > entry1.subName;
					}
					else if (i == 4) {
						return entry0.error > entry1.error;
					}
					else if (i == 5) {
						return entry0.maximumError > entry1.maximumError;
					}
					else if (i == 6) {
						return entry0.maximumNormalizedError > entry1.maximumNormalizedError;
					}
					else if (i == 7) {
						return entry0.range_min > entry1.range_min;
					}
					else if (i == 8) {
						return entry0.range_max > entry1.range_max;
					}
					else if (i == 9) {
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
			this->visibleEntriesBuffer.clear();
			for (auto& entry_ : this->entries) {
				auto& entry = *entry_;
				if (this->showSelected) {
					if (!entry.selected) {
						continue;
					}
				}
				else {
					if (this->doDomainFiltering) {
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
					}
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

				this->visibleEntriesBuffer.push_back(&entry);

				ImGui::TableNextRow();

				ImGui::TableNextColumn();
				auto old = entry.selected;
				ImGui::Selectable(entry.subName.c_str(), &entry.selected);
				if (!entry.selected && ImGui::IsItemHovered()) {
					plotEntries.push_back(&entry);
				}
				if (ImGui::IsItemClicked(ImGuiMouseButton_Right)) {
					auto accuracyInfo = std::format("// domain: ({}, {})\n// maximum absolute error: {}\n// maximum relative error:{}", entry.approximationDomanMin, entry.approximationDomanMax, entry.maximumError, entry.maximumNormalizedError);
					auto info = std::format("{}\n// {}", accuracyInfo, entry.subName);
					ImGui::SetClipboardText(info.c_str());
				}
				if (old != entry.selected) {
					this->changedData = true;
				}
				ImGui::TableNextColumn();
				auto value = entry.approximationFunction(this->evalValue);
				auto correct = entry.referenceFunction(this->evalValue);
				auto error = std::abs(value - correct);
				auto relative = error / std::abs(correct);
				ImGui::Text("%f", value);
				ImGui::TableNextColumn();
				ImGui::Text("%f", error);
				ImGui::TableNextColumn();
				ImGui::Text("%f", relative);
				ImGui::TableNextColumn();
				ImGui::Text("%f", entry.error);
				ImGui::TableNextColumn();
				ImGui::Text("%f", entry.maximumError);
				ImGui::TableNextColumn();
				ImGui::Text("%f", entry.maximumNormalizedError);

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
				auto text = std::format("{}ps", entry.picoseconds);
				ImGui::Text("%s", text.c_str());
			}

			{
				auto access = this->visibleEntries.acquire();
				std::swap(this->visibleEntriesBuffer, *access);
			}

			for (auto& entry : this->entries) {
				if (entry->selected) {
					plotEntries.push_back(entry.get());
				}
			}

			ImGui::EndTable();
		}
		ImGui::EndChild();

		if (ImGui::Begin("plot test")) {
			ImGui::Checkbox("Relative Error", &this->plotRelativeError);
			ImGui::SameLine();
			if (ImGui::Button("Clear all")) {
				for (auto& entry : this->entries) {
					entry->selected = false;
					if (entry->selected) {
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
				ImGui::SameLine();
				ImGui::Text("Remove:");
				integer_t count = 0;
				for (auto& entry : this->entries) {
					if (entry->selected) {
						if (ImGui::Button(entry->subName.c_str())) {
							entry->selected = false;
							this->changedData = true;
						}
						if (ImGui::IsItemHovered()) {
							this->hoveredEntry = entry.get();
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

			auto size = ImGui::GetContentRegionAvail().y * 0.5f;

			auto doPlot = [&](bool showError) {
				if (ImPlot::BeginPlot(showError ? "Error" : "Value", ImVec2(-1, size), showError ? ImPlotFlags_NoLegend : ImPlotFlags_None)) {
					ImPlotAxisFlags xflags = ImPlotAxisFlags_NoLabel;
					ImPlotAxisFlags yflags = ImPlotAxisFlags_NoLabel;
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
							if (showError) {
								auto ref = entry->referenceFunction(ref_x);
								auto res = entry->approximationFunction(ref_x);
								auto e = std::abs(ref - res);
								if (this->plotRelativeError) {
									if (std::abs(ref) > 0.00001f) {
										ys.push_back(e / std::abs(ref));
									}
								}
								else {
									ys.push_back(e);
								}
							}
							else {
								ys.push_back(entry->approximationFunction(x));
							}
						}

						ImPlot::PlotLine(entry->subName.c_str(), xs.data(), ys.data(), static_cast<int>(xs.size()));
					}
					ImPlot::EndPlot();
				}
			};
			doPlot(false);
			doPlot(true);
		}
		ImGui::End();
	}
};
