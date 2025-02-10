#pragma once

#ifdef ARCH_x86_64
#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"

namespace cr::simd
{
	struct float1x4;

	struct int1x4
	{
		__m128i i1{};

		inline int1x4() = default;
		inline int1x4(__m128i i1_)
		    : i1(i1_) {
		}
		inline int1x4(int32_t i)
		    : i1(_mm_set1_epi32(i)) {
		}
		inline int1x4(int32_t i0, int32_t i1, int32_t i2, int32_t i3)
		    : i1(_mm_set_epi32(i3, i2, i1, i0)) {
		}
		inline int1x4(uint32_t i)
		    : i1(_mm_set1_epi32(std::bit_cast<int32_t>(i))) {
		}

		inline int1x4 operator+(in_t(int1x4) a) {
			return {
				_mm_add_epi32(this->i1, a.i1)
			};
		}

		inline int1x4 operator-(in_t(int1x4) a) {
			return {
				_mm_sub_epi32(this->i1, a.i1)
			};
		}

		inline int1x4 operator*(in_t(int1x4) a) {
			return {
				_mm_mullo_epi32(this->i1, a.i1)
			};
		}

		inline int1x4 operator>>(int shift) const {
			return { _mm_srli_epi32(this->i1, shift) };
		}

		float1x4 bitCastFloat() const;
		float1x4 castFloat() const;
	};
}

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

		float1x4 bitCastFloat() const;
		float1x4 castFloat() const;
	};
}

#endif
