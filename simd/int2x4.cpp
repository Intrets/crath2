#include "crath/simd/int2x4.h"

#include "crath/simd/float2x4.h"

namespace cr::simd
{
#ifdef ARCH_x86_64
	float2x4 int2x4::bitCastFloat() const {
		return float2x4(
		    _mm_castsi128_ps(this->i1),
		    _mm_castsi128_ps(this->i2)
		);
	}
#endif
}