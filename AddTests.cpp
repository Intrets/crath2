#include "crath/AddTests.h"

#include "crath/TestResult.h"
#include "crath/StdContext.h"
#include "function_definitions.h"
#include "function_testing.h"

void addTests(TestResult& testResult) {
	using namespace cr;
	addAll(testResult);
}
