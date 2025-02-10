#include "crath/simd/int1x4.h"

#include "crath/simd/float1x4.h"

namespace cr::simd
{
#ifdef ARCH_x86_64
	float1x4 int1x4::bitCastFloat() const {
		return float1x4(
		    _mm_castsi128_ps(this->i1)
		);
	}

	float1x4 int1x4::castFloat() const {
		return float1x4{
			_mm_cvtepi32_ps(this->i1)
		};
	}
#elif defined(__ARM_NEON__)
	float1x4 int1x4::bitCastFloat() const {
		return float1x4(
		    vreinterpretq_f32_s32(this->i1)
		);
	}

	float1x4 int1x4::castFloat() const {
		return float1x4{
			vcvtq_f32_s32(this->i1)
		};
	}
#endif
}
