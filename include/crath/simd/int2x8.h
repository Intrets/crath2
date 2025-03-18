#pragma once

#include <tepp/integers.h>

#ifdef ARCH_x86_64
#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/simd_definitions.h"

namespace cr::simd
{
	struct float2x8;

	struct int2x8
	{
		__m256i i1{};
		__m256i i2{};

		using scalar_type = int32_t;
		static constexpr integer_t size = 16;

		CR_INLINE int2x8() = default;
		CR_INLINE int2x8(__m256i i1_, __m256i i2_)
		    : i1(i1_),
		      i2(i2_) {
		}
		CR_INLINE int2x8(int32_t i)
		    : i1(_mm256_set1_epi32(i)),
		      i2(_mm256_set1_epi32(i)) {
		}
		CR_INLINE int2x8(int32_t const* ptr, aligned_hint_t)
		    : i1(_mm256_load_si256(reinterpret_cast<__m256i const*>(ptr))),
		      i2(_mm256_load_si256(reinterpret_cast<__m256i const*>(ptr + 8))) {
		}
		CR_INLINE int2x8(int32_t const* ptr)
		    : i1(_mm256_loadu_si256(reinterpret_cast<__m256i const*>(ptr))),
		      i2(_mm256_loadu_si256(reinterpret_cast<__m256i const*>(ptr + 8))) {
		}

		CR_INLINE int2x8 operator+(in_t(int2x8) a) const {
			return {
				_mm256_add_epi32(this->i1, a.i1),
				_mm256_add_epi32(this->i2, a.i2)
			};
		}

		CR_INLINE int2x8 operator-(in_t(int2x8) a) const {
			return {
				_mm256_sub_epi32(this->i1, a.i1),
				_mm256_sub_epi32(this->i2, a.i2)
			};
		}

		CR_INLINE int2x8 operator*(in_t(int2x8) a) const {
			return {
				_mm256_mullo_epi32(this->i1, a.i1),
				_mm256_mullo_epi32(this->i2, a.i2)
			};
		}

		CR_INLINE int2x8 operator>>(int shift) const {
			return {
				_mm256_srli_epi32(this->i1, shift),
				_mm256_srli_epi32(this->i2, shift)
			};
		}

		float2x8 bitCastFloat() const;
		float2x8 castFloat() const;
	};
}
#endif
