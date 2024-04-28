cmake_minimum_required(VERSION 3.20)

include("${CMAKE_SOURCE_DIR}/cmake/MakeModule.cmake")

set(MODULE_NAME crath)

project(${MODULE_NAME} LANGUAGES CXX)

make_module(
	MODULE_NAME ${MODULE_NAME}
	MODULE_FILES
		simd/aligned_load_hint
		StdContext
		simd/float1x4
		simd/float2x4
		simd/float3x4
		simd/float1x8
		simd/int1x4
		simd/int2x4
		ParameterTyping
		Functions
	CXX_STANDARD 20
	REQUIRED_LIBS
		tepp
	ADDITIONAL_FILES
		function_definitions.h
		function_testing.h
)

find_package(OpenGL REQUIRED)
find_package(GLFW3 REQUIRED)

add_executable(${MODULE_NAME}_glfw_test TestGlfw.cpp)
target_link_libraries(${MODULE_NAME}_glfw_test
	crath
	imgui_glfw
	opengl32
	font_resources
	GLFW3
)

target_default_compiler_options(
	TARGETS 
		${MODULE_NAME}_glfw_test
		crath
)
