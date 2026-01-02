#include "crath/simd/float2x4.h"

#include "crath/simd/double2x4.h"
#include "crath/simd/int2x4.h"

namespace cr::simd
{
#ifdef ARCH_x86
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

#ifdef SIMD_8
	double2x4 float2x4::convertDouble() const {
		return double2x4(
		    _mm256_cvtps_pd(this->f1),
		    _mm256_cvtps_pd(this->f2)
		);
	}
#else
	float2x4 float2x4::convertDouble() const {
		return *this;
	}
#endif
#elifdef ARCH_ARM
	int2x4 float2x4::bitCastInt() const {
		return int2x4(
		    vreinterpretq_s32_f32(this->f1),
		    vreinterpretq_s32_f32(this->f2)
		);
	}

	int2x4 float2x4::convertInt() const {
		return int2x4(
		    vcvtq_s32_f32(this->f1),
		    vcvtq_s32_f32(this->f2)
		);
	}

	float2x4 float2x4::convertDouble() const {
		return *this;
	}

	float2x4 float2x4::convertFloat() const {
		return *this;
	}
#endif
}
