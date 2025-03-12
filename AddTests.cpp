#include "crath/AddTests.h"

#include "crath/StdContext.h"
#include "crath/TestResult.h"
#include "function_definitions.h"
#include "crath/simd/float2x8.h"
#include "crath/simd/float1x8.h"
#include "function_testing.h"

void addTests(TestResult& testResult) {
	using namespace cr;
	addAll(testResult);
}
