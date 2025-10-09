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

#define CR_MACRO_DATA_TYPE double4x4
#define SURROUND(X) _mm256_##X##_pd

namespace cr::simd
{
	struct float4x4;
	struct float2x8;

	struct double4x4
	{
		__m256d f1{};
		__m256d f2{};
		__m256d f3{};
		__m256d f4{};

		using scalar_type = double;
		static constexpr integer_t size = 16;

		CR_INLINE double4x4() = default;
		CR_INLINE double4x4(double s)
		    : f1(_mm256_set1_pd(s)),
		      f2(_mm256_set1_pd(s)),
		      f3(_mm256_set1_pd(s)),
		      f4(_mm256_set1_pd(s)) {
		}
		CR_INLINE double4x4(double const* ptr)
		    : f1(_mm256_loadu_pd(ptr)),
		      f2(_mm256_loadu_pd(ptr + 4)),
		      f3(_mm256_loadu_pd(ptr + 8)),
		      f4(_mm256_loadu_pd(ptr + 12)) {
		}
		CR_INLINE double4x4(double const* ptr, aligned_hint_t)
		    : f1(_mm256_load_pd(ptr)),
		      f2(_mm256_load_pd(ptr + 4)),
		      f3(_mm256_load_pd(ptr + 8)),
		      f4(_mm256_load_pd(ptr + 12)) {
		}
		CR_INLINE double4x4(__m256d f1_, __m256d f2_, __m256d f3_, __m256d f4_)
		    : f1(f1_),
		      f2(f2_),
		      f3(f3_),
		      f4(f4_) {
		}
		CR_INLINE double4x4(double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9, double a10, double a11, double a12, double a13, double a14, double a15)
		    : f1(_mm256_set_pd(a3, a2, a1, a0)),
		      f2(_mm256_set_pd(a7, a6, a5, a4)),
		      f3(_mm256_set_pd(a11, a10, a9, a8)),
		      f4(_mm256_set_pd(a15, a14, a13, a12)) {
		}

		CR_INLINE void write(double& s) const {
			_mm256_storeu_pd(&s, this->f1);
			_mm256_storeu_pd(&s + 4, this->f2);
			_mm256_storeu_pd(&s + 8, this->f3);
			_mm256_storeu_pd(&s + 12, this->f4);
		}

		CR_INLINE void write(double& s, aligned_hint_t) const {
			_mm256_store_pd(&s, this->f1);
			_mm256_store_pd(&s + 4, this->f2);
			_mm256_store_pd(&s + 8, this->f3);
			_mm256_store_pd(&s + 12, this->f4);
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

		void convertFloat(float4x4& target) const;
		void convertFloat(float2x8& target) const;
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
