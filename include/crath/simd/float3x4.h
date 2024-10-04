#pragma once

#include <tepp/integers.h>

#ifdef ARCH_x86_64
#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/simd_definitions.h"

#define APPLY1(OP, X, ONE) OP(X, ONE, 1) OP(X, ONE, 2) OP(X, ONE, 3)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1) OP(X, ONE, TWO, 2) OP(X, ONE, TWO, 3)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1) OP(X, ONE, TWO, THREE, 2) OP(X, ONE, TWO, THREE, 3)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1) OP(X, ONE, TWO, THREE, FOUR, 2) OP(X, ONE, TWO, THREE, FOUR, 3)

#define CR_MACRO_DATA_TYPE float3x4
#define PREFIX(X) _mm_##X
#define SUFFIX(X) X##_ps

namespace cr::simd
{
	struct float3x4
	{
		union {
			__m128 f1;
			float g1[4];
		};
		union {
			__m128 f2;
			float g2[4];
		};
		union {
			__m128 f3;
			float g3[4];
		};

		static constexpr integer_t size = 12;

		inline float3x4() = default;
		inline float3x4(float s)
		    : f1(_mm_load1_ps(&s)),
		      f2(_mm_load1_ps(&s)),
		      f3(_mm_load1_ps(&s)) {
		}
		inline float3x4(float const* ptr)
		    : f1(_mm_loadu_ps(ptr)),
		      f2(_mm_loadu_ps(ptr + 4)),
		      f3(_mm_loadu_ps(ptr + 8)) {
		}
		inline float3x4(float const* ptr, aligned_hint_t)
		    : f1(_mm_load_ps(ptr)),
		      f2(_mm_load_ps(ptr + 4)),
		      f3(_mm_load_ps(ptr + 8)) {
		}
		inline float3x4(__m128 f1_, __m128 f2_, __m128 f3_)
		    : f1(f1_),
		      f2(f2_),
		      f3(f3_) {
		}
		inline float3x4(float a0, float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11)
		    : f1(_mm_set_ps(a3, a2, a1, a0)),
		      f2(_mm_set_ps(a7, a6, a5, a4)),
		      f3(_mm_set_ps(a11, a10, a9, a8)) {
		}

		inline float operator[](integer_t i) const {
			if (i < 4) {
#if defined(COMPILER_MSVC)
				return this->f1.m128_f32[i];
#elif defined(COMPILER_CLANGCL)
				return this->g1[i];
#else
#error "unsupported compiler"
#endif
			}
			else if (i < 8) {
#if defined(COMPILER_MSVC)
				return this->f2.m128_f32[i - 4];
#elif defined(COMPILER_CLANGCL)
				return this->g2[i - 4];
#else
#error "unsupported compiler"
#endif
			}
			else {
#if defined(COMPILER_MSVC)
				return this->f3.m128_f32[i - 8];
#elif defined(COMPILER_CLANGCL)
				return this->g3[i - 8];
#else
#error "unsupported compiler"
#endif
			}
		}

		inline void write(float& s) const {
			_mm_storeu_ps(&s, this->f1);
			_mm_storeu_ps(&s + 4, this->f2);
			_mm_storeu_ps(&s + 8, this->f3);
		}

		inline void write(float& s, aligned_hint_t) const {
			_mm_store_ps(&s, this->f1);
			_mm_store_ps(&s + 4, this->f2);
			_mm_store_ps(&s + 8, this->f3);
		}

		CR_ALL_DEFINITIONS
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