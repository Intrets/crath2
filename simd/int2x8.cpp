#include "crath/simd/int2x8.h"

#if defined(ARCH_x86) && defined(SIMD_8)
#include "crath/simd/float2x8.h"

namespace cr::simd
{
	float2x8 int2x8::bitCastFloat() const {
		return float2x8(
		    _mm256_castsi256_ps(this->i1),
		    _mm256_castsi256_ps(this->i2)
		);
	}

	float2x8 int2x8::castFloat() const {
		return float2x8(
		    _mm256_cvtepi32_ps(this->i1),
		    _mm256_cvtepi32_ps(this->i2)
		);
	}
}
#endif
