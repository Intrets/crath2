#include "crath/simd/float2x8.h"

#include "crath/simd/double4x4.h"
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

	double4x4 float2x8::convertDouble() const {
		auto lower1 = _mm256_castps256_ps128(this->f1);
		auto upper1 = _mm256_extractf128_ps(this->f1, 1);

		auto lower2 = _mm256_castps256_ps128(this->f1);
		auto upper2 = _mm256_extractf128_ps(this->f1, 1);

		return double4x4(
		    _mm256_cvtps_pd(lower1),
		    _mm256_cvtps_pd(upper1),
		    _mm256_cvtps_pd(lower2),
		    _mm256_cvtps_pd(upper2)
		);
	}
}
