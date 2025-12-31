#pragma once

#include <tepp/integers.h>

#ifdef ARCH_x86_64
#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/simd_definitions.h"

#define ACCESSOR(I) i##I
#define APPLY1(OP, X, ONE) OP(X, ONE, 1) OP(X, ONE, 2) OP(X, ONE, 3)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1) OP(X, ONE, TWO, 2) OP(X, ONE, TWO, 3)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1) OP(X, ONE, TWO, THREE, 2) OP(X, ONE, TWO, THREE, 3)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1) OP(X, ONE, TWO, THREE, FOUR, 2) OP(X, ONE, TWO, THREE, FOUR, 3)

#define CR_MACRO_DATA_TYPE int3x4
#define SURROUND(X) _mm_##X##_epi32

namespace cr::simd
{
	struct float3x4;

	struct int3x4
	{
		__m128i i1{};
		__m128i i2{};
		__m128i i3{};

		using scalar_type = int32_t;
		static constexpr integer_t size = 12;

		CR_INLINE int3x4() = default;
		CR_INLINE int3x4(__m128i i1_, __m128i i2_, __m128i i3_)
		    : i1(i1_),
		      i2(i2_),
		      i3(i3_) {
		}
		CR_INLINE int3x4(int32_t i)
		    : i1(_mm_set1_epi32(i)),
		      i2(_mm_set1_epi32(i)),
		      i3(_mm_set1_epi32(i)) {
		}
		CR_INLINE int3x4(int32_t const* ptr, aligned_hint_t)
		    : i1(_mm_load_si128(reinterpret_cast<__m128i const*>(ptr))),
		      i2(_mm_load_si128(reinterpret_cast<__m128i const*>(ptr + 4))),
		      i3(_mm_load_si128(reinterpret_cast<__m128i const*>(ptr + 8))) {
		}
		CR_INLINE int3x4(int32_t const* ptr)
		    : i1(_mm_loadu_si128(reinterpret_cast<__m128i const*>(ptr))),
		      i2(_mm_loadu_si128(reinterpret_cast<__m128i const*>(ptr + 4))),
		      i3(_mm_loadu_si128(reinterpret_cast<__m128i const*>(ptr + 8))) {
		}

		CR_INLINE void write(int32_t& s) const {
			_mm_storeu_si128(reinterpret_cast<__m128i*>(&s), this->i1);
			_mm_storeu_si128(reinterpret_cast<__m128i*>(&s + 4), this->i2);
			_mm_storeu_si128(reinterpret_cast<__m128i*>(&s + 8), this->i3);
		}

		CR_INLINE void write(int32_t& s, aligned_hint_t) const {
			_mm_store_si128(reinterpret_cast<__m128i*>(&s), this->i1);
			_mm_store_si128(reinterpret_cast<__m128i*>(&s + 4), this->i2);
			_mm_store_si128(reinterpret_cast<__m128i*>(&s + 8), this->i3);
		}

		CR_INLINE int3x4 operator>>(int shift) const {
			return {
				_mm_srli_epi32(this->i1, shift),
				_mm_srli_epi32(this->i2, shift),
				_mm_srli_epi32(this->i3, shift)
			};
		}

		CR_ALL_INT_DEFINITIONS

		float3x4 bitCastFloat() const;
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

#include <tepp/integers.h>

#include <arm_neon.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/simd_definitions.h"

namespace cr::simd
{
	struct float3x4;

	struct int3x4
	{
		static constexpr integer_t size = 12;

		int32x4_t i1;
		int32x4_t i2;
		int32x4_t i3;

		CR_INLINE int3x4()
		    : i1(),
		      i2(),
		      i3() {
		}

		CR_INLINE int3x4(in_t(int32x4_t) i1_, in_t(int32x4_t) i2_, in_t(int32x4_t) i3_)
		    : i1(i1_),
		      i2(i2_),
		      i3(i3_) {
		}

	private:
		CR_INLINE int32x4_t helperLoad(int32_t i0, int32_t i1, int32_t i2, int32_t i3) {
			std::array<int32_t, 4> a{ i0, i1, i2, i3 };
			return vld1q_s32(a.data());
		}

	public:
		CR_INLINE int3x4(int32_t i0, int32_t i1, int32_t i2, int32_t i3, int32_t i4, int32_t i5, int32_t i6, int32_t i7, int32_t i8, int32_t i9, int32_t i10, int32_t i11)
		    : i1(helperLoad(i0, i1, i2, i3)),
		      i2(helperLoad(i4, i5, i6, i7)),
		      i3(helperLoad(i8, i9, i10, i11)) {
		}

		CR_INLINE int3x4(int32_t i)
		    : i1(vdupq_n_s32(i)),
		      i2(vdupq_n_s32(i)),
		      i3(vdupq_n_s32(i)) {
		}

		CR_INLINE int3x4 operator+(in_t(int3x4) a) const {
			return {
				vaddq_s32(this->i1, a.i1),
				vaddq_s32(this->i2, a.i2),
				vaddq_s32(this->i3, a.i3),
			};
		}

		CR_INLINE int3x4 operator*(in_t(int3x4) a) const {
			return {
				vmulq_s32(this->i1, a.i1),
				vmulq_s32(this->i2, a.i2),
				vmulq_s32(this->i3, a.i3),
			};
		}

		CR_INLINE int3x4 operator<<(in_t(int3x4) a) const {
			return {
				vshlq_s32(this->i1, a.i1),
				vshlq_s32(this->i2, a.i2),
				vshlq_s32(this->i3, a.i3),
			};
		}

		CR_INLINE int3x4 operator>>(int a) const {
			return (*this) << int3x4(-a);
		}

		float3x4 bitCastFloat() const;
		float3x4 castFloat() const;
	};
}

#endif
