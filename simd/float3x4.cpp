#include "crath/simd/float3x4.h"

#include "crath/simd/int3x4.h"

namespace cr::simd
{
	int3x4 float3x4::bitCastInt() const {
		return int3x4(
		    _mm_castps_si128(this->f1),
		    _mm_castps_si128(this->f2),
		    _mm_castps_si128(this->f3)
		);
	}
}
