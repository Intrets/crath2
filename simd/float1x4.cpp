#include "crath/simd/float1x4.h"

#include "crath/simd/int1x4.h"

namespace cr::simd
{
	int1x4 float1x4::bitCastInt() const {
		return int1x4(
		    _mm_castps_si128(this->f1)
		);
	}
}
