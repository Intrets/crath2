#pragma once

#ifdef ARCH_x86_64
#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/simd_definitions.h"

namespace cr::simd
{
	struct float3x4;

	struct int3x4
	{
		__m128i i1{};
		__m128i i2{};
		__m128i i3{};

		CR_INLINE int3x4() = default;
		CR_INLINE int3x4(__m128i i1_, __m128i i2_, __m128i i3_)
		    : i1(i1_),
		      i2(i2_),
		      i3(i3_) {
		}
		CR_INLINE int3x4(int32_t i)
		    : i1(_mm_set1_epi32(i)),
		      i2(_mm_set1_epi32(i)),
		      i3(_mm_set1_epi32(i)) {
		}

		CR_INLINE int3x4 operator+(in_t(int3x4) a) const {
			return {
				_mm_add_epi32(this->i1, a.i1),
				_mm_add_epi32(this->i2, a.i2),
				_mm_add_epi32(this->i3, a.i3)
			};
		}

		CR_INLINE int3x4 operator-(in_t(int3x4) a) const {
			return {
				_mm_sub_epi32(this->i1, a.i1),
				_mm_sub_epi32(this->i2, a.i2),
				_mm_sub_epi32(this->i3, a.i3)
			};
		}

		CR_INLINE int3x4 operator>>(int shift) const {
			return {
				_mm_srli_epi32(this->i1, shift),
				_mm_srli_epi32(this->i2, shift),
				_mm_srli_epi32(this->i3, shift)
			};
		}

		float3x4 bitCastFloat() const;
	};
}
#endif
