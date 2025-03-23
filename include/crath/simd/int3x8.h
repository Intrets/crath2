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
	struct float3x8;

	struct int3x8
	{
		__m256i i1{};
		__m256i i2{};
		__m256i i3{};

		using scalar_type = int32_t;
		static constexpr integer_t size = 24;

		CR_INLINE int3x8() = default;
		CR_INLINE int3x8(__m256i i1_, __m256i i2_, __m256i i3_)
		    : i1(i1_),
		      i2(i2_),
		      i3(i3_) {
		}
		CR_INLINE int3x8(int32_t i)
		    : i1(_mm256_set1_epi32(i)),
		      i2(_mm256_set1_epi32(i)),
		      i3(_mm256_set1_epi32(i)) {
		}
		CR_INLINE int3x8(int32_t const* ptr, aligned_hint_t)
		    : i1(_mm256_load_si256(reinterpret_cast<__m256i const*>(ptr))),
		      i2(_mm256_load_si256(reinterpret_cast<__m256i const*>(ptr + 8))),
		      i3(_mm256_load_si256(reinterpret_cast<__m256i const*>(ptr + 16))) {
		}
		CR_INLINE int3x8(int32_t const* ptr)
		    : i1(_mm256_loadu_si256(reinterpret_cast<__m256i const*>(ptr))),
		      i2(_mm256_loadu_si256(reinterpret_cast<__m256i const*>(ptr + 8))),
		      i3(_mm256_loadu_si256(reinterpret_cast<__m256i const*>(ptr + 16))) {
		}

		CR_INLINE int3x8 operator+(in_t(int3x8) a) const {
			return {
				_mm256_add_epi32(this->i1, a.i1),
				_mm256_add_epi32(this->i2, a.i2),
				_mm256_add_epi32(this->i3, a.i3)
			};
		}

		CR_INLINE int3x8 operator-(in_t(int3x8) a) const {
			return {
				_mm256_sub_epi32(this->i1, a.i1),
				_mm256_sub_epi32(this->i2, a.i2),
				_mm256_sub_epi32(this->i3, a.i3)
			};
		}

		CR_INLINE int3x8 operator*(in_t(int3x8) a) const {
			return {
				_mm256_mullo_epi32(this->i1, a.i1),
				_mm256_mullo_epi32(this->i2, a.i2),
				_mm256_mullo_epi32(this->i3, a.i3)
			};
		}

		CR_INLINE int3x8 operator>>(int shift) const {
			return {
				_mm256_srli_epi32(this->i1, shift),
				_mm256_srli_epi32(this->i2, shift),
				_mm256_srli_epi32(this->i3, shift)
			};
		}

		float3x8 bitCastFloat() const;
		float3x8 castFloat() const;
	};
}
#endif
