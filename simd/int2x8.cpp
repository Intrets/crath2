#include "crath/simd/int2x8.h"

#include "crath/simd/float2x8.h"

namespace cr::simd
{
#ifdef ARCH_x86_64
	float2x8 int2x8::bitCastFloat() const {
		return float2x8(
		    _mm256_castsi256_ps(this->f1),
		    _mm256_castsi256_ps(this->f2)
		);
	}

	float2x8 int2x8::castFloat() const {
		return float2x8{
			_mm256_cvtepi32_ps(this->f1),
			_mm256_cvtepi32_ps(this->f2)
		};
	}
#endif
}
