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

#elif defined(__ARM_NEON__)

#include <arm_neon.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/simd_definitions.h"

#define ACCESSOR(I) f##I
#define APPLY1(OP, X, ONE) OP(X, ONE, 1) OP(X, ONE, 2) OP(X, ONE, 3) OP(X, ONE, 4)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1) OP(X, ONE, TWO, 2) OP(X, ONE, TWO, 3) OP(X, ONE, TWO, 4)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1) OP(X, ONE, TWO, THREE, 2) OP(X, ONE, TWO, THREE, 3) OP(X, ONE, TWO, THREE, 4)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1) OP(X, ONE, TWO, THREE, FOUR, 2) OP(X, ONE, TWO, THREE, FOUR, 3) OP(X, ONE, TWO, THREE, FOUR, 4)
#define APPLY5(OP, X, ONE, TWO, THREE, FOUR, FIVE) OP(X, ONE, TWO, THREE, FOUR, FIVE, 1) OP(X, ONE, TWO, THREE, FOUR, FIVE, 2) OP(X, ONE, TWO, THREE, FOUR, FIVE, 3) OP(X, ONE, TWO, THREE, FOUR, FIVE, 4)

#define DO3_FMA_ORDER(X, ONE, TWO, THREE, I) X(THREE f##I, TWO f##I, ONE f##I),

#define CR_MACRO_DATA_TYPE float4x4
#undef SURROUND
#undef SURROUND_I
#define SURROUND(X) v##X##q_f32
#define SURROUND_I(X) v##X##q_s32

#define f_to_s(X) vreinterpretq_s32_f32(X)
#define s_to_f(X) vreinterpretq_f32_s32(X)

namespace cr::simd
{
	struct int4x4;

	struct float4x4 : ::detail::CRTP_ARM_simd<float4x4>
	{
		static constexpr integer_t size = 8;

		float32x4_t f1;
		float32x4_t f2;
		float32x4_t f3;
		float32x4_t f4;

		CR_INLINE float4x4()
		    : f1(),
		      f2(),
		      f3(),
		      f4() {
		}

		CR_INLINE float4x4(float32x4_t f1_, float32x4_t f2_, float32x4_t f3_, float32x4_t f4_)
		    : f1(f1_),
		      f2(f2_),
		      f3(f3_),
		      f4(f4_) {
		}

	private:
		CR_INLINE float32x4_t helperLoad(float a0, float a1, float a2, float a3) {
			std::array<float, 4> a{ a0, a1, a2, a3 };
			return vld1q_f32(a.data());
		}

	public:
		CR_INLINE float4x4(float a0, float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15)
		    : f1(helperLoad(a0, a1, a2, a3)),
		      f2(helperLoad(a4, a5, a6, a7)),
		      f3(helperLoad(a8, a9, a10, a11)),
		      f4(helperLoad(a12, a13, a14, a15)) {
		}

		CR_INLINE float4x4(float* ptr)
		    : f1(vld1q_f32(ptr)),
		      f2(vld1q_f32(ptr + 4)),
		      f3(vld1q_f32(ptr + 8)),
		      f4(vld1q_f32(ptr + 12)) {
		}

		CR_INLINE float4x4(float f)
		    : f1(vdupq_n_f32(f)),
		      f2(vdupq_n_f32(f)),
		      f3(vdupq_n_f32(f)),
		      f4(vdupq_n_f32(f)) {
		}

		CR_INLINE void write(float& ptr) const {
			vst1q_f32(&ptr, this->f1);
			vst1q_f32(&ptr + 4, this->f2);
			vst1q_f32(&ptr + 8, this->f3);
			vst1q_f32(&ptr + 12, this->f4);
		}

		CR_INLINE float4x4 blend(float4x4 a, float4x4 b) const {
			return {
				vbslq_f32(vcgeq_f32(b.f1, vdupq_n_f32(0.0f)), this->f1, a.f1),
				vbslq_f32(vcgeq_f32(b.f2, vdupq_n_f32(0.0f)), this->f2, a.f2),
				vbslq_f32(vcgeq_f32(b.f3, vdupq_n_f32(0.0f)), this->f3, a.f3),
				vbslq_f32(vcgeq_f32(b.f4, vdupq_n_f32(0.0f)), this->f4, a.f4),
			};
		}

		CR_INLINE float4x4 operator/(float4x4 a) const {
			float32x4_t reciprocal = vrecpeq_f32(a.f1);
			float32x4_t reciprocal2 = vrecpeq_f32(a.f2);
			float32x4_t reciprocal3 = vrecpeq_f32(a.f3);
			float32x4_t reciprocal4 = vrecpeq_f32(a.f4);

			reciprocal = vmulq_f32(vrecpsq_f32(a.f1, reciprocal), reciprocal);
			reciprocal2 = vmulq_f32(vrecpsq_f32(a.f2, reciprocal2), reciprocal2);
			reciprocal3 = vmulq_f32(vrecpsq_f32(a.f3, reciprocal3), reciprocal3);
			reciprocal4 = vmulq_f32(vrecpsq_f32(a.f4, reciprocal4), reciprocal4);

			reciprocal = vmulq_f32(vrecpsq_f32(a.f1, reciprocal), reciprocal);
			reciprocal2 = vmulq_f32(vrecpsq_f32(a.f2, reciprocal2), reciprocal2);
			reciprocal3 = vmulq_f32(vrecpsq_f32(a.f3, reciprocal3), reciprocal3);
			reciprocal4 = vmulq_f32(vrecpsq_f32(a.f4, reciprocal4), reciprocal4);

			auto f1_ = vmulq_f32(this->f1, reciprocal);
			auto f2_ = vmulq_f32(this->f2, reciprocal2);
			auto f3_ = vmulq_f32(this->f3, reciprocal3);
			auto f4_ = vmulq_f32(this->f4, reciprocal4);

			return { f1_, f2_, f3_, f4_ };
		}

		DEFINE1_T(operator==, ceq, s_to_f, f_to_s);
		CR_INLINE float4x4 operator!=(float4x4 other) const {
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

		int4x4 bitCastInt() const;
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
