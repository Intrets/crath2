cmake_minimum_required(VERSION 3.18)

include("${CMAKE_SOURCE_DIR}/cmake/MakeModule.cmake")

set(MODULE_NAME crath)

project(${MODULE_NAME} LANGUAGES CXX)

make_module(
	MODULE_NAME ${MODULE_NAME}
	MODULE_FILES
		simd/int3x4
		simd/int2x8
		simd/int1x8
		simd/simd_tests
		simd/float2x8
		simd/simd_definitions
		simd/Info
		simd/aligned_load_hint
		StdContext
		simd/float1x4
		simd/float2x4
		simd/float3x4
		simd/float1x8
		simd/int1x4
		simd/int2x4
		ParameterTyping
	CXX_STANDARD 20
	REQUIRED_LIBS
		tepp
	ADDITIONAL_FILES
		function_definitions.h
		function_testing.h
)

find_package(OpenGL)
if (OpenGL_FOUND)
  find_package(GLFW3 REQUIRED)

  add_executable(${MODULE_NAME}_glfw_test TestGlfw.cpp include/crath/TestResult.h TestResult.cpp include/crath/AddTests.h AddTests.cpp)
  target_include_directories(${MODULE_NAME}_glfw_test PUBLIC include)
  target_link_libraries(imgui_glfw imgui GLFW3)
  target_link_libraries(${MODULE_NAME}_glfw_test
    implot
    imgui
    crath
    imgui_glfw
    opengl32
    font_resources
    GLFW3
    mem
  )

  target_default_compiler_options(
    TARGETS 
      ${MODULE_NAME}_glfw_test
  )
endif()

target_default_compiler_options(
	TARGETS 
		crath
)
