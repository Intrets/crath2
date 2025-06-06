#pragma once

#include <tepp/integers.h>

#ifdef ARCH_x86_64
#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/simd_definitions.h"

#define ACCESSOR(I) i##I
#define APPLY1(OP, X, ONE) OP(X, ONE, 1) OP(X, ONE, 2)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1) OP(X, ONE, TWO, 2)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1) OP(X, ONE, TWO, THREE, 2)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1) OP(X, ONE, TWO, THREE, FOUR, 2)

#define CR_MACRO_DATA_TYPE int2x8
#define SURROUND(X) _mm256_##X##_epi32

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

		CR_INLINE void write(int32_t& s) const {
			_mm256_storeu_epi32(&s, this->i1);
			_mm256_storeu_epi32(&s + 8, this->i2);
		}

		CR_INLINE void write(int32_t& s, aligned_hint_t) const {
			_mm256_storeu_epi32(&s, this->i1);
			_mm256_storeu_epi32(&s + 8, this->i2);
		}

		CR_INLINE int2x8 operator>>(int shift) const {
			return {
				_mm256_srli_epi32(this->i1, shift),
				_mm256_srli_epi32(this->i2, shift)
			};
		}

		CR_ALL_INT_DEFINITIONS

		float2x8 bitCastFloat() const;
		float2x8 castFloat() const;
	};
}

#undef ACCESSOR
#undef APPLY1
#undef APPLY2
#undef APPLY3
#undef APPLY4

#undef CR_MACRO_DATA_TYPE
#undef SURROUND

#endif
