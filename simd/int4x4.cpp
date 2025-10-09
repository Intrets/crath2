#include "int4x4.h"

#include "simd/float4x4.h"

namespace cr::simd
{
	float4x4 int4x4::bitCastFloat() const {
		return float4x4(
		    _mm_castsi128_ps(this->i1),
		    _mm_castsi128_ps(this->i2),
		    _mm_castsi128_ps(this->i3),
		    _mm_castsi128_ps(this->i4)
		);
	}
}
