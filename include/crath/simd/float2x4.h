#pragma once

#include <tepp/integers.h>

#ifdef ARCH_x86_64
#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/simd_definitions.h"

#define APPLY1(OP, X, ONE) OP(X, ONE, 1) OP(X, ONE, 2)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1) OP(X, ONE, TWO, 2)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1) OP(X, ONE, TWO, THREE, 2)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1) OP(X, ONE, TWO, THREE, FOUR, 2)

#define CR_MACRO_DATA_TYPE float2x4
#define CR_INLINE inline
#define SUFFIX(X) X##_ps

namespace cr::simd
{
	struct int2x4;

	struct float2x4
	{
		union {
			__m128 f1{};
			float g1[4];
		};
		union {
			__m128 f2{};
			float g2[4];
		};

		static constexpr integer_t size = 8;

		inline float2x4() = default;
		inline float2x4(float s)
		    : f1(_mm_load1_ps(&s)),
		      f2(_mm_load1_ps(&s)) {
		}
		inline float2x4(float const* ptr)
		    : f1(_mm_loadu_ps(ptr)),
		      f2(_mm_loadu_ps(ptr + 4)) {
		}
		inline float2x4(float const* ptr, aligned_hint_t)
		    : f1(_mm_load_ps(ptr)),
		      f2(_mm_load_ps(ptr + 4)) {
		}
		inline float2x4(__m128 f1_, __m128 f2_)
		    : f1(f1_),
		      f2(f2_) {
		}
		inline float2x4(float a0, float a1, float a2, float a3, float a4, float a5, float a6, float a7)
		    : f1(_mm_set_ps(a3, a2, a1, a0)),
		      f2(_mm_set_ps(a7, a6, a5, a4)) {
		}

		inline float const& operator[](integer_t i) const {
			return const_cast<float2x4*>(this)->operator[](i);
		}

		inline float& operator[](integer_t i) {
			if (i < 4) {
#if defined(COMPILER_MSVC)
				return this->f1.m128_f32[i];
#elif defined(COMPILER_CLANGCL)
				return this->g1[i];
#else
#error "unsupported compiler"
#endif
			}
			else {
#if defined(COMPILER_MSVC)
				return this->f2.m128_f32[i - 4];
#elif defined(COMPILER_CLANGCL)
				return this->g2[i - 4];
#else
#error "unsupported compiler"
#endif
			}
		}

		inline void write(float& s) const {
			_mm_storeu_ps(&s, this->f1);
			_mm_storeu_ps(&s + 4, this->f2);
		}

		inline void write(float& s, aligned_hint_t) const {
			_mm_store_ps(&s, this->f1);
			_mm_store_ps(&s + 4, this->f2);
		}

		DEFINE1S(max)
		DEFINE1S(min)
		DEFINE_CLAMP()
		DEFINE2(blend, blendv)
		DEFINE2(fma, fmadd)
		DEFINE1(operator!=, cmpneq)
		DEFINE1(operator==, cmpeq)
		DEFINE1(operator>, cmpgt)
		DEFINE1(operator>=, cmpnlt)
		DEFINE1(operator<, cmplt)
		DEFINE1(operator<=, cmpngt)
		DEFINE1(and_not, andnot)
		DEFINE1(operator&&, and)
		DEFINE1(operator||, or)
		DEFINE_ARITHMETIC(+, add)
		DEFINE_ARITHMETIC(-, sub)
		DEFINE_ARITHMETIC(/, div)
		DEFINE_ARITHMETIC(*, mul)
		DEFINE_NEGATION()
		DEFINE_ARITHMETIC(^, xor)
		DEFINE_ARITHMETIC(|, or)
		DEFINE_ARITHMETIC(&, and)
		DEFINE_NEGATION_LOGIC()
		DEFINE_SIGN_BIT()
		DEFINE_SIGN()
		DEFINE_ABS()
		DEFINE0S(floor)
		DEFINE0S(ceil)
		DEFINE_ROUND()
		DEFINE0S(sqrt)
		DEFINE0S(sin)
		DEFINE0S(cos)
		DEFINE0S(tan)
		DEFINE0S(tanh)
		DEFINE0S(log)
		DEFINE0S(exp)
		DEFINE0S(atanh)

		int2x4 bitCastInt() const;
	};
}
#endif

#undef APPLY1
#undef APPLY2
#undef APPLY3
#undef APPLY4

#undef CR_MACRO_DATA_TYPE
#undef CR_INLINE
#undef SUFFIX