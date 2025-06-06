#include "crath/simd/float2x8.h"

#include "crath/simd/int2x8.h"

namespace cr::simd
{
	int2x8 float2x8::bitCastInt() const {
		return int2x8(
		    _mm256_castps_si256(this->f1),
		    _mm256_castps_si256(this->f2)
		);
	}

	int2x8 float2x8::convertInt() const {
		return int2x8(
		    _mm256_cvtps_epi32(this->f1),
		    _mm256_cvtps_epi32(this->f2)
		);
	}
}
