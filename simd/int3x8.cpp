#include "crath/simd/int3x8.h"

#include "crath/simd/float3x8.h"

namespace cr::simd
{
	float3x8 int3x8::bitCastFloat() const {
		return float3x8(
		    _mm256_castsi256_ps(this->i1),
		    _mm256_castsi256_ps(this->i2),
		    _mm256_castsi256_ps(this->i3)
		);
	}

	float3x8 int3x8::castFloat() const {
		return float3x8(
		    _mm256_cvtepi32_ps(this->i1),
		    _mm256_cvtepi32_ps(this->i2),
		    _mm256_cvtepi32_ps(this->i3)
		);
	}
}
