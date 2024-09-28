#include "crath/simd/float2x8.h"

#include "crath/simd/int2x8.h"

namespace cr::simd
{
#ifdef ARCH_x86_64
	int2x8 float2x8::bitCastInt() const {
		return int2x8(
		    _mm256_castps_si256(this->f1),
		    _mm256_castps_si256(this->f2)
		);
	}
#endif
}
