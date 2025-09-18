#pragma once

#include <tepp/integers.h>

#ifdef ARCH_x86_64
#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/simd_definitions.h"

#define ACCESSOR(I) i##I
#define APPLY1(OP, X, ONE) OP(X, ONE, 1)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1)

#define CR_MACRO_DATA_TYPE int1x8
#define SURROUND(X) _mm256_##X##_epi32

namespace cr::simd
{
	struct float1x8;

	struct int1x8
	{
		__m256i i1{};

		using scalar_type = int32_t;
		static constexpr integer_t size = 8;

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
		CR_INLINE int1x8(int32_t const* ptr, aligned_hint_t)
		    : i1(_mm256_load_si256(reinterpret_cast<__m256i const*>(ptr))) {
		}
		CR_INLINE int1x8(int32_t const* ptr)
		    : i1(_mm256_loadu_si256(reinterpret_cast<__m256i const*>(ptr))) {
		}

		CR_INLINE void write(int32_t& s) const {
			_mm256_storeu_si256(reinterpret_cast<__m256i*>(&s), this->i1);
		}

		CR_INLINE void write(int32_t& s, aligned_hint_t) const {
			_mm256_store_si256(reinterpret_cast<__m256i*>(&s), this->i1);
		}

		CR_INLINE int1x8 operator>>(int shift) const {
			return {
				_mm256_srli_epi32(this->i1, shift)
			};
		}

		CR_ALL_INT_DEFINITIONS

		float1x8 bitCastFloat() const;
		float1x8 castFloat() const;
	};
}
#endif

#undef ACCESSOR
#undef APPLY1
#undef APPLY2
#undef APPLY3
#undef APPLY4

#undef CR_MACRO_DATA_TYPE
#undef SURROUND
