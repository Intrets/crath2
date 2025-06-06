#include "crath/simd/float2x4.h"

#include "crath/simd/int2x4.h"

namespace cr::simd
{
#ifdef ARCH_x86_64
	int2x4 float2x4::bitCastInt() const {
		return int2x4(
		    _mm_castps_si128(this->f1),
		    _mm_castps_si128(this->f2)
		);
	}

	int2x4 float2x4::convertInt() const {
		return int2x4(
		    _mm_cvtps_epi32(this->f1),
		    _mm_cvtps_epi32(this->f2)
		);
	}

#elif defined(__ARM_NEON__)
	int2x4 float2x4::bitCastInt() const {
		return int2x4(
		    vreinterpretq_s32_f32(this->f1),
		    vreinterpretq_s32_f32(this->f2)
		);
	}
#endif
}
