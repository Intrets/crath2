#pragma once

#include "crath/simd/Info.h"
#include "crath/simd/float1x4.h"
#include "crath/simd/float1x8.h"
#include "crath/simd/float2x4.h"
#include "crath/simd/float2x8.h"

namespace cr
{
#ifdef SIMD_8
	using simd_1x = cr::simd::float1x8;
	using simd_2x = cr::simd::float2x8;
#elifdef SIMD_4
	using simd_1x = cr::simd::float1x4;
	using simd_2x = cr::simd::float2x4;
#endif
}
