#pragma once

#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"

namespace cr::simd
{
	struct float1x4;

	struct int1x4
	{
		__m128i i1{};

		inline int1x4() = default;
		inline int1x4(__m128i i1_)
		    : i1(i1_) {
		}
		inline int1x4(int32_t i)
		    : i1(_mm_set1_epi32(i)) {
		}
		inline int1x4(uint32_t i)
		    : i1(_mm_set1_epi32(std::bit_cast<int32_t>(i))) {
		}

		inline int1x4 operator+(in_t(int1x4) a) {
			return {
				_mm_add_epi32(this->i1, a.i1)
			};
		}

		inline int1x4 operator-(in_t(int1x4) a) {
			return {
				_mm_sub_epi32(this->i1, a.i1)
			};
		}

		inline int1x4 operator*(in_t(int1x4) a) {
			return {
				_mm_mullo_epi32(this->i1, a.i1)
			};
		}

		inline int1x4 operator>>(int shift) const {
			return { _mm_srli_epi32(this->i1, shift) };
		}

		float1x4 bitCastFloat() const;
		float1x4 castFloat() const;
	};
}
