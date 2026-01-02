#include "crath/simd/int2x4.h"

#include "crath/simd/float2x4.h"

namespace cr::simd
{
#ifdef ARCH_x86
	float2x4 int2x4::bitCastFloat() const {
		return float2x4(
		    _mm_castsi128_ps(this->i1),
		    _mm_castsi128_ps(this->i2)
		);
	}

	float2x4 int2x4::castFloat() const {
		return float2x4(
		    _mm_cvtepi32_ps(this->i1),
		    _mm_cvtepi32_ps(this->i2)
		);
	}

#elifdef ARCH_ARM
	float2x4 int2x4::bitCastFloat() const {
		return float2x4(
		    vreinterpretq_f32_s32(this->i1),
		    vreinterpretq_f32_s32(this->i2)
		);
	}

	float2x4 int2x4::castFloat() const {
		return float2x4{
			vcvtq_f32_s32(this->i1),
			vcvtq_f32_s32(this->i2)
		};
	}
#endif
}
