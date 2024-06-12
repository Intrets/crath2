#pragma once

#ifdef __x84_64__
#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"

namespace cr::simd
{
	struct float3x4
	{
		__m128 f1{};
		__m128 f2{};
		__m128 f3{};
		static constexpr int64_t size = 12;

		inline float3x4() = default;
		inline float3x4(float s)
		    : f1(_mm_load1_ps(&s)),
		      f2(_mm_load1_ps(&s)),
		      f3(_mm_load1_ps(&s)) {
		}
		inline float3x4(float const* ptr)
		    : f1(_mm_loadu_ps(ptr)),
		      f2(_mm_loadu_ps(ptr + 4)),
		      f3(_mm_loadu_ps(ptr + 8)) {
		}
		inline float3x4(float const* ptr, aligned_hint_t)
		    : f1(_mm_load_ps(ptr)),
		      f2(_mm_load_ps(ptr + 4)),
		      f3(_mm_load_ps(ptr + 8)) {
		}
		inline float3x4(__m128 f1_, __m128 f2_, __m128 f3_)
		    : f1(f1_),
		      f2(f2_),
		      f3(f3_) {
		}
		inline float3x4(float a0, float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11)
		    : f1(_mm_set_ps(a3, a2, a1, a0)),
		      f2(_mm_set_ps(a7, a6, a5, a4)),
		      f3(_mm_set_ps(a11, a10, a9, a8)) {
		}

		inline float operator[](int64_t i) const {
			if (i < 4) {
#if defined(COMPILER_MSVC)
				return this->f1.m128_f32[i];
#elif defined(COMPILER_CLANGCL)
				return this->f1[i];
#else
#error "unsupported compiler"
#endif
			}
			else if (i < 8) {
#if defined(COMPILER_MSVC)
				return this->f2.m128_f32[i - 4];
#elif defined(COMPILER_CLANGCL)
				return this->f2[i - 4];
#else
#error "unsupported compiler"
#endif
			}
			else {
#if defined(COMPILER_MSVC)
				return this->f3.m128_f32[i - 8];
#elif defined(COMPILER_CLANGCL)
				return this->f3[i - 8];
#else
#error "unsupported compiler"
#endif
			}
		}

		inline void write(float& s) const {
			_mm_storeu_ps(&s, this->f1);
			_mm_storeu_ps(&s + 4, this->f2);
			_mm_storeu_ps(&s + 8, this->f3);
		}

		inline void write(float& s, aligned_hint_t) const {
			_mm_store_ps(&s, this->f1);
			_mm_store_ps(&s + 4, this->f2);
			_mm_store_ps(&s + 8, this->f3);
		}

		// Comparing functions

		static inline float3x4 clamp(in_t(float3x4) f, in_t(float3x4) min, in_t(float3x4) max) {
			return { _mm_min_ps(_mm_max_ps(f.f1, min.f1), max.f1), _mm_min_ps(_mm_max_ps(f.f2, min.f2), max.f2), _mm_min_ps(_mm_max_ps(f.f3, min.f3), max.f3) };
		}

		static inline float3x4 max(in_t(float3x4) m1, in_t(float3x4) m2) {
			return { _mm_max_ps(m1.f1, m2.f1), _mm_max_ps(m1.f2, m2.f2), _mm_max_ps(m1.f3, m2.f3) };
		}

		static inline float3x4 min(in_t(float3x4) m1, in_t(float3x4) m2) {
			return { _mm_min_ps(m1.f1, m2.f1), _mm_min_ps(m1.f2, m2.f2), _mm_min_ps(m1.f3, m2.f3) };
		}

		static inline float3x4 blend(in_t(float3x4) a, in_t(float3x4) b, in_t(float3x4) mask) {
			return { _mm_blendv_ps(a.f1, b.f1, mask.f1), _mm_blendv_ps(a.f2, b.f2, mask.f2), _mm_blendv_ps(a.f3, b.f3, mask.f3) };
		}

		inline float3x4 operator==(in_t(float3x4) a) const {
			return { _mm_cmpeq_ps(this->f1, a.f1), _mm_cmpeq_ps(this->f2, a.f2), _mm_cmpeq_ps(this->f3, a.f3) };
		}

		inline float3x4 operator!=(in_t(float3x4) a) const {
			return { _mm_cmpneq_ps(this->f1, a.f1), _mm_cmpneq_ps(this->f2, a.f2), _mm_cmpneq_ps(this->f3, a.f3) };
		}

		inline float3x4 operator>(in_t(float3x4) a) const {
			return { _mm_cmpgt_ps(this->f1, a.f1), _mm_cmpgt_ps(this->f2, a.f2), _mm_cmpgt_ps(this->f3, a.f3) };
		}

		inline float3x4 operator>=(in_t(float3x4) a) const {
			return { _mm_cmpnlt_ps(this->f1, a.f1), _mm_cmpnlt_ps(this->f2, a.f2), _mm_cmpnlt_ps(this->f3, a.f3) };
		}

		inline float3x4 operator<(in_t(float3x4) a) const {
			return { _mm_cmplt_ps(this->f1, a.f1), _mm_cmplt_ps(this->f2, a.f2), _mm_cmplt_ps(this->f3, a.f3) };
		}

		inline float3x4 operator<=(in_t(float3x4) a) const {
			return { _mm_cmpngt_ps(this->f1, a.f1), _mm_cmpngt_ps(this->f2, a.f2), _mm_cmpngt_ps(this->f3, a.f3) };
		}

		// Boolean

		// a.and_not(b) => a && !b
		inline float3x4 and_not(in_t(float3x4) other) const {
			return { _mm_andnot_ps(other.f1, this->f1), _mm_andnot_ps(other.f2, this->f2), _mm_andnot_ps(other.f3, this->f3) };
		}

		inline float3x4 operator&&(in_t(float3x4) other) const {
			return { _mm_and_ps(other.f1, this->f1), _mm_and_ps(other.f2, this->f2), _mm_and_ps(other.f3, this->f3) };
		}

		// Arithmetic

		inline float3x4& operator-=(in_t(float3x4) other) {
			this->f1 = _mm_sub_ps(this->f1, other.f1);
			this->f2 = _mm_sub_ps(this->f2, other.f2);
			this->f3 = _mm_sub_ps(this->f3, other.f3);
			return *this;
		}

		inline float3x4& operator+=(in_t(float3x4) other) {
			this->f1 = _mm_add_ps(this->f1, other.f1);
			this->f2 = _mm_add_ps(this->f2, other.f2);
			this->f3 = _mm_add_ps(this->f3, other.f3);
			return *this;
		}

		inline float3x4& operator*=(in_t(float3x4) other) {
			this->f1 = _mm_mul_ps(this->f1, other.f1);
			this->f2 = _mm_mul_ps(this->f2, other.f2);
			this->f3 = _mm_mul_ps(this->f3, other.f3);
			return *this;
		}

		inline float3x4& operator/=(in_t(float3x4) other) {
			this->f1 = _mm_div_ps(this->f1, other.f1);
			this->f2 = _mm_div_ps(this->f2, other.f2);
			this->f3 = _mm_div_ps(this->f3, other.f3);
			return *this;
		}

		inline float3x4 operator*(in_t(float3x4) other) const {
			return { _mm_mul_ps(this->f1, other.f1), _mm_mul_ps(this->f2, other.f2), _mm_mul_ps(this->f3, other.f3) };
		}

		inline float3x4 operator/(in_t(float3x4) other) const {
			return { _mm_div_ps(this->f1, other.f1), _mm_div_ps(this->f2, other.f2), _mm_div_ps(this->f3, other.f3) };
		}

		inline float3x4 operator+(in_t(float3x4) other) const {
			return { _mm_add_ps(this->f1, other.f1), _mm_add_ps(this->f2, other.f2), _mm_add_ps(this->f3, other.f3) };
		}

		inline float3x4 operator-(in_t(float3x4) other) const {
			return { _mm_sub_ps(this->f1, other.f1), _mm_sub_ps(this->f2, other.f2), _mm_sub_ps(this->f3, other.f3) };
		}

		inline float3x4 operator-() const {
			return float3x4(0.0f) - *this;
		}

		static inline float3x4 fmac(in_t(float3x4) a, in_t(float3x4) b, in_t(float3x4) c) {
			return { _mm_fmadd_ps(a.f1, b.f1, c.f1), _mm_fmadd_ps(a.f2, b.f2, c.f2), _mm_fmadd_ps(a.f3, b.f3, c.f3) };
		}

		inline float3x4& fma(in_t(float3x4) mult, in_t(float3x4) add) {
			this->f1 = _mm_fmadd_ps(this->f1, mult.f1, add.f1);
			this->f2 = _mm_fmadd_ps(this->f2, mult.f2, add.f2);
			this->f3 = _mm_fmadd_ps(this->f3, mult.f3, add.f3);
			return *this;
		}

		// Bit manipulation

		inline float3x4& operator^=(in_t(float3x4) other) {
			this->f1 = _mm_xor_ps(this->f1, other.f1);
			this->f2 = _mm_xor_ps(this->f2, other.f2);
			this->f3 = _mm_xor_ps(this->f3, other.f3);
			return *this;
		}

		inline float3x4 operator^(in_t(float3x4) m) const {
			return { _mm_xor_ps(this->f1, m.f1), _mm_xor_ps(this->f2, m.f2), _mm_xor_ps(this->f3, m.f3) };
		}

		inline float3x4& operator|=(in_t(float3x4) other) {
			this->f1 = _mm_or_ps(this->f1, other.f1);
			this->f2 = _mm_or_ps(this->f2, other.f2);
			this->f3 = _mm_or_ps(this->f3, other.f3);
			return *this;
		}

		inline float3x4 operator|(in_t(float3x4) m) const {
			return { _mm_or_ps(this->f1, m.f1), _mm_or_ps(this->f2, m.f2), _mm_or_ps(this->f3, m.f3) };
		}

		inline float3x4& operator&=(in_t(float3x4) other) {
			this->f1 = _mm_and_ps(this->f1, other.f1);
			this->f2 = _mm_and_ps(this->f2, other.f2);
			this->f3 = _mm_and_ps(this->f3, other.f3);
			return *this;
		}

		inline float3x4 operator&(in_t(float3x4) m) const {
			return { _mm_and_ps(this->f1, m.f1), _mm_and_ps(this->f2, m.f2), _mm_and_ps(this->f3, m.f3) };
		}

		// Other

		inline float3x4 signbit() const {
			constexpr float mask = std::bit_cast<float>(1U << 31);
			return *this & mask;
		}

		inline float3x4 sign() const {
			return this->signbit() | 1.0f;
		}

		inline float3x4 abs() const {
			constexpr float mask = std::bit_cast<float>(~(1U << 31));
			return *this & mask;
		}

		inline float3x4 recip() const {
			return { _mm_rcp_ps(this->f1), _mm_rcp_ps(this->f2), _mm_rcp_ps(this->f3) };
		}

		inline float3x4 floor() const {
			return { _mm_floor_ps(this->f1), _mm_floor_ps(this->f2), _mm_floor_ps(this->f3) };
		}

		inline float3x4 round() const {
			return { _mm_round_ps(this->f1, _MM_ROUND_NEAREST | _MM_FROUND_NO_EXC), _mm_round_ps(this->f2, _MM_ROUND_NEAREST | _MM_FROUND_NO_EXC), _mm_round_ps(this->f3, _MM_ROUND_NEAREST | _MM_FROUND_NO_EXC) };
		}
	};
}
#endif