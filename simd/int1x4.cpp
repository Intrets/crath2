#include "crath/simd/int1x4.h"

#include "crath/simd/float1x4.h"

namespace cr::simd
{
	float1x4 int1x4::bitCastFloat() const {
		return float1x4(
		    _mm_castsi128_ps(this->i1)
		);
	}
}
