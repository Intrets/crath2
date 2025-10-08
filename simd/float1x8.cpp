#include "simd/float1x8.h"

#include "simd/int1x8.h"
#include "simd/double2x4.h"

namespace cr::simd
{
	int1x8 float1x8::bitCastInt() const {
		return int1x8{
			_mm256_castps_si256(this->f1)
		};
	}

	int1x8 float1x8::convertInt() const {
		return int1x8{
			_mm256_cvtps_epi32(this->f1)
		};
	}

	double2x4 float1x8::convertDouble() const {
		auto lower = _mm256_castps256_ps128(this->f1);
		auto upper = _mm256_extractf128_ps(this->f1, 1);

		return double2x4(
		    _mm256_cvtps_pd(lower),
		    _mm256_cvtps_pd(upper)
		);
	}
}
