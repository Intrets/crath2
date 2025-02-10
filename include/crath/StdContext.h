#pragma once

#include <algorithm>
#include <bit>
#include <cmath>
#include <concepts>
#include <cstdint>
#include <numbers>
#include <type_traits>

#include <tepp/integers.h>
#include <tepp/literal.h>

#include "crath/simd/Info.h"
#include "crath/simd/float1x4.h"
#include "crath/simd/int1x4.h"
#include "crath/simd/int2x4.h"

#define in_t(X) X

namespace cr
{
	struct StdContext;
}

namespace
{
	template<class F>
	concept has_clamp = requires(F f) {{ f.clamp(f, f) } -> std::same_as<F>; };

	struct forward_definitions
	{
		template<class F>
		inline constexpr static F min(in_t(F) f1, in_t(F) f2) {
			if constexpr (std::is_integral_v<F>) {
				return std::min(f1, f2);
			}
			else if constexpr (std::same_as<F, float> || std::same_as<F, double>) {
				return std::min(f1, f2);
			}
			else {
				return f1.min(f2);
			}
		}

		template<class F, class B>
		inline constexpr static F blend(in_t(F) f1, in_t(F) f2, in_t(B) b) {
			if constexpr (std::same_as<F, float> || std::same_as<F, bool>) {
				return b ? f2 : f1;
			}
			else {
				return f1.blend(f2, b);
			}
		}

		inline static constexpr float clamp(float f_, float min_, float max_) {
			if (std::is_constant_evaluated()) {
				return std::clamp(f_, min_, max_);
			}
			else {
#if defined(CR_HAS_SIMD_TYPES) && !defined(DO_NOT_USE_SIMD_FOR_SCALAR)
				return cr::simd::float1x4(f_).clamp(min_, max_)[0];
#else
				return std::clamp(f_, min_, max_);
#endif
			}
		}

		template<std::integral I>
		inline static I clamp(I i_, I min_, I max_) {
			return std::max(std::min(i_, max_), min_);
		}

		template<class F>
		inline constexpr static F clamp(in_t(F) f, in_t(F) min, in_t(F) max) {
			if constexpr (has_clamp<F>) {
				return f.clamp(min, max);
			}
			else {
				return std::max(std::min(f, max), min);
			}
		}

		template<class F>
		inline constexpr static F clamp(in_t(F) f, float min, float max) {
			return clamp(f, F(min), F(max));
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
		inline constexpr static F abs(in_t(F) f) {
			if constexpr (std::same_as<F, float> || std::same_as<F, double>) {
				if (std::is_constant_evaluated()) {
					return f > 0.0f ? f : -f;
				}
				else {
					return std::fabs(f);
				}
			}
			else {
				return f.abs();
			}
		}

		template<class F>
		inline constexpr static F fma(in_t(F) a, in_t(F) b, in_t(F) c) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return a * b + c;
				}
				else {
#if defined(CR_HAS_SIMD_TYPES) && !defined(DO_NOT_USE_SIMD_FOR_SCALAR)
					return cr::simd::float1x4(a).fma(b, c)[0];
#else
					return a * b + c;
#endif
				}
			}
			else {
				return a.fma(b, c);
			}
		}
	};
}

namespace fun
{
	template<class F>
	inline constexpr static F cos_quart_fma_ec_T6_6(in_t(F) x) {
		x = forward_definitions::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
		auto const x2 = x * x;
		auto const a3 = F(0.002903581834064588f);
		auto const b3 = F(7.261928768280855e-06f);
		auto const a2 = forward_definitions::fma(a3, x2, F(-0.12995654089927464f));
		auto const b2 = forward_definitions::fma(b3, x2, F(0.0006886010742635062f));
		auto const a1 = forward_definitions::fma(a2, x2, F(0.9999999082401654f));
		auto const b1 = forward_definitions::fma(b2, x2, F(0.03671011384260023f));
		auto const a0 = (a1 * x);
		auto const b0 = forward_definitions::fma(b1, x2, F(1.0f));
		return a0 / b0;
	}
	inline static float cos_quart_fma_ec_T6_6_float_simd(float x) {
#if defined(CR_HAS_SIMD_TYPES) && !defined(DO_NOT_USE_SIMD_FOR_SCALAR)
		return cos_quart_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
		return cos_quart_fma_ec_T6_6<float>(x);
#endif
	}
	template<class F>
	inline constexpr static F cos_unit1_quart_fma_ec_T6_6(in_t(F) x) {
		x = forward_definitions::abs(x - F(0.5f)) - F(0.25f);
		auto const x2 = x * x;
		auto const a3 = F(28.43370232347889f);
		auto const b3 = F(0.4468185499096844f);
		auto const a2 = forward_definitions::fma(a3, x2, F(-32.23574770830088f));
		auto const b2 = forward_definitions::fma(b3, x2, F(1.0732160756647304f));
		auto const a1 = forward_definitions::fma(a2, x2, F(6.283184730635542f));
		auto const b1 = forward_definitions::fma(b2, x2, F(1.4492572045816738f));
		auto const a0 = (a1 * x);
		auto const b0 = forward_definitions::fma(b1, x2, F(1.0f));
		return a0 / b0;
	}
	inline static float cos_unit1_quart_fma_ec_T6_6_float_simd(float x) {
#if defined(CR_HAS_SIMD_TYPES) && !defined(DO_NOT_USE_SIMD_FOR_SCALAR)
		return cos_unit1_quart_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
		return cos_unit1_quart_fma_ec_T6_6<float>(x);
#endif
	}
	template<class F>
	inline constexpr static F sin_unit2_quart_fma_ec_T6_6(in_t(F) x) {
		auto const quarter = F(0.5f);
		x = forward_definitions::abs(forward_definitions::abs(x - quarter) - F(1.0f)) - quarter;
		auto const x2 = x * x;
		auto const a3 = F(0.8885531976087148f);
		auto const b3 = F(0.006981539842338819f);
		auto const a2 = forward_definitions::fma(a3, x2, F(-4.029468463537608f));
		auto const b2 = forward_definitions::fma(b3, x2, F(0.06707600472904571f));
		auto const a1 = forward_definitions::fma(a2, x2, F(3.1415923653177704f));
		auto const b1 = forward_definitions::fma(b2, x2, F(0.3623143011454184f));
		auto const a0 = (a1 * x);
		auto const b0 = forward_definitions::fma(b1, x2, F(1.0f));
		return a0 / b0;
	}
	inline static float sin_unit2_quart_fma_ec_T6_6_float_simd(float x) {
#if defined(CR_HAS_SIMD_TYPES) && !defined(DO_NOT_USE_SIMD_FOR_SCALAR)
		return sin_unit2_quart_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
		return sin_unit2_quart_fma_ec_T6_6<float>(x);
#endif
	}
	template<class F>
	inline constexpr static F sin_unit1_quart_fma_ec_T6_6(in_t(F) x) {
		auto const quarter = F(0.25f);
		x = forward_definitions::abs(forward_definitions::abs(x - quarter) - F(0.5f)) - quarter;
		auto const x2 = x * x;
		auto const a3 = F(28.43370232347889f);
		auto const b3 = F(0.4468185499096844f);
		auto const a2 = forward_definitions::fma(a3, x2, F(-32.23574770830088f));
		auto const b2 = forward_definitions::fma(b3, x2, F(1.0732160756647304f));
		auto const a1 = forward_definitions::fma(a2, x2, F(6.283184730635542f));
		auto const b1 = forward_definitions::fma(b2, x2, F(1.4492572045816738f));
		auto const a0 = (a1 * x);
		auto const b0 = forward_definitions::fma(b1, x2, F(1.0f));
		return a0 * b0;
	}
	inline static float sin_unit1_quart_fma_ec_T6_6_float_simd(float x) {
#if defined(CR_HAS_SIMD_TYPES) && !defined(DO_NOT_USE_SIMD_FOR_SCALAR)
		return sin_unit1_quart_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
		return sin_unit1_quart_fma_ec_T6_6<float>(x);
#endif
	}
	template<class F>
	inline constexpr static F tanh_remez_pade_fma_T6_6(in_t(F) x) {
		auto const x0 = x;
		x = forward_definitions::min(forward_definitions::abs(x), F(7.0f));
		auto const a6 = F(0.000936634282122674f);
		auto const b6 = F(0.000940805755508484f);
		auto const a5 = forward_definitions::fma(a6, x, F(0.005276300306824047f));
		auto const b5 = forward_definitions::fma(b6, x, F(0.0050993041018936374f));
		auto const a4 = forward_definitions::fma(a5, x, F(0.029067578323695734f));
		auto const b4 = forward_definitions::fma(b5, x, F(0.03227263073487728f));
		auto const a3 = forward_definitions::fma(a4, x, F(0.1306632022968818f));
		auto const b3 = forward_definitions::fma(b4, x, F(0.09886602020794436f));
		auto const a2 = forward_definitions::fma(a3, x, F(0.21165707154815022f));
		auto const b2 = forward_definitions::fma(b3, x, F(0.3944482815453158f));
		auto const a1 = forward_definitions::fma(a2, x, F(0.7903734105736433f));
		auto const b1 = forward_definitions::fma(b2, x, F(0.21158458514561868f));
		auto const a0 = forward_definitions::fma(a1, x, F(6.973554169080272e-08f));
		auto const b0 = forward_definitions::fma(b1, x, F(0.7903796209031667f));
		return forward_definitions::setSign(a0 / b0, x0);
	}

	template<class F>
	inline constexpr static F tanh_fma_ec_T7_7(in_t(F) x) {
		x = forward_definitions::clamp(x, F(-7.0f), F(7.0f));
		auto const x2 = x * x;
		auto const a4 = F(7.3913550193196496e-06f);
		auto const b3 = F(0.0002072002072002072f);
		auto const a3 = forward_definitions::fma(a4, x2, F(0.0027939321973028276f));
		auto const b2 = forward_definitions::fma(b3, x2, F(0.023310023310023312f));
		auto const a2 = forward_definitions::fma(a3, x2, F(0.12805522570971292f));
		auto const b1 = forward_definitions::fma(b2, x2, F(0.46153846153846156f));
		auto const a1 = forward_definitions::fma(a2, x2, F(0.9988307605357608f));
		auto const b0 = forward_definitions::fma(b1, x2, F(1.0f));
		auto const a0 = (a1 * x);
		return a0 / b0;
	}
	inline static float tanh_fma_ec_T7_7_float_simd(float x) {
#if defined(CR_HAS_SIMD_TYPES) && !defined(DO_NOT_USE_SIMD_FOR_SCALAR)
		return tanh_fma_ec_T7_7<cr::simd::float1x4>(x)[0];
#else
		return tanh_fma_ec_T7_7<float>(x);
#endif
	}

	template<class F>
	inline constexpr static F log_fma_ec_T8_8(in_t(F) x) {
		x = x - F(1.0f);
		auto const a8 = F(0.0004224058990164251f);
		auto const b8 = F(7.77000777000777e-05f);
		auto const a7 = forward_definitions::fma(a8, x, F(0.01922307633999584f));
		auto const b7 = forward_definitions::fma(b8, x, F(0.005594405594405594f));
		auto const a6 = forward_definitions::fma(a7, x, F(0.23849003754454298f));
		auto const b6 = forward_definitions::fma(b7, x, F(0.0979020979020979f));
		auto const a5 = forward_definitions::fma(a6, x, F(1.2702372609003256f));
		auto const b5 = forward_definitions::fma(b6, x, F(0.717948717948718f));
		auto const a4 = forward_definitions::fma(a5, x, F(3.4170750003021886f));
		auto const b4 = forward_definitions::fma(b5, x, F(2.6923076923076925f));
		auto const a3 = forward_definitions::fma(a4, x, F(4.867248293113361f));
		auto const b3 = forward_definitions::fma(b4, x, F(5.6f));
		auto const a2 = forward_definitions::fma(a3, x, F(3.5004182929924856f));
		auto const b2 = forward_definitions::fma(b3, x, F(6.533333333333333f));
		auto const a1 = forward_definitions::fma(a2, x, F(1.0001195122835673f));
		auto const b1 = forward_definitions::fma(b2, x, F(4.0f));
		auto const a0 = forward_definitions::fma(a1, x, F(-6.47996564362974e-16f));
		auto const b0 = forward_definitions::fma(b1, x, F(1.0f));
		return a0 / b0;
	}

	template<class F>
	inline constexpr static F log_remez_pade_recip_fma_T9_9(in_t(F) x) {
		auto m = x < F(1.0f);
		x = forward_definitions::blend(x, F(1.0f) / x, m);
		auto const a9 = F(1.724793120623996e-05f);
		auto const b9 = F(2.5430188394234507e-06f);
		auto const a8 = forward_definitions::fma(a9, x, F(0.002663321948678853f));
		auto const b8 = forward_definitions::fma(b9, x, F(0.0005992450757627369f));
		auto const a7 = forward_definitions::fma(a8, x, F(0.07552030201162915f));
		auto const b7 = forward_definitions::fma(b8, x, F(0.024654320740162102f));
		auto const a6 = forward_definitions::fma(a7, x, F(0.5892895008581321f));
		auto const b6 = forward_definitions::fma(b7, x, F(0.3002080525963518f));
		auto const a5 = forward_definitions::fma(a6, x, F(1.247302396060179f));
		auto const b5 = forward_definitions::fma(b6, x, F(1.2922644634030724f));
		auto const a4 = forward_definitions::fma(a5, x, F(-0.029368062300959858f));
		auto const b4 = forward_definitions::fma(b5, x, F(2.081455650785514f));
		auto const a3 = forward_definitions::fma(a4, x, F(-1.2849918677232943f));
		auto const b3 = forward_definitions::fma(b4, x, F(1.237985610749445f));
		auto const a2 = forward_definitions::fma(a3, x, F(-0.5480727596301121f));
		auto const b2 = forward_definitions::fma(b3, x, F(0.25068769460100565f));
		auto const a1 = forward_definitions::fma(a2, x, F(-0.051566582025269446f));
		auto const b1 = forward_definitions::fma(b2, x, F(0.014203865415567327f));
		auto const a0 = forward_definitions::fma(a1, x, F(-0.0007934920746564964f));
		auto const b0 = forward_definitions::fma(b1, x, F(0.00013141114316558164f));
		auto const r = a0 / b0;
		return forward_definitions::blend(r, -r, m);
	}

	template<class F>
	inline constexpr static F exp_special_fma_T5_5(in_t(F) x) {
		auto const x2 = x * x;
		auto const a3 = F(0.00034302671209318625f);
		auto const b2 = F(0.01122254218044283f);
		auto const a2 = forward_definitions::fma(a3, x2, F(0.04283525353671358f));
		auto const b1 = forward_definitions::fma(b2, x2, F(0.3737088474868244f));
		auto const a1 = forward_definitions::fma(a2, x2, F(0.4584879788078804f));
		auto const b0 = forward_definitions::fma(b1, x2, F(1.0f));
		auto const a0 = (a1 * x);
		constexpr float c1 = 1.6909569472766688f;
		auto a = F(c1) / (F(0.5f) - (a0 / b0)) - F(c1);
		a *= a;
		a *= a;
		return a;
	}

	template<class F>
	inline constexpr static F tan_fma_T6_6(in_t(F) x) {
		using forward_definitions = forward_definitions;
		auto const x2 = x * x;
		auto const a3 = F(0.00202020202020202f);
		auto const b3 = F(-9.62000962000962e-05f);
		auto const a2 = forward_definitions::fma(a3, x2, F(-0.12121212121212122f));
		auto const b2 = forward_definitions::fma(b3, x2, F(0.020202020202020204f));
		auto const a1 = forward_definitions::fma(a2, x2, F(1.0f));
		auto const b1 = forward_definitions::fma(b2, x2, F(-0.45454545454545453f));
		auto const a0 = (a1 * x);
		auto const b0 = forward_definitions::fma(b1, x2, F(1.0f));
		return forward_definitions::setSign(a0 / b0, x);
	}

	template<class F>
	inline constexpr static F sin_quart_fma_ec_T6_6(in_t(F) x) {
		auto const quarter = F(1.5707963267948966f);
		x = forward_definitions::abs(forward_definitions::abs(x - quarter) - F(3.141592653589793f)) - quarter;
		auto const x2 = x * x;
		auto const a3 = F(0.002903581834064588f);
		auto const b3 = F(7.261928768280855e-06f);
		auto const a2 = forward_definitions::fma(a3, x2, F(-0.12995654089927464f));
		auto const b2 = forward_definitions::fma(b3, x2, F(0.0006886010742635062f));
		auto const a1 = forward_definitions::fma(a2, x2, F(0.9999999082401654f));
		auto const b1 = forward_definitions::fma(b2, x2, F(0.03671011384260023f));
		auto const a0 = (a1 * x);
		auto const b0 = forward_definitions::fma(b1, x2, F(1.0f));
		return a0 / b0;
	}
	inline static float sin_quart_fma_ec_T6_6_float_simd(float x) {
#if defined(CR_HAS_SIMD_TYPES) && !defined(DO_NOT_USE_SIMD_FOR_SCALAR)
		return sin_quart_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
		return sin_quart_fma_ec_T6_6<float>(x);
#endif
	}
	template<class F>
	inline constexpr static F exp_T6_6(in_t(F) x) {
		auto const x2 = x * x;
		auto const a3 = F(6.165167297979798e-08f);
		auto const b3 = F(3.669742439273689e-10f);
		auto const a2 = a3 * x2 + F(0.00023674242424242425f);
		auto const b2 = b3 * x2 + F(4.932133838383839e-06f);
		auto const a1 = a2 * x2 + F(0.125f);
		auto const b1 = b2 * x2 + F(0.007102272727272727f);
		auto const a0 = (a1 * x);
		auto const b0 = b1 * x2 + F(1.0f);
		auto const w = a0 / b0;
		auto v = F(2.0f) / (F(1.0f) - w) - F(1.0f);
		v *= v;
		v *= v;
		return v;
	}
	template<class F>
	inline constexpr static F exp_fma_T5_5(in_t(F) x) {
		auto const x2 = x * x;
		auto const a3 = F(3.229373346560847e-08f);
		auto const b2 = F(3.875248015873016e-06f);
		auto const a2 = forward_definitions::fma(a3, x2, F(0.00021701388888888888f));
		auto const b1 = forward_definitions::fma(b2, x2, F(0.006944444444444444f));
		auto const a1 = forward_definitions::fma(a2, x2, F(0.125f));
		auto const b0 = forward_definitions::fma(b1, x2, F(1.0f));
		auto const a0 = (a1 * x);
		auto const w = a0 / b0;
		auto v = F(2.0f) / (F(1.0f) - w) - F(1.0f);
		v *= v;
		v *= v;
		return v;
	}
}

namespace cr
{
	struct StdContext : forward_definitions
	{
		inline static constexpr float pi = std::numbers::pi_v<float>;
		inline static constexpr float half_pi = 0.5f * std::numbers::pi_v<float>;
		inline static constexpr float quart_pi = 0.25f * std::numbers::pi_v<float>;
		inline static constexpr float two_pi = 2.0f * pi;
		inline static constexpr float inv_pi = std::numbers::inv_pi_v<float>;
		inline static constexpr float inv_two_pi = 0.5f * std::numbers::inv_pi_v<float>;
		inline static constexpr float inv_half_pi = 2.0f * std::numbers::inv_pi_v<float>;
		inline static constexpr float four_inv_pi = 4.0f * inv_pi;
		inline static constexpr float half_sqrt_two = 0.7071067811865476f;
		inline static constexpr float sqrt_two = 1.4142135623730951f;
		inline static constexpr float inv_phi = 1.0f / std::numbers::phi_v<float>;
		inline static constexpr float phi = 1.0f / std::numbers::phi_v<float>;

		template<class F>
		using BoolType = std::conditional_t<std::same_as<F, float>, bool, F>;

		template<class F>
		inline static constexpr F bitSign() {
			return std::bit_cast<float>(1U << 31);
		};

		template<class F>
		inline constexpr static F sqrt0(in_t(F) x) {
			auto constexpr c = (1 << 29) - (1 << 22) - 0x4B0D2;
			if constexpr (std::same_as<F, float>) {
				auto const i0 = std::bit_cast<uint32_t>(x);
				auto const i1 = c + (i0 >> 1);

				return std::bit_cast<float>(i1);
			}
			else {
				auto const i0 = x.bitCastInt();
				using int_type = std::remove_cvref_t<decltype(i0)>;
				auto const i1 = int_type(c) + (i0 >> 1);

				return i1.bitCastFloat();
			}
		}

		template<class F>
		inline constexpr static F sqrt1(in_t(F) x) {
			auto s0 = sqrt0(x);
			return F(0.5f) * (s0 + x / s0);
		}

		template<class F>
		inline constexpr static F sqrt2(in_t(F) x) {
			auto s0 = sqrt1(x);
			return F(0.5f) * (s0 + x / s0);
		}

		// domain: (0.08, 12.5)
		// maximum absolute error: 0.0003786087
		// maximum relative error:0.00018447939
		template<class F>
		inline constexpr static F log(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return fun::log_remez_pade_recip_fma_T9_9(x);
				}
				else {
					return std::logf(x);
				}
			}
			else {
				return fun::log_fma_ec_T8_8(x);
			}
		}

		// domain: (-inf, inf)
		// maximum absolute error: 0.0011637807
		// maximum relative error:0.0011694467
		template<class F>
		inline constexpr static F tanh(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return fun::tanh_remez_pade_fma_T6_6(x);
				}
				else {
					return fun::tanh_fma_ec_T7_7_float_simd(x);
				}
			}
			else {
				return fun::tanh_fma_ec_T7_7(x);
			}
		}

		// domain: (0, 6.2831855)
		// maximum absolute error: 2.9802322e-07
		// maximum relative error:0.00046794294
		template<class F>
		inline constexpr static F sin(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return fun::sin_quart_fma_ec_T6_6<float>(fmod<two_pi>(x));
				}
				else {
					return fun::sin_quart_fma_ec_T6_6_float_simd(x);
				}
			}
			else {
				return fun::sin_quart_fma_ec_T6_6(x);
			}
		}

		// domain: (0, 1)
		// maximum absolute error: 7.301569e-07
		// maximum relative error:0.00025519286
		template<class F>
		inline constexpr static F sin_unit_1(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return fun::sin_unit1_quart_fma_ec_T6_6<float>(fmod<1.0f>(x));
				}
				else {
					return fun::sin_unit1_quart_fma_ec_T6_6_float_simd(x);
				}
			}
			else {
				return fun::sin_unit1_quart_fma_ec_T6_6(x);
			}
		}

		// domain: (0, 6.2831855)
		// maximum absolute error: 2.9802322e-07
		// maximum relative error:0.00046794294
		template<class F>
		inline constexpr static F sinc(in_t(F) x) {
			x *= pi;
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					if (x > -0.0001f && x < 0.0001f) {
						return 1.0f;
					}
					else {
						return fun::sin_quart_fma_ec_T6_6<float>(fmod<two_pi>(x)) / x;
					}
				}
				else {
					auto value = fun::sin_quart_fma_ec_T6_6_float_simd(fmod<two_pi>(x)) / x;
					return ifElse(abs(x) < 0.0001f, 1.0f, value);
				}
			}
			else {
				auto value = fun::sin_quart_fma_ec_T6_6(fmod<two_pi>(x)) / x;
				return ifElse(abs(x) < F(0.0001f), F(1.0f), value);
			}
		}

		// domain: (0, 2)
		// maximum absolute error: 7.301569e-07
		// maximum relative error:0.00025519286
		template<class F>
		inline constexpr static F sin_unit_2(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return fun::sin_unit2_quart_fma_ec_T6_6<float>(fmod<2.0f>(x));
				}
				else {
					return fun::sin_unit2_quart_fma_ec_T6_6_float_simd(x);
				}
			}
			else {
				return fun::sin_unit2_quart_fma_ec_T6_6(x);
			}
		}

		// domain: (0, 1)
		// maximum absolute error: 6.854534e-07
		// maximum relative error:0.0007008286
		template<class F>
		inline constexpr static F cos_unit_1(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return fun::cos_unit1_quart_fma_ec_T6_6(fmod<1.0f>(x));
				}
				else {
					return fun::cos_unit1_quart_fma_ec_T6_6_float_simd(x);
				}
			}
			else {
				return fun::cos_unit1_quart_fma_ec_T6_6(x);
			}
		}

		// domain: (0, 6.2831855)
		// maximum absolute error: 2.3841858e-07
		// maximum relative error:0.00020883042
		template<class F>
		inline constexpr static F cos(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return fun::cos_quart_fma_ec_T6_6(fmod<two_pi>(x));
				}
				else {
					return fun::cos_quart_fma_ec_T6_6_float_simd(x);
				}
			}
			else {
				return fun::cos_quart_fma_ec_T6_6(x);
			}
		}

		// domain: (-1.5, 1.5)
		// maximum absolute error: 1.8119812e-05
		// maximum relative error:2.007825e-06
		// tan_ec_T6_6<float>
		template<class F>
		inline constexpr static F tan(in_t(F) x) {
			return fun::tan_fma_T6_6(x);
		}

		// domain: (-10, 10)
		// maximum absolute error: 0.060546875
		// maximum relative error:5.2667096e-06
		template<class F>
		inline constexpr static F exp(in_t(F) x) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return fun::exp_T6_6<float>(x);
				}
				else {
					return std::expf(x);
				}
			}
			else {
				return fun::exp_fma_T5_5(x);
			}
		}

		// domain: (-1, 1.2)
		// maximum absolute error: 0.34375
		// maximum relative error:8.022459e-06
		template<class F>
		inline constexpr static F specialized_frequency_exp(in_t(F) x) {
			return fun::exp_special_fma_T5_5(x);
		}

		template<class F>
		inline constexpr static F recip(in_t(F) x) {
			return F(1) / x;
		}

	private:
		template<class F>
		inline constexpr static F div_helper(F x, F m) {
			if (x >= F(0.0)) {
				return (F)(integer_t)(x / m);
			}
			else {
				return (F)((integer_t)(x / m) - F(1));
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
						auto div = floor(f);

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
						auto constexpr recip_m = 1.0f / m.value;
						auto div = floor(f * recip_m);

						return { div, f - m.value * div };
					}
				}
				else {
					auto constexpr recip_m = 1.0f / m.value;
					auto div = (f * F(recip_m)).floor();

					return { div, f - F(m.value) * div };
				}
			}
		}

		template<class F2, class F>
		inline constexpr static std::pair<F, F> fdivmod(in_t(F) f, in_t(F2) m) {
			if constexpr (std::same_as<F, float> || std::same_as<F, double>) {
				if (std::is_constant_evaluated()) {
					auto div = div_helper(f, m);

					return { div, f - m * div };
				}
				else {
					auto div = floor(f / m);

					return { div, f - m * div };
				}
			}
			else {
				auto div = (f / m).floor();

				return { div, f - F(m) * div };
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
						return f - floor(f);
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
						return f - m.value * floor(f * recip_m);
					}
				}
				else {
					auto constexpr recip_m = 1.0f / m.value;
					return f - F(m.value) * (f * F(recip_m)).floor();
				}
			}
		}

		template<te::literal<double> m>
		inline constexpr static double fmod(double f) {
			if constexpr (m.value == 1.0) {
				return f - floor(f);
			}
			else {
				auto constexpr recip_m = 1.0 / m.value;
				return f - m.value * floor(f * recip_m);
			}
		}

		template<class F>
		inline constexpr static F fmod(in_t(F) f, in_t(F) m) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return f - m * div_helper(f, m);
				}
				else {
					return f - m * floor(f / m);
				}
			}
			else {
				return f - F(m) * (f / F(m)).floor();
			}
		}

		template<std::integral I>
		inline constexpr static I imod(in_t(I) i, in_t(I) m) {
			return i - m * (i / m + (i < 0 ? -1 : 0));
		}

		template<std::integral auto m, std::integral I>
		inline constexpr static I imod(in_t(I) i) {
			return i - m * (i / m + (i < 0 ? -1 : 0));
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
				return f1.max(f2);
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
		inline constexpr static F bitwiseOr(in_t(F) f1, in_t(F) f2) {
			if constexpr (std::same_as<F, float>) {
				return std::bit_cast<float>(std::bit_cast<uint32_t>(f1) | std::bit_cast<uint32_t>(f2));
			}
			else {
				return f1 | f2;
			}
		}

		template<class F>
		inline constexpr static F flipSign(in_t(F) f) {
			if constexpr (std::same_as<F, float>) {
				return std::bit_cast<float>(std::bit_cast<uint32_t>(f) ^ (1U << 31));
			}
			else {
				return f ^ bitSign<F>();
			}
		}

		template<class F>
		inline constexpr static F floor(in_t(F) f) {
			if constexpr (std::same_as<F, double>) {
				return std::floor(f);
			}
			else if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return std::floor(f);
				}
				else {
#if defined(CR_HAS_SIMD_TYPES) && !defined(DO_NOT_USE_SIMD_FOR_SCALAR)
					return cr::simd::float1x4(f).floor()[0];
#else
					return std::floor(f);
#endif
				}
			}
			else {
				return f.floor();
			}
		}

		template<class F>
		inline constexpr static F ceil(in_t(F) f) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return std::ceil(f);
				}
				else {
#if defined(CR_HAS_SIMD_TYPES) && !defined(DO_NOT_USE_SIMD_FOR_SCALAR)
					return cr::simd::float1x4(f).ceil()[0];
#else
					return std::ceil(f);
#endif
				}
			}
			else {
				return f.ceil();
			}
		}

		template<class F>
		inline constexpr static F round(in_t(F) f) {
			if constexpr (std::same_as<F, float>) {
				if (std::is_constant_evaluated()) {
					return std::round(f);
				}
				else {
#if defined(CR_HAS_SIMD_TYPES) && !defined(DO_NOT_USE_SIMD_FOR_SCALAR)
					return cr::simd::float1x4(f).round()[0];
#else
					return std::round(f);
#endif
				}
			}
			else {
				return f.round();
			}
		}

		template<class F>
		inline constexpr static F mix(in_t(F) f1, in_t(F) f2, in_t(F) s) {
			return f1 + (f2 - f1) * s;
		}

		template<class F>
		inline constexpr static F unmix(in_t(F) f1, in_t(F) f2, in_t(F) x) {
			return (x - f1) / (f2 - f1);
		}

		template<class F, class B>
		inline constexpr static F ifElse(in_t(B) b, in_t(F) f1, in_t(F) f2) {
			if constexpr (std::same_as<F, float> || std::same_as<F, bool>) {
				return b ? f1 : f2;
			}
			else {
				return f2.blend(f1, b);
			}
		}

		template<class F, class B>
		inline constexpr static F boolToFloat(in_t(B) b) {
			if constexpr (std::same_as<F, float> && std::same_as<B, bool>) {
				return static_cast<float>(b);
			}
			else {
				return ifElse(b, F(1.0f), F(0.0f));
			}
		}

		template<class F, class B>
		inline constexpr static void setIf(F& s, in_t(B) b, in_t(F) v) {
			if constexpr (std::same_as<F, float> || std::same_as<F, bool> || std::same_as<F, integer_t>) {
				s = b ? v : s;
			}
			else {
				s = s.blend(v, b);
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

		inline constexpr static integer_t toInt(float a) {
			return static_cast<integer_t>(a + 0.5f);
		}

		inline constexpr static integer_t toIntFloor(float a) {
			return static_cast<integer_t>(floor(a));
		}

		inline constexpr static integer_t toIntRound(float a) {
			return static_cast<integer_t>(round(a));
		}

		template<class F>
		inline static float toScalar(in_t(F) a) {
			if constexpr (std::same_as<F, float>) {
				return a;
			}
			else {
				return a[0];
			}
		}
	};
}