#pragma once

#include <tepp/integers.h>

#ifdef ARCH_x86_64

#define CR_HAS_FLOAT_2x8

#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/simd_definitions.h"
#include "crath/simd/array_simd.h"

#define APPLY1(OP, X, ONE) OP(X, ONE, 1) OP(X, ONE, 2)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1) OP(X, ONE, TWO, 2)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1) OP(X, ONE, TWO, THREE, 2)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1) OP(X, ONE, TWO, THREE, FOUR, 2)

#define CR_MACRO_DATA_TYPE float2x8
#define SURROUND(X) _mm256_##X##_ps

namespace cr::simd
{
	struct int2x8;

	struct float2x8
	{
		__m256 f1;
		__m256 f2;

		using scalar_type = float;
		static constexpr integer_t size = 16;

		CR_INLINE float2x8() = default;
		CR_INLINE float2x8(float s)
		    : f1(_mm256_set1_ps(s)),
		      f2(_mm256_set1_ps(s)) {
		}
		CR_INLINE float2x8(float const* ptr)
		    : f1(_mm256_loadu_ps(ptr)),
		      f2(_mm256_loadu_ps(ptr + 8)) {
		}
		CR_INLINE float2x8(float const* ptr, aligned_hint_t)
		    : f1(_mm256_load_ps(ptr)),
		      f2(_mm256_load_ps(ptr + 8)) {
		}
		CR_INLINE float2x8(__m256 f1_, __m256 f2_)
		    : f1(f1_),
		      f2(f2_) {
		}
		CR_INLINE float2x8(float a0, float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15)
		    : f1(_mm256_set_ps(a7, a6, a5, a4, a3, a2, a1, a0)),
		      f2(_mm256_set_ps(a15, a14, a13, a12, a11, a10, a9, a8)) {
		}

		CR_INLINE void write(float& s) const {
			_mm256_storeu_ps(&s, this->f1);
			_mm256_storeu_ps(&s + 8, this->f2);
		}

		CR_INLINE void write(float& s, aligned_hint_t) const {
			_mm256_store_ps(&s, this->f1);
			_mm256_store_ps(&s + 8, this->f2);
		}

		CR_INLINE float sum() const {
			auto arr = to_array(*this);
			float result = 0.0f;
			for (auto f : arr) {
				result += f;
			}
			return result;
		}

		CR_ALL_DEFINITIONS

		int2x8 bitCastInt() const;
	};
}
#endif

#undef APPLY1
#undef APPLY2
#undef APPLY3
#undef APPLY4

#undef CR_MACRO_DATA_TYPE
#undef SURROUND
