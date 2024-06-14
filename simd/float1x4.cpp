#include "crath/simd/float1x4.h"

#include "crath/simd/int1x4.h"

namespace cr::simd
{
#ifdef ARCH_x86_64
	int1x4 float1x4::bitCastInt() const {
		return int1x4(
		    _mm_castps_si128(this->f1)
		);
	}
#endif
}
