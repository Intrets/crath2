#include "crath/simd/float2x4.h"

#include "crath/simd/int2x4.h"

namespace cr::simd
{
	int2x4 float2x4::bitCastInt() const {
		return int2x4(
		    _mm_castps_si128(this->f1),
		    _mm_castps_si128(this->f2)
		);
	}
}
