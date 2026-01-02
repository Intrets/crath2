#pragma once

#include <tepp/integers.h>

#include <array>

#include "crath/simd/array_simd.h"

#ifdef ARCH_x86_64
#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/simd_definitions.h"
#include "crath/simd/simd_types.h"

#define ACCESSOR(I) f##I
#define APPLY1(OP, X, ONE) OP(X, ONE, 1)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1)

#define CR_MACRO_DATA_TYPE float1x4
#define SURROUND(X) _mm_##X##_ps

namespace cr::simd
{
	struct double1x4;
	struct int1x4;

	struct float1x4
	{
		__m128 f1{};

		using scalar_type = float;
		static constexpr integer_t size = 4;

		CR_INLINE float1x4() = default;
		CR_INLINE float1x4(float s)
		    : f1(_mm_load1_ps(&s)) {
		}
		CR_INLINE float1x4(float const* ptr)
		    : f1(_mm_loadu_ps(ptr)) {
		}
		CR_INLINE float1x4(float const* ptr, aligned_hint_t)
		    : f1(_mm_load_ps(ptr)) {
		}
		CR_INLINE float1x4(__m128 f1_)
		    : f1(f1_) {
		}
		CR_INLINE float1x4(float a0, float a1, float a2, float a3)
		    : f1(_mm_set_ps(a3, a2, a1, a0)) {
		}

		static CR_INLINE float1x4 iota() {
			return float1x4(0, 1, 2, 3);
		}

		CR_INLINE void write(float& s) const {
			_mm_storeu_ps(&s, this->f1);
		}

		CR_INLINE void write(float& s, aligned_hint_t) const {
			_mm_store_ps(&s, this->f1);
		}

		CR_INLINE float first() const {
			return _mm_cvtss_f32(this->f1);
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

		int1x4 bitCastInt() const;
		int1x4 convertInt() const;
		double1x4 convertDouble() const;
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
#define APPLY1(OP, X, ONE) OP(X, ONE, 1)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1)
#define APPLY5(OP, X, ONE, TWO, THREE, FOUR, FIVE) OP(X, ONE, TWO, THREE, FOUR, FIVE, 1)

#define DO3_FMA_ORDER(X, ONE, TWO, THREE, I) X(THREE f##I, TWO f##I, ONE f##I),

#define CR_MACRO_DATA_TYPE float1x4
#undef SURROUND
#undef SURROUND_I
#define SURROUND(X) v##X##q_f32
#define SURROUND_I(X) v##X##q_s32

#define f_to_s(X) vreinterpretq_s32_f32(X)
#define s_to_f(X) vreinterpretq_f32_s32(X)

namespace cr::simd
{
	struct int1x4;

	struct float1x4 : ::detail::CRTP_ARM_simd<float1x4>
	{
		using scalar_type = float;
		static constexpr integer_t size = 4;

		float32x4_t f1;

		CR_INLINE float1x4()
		    : f1() {
		}

		CR_INLINE float1x4(float32x4_t f1_)
		    : f1(f1_) {
		}

	private:
		CR_INLINE float32x4_t helperLoad(float a0, float a1, float a2, float a3) {
			std::array<float, 4> a{ a0, a1, a2, a3 };
			return vld1q_f32(a.data());
		}

	public:
		CR_INLINE float1x4(float a0, float a1, float a2, float a3)
		    : f1(helperLoad(a0, a1, a2, a3)) {
		}

		static CR_INLINE float1x4 iota() {
			return float1x4(0, 1, 2, 3);
		}

		CR_INLINE float1x4(float const* ptr)
		    : f1(vld1q_f32(ptr)) {
		}

		CR_INLINE float1x4(float const* ptr, aligned_hint_t)
		    : f1(vld1q_f32(ptr)) {
		}

		CR_INLINE float1x4(float f)
		    : f1(vdupq_n_f32(f)) {
		}

		CR_INLINE void write(float& ptr) const {
			vst1q_f32(&ptr, this->f1);
		}

		CR_INLINE void write(float& ptr, aligned_hint_t) const {
			vst1q_f32(&ptr, this->f1);
		}

		template<int I>
		CR_INLINE void write(float v) {
			static_assert(I >= 0 && I < 4);
			this->f1 = vsetq_lane_f32(v, this->f1, I);
		}

		CR_INLINE float1x4 blend(float1x4 a, float1x4 b) const {
			return {
				vbslq_f32(vcgeq_f32(b.f1, vdupq_n_f32(0.0f)), this->f1, a.f1),
			};
		}

		CR_INLINE float1x4& operator/=(float1x4 a) {
			(*this) = (*this) / a;
			return *this;
		}

		CR_INLINE float1x4 operator/(float1x4 a) const {
			float32x4_t reciprocal = vrecpeq_f32(a.f1);
			reciprocal = vmulq_f32(vrecpsq_f32(a.f1, reciprocal), reciprocal);
			reciprocal = vmulq_f32(vrecpsq_f32(a.f1, reciprocal), reciprocal);
			auto f1_ = vmulq_f32(this->f1, reciprocal);

			return { f1_ };
		}

		CR_INLINE float sum() const {
			auto arr = to_array(*this);
			float result = 0.0f;
			for (auto f : arr) {
				result += f;
			}
			return result;
		}

		DEFINE1_T(operator==, ceq, s_to_f, f_to_s);
		CR_INLINE float1x4 operator!=(float1x4 other) const {
			return !(*this == other);
		}

		DEFINE1_T(operator>, cgt, s_to_f, f_to_s);
		DEFINE1_T(operator>=, cge, s_to_f, f_to_s);
		DEFINE1_T(operator<, clt, s_to_f, f_to_s);
		DEFINE1_T(operator<=, cle, s_to_f, f_to_s);

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

		int1x4 convertInt() const;
		int1x4 bitCastInt() const;
		float1x4 convertDouble() const;
		float1x4 convertFloat() const;
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
