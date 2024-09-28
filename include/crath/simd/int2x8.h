#pragma once

#ifdef ARCH_x86_64
#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"

#include "crath/simd/simd_definitions.h"

#define APPLY1(OP, X, ONE) OP(X, ONE, 1) OP(X, ONE, 2)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1) OP(X, ONE, TWO, 2)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1) OP(X, ONE, TWO, THREE, 2)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1) OP(X, ONE, TWO, THREE, FOUR, 2)

#define CR_MACRO_DATA_TYPE int2x8
#define PREFIX(X) _mm256_##X
#define SUFFIX(X) X##_epi32

namespace cr::simd
{
	struct float2x8;

	struct int2x8
	{
		__m256i f1{};
		__m256i f2{};

		inline int2x8() = default;
		inline int2x8(__m256i i1_, __m256i i2_)
		    : f1(i1_),
		      f2(i2_) {
		}

		inline int2x8(int32_t i)
		    : f1(_mm256_set1_epi32(i)),
		      f2(_mm256_set1_epi32(i)) {
		}

		CR_ALL_INT_DEFINITIONS

		inline int2x8 operator>>(int shift) const {
			return { _mm256_srli_epi32(this->f1, shift), _mm256_srli_epi32(this->f2, shift) };
		}

		float2x8 bitCastFloat() const;
		float2x8 castFloat() const;
	};
}
#endif

#undef APPLY1
#undef APPLY2
#undef APPLY3
#undef APPLY4

#undef CR_MACRO_DATA_TYPE
#undef PREFIX
#undef SUFFIX
