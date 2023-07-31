#pragma once

#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"

namespace cr::simd
{
	struct float2x4;

	struct int2x4
	{
		__m128i i1{};
		__m128i i2{};

		inline int2x4() = default;
		inline int2x4(__m128i i1_, __m128i i2_)
		    : i1(i1_),
		      i2(i2_) {
		}
		inline int2x4(int32_t i)
		    : i1(_mm_set1_epi32(i)),
		      i2(_mm_set1_epi32(i)) {
		}

		inline int2x4 operator+(in_t(int2x4) a) {
			return {
				_mm_add_epi32(this->i1, a.i1),
				_mm_add_epi32(this->i2, a.i2)
			};
		}

		inline int2x4 operator-(in_t(int2x4) a) {
			return {
				_mm_sub_epi32(this->i1, a.i1),
				_mm_sub_epi32(this->i2, a.i2)
			};
		}

		inline int2x4 operator>>(int shift) const {
			return { _mm_srli_epi32(this->i1, shift), _mm_srli_epi32(this->i2, shift) };
		}

		float2x4 bitCastFloat() const;
	};
}
