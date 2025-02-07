#pragma once

#include <tepp/integers.h>

// #ifdef ARCH_x86_64
// #include <bit>
// #include <immintrin.h>
//
// #include "crath/ParameterTyping.h"
// #include "crath/simd/aligned_load_hint.h"
// #include "crath/simd/simd_definitions.h"
//
// #define APPLY1(OP, X, ONE) OP(X, ONE, 1) OP(X, ONE, 2)
// #define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1) OP(X, ONE, TWO, 2)
// #define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1) OP(X, ONE, TWO, THREE, 2)
// #define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1) OP(X, ONE, TWO, THREE, FOUR, 2)
//
// #define CR_MACRO_DATA_TYPE float2x4
// #define PREFIX(X) _mm_##X
// #define SUFFIX(X) X##_ps
//
// namespace cr::simd
//{
//	struct int2x4;
//
//	struct float2x4
//	{
//		union {
//			__m128 f1;
//			float g1[4];
//		};
//		union {
//			__m128 f2;
//			float g2[4];
//		};
//
//		static constexpr integer_t size = 8;
//
//		inline float2x4() = default;
//		inline float2x4(float s)
//		    : f1(_mm_load1_ps(&s)),
//		      f2(_mm_load1_ps(&s)) {
//		}
//		inline float2x4(float const* ptr)
//		    : f1(_mm_loadu_ps(ptr)),
//		      f2(_mm_loadu_ps(ptr + 4)) {
//		}
//		inline float2x4(float const* ptr, aligned_hint_t)
//		    : f1(_mm_load_ps(ptr)),
//		      f2(_mm_load_ps(ptr + 4)) {
//		}
//		inline float2x4(__m128 f1_, __m128 f2_)
//		    : f1(f1_),
//		      f2(f2_) {
//		}
//		inline float2x4(float a0, float a1, float a2, float a3, float a4, float a5, float a6, float a7)
//		    : f1(_mm_set_ps(a3, a2, a1, a0)),
//		      f2(_mm_set_ps(a7, a6, a5, a4)) {
//		}
//
//		inline float const& operator[](integer_t i) const {
//			return const_cast<float2x4*>(this)->operator[](i);
//		}
//
//		inline float& operator[](integer_t i) {
//			if (i < 4) {
// #if defined(COMPILER_MSVC)
//				return this->f1.m128_f32[i];
// #elif defined(COMPILER_CLANGCL)
//				return this->g1[i];
// #else
// #error "unsupported compiler"
// #endif
//			}
//			else {
// #if defined(COMPILER_MSVC)
//				return this->f2.m128_f32[i - 4];
// #elif defined(COMPILER_CLANGCL)
//				return this->g2[i - 4];
// #else
// #error "unsupported compiler"
// #endif
//			}
//		}
//
//		inline void write(float& s) const {
//			_mm_storeu_ps(&s, this->f1);
//			_mm_storeu_ps(&s + 4, this->f2);
//		}
//
//		inline void write(float& s, aligned_hint_t) const {
//			_mm_store_ps(&s, this->f1);
//			_mm_store_ps(&s + 4, this->f2);
//		}
//
//		CR_ALL_DEFINITIONS
//
//		int2x4 bitCastInt() const;
//	};
// }
// #undef APPLY1
// #undef APPLY2
// #undef APPLY3
// #undef APPLY4
//
// #undef CR_MACRO_DATA_TYPE
// #undef PREFIX
// #undef SUFFIX
//
// #else

#include <arm_neon.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/simd_definitions.h"

#define APPLY1(OP, X, ONE) OP(X, ONE, 1) OP(X, ONE, 2)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1) OP(X, ONE, TWO, 2)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1) OP(X, ONE, TWO, THREE, 2)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1) OP(X, ONE, TWO, THREE, FOUR, 2)

#define CR_MACRO_DATA_TYPE float2x4
#undef PREFIX
#undef SUFFIX
#undef SURROUND
#define SURROUND(X) v##X##q_f32

namespace cr::simd
{
	struct float2x4
	{
		static constexpr integer_t size = 8;

		float32x4_t f1;
		float32x4_t f2;

		float2x4()
		    : f1(),
		      f2() {
		}

		float2x4(float32x4_t f1_, float32x4_t f2_)
		    : f1(f1_),
		      f2(f2_) {
		}

		float2x4(float* ptr)
		    : f1(vld1q_f32(ptr)),
		      f2(vld1q_f32(ptr + 4)) {
		}

		float2x4(float f)
		    : f1(vdupq_n_f32(f)),
		      f2(vdupq_n_f32(f)) {
		}

		void write(float& ptr) const {
			vst1q_f32(&ptr, this->f1);
			vst1q_f32(&ptr + 4, this->f2);
		}

		template<int I>
		void write(float v) {
			static_assert(I >= 0 && I < 8);
			if constexpr (I < 4) {
				vsetq_lane_f32(v, this->f1, I);
			}
			else {
				vsetq_lane_f32(v, this->f1, I - 4);
			}
		}

		float2x4 blend(float2x4 a, float2x4 b) const {
			return *this;
		}

		float2x4 operator^(float2x4 a) const {
			return *this;
		}

		float2x4 floor() const {
			return *this;
		}

		float2x4 round() const {
			return *this;
		}

		float2x4 ceil() const {
			return *this;
		}

		float2x4 operator!=(float2x4 a) const {
			return *this;
		}

		float operator[](size_t i) const {
			switch (i) {
				case 0:
					return vgetq_lane_f32(this->f1, 0);
				case 1:
					return vgetq_lane_f32(this->f1, 1);
				case 2:
					return vgetq_lane_f32(this->f1, 2);
				case 3:
					return vgetq_lane_f32(this->f1, 3);
				case 4:
					return vgetq_lane_f32(this->f2, 0);
				case 5:
					return vgetq_lane_f32(this->f2, 1);
				case 6:
					return vgetq_lane_f32(this->f2, 2);
				case 7:
					return vgetq_lane_f32(this->f2, 3);
			}

			tassert(0);
			return 0;
		}

		float2x4 operator/(float2x4 a) const {
			float32x4_t reciprocal = vrecpeq_f32(a.f1);
			reciprocal = vmulq_f32(vrecpsq_f32(a.f1, reciprocal), reciprocal);
			auto f1_ = vmulq_f32(this->f1, reciprocal);

			float32x4_t reciprocal2 = vrecpeq_f32(a.f2);
			reciprocal2 = vmulq_f32(vrecpsq_f32(a.f2, reciprocal2), reciprocal2);
			auto f2_ = vmulq_f32(this->f2, reciprocal2);

			return { f1_, f2_ };
		}

		float2x4 operator&(float2x4 a) const {
			return {
				vcvtq_s32_f32(vandq_s32(vcvtq_f32_s32(this->f1), vcvtq_f32_s32(a.f1))),
				vcvtq_s32_f32(vandq_s32(vcvtq_f32_s32(this->f2), vcvtq_f32_s32(a.f2))),
			};
		}

		float2x4 operator|(float2x4 a) const {
			return {
				vcvtq_s32_f32(vorrq_s32(vcvtq_f32_s32(this->f1), vcvtq_f32_s32(a.f1))),
				vcvtq_s32_f32(vorrq_s32(vcvtq_f32_s32(this->f2), vcvtq_f32_s32(a.f2))),
			};
		}

		float2x4 operator&&(float2x4 a) const {
			return {
				vcvtq_s32_f32(vandq_s32(vcvtq_f32_s32(this->f1), vcvtq_f32_s32(a.f1))),
				vcvtq_s32_f32(vandq_s32(vcvtq_f32_s32(this->f2), vcvtq_f32_s32(a.f2))),
			};
		}

		float2x4& operator|=(float2x4 a) {
			this->f1 = vcvtq_s32_f32(vorrq_s32(vcvtq_f32_s32(this->f1), vcvtq_f32_s32(a.f1)));
			this->f2 = vcvtq_s32_f32(vorrq_s32(vcvtq_f32_s32(this->f2), vcvtq_f32_s32(a.f2)));
			return *this;
		}

		DEFINE1S(max)
		DEFINE1S(min)
		DEFINE_CLAMP()
		DEFINE2(fma, ARM_FMA_TYPE)
		DEFINE1(operator==, ceq)
		DEFINE1(operator>, cgt)
		DEFINE1(operator>=, cge)
		DEFINE1(operator<, clt)
		DEFINE1(operator<=, cle)
		DEFINE1(operator+, add)
		DEFINE_COMPOUND(operator+=, add)
		DEFINE_ARITHMETIC2(operator-, sub)
		DEFINE_ARITHMETIC2(operator*, mul)
		DEFINE_NEGATION(0.0f)
		DEFINE_NEGATION_LOGIC(0.0f)
		DEFINE_SIGN_BIT(float)
		DEFINE_SIGN(float)
		DEFINE0S(abs)
	};
}

#undef APPLY1
#undef APPLY2
#undef APPLY3
#undef APPLY4

#undef CR_MACRO_DATA_TYPE
#undef PREFIX
#undef SUFFIX
// #endif

#undef CR_HAS_SIMD_TYPES