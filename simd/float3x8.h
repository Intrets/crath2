#pragma once

#include <tepp/integers.h>

#ifdef ARCH_x86_64

#define CR_HAS_FLOAT_3x8

#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/simd_definitions.h"
#include "crath/simd/simd_types.h"

#define ACCESSOR(I) f##I
#define APPLY1(OP, X, ONE) OP(X, ONE, 1) OP(X, ONE, 2) OP(X, ONE, 3)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1) OP(X, ONE, TWO, 2) OP(X, ONE, TWO, 3)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1) OP(X, ONE, TWO, THREE, 2) OP(X, ONE, TWO, THREE, 3)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1) OP(X, ONE, TWO, THREE, FOUR, 2) OP(X, ONE, TWO, THREE, FOUR, 3)

#define CR_MACRO_DATA_TYPE float3x8
#define SURROUND(X) _mm256_##X##_ps

namespace cr::simd
{
	struct int3x8;

	struct float3x8
	{
		__m256 f1;
		__m256 f2;
		__m256 f3;

		using scalar_type = float;
		static constexpr integer_t size = 24;

		CR_INLINE float3x8() = default;
		CR_INLINE float3x8(float s)
		    : f1(_mm256_set1_ps(s)),
		      f2(_mm256_set1_ps(s)),
		      f3(_mm256_set1_ps(s)) {
		}
		CR_INLINE float3x8(float const* ptr)
		    : f1(_mm256_loadu_ps(ptr)),
		      f2(_mm256_loadu_ps(ptr + 8)),
		      f3(_mm256_loadu_ps(ptr + 16)) {
		}
		CR_INLINE float3x8(float const* ptr, aligned_hint_t)
		    : f1(_mm256_load_ps(ptr)),
		      f2(_mm256_load_ps(ptr + 8)),
		      f3(_mm256_load_ps(ptr + 16)) {
		}
		CR_INLINE float3x8(__m256 f1_, __m256 f2_, __m256 f3_)
		    : f1(f1_),
		      f2(f2_),
		      f3(f3_) {
		}
		CR_INLINE float3x8(float a0, float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15, float a16, float a17, float a18, float a19, float a20, float a21, float a22, float a23)
		    : f1(_mm256_set_ps(a7, a6, a5, a4, a3, a2, a1, a0)),
		      f2(_mm256_set_ps(a15, a14, a13, a12, a11, a10, a9, a8)),
		      f3(_mm256_set_ps(a23, a22, a21, a20, a19, a18, a17, a16)) {
		}

		CR_INLINE void write(float& s) const {
			_mm256_storeu_ps(&s, this->f1);
			_mm256_storeu_ps(&s + 8, this->f2);
			_mm256_storeu_ps(&s + 16, this->f3);
		}

		CR_INLINE void write(float& s, aligned_hint_t) const {
			_mm256_store_ps(&s, this->f1);
			_mm256_store_ps(&s + 8, this->f2);
			_mm256_store_ps(&s + 16, this->f3);
		}

		CR_ALL_DEFINITIONS

		int3x8 bitCastInt() const;
		int3x8 convertInt() const;
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
