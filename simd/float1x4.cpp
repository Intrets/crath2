#include "crath/simd/float1x4.h"

#include "crath/simd/double1x4.h"
#include "crath/simd/int1x4.h"

namespace cr::simd
{
#ifdef ARCH_x86_64
	int1x4 float1x4::bitCastInt() const {
		return int1x4(
		    _mm_castps_si128(this->f1)
		);
	}

	int1x4 float1x4::convertInt() const {
		return int1x4(
		    _mm_cvtps_epi32(this->f1)
		);
	}

	double1x4 float1x4::convertDouble() const {
		return double1x4(
		    _mm256_cvtps_pd(this->f1)
		);
	}

#elif defined(__ARM_NEON__)
	int1x4 float1x4::bitCastInt() const {
		return int1x4(
		    vreinterpretq_s32_f32(this->f1)
		);
	}
#endif
}
