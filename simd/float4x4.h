#pragma once

#include <tepp/integers.h>

#ifdef ARCH_x86_64
#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/array_simd.h"
#include "crath/simd/simd_definitions.h"
#include "crath/simd/simd_types.h"

#define ACCESSOR(I) f##I
#define APPLY1(OP, X, ONE) OP(X, ONE, 1) OP(X, ONE, 2) OP(X, ONE, 3) OP(X, ONE, 4)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1) OP(X, ONE, TWO, 2) OP(X, ONE, TWO, 3) OP(X, ONE, TWO, 4)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1) OP(X, ONE, TWO, THREE, 2) OP(X, ONE, TWO, THREE, 3) OP(X, ONE, TWO, THREE, 4)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1) OP(X, ONE, TWO, THREE, FOUR, 2) OP(X, ONE, TWO, THREE, FOUR, 3) OP(X, ONE, TWO, THREE, FOUR, 4)

#define CR_MACRO_DATA_TYPE float4x4
#define SURROUND(X) _mm_##X##_ps

namespace cr::simd
{
	struct int4x4;

	struct float4x4
	{
		__m128 f1;
		__m128 f2;
		__m128 f3;
		__m128 f4;

		using scalar_type = float;
		static constexpr integer_t size = 16;

		CR_INLINE float4x4() = default;
		CR_INLINE float4x4(float s)
		    : f1(_mm_load1_ps(&s)),
		      f2(_mm_load1_ps(&s)),
		      f3(_mm_load1_ps(&s)),
		      f4(_mm_load1_ps(&s)) {
		}
		CR_INLINE float4x4(float const* ptr)
		    : f1(_mm_loadu_ps(ptr)),
		      f2(_mm_loadu_ps(ptr + 4)),
		      f3(_mm_loadu_ps(ptr + 8)),
		      f4(_mm_loadu_ps(ptr + 12)) {
		}
		CR_INLINE float4x4(float const* ptr, aligned_hint_t)
		    : f1(_mm_load_ps(ptr)),
		      f2(_mm_load_ps(ptr + 4)),
		      f3(_mm_load_ps(ptr + 8)),
		      f4(_mm_load_ps(ptr + 12)) {
		}
		CR_INLINE float4x4(__m128 f1_, __m128 f2_, __m128 f3_, __m128 f4_)
		    : f1(f1_),
		      f2(f2_),
		      f3(f3_),
		      f4(f4_) {
		}
		CR_INLINE float4x4(float a0, float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15)
		    : f1(_mm_set_ps(a3, a2, a1, a0)),
		      f2(_mm_set_ps(a7, a6, a5, a4)),
		      f3(_mm_set_ps(a11, a10, a9, a8)),
		      f4(_mm_set_ps(a15, a14, a13, a12)) {
		}

		CR_INLINE void write(float& s) const {
			_mm_storeu_ps(&s, this->f1);
			_mm_storeu_ps(&s + 4, this->f2);
			_mm_storeu_ps(&s + 8, this->f3);
			_mm_storeu_ps(&s + 12, this->f4);
		}

		CR_INLINE void write(float& s, aligned_hint_t) const {
			_mm_store_ps(&s, this->f1);
			_mm_store_ps(&s + 4, this->f2);
			_mm_store_ps(&s + 8, this->f3);
			_mm_store_ps(&s + 12, this->f4);
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

		int4x4 bitCastInt() const;
		int4x4 convertInt() const;
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
