cmake_minimum_required(VERSION 3.20)

include("${CMAKE_SOURCE_DIR}/cmake/MakeModule.cmake")

set(MODULE_NAME crath)

project(${MODULE_NAME} LANGUAGES CXX)

make_module(
	MODULE_NAME ${MODULE_NAME}
	MODULE_FILES
		StdContext
		simd/float1x4
		simd/float2x4
		simd/float3x4
		simd/float1x8
		ParameterTyping
		Functions
	CXX_STANDARD 20
	REQUIRED_LIBS
		tepp
	ADDITIONAL_FILES
		function_definitions.h
		function_testing.h
)

add_executable(${MODULE_NAME}_test Test.cpp)
target_link_libraries(${MODULE_NAME}_test
	crath
	imgui
	opengl32
	font_resources
)
