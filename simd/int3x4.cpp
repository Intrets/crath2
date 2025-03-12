#include "crath/simd/int3x4.h"

#include "crath/simd/float3x4.h"

namespace cr::simd
{
	float3x4 cr::simd::int3x4::bitCastFloat() const {
		return float3x4(
		    _mm_castsi128_ps(this->i1),
		    _mm_castsi128_ps(this->i2),
		    _mm_castsi128_ps(this->i3)
		);
	}
}
