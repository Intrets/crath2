#pragma once

#include <immintrin.h>

#include "crath/ParameterTyping.h"

namespace cr::simd
{
	struct float1x8
	{
		__m256 f1{};

		inline float1x8() = default;
		inline float1x8(float s)
		    : f1(_mm256_broadcast_ss(&s)) {
		}
		inline float1x8(float const* ptr)
		    : f1(_mm256_loadu_ps(ptr)) {
		}
		inline float1x8(__m256 f1_)
		    : f1(f1_) {
		}

		inline void write(float& s) const {
			_mm256_storeu_ps(&s, this->f1);
		}

		// Comparing functions

		static inline float1x8 clamp(in_t(float1x8) f, in_t(float1x8) min, in_t(float1x8) max) {
			return { _mm256_min_ps(_mm256_max_ps(f.f1, min.f1), max.f1) };
		}

		static inline float1x8 max(in_t(float1x8) m1, in_t(float1x8) m2) {
			return { _mm256_max_ps(m1.f1, m2.f1) };
		}

		static inline float1x8 min(in_t(float1x8) m1, in_t(float1x8) m2) {
			return { _mm256_min_ps(m1.f1, m2.f1) };
		}

		static inline float1x8 blend(in_t(float1x8) a, in_t(float1x8) b, in_t(float1x8) mask) {
			return { _mm256_blendv_ps(a.f1, b.f1, mask.f1) };
		}

		inline float1x8 operator==(in_t(float1x8) a) const {
			return { _mm256_cmp_ps(this->f1, a.f1, _CMP_EQ_OQ) };
		}

		inline float1x8 operator!=(in_t(float1x8) a) const {
			return { _mm256_cmp_ps(this->f1, a.f1, _CMP_NEQ_OQ) };
		}

		inline float1x8 operator>(in_t(float1x8) a) const {
			return { _mm256_cmp_ps(this->f1, a.f1, _CMP_GT_OQ) };
		}

		inline float1x8 operator>=(in_t(float1x8) a) const {
			return { _mm256_cmp_ps(this->f1, a.f1, _CMP_GE_OQ) };
		}

		inline float1x8 operator<(in_t(float1x8) a) const {
			return { _mm256_cmp_ps(this->f1, a.f1, _CMP_LT_OQ) };
		}

		inline float1x8 operator<=(in_t(float1x8) a) const {
			return { _mm256_cmp_ps(this->f1, a.f1, _CMP_LE_OQ) };
		}

		// Boolean

		// a.and_not(b) => a && !b
		inline float1x8 and_not(in_t(float1x8) other) const {
			return { _mm256_andnot_ps(other.f1, this->f1) };
		}

		inline float1x8 operator&&(in_t(float1x8) other) const {
			return { _mm256_and_ps(other.f1, this->f1) };
		}

		// Arithmetic

		inline float1x8& operator-=(in_t(float1x8) other) {
			this->f1 = _mm256_sub_ps(this->f1, other.f1);
			return *this;
		}

		inline float1x8& operator+=(in_t(float1x8) other) {
			this->f1 = _mm256_add_ps(this->f1, other.f1);
			return *this;
		}

		inline float1x8& operator*=(in_t(float1x8) other) {
			this->f1 = _mm256_mul_ps(this->f1, other.f1);
			return *this;
		}

		inline float1x8& operator/=(in_t(float1x8) other) {
			this->f1 = _mm256_div_ps(this->f1, other.f1);
			return *this;
		}

		inline float1x8 operator*(in_t(float1x8) other) const {
			return { _mm256_mul_ps(this->f1, other.f1) };
		}

		inline float1x8 operator/(in_t(float1x8) other) const {
			return { _mm256_div_ps(this->f1, other.f1) };
		}

		inline float1x8 operator+(in_t(float1x8) other) const {
			return { _mm256_add_ps(this->f1, other.f1) };
		}

		inline float1x8 operator-(in_t(float1x8) other) const {
			return { _mm256_sub_ps(this->f1, other.f1) };
		}

		inline float1x8 operator-() const {
			return float1x8(0.0f) - *this;
		}

		static inline float1x8 fmac(in_t(float1x8) a, in_t(float1x8) b, in_t(float1x8) c) {
			return { _mm256_fmadd_ps(a.f1, b.f1, c.f1) };
		}

		inline float1x8& fma(in_t(float1x8) mult, in_t(float1x8) add) {
			this->f1 = _mm256_fmadd_ps(this->f1, mult.f1, add.f1);
			return *this;
		}

		// Bit manipulation

		inline float1x8& operator^=(in_t(float1x8) other) {
			this->f1 = _mm256_xor_ps(this->f1, other.f1);
			return *this;
		}

		inline float1x8 operator^(in_t(float1x8) m) const {
			return { _mm256_xor_ps(this->f1, m.f1) };
		}

		inline float1x8& operator|=(in_t(float1x8) other) {
			this->f1 = _mm256_or_ps(this->f1, other.f1);
			return *this;
		}

		inline float1x8 operator|(in_t(float1x8) m) const {
			return { _mm256_or_ps(this->f1, m.f1) };
		}

		inline float1x8& operator&=(in_t(float1x8) other) {
			this->f1 = _mm256_and_ps(this->f1, other.f1);
			return *this;
		}

		inline float1x8 operator&(in_t(float1x8) m) const {
			return { _mm256_and_ps(this->f1, m.f1) };
		}

		// Other

		inline float1x8 signbit() const {
			constexpr float mask = std::bit_cast<float>(1U << 31);
			return *this & mask;
		}

		inline float1x8 sign() const {
			return this->signbit() | 1.0f;
		}

		inline float1x8 abs() const {
			constexpr float mask = std::bit_cast<float>(~(1U << 31));
			return *this & mask;
		}

		inline float1x8 recip() const {
			return { _mm256_rcp_ps(this->f1) };
		}

		inline float1x8 floor() const {
			return { _mm256_floor_ps(this->f1) };
		}

		inline float1x8 round() const {
			return { _mm256_round_ps(this->f1, _MM_ROUND_NEAREST | _MM_FROUND_NO_EXC) };
		}
	};
}
