#include <algorithm>
#include <chrono>
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

#include <GLFW/glfw3.h>

#include <font_resources.h>

#include "crath/StdContext.h"
#include "crath/simd/float2x4.h"

#include "crath/AddTests.h"
#include "crath/TestResult.h"

thread_local ImGuiContext* MyImGuiTLS;

int main() {
	using namespace cr;
	TestResult testResult{};
	addTests(testResult);

	TestResult::TimingAuxilery aux{};

	for (auto& entry : testResult.entries) {
		entry->calculateDomain(testResult.maxError, testResult.domainErrorNormalized);
	}

	auto timingWorker = std::jthread([](std::stop_token stop, TestResult* testResult) { testResult->work(stop); }, &testResult);

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
		if (freeBuffer == nullptr) {
			std::abort();
		}

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

	timingWorker.request_stop();

	return 0;
}

TestResult::Entry& TestResult::make() {
	this->entries.push_back(std::make_unique<Entry>());
	return *this->entries.back();
}
