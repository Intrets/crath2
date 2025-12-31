#pragma once

#include <tepp/integers.h>

#ifdef ARCH_x86_64

#include <bit>
#include <immintrin.h>

#include <tepp/misc.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/array_simd.h"
#include "crath/simd/simd_definitions.h"
#include "crath/simd/simd_types.h"

#define ACCESSOR(I) f##I
#define APPLY1(OP, X, ONE) OP(X, ONE, 1) OP(X, ONE, 2)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1) OP(X, ONE, TWO, 2)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1) OP(X, ONE, TWO, THREE, 2)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1) OP(X, ONE, TWO, THREE, FOUR, 2)

#define CR_MACRO_DATA_TYPE float2x4
#define SURROUND(X) _mm_##X##_ps

namespace cr::simd
{
	struct int2x4;
	struct double2x4;

	struct float2x4
	{
		__m128 f1;
		__m128 f2;

		using scalar_type = float;
		static constexpr integer_t size = 8;

		CR_INLINE float2x4() = default;
		CR_INLINE float2x4(float s)
		    : f1(_mm_load1_ps(&s)),
		      f2(_mm_load1_ps(&s)) {
		}
		CR_INLINE float2x4(float const* ptr)
		    : f1(_mm_loadu_ps(ptr)),
		      f2(_mm_loadu_ps(ptr + 4)) {
		}
		CR_INLINE float2x4(float const* ptr, aligned_hint_t)
		    : f1(_mm_load_ps(ptr)),
		      f2(_mm_load_ps(ptr + 4)) {
		}
		CR_INLINE float2x4(__m128 f1_, __m128 f2_)
		    : f1(f1_),
		      f2(f2_) {
		}
		CR_INLINE float2x4(float a0, float a1, float a2, float a3, float a4, float a5, float a6, float a7)
		    : f1(_mm_set_ps(a3, a2, a1, a0)),
		      f2(_mm_set_ps(a7, a6, a5, a4)) {
		}

		static CR_INLINE float2x4 iota() {
			return float2x4(0, 1, 2, 3, 4, 5, 6, 7);
		}

		CR_INLINE void write(float& s) const {
			_mm_storeu_ps(&s, this->f1);
			_mm_storeu_ps(&s + 4, this->f2);
		}

		CR_INLINE void write(float& s, aligned_hint_t) const {
			_mm_store_ps(&s, this->f1);
			_mm_store_ps(&s + 4, this->f2);
		}

		CR_INLINE float sum() const {
			auto arr = to_array(*this);
			float result = 0.0f;
			for (auto f : arr) {
				result += f;
			}
			return result;
		}

		CR_INLINE float first() const {
			return _mm_cvtss_f32(this->f1);
		}

#define ID(X) X
		CR_ALL_DEFINITIONS

		int2x4 bitCastInt() const;
		int2x4 convertInt() const;
		double2x4 convertDouble() const;
	};
}
#undef ACCESSOR
#undef APPLY1
#undef APPLY2
#undef APPLY3
#undef APPLY4

#undef CR_MACRO_DATA_TYPE
#undef SURROUND

#elif defined(__ARM_NEON__)

#include <arm_neon.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/simd_definitions.h"

#define ACCESSOR(I) f##I
#define APPLY1(OP, X, ONE) OP(X, ONE, 1) OP(X, ONE, 2)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1) OP(X, ONE, TWO, 2)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1) OP(X, ONE, TWO, THREE, 2)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1) OP(X, ONE, TWO, THREE, FOUR, 2)
#define APPLY5(OP, X, ONE, TWO, THREE, FOUR, FIVE) OP(X, ONE, TWO, THREE, FOUR, FIVE, 1) OP(X, ONE, TWO, THREE, FOUR, FIVE, 2)

#define DO3_FMA_ORDER(X, ONE, TWO, THREE, I) X(THREE f##I, TWO f##I, ONE f##I),

#define CR_MACRO_DATA_TYPE float2x4
#undef SURROUND
#undef SURROUND_I
#define SURROUND(X) v##X##q_f32
#define SURROUND_I(X) v##X##q_s32

#define f_to_s(X) vreinterpretq_s32_f32(X)
#define s_to_f(X) vreinterpretq_f32_s32(X)

namespace cr::simd
{
	struct int2x4;

	struct float2x4 : ::detail::CRTP_ARM_simd<float2x4>
	{
		static constexpr integer_t size = 8;

		float32x4_t f1;
		float32x4_t f2;

		CR_INLINE float2x4()
		    : f1(),
		      f2() {
		}

		CR_INLINE float2x4(float32x4_t f1_, float32x4_t f2_)
		    : f1(f1_),
		      f2(f2_) {
		}

	private:
		CR_INLINE float32x4_t helperLoad(float a0, float a1, float a2, float a3) {
			std::array<float, 4> a{ a0, a1, a2, a3 };
			return vld1q_f32(a.data());
		}

	public:
		CR_INLINE float2x4(float a0, float a1, float a2, float a3, float a4, float a5, float a6, float a7)
		    : f1(helperLoad(a0, a1, a2, a3)),
		      f2(helperLoad(a4, a5, a6, a7)) {
		}

		CR_INLINE float2x4(float* ptr)
		    : f1(vld1q_f32(ptr)),
		      f2(vld1q_f32(ptr + 4)) {
		}

		CR_INLINE float2x4(float f)
		    : f1(vdupq_n_f32(f)),
		      f2(vdupq_n_f32(f)) {
		}

		CR_INLINE void write(float& ptr) const {
			vst1q_f32(&ptr, this->f1);
			vst1q_f32(&ptr + 4, this->f2);
		}

		CR_INLINE float2x4 blend(float2x4 a, float2x4 b) const {
			return {
				vbslq_f32(vcgeq_f32(b.f1, vdupq_n_f32(0.0f)), this->f1, a.f1),
				vbslq_f32(vcgeq_f32(b.f2, vdupq_n_f32(0.0f)), this->f2, a.f2),
			};
		}

		CR_INLINE float2x4 operator/(float2x4 a) const {
			float32x4_t reciprocal = vrecpeq_f32(a.f1);
			float32x4_t reciprocal2 = vrecpeq_f32(a.f2);

			reciprocal = vmulq_f32(vrecpsq_f32(a.f1, reciprocal), reciprocal);
			reciprocal2 = vmulq_f32(vrecpsq_f32(a.f2, reciprocal2), reciprocal2);

			reciprocal = vmulq_f32(vrecpsq_f32(a.f1, reciprocal), reciprocal);
			reciprocal2 = vmulq_f32(vrecpsq_f32(a.f2, reciprocal2), reciprocal2);

			auto f1_ = vmulq_f32(this->f1, reciprocal);
			auto f2_ = vmulq_f32(this->f2, reciprocal2);

			return { f1_, f2_ };
		}

		DEFINE1_T(operator==, ceq, s_to_f, f_to_s);
		CR_INLINE float2x4 operator!=(float2x4 other) const {
			return !(*this == other);
		}

		DEFINE1_T(operator>, cgt, s_to_f, f_to_s);
		DEFINE1_T(operator>=, cge, s_to_f, f_to_s);
		DEFINE1_T(operator<, clt, s_to_f, f_to_s);
		DEFINE1_T(operator<=, cle, s_to_f, f_to_s);

#define ID(X) X
		B_DEFINE0_T(trunc, vcvtq_s32_f32, vcvtq_f32_s32, ID)

		B_DEFINE1_T(operator&&, SURROUND_I(and), s_to_f, f_to_s);
		B_DEFINE1_T(operator||, SURROUND_I(and), s_to_f, f_to_s);
		B_DEFINE_ARITHMETIC2_T(operator&, SURROUND_I(and), s_to_f, f_to_s);
		B_DEFINE_ARITHMETIC2_T(operator|, SURROUND_I(orr), s_to_f, f_to_s);
		B_DEFINE_ARITHMETIC2_T(operator^, SURROUND_I(eor), s_to_f, f_to_s);

		DEFINE1S(max)
		DEFINE1S(min)
		DEFINE_CLAMP()
		DEFINE2_D(DO3_FMA_ORDER, fma, ARM_FMA_TYPE)
		DEFINE1(operator+, add)
		DEFINE_COMPOUND(operator+=, add)
		DEFINE_ARITHMETIC2(operator-, sub)
		DEFINE_ARITHMETIC2(operator*, mul)
		DEFINE_NEGATION(0.0f)
		DEFINE_NEGATION_LOGIC(0.0f)
		DEFINE_SIGN_BIT(float)
		DEFINE_SIGN(float)
		DEFINE0S(abs)

		int2x4 bitCastInt() const;
	};
}

#undef APPLY1
#undef APPLY2
#undef APPLY3
#undef APPLY4
#undef APPLY5

#undef CR_MACRO_DATA_TYPE
#undef SURROUND

#endif
