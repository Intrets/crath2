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
#define APPLY1(OP, X, ONE) OP(X, ONE, 1)
#define APPLY2(OP, X, ONE, TWO) OP(X, ONE, TWO, 1)
#define APPLY3(OP, X, ONE, TWO, THREE) OP(X, ONE, TWO, THREE, 1)
#define APPLY4(OP, X, ONE, TWO, THREE, FOUR) OP(X, ONE, TWO, THREE, FOUR, 1)

#define CR_MACRO_DATA_TYPE double1x4
#define SURROUND(X) _mm256_##X##_pd

namespace cr::simd
{
	struct double1x4
	{
		__m256d f1{};

		using scalar_type = double;
		static constexpr integer_t size = 4;

		CR_INLINE double1x4() = default;
		CR_INLINE double1x4(double s)
		    : f1(_mm256_set1_pd(s)) {
		}
		CR_INLINE double1x4(double const* ptr)
		    : f1(_mm256_loadu_pd(ptr)) {
		}
		CR_INLINE double1x4(double const* ptr, aligned_hint_t)
		    : f1(_mm256_load_pd(ptr)) {
		}
		CR_INLINE double1x4(__m256d f1_)
		    : f1(f1_) {
		}
		CR_INLINE double1x4(double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7)
		    : f1(_mm256_set_pd(a3, a2, a1, a0)) {
		}

		CR_INLINE void write(double& s) const {
			_mm256_storeu_pd(&s, this->f1);
		}

		CR_INLINE void write(double& s, aligned_hint_t) const {
			_mm256_store_pd(&s, this->f1);
		}

		CR_INLINE double sum() const {
			auto arr = to_array(*this);
			double result = 0.0f;
			for (auto f : arr) {
				result += f;
			}
			return result;
		}

		CR_INLINE double first() const {
			auto lower = _mm256_castpd256_pd128(this->f1);
			return _mm_cvtsd_f64(lower);
		}

		CR_ALL_DEFINITIONS
	};
}
#undef ACCESSOR
#undef APPLY1
#undef APPLY2
#undef APPLY3
#undef APPLY4

#undef CR_MACRO_DATA_TYPE
#undef SURROUND

#endif
