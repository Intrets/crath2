#include "crath/simd/int1x8.h"

#include "crath/simd/float1x8.h"

namespace cr::simd
{
#if defined(ARCH_x86) && defined(SIMD_8)
	float1x8 int1x8::bitCastFloat() const {
		return float1x8(
		    _mm256_castsi256_ps(this->i1)
		);
	}

	float1x8 int1x8::castFloat() const {
		return float1x8(
		    _mm256_cvtepi32_ps(this->i1)
		);
	}
#endif
}
