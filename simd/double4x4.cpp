#include "crath/simd/double4x4.h"

#include "crath/simd/float4x4.h"
#include "crath/simd/float2x8.h"

namespace cr::simd
{
	void double4x4::convertFloat(float2x8& target) const {
		auto low1 = _mm256_cvtpd_ps(this->f1);
		auto high1 = _mm256_cvtpd_ps(this->f2);

		auto low2 = _mm256_cvtpd_ps(this->f3);
		auto high2 = _mm256_cvtpd_ps(this->f4);

		auto a1 = _mm256_castps128_ps256(low1);
		auto a2 = _mm256_castps128_ps256(low2);

		target = {
			_mm256_insertf128_ps(a1, high1, 1),
			_mm256_insertf128_ps(a2, high2, 1)
		};
	}

	void double4x4::convertFloat(float4x4& target) const {
		target = {
			_mm256_cvtpd_ps(this->f1),
			_mm256_cvtpd_ps(this->f2),
			_mm256_cvtpd_ps(this->f3),
			_mm256_cvtpd_ps(this->f4)
		};
	}
}
