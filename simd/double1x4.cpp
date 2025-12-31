#include "crath/simd/double1x4.h"

#ifdef ARCH_x86_64
#include "crath/simd/float1x4.h"

namespace cr::simd
{
	float1x4 double1x4::convertFloat() const {
		return {
			_mm256_cvtpd_ps(this->f1),
		};
	}
}
#endif
