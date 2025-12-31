#include "crath/simd/double2x4.h"

#ifdef ARCH_x86_64
#include "crath/simd/float1x8.h"
#include "crath/simd/float2x4.h"
#include <immintrin.h>

namespace cr::simd
{
	void double2x4::convertFloat(float2x4& target) const {
		target = {
			_mm256_cvtpd_ps(this->f1),
			_mm256_cvtpd_ps(this->f2)
		};
	}

	void double2x4::convertFloat(float1x8& target) const {
		auto low = _mm256_cvtpd_ps(this->f1);
		auto high = _mm256_cvtpd_ps(this->f2);

		auto a = _mm256_castps128_ps256(low);

		target = {
			_mm256_insertf128_ps(a, high, 1)
		};
	}
}
#endif
