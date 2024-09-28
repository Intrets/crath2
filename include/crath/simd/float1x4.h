#pragma once

#include <tepp/integers.h>

#ifdef ARCH_x86_64
#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/simd_definitions.h"

#define APPLY1(OP, X, ONE) OP(X, ONE, 1)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1)

#define CR_MACRO_DATA_TYPE float1x4
#define SUFFIX(X) X##_ps

namespace cr::simd
{
	struct int1x4;

	struct float1x4
	{
		union {
			__m128 f1{};
			float f[4];
		};
		static constexpr integer_t size = 4;

		inline float1x4() = default;
		inline float1x4(float s)
		    : f1(_mm_load1_ps(&s)) {
		}
		inline float1x4(float const* ptr)
		    : f1(_mm_loadu_ps(ptr)) {
		}
		inline float1x4(float const* ptr, aligned_hint_t)
		    : f1(_mm_load_ps(ptr)) {
		}
		inline float1x4(__m128 f1_)
		    : f1(f1_) {
		}
		inline float1x4(float a0, float a1, float a2, float a3)
		    : f1(_mm_set_ps(a3, a2, a1, a0)) {
		}

		inline float const& operator[](integer_t i) const {
			return const_cast<float1x4*>(this)->operator[](i);
		}

		inline float& operator[](integer_t i) {
#if defined(COMPILER_MSVC)
			return this->f1.m128_f32[i];
#elif defined(COMPILER_CLANGCL)
			return this->f[i];
#else
#error "unsupported compiler"
#endif
		}

		inline void write(float& s) const {
			_mm_storeu_ps(&s, this->f1);
		}

		inline void write(float& s, aligned_hint_t) const {
			_mm_store_ps(&s, this->f1);
		}

		CR_ALL_DEFINITIONS

		int1x4 bitCastInt() const;
	};
}
#endif

#undef APPLY1
#undef APPLY2
#undef APPLY3
#undef APPLY4

#undef CR_MACRO_DATA_TYPE
#undef SUFFIX