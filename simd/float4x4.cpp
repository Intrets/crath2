#include "float4x4.h"

#include "simd/int4x4.h"

namespace cr::simd
{
#ifdef ARCH_x86_64
	int4x4 cr::simd::float4x4::convertInt() const {
		return int4x4(
		    _mm_cvtps_epi32(this->f1),
		    _mm_cvtps_epi32(this->f2),
		    _mm_cvtps_epi32(this->f3),
		    _mm_cvtps_epi32(this->f4)
		);
	}

	int4x4 cr::simd::float4x4::bitCastInt() const {
		return int4x4(
		    _mm_castps_si128(this->f1),
		    _mm_castps_si128(this->f2),
		    _mm_castps_si128(this->f3),
		    _mm_castps_si128(this->f4)
		);
	}
#elif defined(__ARM_NEON__)
	int4x4 float4x4::bitCastInt() const {
		return int4x4(
		    vreinterpretq_s32_f32(this->f1),
		    vreinterpretq_s32_f32(this->f2),
		    vreinterpretq_s32_f32(this->f3),
		    vreinterpretq_s32_f32(this->f4)
		);
	}
#endif
}
