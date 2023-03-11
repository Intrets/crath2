#include <algorithm>
#include <iostream>
#include <random>
#include <ranges>
#include <string>
#include <unordered_map>
#include <vector>

#include <font_resources.h>

#include "imgui.h"
#include "imgui_impl_opengl3.h"
#include "imgui_impl_sdl2.h"
#include "imgui_stdlib.h"
#include <stdio.h>
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <SDL_opengl.h>
#include <chrono>

#include "crath/StdContext.h"

#include "crath/simd/float2x4.h"
#include "crath/Functions.h"

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
		float maximumValue{};
		float minimumValue{};

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
			auto const N = 10000;

			this->maximumValue = std::numeric_limits<float>::min();
			this->minimumValue = std::numeric_limits<float>::max();
			for (size_t i = 0; i < N - 1; i++) {
				auto x = min_x + (max_x - min_x) * i / N;
				auto x_ref = ref_min_x + (ref_max_x - ref_min_x) * i / N;

				float res = 0.0;
				if constexpr (std::same_as<float, F>) {
					res = approximation(x);
				}
				else {
					res = approximation(x)[0];
				}
				float ref = reference(x_ref);

				this->maximumValue = std::max(this->maximumValue, res);
				this->minimumValue = std::min(this->minimumValue, res);
				float const e = std::abs(res - ref);
				if (ref != 0.0f) {
					this->maximumError = std::max(maximumError, e / ref);
				}

				this->error += e / N;
			}
		}
	};

	std::string filterString0{};
	std::string filterString1{};
	std::vector<Entry> entries{};
	std::unordered_map<std::string, bool> tags{};
	std::vector<std::string_view> searchTags{};

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

		ImGui::BeginChild("Child", {}, true);
		ImGui::BeginTable("Things", 4, ImGuiTableFlags_Sortable | ImGuiTableFlags_RowBg);
		ImGui::TableSetupColumn("Name");
		ImGui::TableSetupColumn("Error");
		ImGui::TableSetupColumn("Maximum Normalized Error");
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

	auto constexpr t = StdContext::sin_c(0.8f);

	// auto constexpr M = 6'000'000;
	auto constexpr M = 1'000;

	// testResult.entries.emplace_back().accuracy_test(sin_fma_normal_T4)

#include "function_testing.h"

	if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_GAMECONTROLLER) != 0) {
		printf("Error: %s\n", SDL_GetError());
		return -1;
	}

	SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, 0);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);

	// Create window with graphics context
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
	SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
	SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
	SDL_WindowFlags window_flags = (SDL_WindowFlags)(SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI | SDL_WINDOW_MAXIMIZED);
	SDL_Window* window = SDL_CreateWindow("Dear ImGui SDL2+OpenGL3 example", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, window_flags);
	SDL_GLContext gl_context = SDL_GL_CreateContext(window);
	SDL_GL_MakeCurrent(window, gl_context);
	SDL_GL_SetSwapInterval(1); // Enable vsync

	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	auto fontBuffer = getBuffer(font_resources_enum::Nunito_Medium_ttf);

	if (fontBuffer->getSize<char>() <= static_cast<size_t>(std::numeric_limits<int>::max())) {
		void* freeBuffer = ImGui::MemAlloc(fontBuffer->getSize<char>());

		std::memcpy(freeBuffer, fontBuffer->getData<void*>(), fontBuffer->getSize<char>());

		auto size = static_cast<int>(fontBuffer->getSize<char>());
		io.Fonts->AddFontFromMemoryTTF(freeBuffer, size, 17.0f);
	}
	// io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
	// io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls

	ImGui::StyleColorsLight();

	[[maybe_unused]] auto b = wrangled::gl::init();
	// Setup Platform/Renderer backends
	ImGui_ImplSDL2_InitForOpenGL(window, gl_context);
	ImGui_ImplOpenGL3_Init_Custom(io);

	// Our state
	ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

	// Main loop
	bool done = false;
	while (!done) {
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			ImGui_ImplSDL2_ProcessEvent(&event);
			if (event.type == SDL_QUIT)
				done = true;
			if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_CLOSE && event.window.windowID == SDL_GetWindowID(window))
				done = true;
		}

		ImGui_ImplOpenGL3_NewFrame();
		ImGui_ImplSDL2_NewFrame();
		ImGui::NewFrame();

		// if (show_demo_window) {
		//	ImGui::ShowDemoWindow(&show_demo_window);
		// }

		ImGui::Begin("Result", nullptr);
		testResult.show();
		ImGui::End();

		// Rendering
		ImGui::Render();
		glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
		glClearColor(clear_color.x * clear_color.w, clear_color.y * clear_color.w, clear_color.z * clear_color.w, clear_color.w);
		glClear(GL_COLOR_BUFFER_BIT);
		ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

		std::this_thread::sleep_for(std::chrono::milliseconds(16));
		SDL_GL_SwapWindow(window);
	}

	// Cleanup
	ImGui_ImplOpenGL3_Shutdown_Custom(io);
	ImGui_ImplSDL2_Shutdown();
	ImGui::DestroyContext();

	SDL_GL_DeleteContext(gl_context);
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
