#pragma once

#include "crath/simd/Info.h"
#include "crath/simd/float1x4.h"
#include "crath/simd/float1x8.h"
#include "crath/simd/float2x4.h"
#include "crath/simd/float2x8.h"
#include "crath/simd/float4x4.h"

namespace cr
{
#ifdef SIMD_8
	using simd_1x = cr::simd::float1x8;
	using simd_2x = cr::simd::float2x8;
	using simd_16 = cr::simd::float2x8;
	using simd_type_or_fallback_scalar_1x = simd_1x;
	using simd_type_or_fallback_scalar_2x = simd_2x;
#elifdef SIMD_4
	using simd_1x = cr::simd::float1x4;
	using simd_2x = cr::simd::float2x4;
	using simd_16 = cr::simd::float4x4;
	using simd_type_or_fallback_scalar_1x = simd_1x;
	using simd_type_or_fallback_scalar_2x = simd_2x;
#else
	using simd_type_or_fallback_scalar_1x = float;
	using simd_type_or_fallback_scalar_2x = float;
#endif
}
