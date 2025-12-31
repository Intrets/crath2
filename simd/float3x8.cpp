#include "crath/simd/float3x8.h"

#ifdef ARCH_x86_64
#include "crath/simd/int3x8.h"

namespace cr::simd
{
	int3x8 float3x8::bitCastInt() const {
		return int3x8(
		    _mm256_castps_si256(this->f1),
		    _mm256_castps_si256(this->f2),
		    _mm256_castps_si256(this->f3)
		);
	}

	int3x8 float3x8::convertInt() const {
		return int3x8(
		    _mm256_cvtps_epi32(this->f1),
		    _mm256_cvtps_epi32(this->f2),
		    _mm256_cvtps_epi32(this->f3)
		);
	}
}
#endif
