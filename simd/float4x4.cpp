#include "float4x4.h"

#include "simd/int4x4.h"

namespace cr::simd
{
	int4x4 cr::simd::float4x4::convertInt() const {
		return int4x4(
		    _mm_cvtps_epi32(this->f1),
		    _mm_cvtps_epi32(this->f2),
		    _mm_cvtps_epi32(this->f3),
		    _mm_cvtps_epi32(this->f4)
		);
	}

	int4x4 cr::simd::float4x4::bitCastInt() const {
		return int4x4(
		    _mm_castps_si128(this->f1),
		    _mm_castps_si128(this->f2),
		    _mm_castps_si128(this->f3),
		    _mm_castps_si128(this->f4)
		);
	}
}
