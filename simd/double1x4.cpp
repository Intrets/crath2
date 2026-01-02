#include "crath/simd/double1x4.h"

#if defined(ARCH_x86) && defined(SIMD_8)
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
