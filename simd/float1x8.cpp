#include "simd/float1x8.h"

#include "simd/int1x8.h"

namespace cr::simd
{
	int1x8 float1x8::bitCastInt() const {
		return int1x8{
			_mm256_castps_si256(this->f1)
		};
	}
}
