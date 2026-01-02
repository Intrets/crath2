#include "crath/simd/int3x4.h"

#include "crath/simd/float3x4.h"

namespace cr::simd
{
#ifdef ARCH_x86
	float3x4 int3x4::bitCastFloat() const {
		return float3x4(
		    _mm_castsi128_ps(this->i1),
		    _mm_castsi128_ps(this->i2),
		    _mm_castsi128_ps(this->i3)
		);
	}
#elifdef ARCH_ARM
	float3x4 int3x4::bitCastFloat() const {
		return float3x4{
		    vreinterpretq_f32_s32(this->i1),
		    vreinterpretq_f32_s32(this->i2),
		    vreinterpretq_f32_s32(this->i3),
		};
	}

	float3x4 int3x4::castFloat() const {
		return float3x4{
			vcvtq_f32_s32(this->i1),
			vcvtq_f32_s32(this->i2),
			vcvtq_f32_s32(this->i3),
		};
	}
#endif
}
