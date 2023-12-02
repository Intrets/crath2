#pragma once

#include "ParameterTyping.h"
#include "crath/simd/float1x4.h"
#include <cmath>

namespace cr
{
	struct ApproxContext
	{
		template<class F, class B>
		inline constexpr static F blend(in_t(F) f1, in_t(F) f2, in_t(B) b) {
			if constexpr (std::same_as<F, float>) {
				return b ? f2 : f1;
			}
			else {
				return F::blend(f1, f2, b);
			}
		}

		template<class F>
		inline constexpr static F recip(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				return cr::simd::float1x4(x).recip()[0];
			}
			else if constexpr (std::same_as<F, double>) {
				return 1 / x;
			}
			else {
				return x.recip();
			}
		}

		inline constexpr static float clamp(float f_, float min_, float max_) {
			if (std::is_constant_evaluated()) {
				if (f_ < min_) {
					return min_;
				}
				else if (f_ > max_) {
					return max_;
				}
				else {
					return f_;
				}
			}
			else {
				return simd::float1x4::clamp(f_, min_, max_)[0];
			}
		}

		template<class F>
		inline constexpr static F clamp(in_t(F) f, in_t(F) min, in_t(F) max) {
			return F::clamp(f, min, max);
		}

		template<class F>
		inline constexpr static F clamp(in_t(F) f, float min, float max) {
			return clamp(f, F(min), F(max));
		}

		template<class F>
		inline constexpr static F abs(in_t(F) f) {
			if constexpr (std::same_as<F, float> || std::same_as<F, double>) {
				if (std::is_constant_evaluated()) {
					if (f < 0.0f) {
						return -f;
					}
					else {
						return f;
					}
				}
				else {
					return std::abs(f);
				}
			}
			else {
				return f.abs();
			}
		}

		template<class F>
		inline constexpr static F fma(in_t(F) a, in_t(F) b, in_t(F) c) {
			if constexpr (std::same_as<F, float>) {
				return a * b + c;
			}
			else {
				return F::fmac(a, b, c);
			}
		}

		template<class F>
		inline constexpr static F setSign(in_t(F) f, in_t(F) s) {
			if constexpr (std::same_as<F, float>) {
				auto const signbit = std::bit_cast<uint32_t>(s) & (1U << 31);
				auto const maskedF = std::bit_cast<uint32_t>(f) & ~(1U << 31);

				return std::bit_cast<float>(maskedF | signbit);
			}
			else {
				auto const signbit = s & F(std::bit_cast<float>(1U << 31));
				auto const mask = F(std::bit_cast<float>(~(1U << 31)));

				return (f & mask) | signbit;
			}
		}

		template<class F>
		inline constexpr static F xorSign(in_t(F) f, in_t(F) s) {
			if constexpr (std::same_as<F, float>) {
				auto const signbit = std::bit_cast<uint32_t>(s) & (1U << 31);

				return std::bit_cast<float>(std::bit_cast<uint32_t>(f) ^ signbit);
			}
			else {
				auto const signbit = s & F(std::bit_cast<float>(1U << 31));

				return f ^ signbit;
			}
		}
	};

#include "../function_definitions.h"
}
