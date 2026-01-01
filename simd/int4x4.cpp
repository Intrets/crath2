#include "int4x4.h"

#include "simd/float4x4.h"

namespace cr::simd
{
#ifdef ARCH_x86_64
	float4x4 int4x4::bitCastFloat() const {
		return float4x4(
		    _mm_castsi128_ps(this->i1),
		    _mm_castsi128_ps(this->i2),
		    _mm_castsi128_ps(this->i3),
		    _mm_castsi128_ps(this->i4)
		);
	}
#elif defined(__ARM_NEON__)
	float4x4 int4x4::bitCastFloat() const {
		return float4x4{
		    vreinterpretq_f32_s32(this->i1),
		    vreinterpretq_f32_s32(this->i2),
		    vreinterpretq_f32_s32(this->i3),
		    vreinterpretq_f32_s32(this->i4),
		};
	}

	float4x4 int4x4::castFloat() const {
		return float4x4{
			vcvtq_f32_s32(this->i1),
			vcvtq_f32_s32(this->i2),
			vcvtq_f32_s32(this->i3),
			vcvtq_f32_s32(this->i4),
		};
	}
#endif
}
