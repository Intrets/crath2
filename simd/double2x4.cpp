#include "crath/simd/double2x4.h"

#include "crath/simd/float2x4.h"

namespace cr::simd
{
	float2x4 double2x4::convertFloat() const {
		return {
			_mm256_cvtpd_ps(this->f1),
			_mm256_cvtpd_ps(this->f2)
		};
	}
}
