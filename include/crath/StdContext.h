#pragma once

#include <bit>
#include <concepts>
#include <cstdint>
#include <numbers>

#include <immintrin.h>

#include <tepp/literal.h>

#include "simd/float1x4.h"

#include "crath/Functions.h"

namespace cr
{
	struct StdContext
	{
		inline static constexpr float pi = std::numbers::pi_v<float>;
		inline static constexpr float half_pi = 0.5f * std::numbers::pi_v<float>;
		inline static constexpr float two_pi = 2.0f * pi;
		inline static constexpr float inv_pi = std::numbers::inv_pi_v<float>;
		inline static constexpr float inv_two_pi = 0.5f * std::numbers::inv_pi_v<float>;
		inline static constexpr float inv_half_pi = 2.0f * std::numbers::inv_pi_v<float>;
		inline static constexpr float four_inv_pi = 4.0f * inv_pi;
		inline static constexpr float half_sqrt_two = 0.7071067811865476f;
		inline static constexpr float sqrt_two = 1.4142135623730951f;

		inline constexpr static float sqrt0(float x) {
			auto const i0 = std::bit_cast<uint32_t>(x);
			auto const i1 = (1 << 29) + (i0 >> 1) - (1 << 22) - 0x4B0D2;

			return std::bit_cast<float>(i1);
		}

		template<class F>
		inline constexpr static F log(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return log_T9(x);
				}
				else {
					return log_fma_T9_float_simd(x);
				}
			}
			else {
				return log_fma_T9(x);
			}
		}

		template<class F>
		inline constexpr static F tanh(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return tanh_T8(x);
				}
				else {
					return tanh_fma_T7_float_simd(x);
				}
			}
			else {
				return tanh_fma_T7(x);
			}
		}

		template<class F>
		inline constexpr static F sin(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return sin_quart_T8(fmod<two_pi>(x));
				}
				else {
					return sin_half_fma_T7_float_simd(x);
				}
			}
			else {
				return sin_half_fma_T7(x);
			}
		}

		template<class F>
		inline constexpr static F sin_unit_1(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return sin_unit1_quart_T8(fmod<two_pi>(x));
				}
				else {
					return sin_unit1_half_fma_T7_float_simd(x);
				}
			}
			else {
				return sin_unit1_half_fma_T7(x);
			}
		}

		template<class F>
		inline constexpr static F sin_unit_2(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return sin_unit2_quart_T8(fmod<two_pi>(x));
				}
				else {
					return sin_unit2_half_fma_T7_float_simd(x);
				}
			}
			else {
				return sin_unit2_half_fma_T7(x);
			}
		}

		template<class F>
		inline constexpr static F cos_unit_1(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return cos_unit1_half_T8(fmod<two_pi>(x));
				}
				else {
					return cos_unit1_half_fma_T6_float_simd(x);
				}
			}
			else {
				return cos_unit1_half_fma_T6(x);
			}
		}

		template<class F>
		inline constexpr static F cos(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return cos_half_T6(fmod<two_pi>(x));
				}
				else {
					return cos_half_fma_T6_float_simd(x);
				}
			}
			else {
				return cos_half_fma_T6(x);
			}
		}

		template<class F>
		inline constexpr static F tan(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return tan_T9(fmod<two_pi>(x));
				}
				else {
					return tan_fma_T6_float_simd(x);
				}
			}
			else {
				return tan_fma_T6(x);
			}
		}

		template<class F>
		inline constexpr static F exp(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return exp_T8(x);
				}
				else {
					return exp_fma_T4_float_simd(x);
				}
			}
			else {
				return exp_fma_T4(x);
			}
		}

		template<class F>
		inline constexpr static F specialized_frequency_exp(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return exp_special_T8(x);
				}
				else {
					return exp_special_fma_T4_float_simd(x);
				}
			}
			else {
				return exp_special_fma_T4(x);
			}
		}

		template<class F>
		inline constexpr static F recip(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return 1 / x;
				}
				else {
					return simd::float1x4(x).recip()[0];
				}
			}
			else if constexpr (std::same_as<F, double>) {
				return 1 / x;
			}
			else {
				return x.recip();
			}
		}

	private:
		template<class F>
		inline constexpr static F div_helper(F x, F m) {
			if (x >= F(0.0)) {
				return (F)(int64_t)(x / m);
			}
			else {
				return (F)((int64_t)(x / m) - F(1));
			}
		}

	public:
		template<class F2, te::literal<F2> m, class F>
		inline constexpr static std::pair<F, F> fdivmod(in_t(F) f) {
			if constexpr (m.value == 1.0f) {
				if constexpr (std::same_as<F, float> || std::same_as<F, double>) {
					if (std::is_constant_evaluated()) {
						auto div = div_helper(f, F(1));

						return { div, f - div };
					}
					else {
						auto div = std::floor(f);

						return { div, f - div };
					}
				}
				else {
					auto div = f.floor();

					return { div, f - div };
				}
			}
			else {
				if constexpr (std::same_as<F, float> || std::same_as<F, double>) {
					if (std::is_constant_evaluated()) {
						auto div = div_helper(f, m.value);

						return { div, f - m.value * div };
					}
					else {
						auto div = std::floor(f / m.value);

						return { div, f - m.value * div };
					}
				}
				else {
					auto div = (f / F(m.value)).floor();

					return { div, f - F(m.value) * div };
				}
			}
		}

		template<te::literal<float> m, class F>
		inline constexpr static F fmod(in_t(F) f) {
			if constexpr (m.value == 1.0f) {
				if constexpr (std::same_as<F, float>) {
					if (std::is_constant_evaluated()) {
						return f - div_helper(f, 1.0f);
					}
					else {
						return f - std::floorf(f);
					}
				}
				else {
					return f - f.floor();
				}
			}
			else {
				if constexpr (std::same_as<F, float>) {
					if (std::is_constant_evaluated()) {
						return f - m.value * div_helper(f, m.value);
					}
					else {
						auto constexpr recip_m = 1.0f / m.value;
						return f - m.value * std::floorf(f * recip_m);
					}
				}
				else {
					return f - F(m.value) * (f / F(m.value)).floor();
				}
			}
		}

		template<te::literal<double> m>
		inline constexpr static double fmod(double f) {
			if constexpr (m.value == 1.0) {
				return f - std::floor(f);
			}
			else {
				auto constexpr recip_m = 1.0 / m.value;
				return f - m.value * std::floor(f * recip_m);
			}
		}

		template<class F>
		inline constexpr static F fmod(in_t(F) f, in_t(F) m) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return f - m * div_helper(f, m);
				}
				else {
					return f - m * std::floorf(f / m);
				}
			}
			else {
				return f - F(m) * (f / F(m)).floor();
			}
		}

		template<class F>
		inline constexpr static F min(in_t(F) f1, in_t(F) f2) {
			if constexpr (std::is_integral_v<F>) {
				return std::min(f1, f2);
			}
			else if constexpr (std::same_as<F, float> || std::same_as<F, double>) {
				return std::min(f1, f2);
			}
			else {
				return F::min(f1, f2);
			}
		}

		template<class F>
		inline constexpr static F max(in_t(F) f1, in_t(F) f2) {
			if constexpr (std::is_integral_v<F>) {
				return std::max(f1, f2);
			}
			else if constexpr (std::same_as<F, float> || std::same_as<F, double>) {
				return std::max(f1, f2);
			}
			else {
				return F::max(f1, f2);
			}
		}

		inline static constexpr float clamp(float f_, float min_, float max_) {
			if (std::is_constant_evaluated()) {
				return std::clamp(f_, min_, max_);
			}
			else {
				return simd::float1x4::clamp(f_, min_, max_)[0];
			}
		}

		inline static int clamp(int i_, int min_, int max_) {
			return std::max(std::min(i_, max_), min_);
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
				return std::abs(f);
			}
			else {
				return f.abs();
			}
		}

		template<class F>
		inline constexpr static F sign(in_t(F) f) {
			if constexpr (std::same_as<F, float>) {
				auto signbit = std::bit_cast<uint32_t>(f) & (1U << 31);
				constexpr auto unit = std::bit_cast<uint32_t>(1.0f);

				return std::bit_cast<float>(signbit | unit);
			}
			else if constexpr (std::same_as<F, double>) {
				auto signbit = std::bit_cast<uint64_t>(f) & (1ULL << 63);
				constexpr auto unit = std::bit_cast<uint64_t>(1.0);

				return std::bit_cast<double>(signbit | unit);
			}
			else {
				return f.sign();
			}
		}

		inline constexpr static bool signBool(float f) {
			return std::bit_cast<uint32_t>(f) >> 31;
		}

		inline constexpr static uint32_t signBit(float f) {
			return std::bit_cast<uint32_t>(f) & (1U << 31);
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

		template<class F>
		inline constexpr static F floor(in_t(F) f) {
			if constexpr (std::same_as<F, float>) {
				return std::floor(f);
			}
			else {
				return f.floor();
			}
		}

		template<class F>
		inline constexpr static F round(in_t(F) f) {
			if constexpr (std::same_as<F, float>) {
				return std::round(f);
			}
			else {
				return f.round();
			}
		}

		template<class F>
		inline constexpr static F mix(in_t(F) f1, in_t(F) f2, in_t(F) s) {
			return f1 * (F(1.0f) - s) + f2 * s;
		}

		template<class F>
		inline constexpr static F unmix(in_t(F) f1, in_t(F) f2, in_t(F) x) {
			return (x - f1) / (f2 - f1);
		}

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
		inline constexpr static F smoothstep(in_t(F) lower, in_t(F) upper, in_t(F) value) {
			auto const v = clamp((value - lower) / (upper - lower), 0.0f, 1.0f);
			return v * v * (F(3.0f) - F(2.0f) * v);
		}

		template<class F>
		inline constexpr static F smoothstep(in_t(F) value) {
			auto const v = value;
			return v * v * (F(3.0f) - F(2.0f) * v);
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
	};
}