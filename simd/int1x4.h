#pragma once

#include <tepp/integers.h>

#ifdef ARCH_x86_64
#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/simd_definitions.h"

#define ACCESSOR(I) i##I
#define APPLY1(OP, X, ONE) OP(X, ONE, 1)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1)

#define CR_MACRO_DATA_TYPE int1x4
#define SURROUND(X) _mm_##X##_epi32

namespace cr::simd
{
	struct float1x4;

	struct int1x4
	{
		__m128i i1{};

		using scalar_type = int32_t;
		static constexpr integer_t size = 4;

		CR_INLINE int1x4() = default;
		CR_INLINE int1x4(__m128i i1_)
		    : i1(i1_) {
		}
		CR_INLINE int1x4(int32_t i)
		    : i1(_mm_set1_epi32(i)) {
		}
		CR_INLINE int1x4(int32_t i0, int32_t i1, int32_t i2, int32_t i3)
		    : i1(_mm_set_epi32(i3, i2, i1, i0)) {
		}
		CR_INLINE int1x4(uint32_t i)
		    : i1(_mm_set1_epi32(std::bit_cast<int32_t>(i))) {
		}
		CR_INLINE int1x4(int32_t const* ptr, aligned_hint_t)
		    : i1(_mm_load_si128(reinterpret_cast<__m128i const*>(ptr))) {
		}
		CR_INLINE int1x4(int32_t const* ptr)
		    : i1(_mm_loadu_si128(reinterpret_cast<__m128i const*>(ptr))) {
		}

		CR_INLINE void write(int32_t& s) const {
			_mm_storeu_si128(reinterpret_cast<__m128i*>(&s), this->i1);
		}

		CR_INLINE void write(int32_t& s, aligned_hint_t) const {
			_mm_store_si128(reinterpret_cast<__m128i*>(&s), this->i1);
		}

		CR_INLINE int1x4 operator>>(int shift) const {
			return {
				_mm_srli_epi32(this->i1, shift)
			};
		}

		CR_ALL_INT_DEFINITIONS

		float1x4 bitCastFloat() const;
		float1x4 castFloat() const;
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
	struct float1x4;

	struct int1x4
	{
		static constexpr integer_t size = 4;

		int32x4_t i1;

		CR_INLINE int1x4()
		    : i1() {
		}

		CR_INLINE int1x4(in_t(int32x4_t) i1_)
		    : i1(i1_) {
		}

	private:
		CR_INLINE int32x4_t helperLoad(int32_t i0, int32_t i1, int32_t i2, int32_t i3) {
			std::array<int32_t, 4> a{ i0, i1, i2, i3 };
			return vld1q_s32(a.data());
		}

	public:
		CR_INLINE int1x4(int32_t i0, int32_t i1, int32_t i2, int32_t i3)
		    : i1(helperLoad(i0, i1, i2, i3)) {
		}

		CR_INLINE int1x4(int32_t i)
		    : i1(vdupq_n_s32(i)) {
		}

		CR_INLINE int1x4 operator+(in_t(int1x4) a) const {
			return {
				vaddq_s32(this->i1, a.i1)
			};
		}

		CR_INLINE int1x4 operator*(in_t(int1x4) a) const {
			return {
				vmulq_s32(this->i1, a.i1)
			};
		}

		CR_INLINE int1x4 operator<<(in_t(int1x4) a) const {
			return {
				vshlq_s32(this->i1, a.i1)
			};
		}

		CR_INLINE int1x4 operator>>(int a) const {
			return (*this) << int1x4(-a);
		}

		float1x4 bitCastFloat() const;
		float1x4 castFloat() const;
	};
}

#endif
