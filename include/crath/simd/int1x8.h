#pragma once

#ifdef ARCH_x86_64
#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/simd_definitions.h"

namespace cr::simd
{
	struct float1x8;

	struct int1x8
	{
		__m256i i1{};

		CR_INLINE int1x8() = default;
		CR_INLINE int1x8(__m256i i1_)
		    : i1(i1_) {
		}
		CR_INLINE int1x8(int32_t i)
		    : i1(_mm256_set1_epi32(i)) {
		}
		CR_INLINE int1x8(int32_t i0, int32_t i1, int32_t i2, int32_t i3, int32_t i4, int32_t i5, int32_t i6, int32_t i7)
		    : i1(_mm256_set_epi32(i7, i6, i5, i4, i3, i2, i1, i0)) {
		}
		CR_INLINE int1x8(uint32_t i)
		    : i1(_mm256_set1_epi32(std::bit_cast<int32_t>(i))) {
		}

		CR_INLINE int1x8 operator+(in_t(int1x8) a) const {
			return {
				_mm256_add_epi32(this->i1, a.i1)
			};
		}

		CR_INLINE int1x8 operator-(in_t(int1x8) a) const {
			return {
				_mm256_sub_epi32(this->i1, a.i1)
			};
		}

		CR_INLINE int1x8 operator*(in_t(int1x8) a) const {
			return {
				_mm256_mullo_epi32(this->i1, a.i1)
			};
		}

		CR_INLINE int1x8 operator>>(int shift) const {
			return {
				_mm256_srli_epi32(this->i1, shift)
			};
		}

		float1x8 bitCastFloat() const;
		float1x8 castFloat() const;
	};
}
#endif
