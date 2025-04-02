#pragma once

#include <tepp/integers.h>

#ifdef ARCH_x86_64

#define CR_HAS_FLOAT_1x8

#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/array_simd.h"
#include "crath/simd/simd_definitions.h"

#define APPLY1(OP, X, ONE) OP(X, ONE, 1)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1)

#define CR_MACRO_DATA_TYPE float1x8
#define SURROUND(X) _mm256_##X##_ps

namespace cr::simd
{
	struct int1x8;

	struct float1x8
	{
		__m256 f1;

		using scalar_type = float;
		static constexpr integer_t size = 8;

		CR_INLINE float1x8() = default;
		CR_INLINE float1x8(float s)
		    : f1(_mm256_set1_ps(s)) {
		}
		CR_INLINE float1x8(float const* ptr)
		    : f1(_mm256_loadu_ps(ptr)) {
		}
		CR_INLINE float1x8(float const* ptr, aligned_hint_t)
		    : f1(_mm256_load_ps(ptr)) {
		}
		CR_INLINE float1x8(__m256 f1_)
		    : f1(f1_) {
		}
		CR_INLINE float1x8(float a0, float a1, float a2, float a3, float a4, float a5, float a6, float a7)
		    : f1(_mm256_set_ps(a7, a6, a5, a4, a3, a2, a1, a0)) {
		}

		CR_INLINE void write(float& s) const {
			_mm256_storeu_ps(&s, this->f1);
		}

		CR_INLINE void write(float& s, aligned_hint_t) const {
			_mm256_store_ps(&s, this->f1);
		}

		CR_INLINE float1x8 reverse() const {
			auto a = _mm256_shuffle_ps(this->f1, this->f1, _MM_SHUFFLE(0, 1, 2, 3));
			return { _mm256_permute2f128_ps(a, a, 0x01) };
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
			auto lower = _mm256_castps256_ps128(this->f1);
			return _mm_cvtss_f32(lower);
		}

		CR_ALL_DEFINITIONS

		int1x8 bitCastInt() const;
	};
}
#endif

#undef APPLY1
#undef APPLY2
#undef APPLY3
#undef APPLY4

#undef CR_MACRO_DATA_TYPE
#undef SURROUND
