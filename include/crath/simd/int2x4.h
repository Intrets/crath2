#pragma once

#include <tepp/integers.h>

#ifdef ARCH_x86_64
#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/simd_definitions.h"

namespace cr::simd
{
	struct float2x4;

	struct int2x4
	{
		__m128i i1{};
		__m128i i2{};

		using scalar_type = int32_t;
		static constexpr integer_t size = 8;

		CR_INLINE int2x4() = default;
		CR_INLINE int2x4(__m128i i1_, __m128i i2_)
		    : i1(i1_),
		      i2(i2_) {
		}
		CR_INLINE int2x4(int32_t i)
		    : i1(_mm_set1_epi32(i)),
		      i2(_mm_set1_epi32(i)) {
		}
		CR_INLINE int2x4(int32_t const* ptr, aligned_hint_t)
		    : i1(_mm_load_si128(reinterpret_cast<__m128i const*>(ptr))),
		      i2(_mm_load_si128(reinterpret_cast<__m128i const*>(ptr + 4))) {
		}
		CR_INLINE int2x4(int32_t const* ptr)
		    : i1(_mm_loadu_si128(reinterpret_cast<__m128i const*>(ptr))),
		      i2(_mm_loadu_si128(reinterpret_cast<__m128i const*>(ptr + 4))) {
		}

		CR_INLINE int2x4 operator+(in_t(int2x4) a) const {
			return {
				_mm_add_epi32(this->i1, a.i1),
				_mm_add_epi32(this->i2, a.i2)
			};
		}

		CR_INLINE int2x4 operator-(in_t(int2x4) a) const {
			return {
				_mm_sub_epi32(this->i1, a.i1),
				_mm_sub_epi32(this->i2, a.i2)
			};
		}

		CR_INLINE int2x4 operator*(in_t(int2x4) a) const {
			return {
				_mm_mullo_epi32(this->i1, a.i1),
				_mm_mullo_epi32(this->i2, a.i2)
			};
		}

		CR_INLINE int2x4 operator>>(int shift) const {
			return {
				_mm_srli_epi32(this->i1, shift),
				_mm_srli_epi32(this->i2, shift)
			};
		}

		float2x4 bitCastFloat() const;
		float2x4 castFloat() const;
	};
}
#elif defined(__ARM_NEON__)

#include <tepp/integers.h>

#include <arm_neon.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/simd_definitions.h"

namespace cr::simd
{
	struct float2x4;

	struct int2x4
	{
		static constexpr integer_t size = 8;

		int32x4_t i1;
		int32x4_t i2;

		CR_INLINE int2x4()
		    : i1(),
		      i2() {
		}

		CR_INLINE int2x4(in_t(int32x4_t) i1_, in_t(int32x4_t) i2_)
		    : i1(i1_),
		      i2(i2_) {
		}

	private:
		CR_INLINE int32x4_t helperLoad(int32_t i0, int32_t i1, int32_t i2, int32_t i3) {
			std::array<int32_t, 4> a{ i0, i1, i2, i3 };
			return vld1q_s32(a.data());
		}

	public:
		CR_INLINE int2x4(int32_t i0, int32_t i1, int32_t i2, int32_t i3, int32_t i4, int32_t i5, int32_t i6, int32_t i7)
		    : i1(helperLoad(i0, i1, i2, i3)),
		      i2(helperLoad(i4, i5, i6, i7)) {
		}

		CR_INLINE int2x4(int32_t i)
		    : i1(vdupq_n_s32(i)),
		      i2(vdupq_n_s32(i)) {
		}

		CR_INLINE int2x4 operator+(in_t(int2x4) a) const {
			return {
				vaddq_s32(this->i1, a.i1),
				vaddq_s32(this->i2, a.i2)
			};
		}

		CR_INLINE int2x4 operator*(in_t(int2x4) a) const {
			return {
				vmulq_s32(this->i1, a.i1),
				vmulq_s32(this->i2, a.i2)
			};
		}

		CR_INLINE int2x4 operator<<(in_t(int2x4) a) const {
			return {
				vshlq_s32(this->i1, a.i1),
				vshlq_s32(this->i2, a.i2)
			};
		}

		CR_INLINE int2x4 operator>>(int a) const {
			return (*this) << int2x4(-a);
		}

		float2x4 bitCastFloat() const;
		float2x4 castFloat() const;
	};
}

#endif
