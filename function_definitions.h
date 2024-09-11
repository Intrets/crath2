template <class F>
inline constexpr static F sin_remez_fma_T3_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a3 = F(-0.11250597409097031f);
auto const a2 = math::fma(a3, x, F(-0.0706896778182963f));
auto const a1 = math::fma(a2, x, F(1.0252562228861473f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_remez_fma_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_fma_T3_0<cr::simd::float1x4>(x)[0];
#else
return sin_remez_fma_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_pade_fma_T3_3(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a3 = F(-0.14417643195558263f);
auto const b3 = F(0.015601571248778104f);
auto const a2 = math::fma(a3, x, F(0.1248318191213688f));
auto const b2 = math::fma(b3, x, F(0.023456727119446803f));
auto const a1 = math::fma(a2, x, F(0.9881944938635342f));
auto const b1 = math::fma(b2, x, F(0.12404443087494492f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.9882716364402766f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_remez_pade_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_pade_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return sin_remez_pade_fma_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_fma_T3_3(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a2 = F(-0.11666666666666667f);
auto const b1 = F(0.05f);
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_quart_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_quart_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return sin_quart_fma_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_ends_corrected_quart_fma_T3_3(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a2 = F(-0.11716192171262622f);
auto const b1 = F(0.05f);
auto const a1 = math::fma(a2, x2, F(1.0042450432510819f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_ends_corrected_quart_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_ends_corrected_quart_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return sin_ends_corrected_quart_fma_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_half_fma_T3_3(in_t(F) x) {
using math = ApproxContext;
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a2 = F(-0.11666666666666667f);
auto const b1 = F(0.05f);
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_half_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_half_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return sin_half_fma_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_fma_T4_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a4 = F(0.02842536468631198f);
auto const a3 = math::fma(a4, x, F(-0.20270944652597572f));
auto const a2 = math::fma(a3, x, F(0.019084954030143125f));
auto const a1 = math::fma(a2, x, F(0.9966361177984958f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_remez_fma_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_fma_T4_0<cr::simd::float1x4>(x)[0];
#else
return sin_remez_fma_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_pade_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a4 = F(0.01547430236869411f);
auto const b4 = F(0.0011788919793904173f);
auto const a3 = math::fma(a4, x, F(-0.10695745830938305f));
auto const b3 = math::fma(b4, x, F(-0.005656957515825118f));
auto const a2 = math::fma(a3, x, F(-0.12645668267421045f));
auto const b2 = math::fma(b3, x, F(0.05506341487833589f));
auto const a1 = math::fma(a2, x, F(0.9720260659911298f));
auto const b1 = math::fma(b2, x, F(-0.1264591756923077f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.9720262080685607f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_remez_pade_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_pade_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return sin_remez_pade_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a2 = F(-0.1054421768707483f);
auto const b2 = F(0.0018707482993197278f);
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(0.061224489795918366f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_quart_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_quart_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return sin_quart_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_ends_corrected_quart_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a2 = F(-0.105472068924708f);
auto const b2 = F(0.0018707482993197278f);
auto const a1 = math::fma(a2, x2, F(1.0002834923827146f));
auto const b1 = math::fma(b2, x2, F(0.061224489795918366f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_ends_corrected_quart_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_ends_corrected_quart_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return sin_ends_corrected_quart_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_half_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a2 = F(-0.1054421768707483f);
auto const b2 = F(0.0018707482993197278f);
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(0.061224489795918366f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_half_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_half_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return sin_half_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_fma_T5_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a5 = F(0.005721724054858885f);
auto const a4 = math::fma(a5, x, F(0.006097383673259587f));
auto const a3 = math::fma(a4, x, F(-0.1722388650879916f));
auto const a2 = math::fma(a3, x, F(0.002193716170930513f));
auto const a1 = math::fma(a2, x, F(0.9996898644339447f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_remez_fma_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_fma_T5_0<cr::simd::float1x4>(x)[0];
#else
return sin_remez_fma_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_pade_fma_T5_5(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a5 = F(0.00398876114571929f);
auto const b5 = F(8.933102445231229e-05f);
auto const a4 = math::fma(a5, x, F(-0.006564087300204952f));
auto const b4 = math::fma(b5, x, F(0.00016885389829264063f));
auto const a3 = math::fma(a4, x, F(-0.13802643182483032f));
auto const b3 = math::fma(b4, x, F(0.0035511435643232427f));
auto const a2 = math::fma(a3, x, F(0.06068777126407961f));
auto const b2 = math::fma(b3, x, F(0.026427288748233795f));
auto const a1 = math::fma(a2, x, F(0.9867230358808308f));
auto const b1 = math::fma(b2, x, F(0.060687783256580835f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.9867230354140234f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_remez_pade_fma_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_pade_fma_T5_5<cr::simd::float1x4>(x)[0];
#else
return sin_remez_pade_fma_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_fma_T5_5(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(0.003312890812890813f);
auto const b2 = F(0.00045093795093795094f);
auto const a2 = math::fma(a3, x2, F(-0.13383838383838384f));
auto const b1 = math::fma(b2, x2, F(0.03282828282828283f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_quart_fma_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_quart_fma_T5_5<cr::simd::float1x4>(x)[0];
#else
return sin_quart_fma_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_ends_corrected_quart_fma_T5_5(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(0.0033128808597388017f);
auto const b2 = F(0.00045093795093795094f);
auto const a2 = math::fma(a3, x2, F(-0.1338379817382681f));
auto const b1 = math::fma(b2, x2, F(0.03282828282828283f));
auto const a1 = math::fma(a2, x2, F(0.9999969956293239f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_ends_corrected_quart_fma_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_ends_corrected_quart_fma_T5_5<cr::simd::float1x4>(x)[0];
#else
return sin_ends_corrected_quart_fma_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_half_fma_T5_5(in_t(F) x) {
using math = ApproxContext;
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a3 = F(0.003312890812890813f);
auto const b2 = F(0.00045093795093795094f);
auto const a2 = math::fma(a3, x2, F(-0.13383838383838384f));
auto const b1 = math::fma(b2, x2, F(0.03282828282828283f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_half_fma_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_half_fma_T5_5<cr::simd::float1x4>(x)[0];
#else
return sin_half_fma_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_fma_T6_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a6 = F(-0.0009580227460981794f);
auto const a5 = math::fma(a6, x, F(0.010257430798092455f));
auto const a4 = math::fma(a5, x, F(-0.0019644046553711314f));
auto const a3 = math::fma(a4, x, F(-0.16562398710135492f));
auto const a2 = math::fma(a3, x, F(-0.00026525836374606586f));
auto const a1 = math::fma(a2, x, F(1.000024600206111f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_remez_fma_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_fma_T6_0<cr::simd::float1x4>(x)[0];
#else
return sin_remez_fma_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_pade_fma_T6_6(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a6 = F(-0.00028993522478184527f);
auto const b6 = F(4.618788578847466e-06f);
auto const a5 = math::fma(a6, x, F(0.0030135526427714347f));
auto const b5 = math::fma(b6, x, F(-3.312839263313708e-05f));
auto const a4 = math::fma(a5, x, F(0.011335041198872534f));
auto const b4 = math::fma(b5, x, F(0.0005863299172886148f));
auto const a3 = math::fma(a4, x, F(-0.12918805705837472f));
auto const b3 = math::fma(b4, x, F(-0.002656807666174301f));
auto const a2 = math::fma(a3, x, F(-0.08395110042399623f));
auto const b2 = math::fma(b3, x, F(0.03456159071182735f));
auto const a1 = math::fma(a2, x, F(0.9824978875539313f));
auto const b1 = math::fma(b2, x, F(-0.08395110041376104f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.9824978875536722f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_remez_pade_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_pade_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return sin_remez_pade_fma_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_fma_T6_6(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(0.002903582100496801f);
auto const b3 = F(7.261928768280855e-06f);
auto const a2 = math::fma(a3, x2, F(-0.12995655282406643f));
auto const b2 = math::fma(b3, x2, F(0.0006886010742635062f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(0.03671011384260023f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_quart_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_quart_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return sin_quart_fma_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_ends_corrected_quart_fma_T6_6(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(0.0029035818340645875f);
auto const b3 = F(7.261928768280855e-06f);
auto const a2 = math::fma(a3, x2, F(-0.12995654089927464f));
auto const b2 = math::fma(b3, x2, F(0.0006886010742635062f));
auto const a1 = math::fma(a2, x2, F(0.9999999082401654f));
auto const b1 = math::fma(b2, x2, F(0.03671011384260023f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_ends_corrected_quart_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_ends_corrected_quart_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return sin_ends_corrected_quart_fma_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_half_fma_T6_6(in_t(F) x) {
using math = ApproxContext;
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a3 = F(0.002903582100496801f);
auto const b3 = F(7.261928768280855e-06f);
auto const a2 = math::fma(a3, x2, F(-0.12995655282406643f));
auto const b2 = math::fma(b3, x2, F(0.0006886010742635062f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(0.03671011384260023f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_half_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_half_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return sin_half_fma_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_fma_T7_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a7 = F(-0.00013732321260566613f);
auto const a6 = math::fma(a7, x, F(-0.0002057000498698861f));
auto const a5 = math::fma(a6, x, F(0.00863920572645102f));
auto const a4 = math::fma(a5, x, F(-0.00023970397027898223f));
auto const a3 = math::fma(a4, x, F(-0.16656678767454897f));
auto const a2 = math::fma(a3, x, F(-2.0229283689694717e-05f));
auto const a1 = math::fma(a2, x, F(1.000001553225707f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_remez_fma_T7_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_fma_T7_0<cr::simd::float1x4>(x)[0];
#else
return sin_remez_fma_T7_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_pade_fma_T7_7(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a7 = F(-4.933252004901337e-05f);
auto const b7 = F(2.265965059444959e-07f);
auto const a6 = math::fma(a7, x, F(0.00011584948945437111f));
auto const b6 = math::fma(b7, x, F(5.811542487312271e-07f));
auto const a5 = math::fma(a6, x, F(0.004858534408234611f));
auto const b5 = math::fma(b6, x, F(2.4763305563469208e-05f));
auto const a4 = math::fma(a5, x, F(-0.005065858320563908f));
auto const b4 = math::fma(b5, x, F(0.0001961149899251219f));
auto const a3 = math::fma(a4, x, F(-0.14337930904237722f));
auto const b3 = math::fma(b4, x, F(0.001390343989489347f));
auto const a2 = math::fma(a3, x, F(0.03873721387421483f));
auto const b2 = math::fma(b3, x, F(0.02148468015615595f));
auto const a1 = math::fma(a2, x, F(0.9891839351899973f));
auto const b1 = math::fma(b2, x, F(0.03873721387420606f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.9891839351899974f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_remez_pade_fma_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_pade_fma_T7_7<cr::simd::float1x4>(x)[0];
#else
return sin_remez_pade_fma_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_fma_T7_7(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a4 = F(-4.163277313164616e-05f);
auto const b3 = F(1.5950358737736648e-06f);
auto const a3 = math::fma(a4, x2, F(0.0045855159115865355f));
auto const b2 = math::fma(b3, x2, F(0.00027605127154338275f));
auto const a2 = math::fma(a3, x2, F(-0.14252345450692558f));
auto const b1 = math::fma(b2, x2, F(0.024143212159741086f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_quart_fma_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_quart_fma_T7_7<cr::simd::float1x4>(x)[0];
#else
return sin_quart_fma_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_ends_corrected_quart_fma_T7_7(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a4 = F(-4.1632773151033223e-05f);
auto const b3 = F(1.5950358737736648e-06f);
auto const a3 = math::fma(a4, x2, F(0.004585515913721866f));
auto const b2 = math::fma(b3, x2, F(0.00027605127154338275f));
auto const a2 = math::fma(a3, x2, F(-0.14252345457329424f));
auto const b1 = math::fma(b2, x2, F(0.024143212159741086f));
auto const a1 = math::fma(a2, x2, F(1.0000000004656684f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_ends_corrected_quart_fma_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_ends_corrected_quart_fma_T7_7<cr::simd::float1x4>(x)[0];
#else
return sin_ends_corrected_quart_fma_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_half_fma_T7_7(in_t(F) x) {
using math = ApproxContext;
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a4 = F(-4.163277313164616e-05f);
auto const b3 = F(1.5950358737736648e-06f);
auto const a3 = math::fma(a4, x2, F(0.0045855159115865355f));
auto const b2 = math::fma(b3, x2, F(0.00027605127154338275f));
auto const a2 = math::fma(a3, x2, F(-0.14252345450692558f));
auto const b1 = math::fma(b2, x2, F(0.024143212159741086f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_half_fma_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_half_fma_T7_7<cr::simd::float1x4>(x)[0];
#else
return sin_half_fma_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_fma_T8_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a8 = F(1.7209675145107424e-05f);
auto const a7 = math::fma(a8, x, F(-0.00024574998177034435f));
auto const a6 = math::fma(a7, x, F(7.194305487450567e-05f));
auto const a5 = math::fma(a6, x, F(0.008268799680154948f));
auto const a4 = math::fma(a5, x, F(3.425032987269031e-05f));
auto const a3 = math::fma(a4, x, F(-0.1666769222964677f));
auto const a2 = math::fma(a3, x, F(1.542166287989251e-06f));
auto const a1 = math::fma(a2, x, F(0.9999999122999165f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_remez_fma_T8_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_fma_T8_0<cr::simd::float1x4>(x)[0];
#else
return sin_remez_fma_T8_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_pade_fma_T8_8(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a8 = F(2.734960719437357e-06f);
auto const b8 = F(8.994991367145396e-09f);
auto const a7 = math::fma(a8, x, F(-3.777311346104812e-05f));
auto const b7 = math::fma(b8, x, F(-8.67086200439751e-08f));
auto const a6 = math::fma(a7, x, F(-0.00029355002802143295f));
auto const b6 = math::fma(b7, x, F(2.393449989301507e-06f));
auto const a5 = math::fma(a6, x, F(0.004377201325428692f));
auto const b5 = math::fma(b6, x, F(-1.635969855602446e-05f));
auto const a4 = math::fma(a5, x, F(0.009020874296381388f));
auto const b4 = math::fma(b5, x, F(0.00031548376706785604f));
auto const a3 = math::fma(a4, x, F(-0.13956482032518144f));
auto const b3 = math::fma(b4, x, F(-0.0014901718727995147f));
auto const a2 = math::fma(a3, x, F(-0.06306627701505384f));
auto const b2 = math::fma(b3, x, F(0.02499877249593445f));
auto const a1 = math::fma(a2, x, F(0.9873815569266927f));
auto const b1 = math::fma(b2, x, F(-0.06306627701505386f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.9873815569266927f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_remez_pade_fma_T8_8_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_pade_fma_T8_8<cr::simd::float1x4>(x)[0];
#else
return sin_remez_pade_fma_T8_8<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_fma_T8_8(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a4 = F(-3.594460980391885e-05f);
auto const b4 = F(1.4226233486298017e-08f);
auto const a3 = math::fma(a4, x2, F(0.004330928966087308f));
auto const b3 = math::fma(b4, x2, F(2.944016285723832e-06f));
auto const a2 = math::fma(a3, x2, F(-0.14056443866688645f));
auto const b2 = math::fma(b3, x2, F(0.0003479669660506762f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(0.026102227999780212f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_quart_fma_T8_8_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_quart_fma_T8_8<cr::simd::float1x4>(x)[0];
#else
return sin_quart_fma_T8_8<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_ends_corrected_quart_fma_T8_8(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a4 = F(-3.594460980420807e-05f);
auto const b4 = F(1.4226233486298017e-08f);
auto const a3 = math::fma(a4, x2, F(0.004330928966122157f));
auto const b3 = math::fma(b4, x2, F(2.944016285723832e-06f));
auto const a2 = math::fma(a3, x2, F(-0.1405644386680175f));
auto const b2 = math::fma(b3, x2, F(0.0003479669660506762f));
auto const a1 = math::fma(a2, x2, F(1.0000000000080465f));
auto const b1 = math::fma(b2, x2, F(0.026102227999780212f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_ends_corrected_quart_fma_T8_8_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_ends_corrected_quart_fma_T8_8<cr::simd::float1x4>(x)[0];
#else
return sin_ends_corrected_quart_fma_T8_8<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_half_fma_T8_8(in_t(F) x) {
using math = ApproxContext;
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a4 = F(-3.594460980391885e-05f);
auto const b4 = F(1.4226233486298017e-08f);
auto const a3 = math::fma(a4, x2, F(0.004330928966087308f));
auto const b3 = math::fma(b4, x2, F(2.944016285723832e-06f));
auto const a2 = math::fma(a3, x2, F(-0.14056443866688645f));
auto const b2 = math::fma(b3, x2, F(0.0003479669660506762f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(0.026102227999780212f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_half_fma_T8_8_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_half_fma_T8_8<cr::simd::float1x4>(x)[0];
#else
return sin_half_fma_T8_8<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_fma_T3_3(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(x, F(1.0f) / x, m);
auto const x2 = x * x;
auto const a2 = F(0.26666666666666666f);
auto const b1 = F(0.6f);
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return atan_fma_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_remez_fma_T3_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(x, F(1.0f) / x, m);
auto const a3 = F(-0.06525904357341908f);
auto const a2 = math::fma(a3, x, F(-0.1859857794577241f));
auto const a1 = math::fma(a2, x, F(1.0366429864285915f));
auto const a0 = (a1 * x);
return math::setSign(a - a0, x0);
}
inline static float atan_remez_fma_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_remez_fma_T3_0<cr::simd::float1x4>(x)[0];
#else
return atan_remez_fma_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_remez_pade_fma_T3_3(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(x, F(1.0f) / x, m);
auto const a3 = F(0.3620664286092128f);
auto const b3 = F(0.2105079040261948f);
auto const a2 = math::fma(a3, x, F(0.5332942131134467f));
auto const b2 = math::fma(b3, x, F(0.5878709951275725f));
auto const a1 = math::fma(a2, x, F(0.7061362173367334f));
auto const b1 = math::fma(b2, x, F(0.5346451963052182f));
auto const a0 = math::fma(a1, x, F(-4.438394457556827e-07f));
auto const b0 = math::fma(b1, x, F(0.7060645024362138f));
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_remez_pade_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_remez_pade_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return atan_remez_pade_fma_T3_3<float>(x);
#endif
}
