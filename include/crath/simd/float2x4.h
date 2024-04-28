#pragma once

#include <bit>
#include <immintrin.h>

#include "crath/ParameterTyping.h"
#include "crath/simd/aligned_load_hint.h"

namespace cr::simd
{
	struct int2x4;

	struct float2x4
	{
		__m128 f1{};
		__m128 f2{};
		static constexpr size_t size = 8;

		inline float2x4() = default;
		inline float2x4(float s)
		    : f1(_mm_load1_ps(&s)),
		      f2(_mm_load1_ps(&s)) {
		}
		inline float2x4(float const* ptr)
		    : f1(_mm_loadu_ps(ptr)),
		      f2(_mm_loadu_ps(ptr + 4)) {
		}
		inline float2x4(float const* ptr, aligned_hint_t)
		    : f1(_mm_load_ps(ptr)),
		      f2(_mm_load_ps(ptr + 4)) {
		}
		inline float2x4(__m128 f1_, __m128 f2_)
		    : f1(f1_),
		      f2(f2_) {
		}
		inline float2x4(float a0, float a1, float a2, float a3, float a4, float a5, float a6, float a7)
		    : f1(_mm_set_ps(a3, a2, a1, a0)),
		      f2(_mm_set_ps(a7, a6, a5, a4)) {
		}

		inline float const& operator[](size_t i) const {
			return const_cast<float2x4*>(this)->operator[](i);
		}

		inline float& operator[](size_t i) {
			if (i < 4) {
#if defined(COMPILER_MSVC)
				return this->f1.m128_f32[i];
#elif defined(COMPILER_CLANGCL)
				return this->f1[i];
#else
#error "unsupported compiler"
#endif
			}
			else {
#if defined(COMPILER_MSVC)
				return this->f2.m128_f32[i - 4];
#elif defined(COMPILER_CLANGCL)
				return this->f2[i - 4];
#else
#error "unsupported compiler"
#endif
			}
		}

		inline void write(float& s) const {
			_mm_storeu_ps(&s, this->f1);
			_mm_storeu_ps(&s + 4, this->f2);
		}

		inline void write(float& s, aligned_hint_t) const {
			_mm_store_ps(&s, this->f1);
			_mm_store_ps(&s + 4, this->f2);
		}

		// Comparing functions

		static inline float2x4 clamp(in_t(float2x4) f, in_t(float2x4) min, in_t(float2x4) max) {
			return { _mm_min_ps(_mm_max_ps(f.f1, min.f1), max.f1), _mm_min_ps(_mm_max_ps(f.f2, min.f2), max.f2) };
		}

		static inline float2x4 max(in_t(float2x4) m1, in_t(float2x4) m2) {
			return { _mm_max_ps(m1.f1, m2.f1), _mm_max_ps(m1.f2, m2.f2) };
		}

		static inline float2x4 min(in_t(float2x4) m1, in_t(float2x4) m2) {
			return { _mm_min_ps(m1.f1, m2.f1), _mm_min_ps(m1.f2, m2.f2) };
		}

		static inline float2x4 blend(in_t(float2x4) a, in_t(float2x4) b, in_t(float2x4) mask) {
			return { _mm_blendv_ps(a.f1, b.f1, mask.f1), _mm_blendv_ps(a.f2, b.f2, mask.f2) };
		}

		inline float2x4 operator==(in_t(float2x4) a) const {
			return { _mm_cmpeq_ps(this->f1, a.f1), _mm_cmpeq_ps(this->f2, a.f2) };
		}

		inline float2x4 operator!=(in_t(float2x4) a) const {
			return { _mm_cmpneq_ps(this->f1, a.f1), _mm_cmpneq_ps(this->f2, a.f2) };
		}

		inline float2x4 operator>(in_t(float2x4) a) const {
			return { _mm_cmpgt_ps(this->f1, a.f1), _mm_cmpgt_ps(this->f2, a.f2) };
		}

		inline float2x4 operator>=(in_t(float2x4) a) const {
			return { _mm_cmpnlt_ps(this->f1, a.f1), _mm_cmpnlt_ps(this->f2, a.f2) };
		}

		inline float2x4 operator<(in_t(float2x4) a) const {
			return { _mm_cmplt_ps(this->f1, a.f1), _mm_cmplt_ps(this->f2, a.f2) };
		}

		inline float2x4 operator<=(in_t(float2x4) a) const {
			return { _mm_cmpngt_ps(this->f1, a.f1), _mm_cmpngt_ps(this->f2, a.f2) };
		}

		// Boolean

		// a.and_not(b) => a && !b
		inline float2x4 and_not(in_t(float2x4) other) const {
			return { _mm_andnot_ps(other.f1, this->f1), _mm_andnot_ps(other.f2, this->f2) };
		}

		inline float2x4 operator&&(in_t(float2x4) other) const {
			return { _mm_and_ps(other.f1, this->f1), _mm_and_ps(other.f2, this->f2) };
		}

		// Arithmetic

		inline float2x4& operator-=(in_t(float2x4) other) {
			this->f1 = _mm_sub_ps(this->f1, other.f1);
			this->f2 = _mm_sub_ps(this->f2, other.f2);
			return *this;
		}

		inline float2x4& operator+=(in_t(float2x4) other) {
			this->f1 = _mm_add_ps(this->f1, other.f1);
			this->f2 = _mm_add_ps(this->f2, other.f2);
			return *this;
		}

		inline float2x4& operator*=(in_t(float2x4) other) {
			this->f1 = _mm_mul_ps(this->f1, other.f1);
			this->f2 = _mm_mul_ps(this->f2, other.f2);
			return *this;
		}

		inline float2x4& operator/=(in_t(float2x4) other) {
			this->f1 = _mm_div_ps(this->f1, other.f1);
			this->f2 = _mm_div_ps(this->f2, other.f2);
			return *this;
		}

		inline float2x4 operator*(in_t(float2x4) other) const {
			return { _mm_mul_ps(this->f1, other.f1), _mm_mul_ps(this->f2, other.f2) };
		}

		inline float2x4 operator/(in_t(float2x4) other) const {
			return { _mm_div_ps(this->f1, other.f1), _mm_div_ps(this->f2, other.f2) };
		}

		inline float2x4 operator+(in_t(float2x4) other) const {
			return { _mm_add_ps(this->f1, other.f1), _mm_add_ps(this->f2, other.f2) };
		}

		inline float2x4 operator-(in_t(float2x4) other) const {
			return { _mm_sub_ps(this->f1, other.f1), _mm_sub_ps(this->f2, other.f2) };
		}

		inline float2x4 operator-() const {
			return float2x4(0.0f) - *this;
		}

		static inline float2x4 fmac(in_t(float2x4) a, in_t(float2x4) b, in_t(float2x4) c) {
			return { _mm_fmadd_ps(a.f1, b.f1, c.f1), _mm_fmadd_ps(a.f2, b.f2, c.f2) };
		}

		inline float2x4& fma(in_t(float2x4) mult, in_t(float2x4) add) {
			this->f1 = _mm_fmadd_ps(this->f1, mult.f1, add.f1);
			this->f2 = _mm_fmadd_ps(this->f2, mult.f2, add.f2);
			return *this;
		}

		// Bit manipulation

		inline float2x4& operator^=(in_t(float2x4) other) {
			this->f1 = _mm_xor_ps(this->f1, other.f1);
			this->f2 = _mm_xor_ps(this->f2, other.f2);
			return *this;
		}

		inline float2x4 operator^(in_t(float2x4) m) const {
			return { _mm_xor_ps(this->f1, m.f1), _mm_xor_ps(this->f2, m.f2) };
		}

		inline float2x4& operator|=(in_t(float2x4) other) {
			this->f1 = _mm_or_ps(this->f1, other.f1);
			this->f2 = _mm_or_ps(this->f2, other.f2);
			return *this;
		}

		inline float2x4 operator|(in_t(float2x4) m) const {
			return { _mm_or_ps(this->f1, m.f1), _mm_or_ps(this->f2, m.f2) };
		}

		inline float2x4& operator&=(in_t(float2x4) other) {
			this->f1 = _mm_and_ps(this->f1, other.f1);
			this->f2 = _mm_and_ps(this->f2, other.f2);
			return *this;
		}

		inline float2x4 operator&(in_t(float2x4) m) const {
			return { _mm_and_ps(this->f1, m.f1), _mm_and_ps(this->f2, m.f2) };
		}

		inline float2x4 operator!() const {
			return *this == 0.0f;
		}

		// Other

		inline float2x4 signbit() const {
			constexpr float mask = std::bit_cast<float>(1U << 31);
			return *this & mask;
		}

		inline float2x4 sign() const {
			return this->signbit() | 1.0f;
		}

		inline float2x4 abs() const {
			constexpr float mask = std::bit_cast<float>(~(1U << 31));
			return *this & mask;
		}

		inline float2x4 recip() const {
			return { _mm_rcp_ps(this->f1), _mm_rcp_ps(this->f2) };
		}

		inline float2x4 floor() const {
			return { _mm_floor_ps(this->f1), _mm_floor_ps(this->f2) };
		}

		inline float2x4 round() const {
			return { _mm_round_ps(this->f1, _MM_ROUND_NEAREST | _MM_FROUND_NO_EXC), _mm_round_ps(this->f2, _MM_ROUND_NEAREST | _MM_FROUND_NO_EXC) };
		}

		int2x4 bitCastInt() const;
	};
}
