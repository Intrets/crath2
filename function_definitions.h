template <class F>
inline constexpr static F sin_unit1_remez_fma_ec_T3_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a3 = F(1.4236362171805503f);
auto const a2 = math::fma(a3, x, F(-5.300090052135266f));
auto const a1 = math::fma(a2, x, F(5.236045249460032f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_unit1_remez_fma_ec_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_fma_ec_T3_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_fma_ec_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_pade_fma_ec_T3_3(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a3 = F(-0.16726138320492476f);
auto const b3 = F(-0.7555154131241092f);
auto const a2 = math::fma(a3, x, F(0.48047133453522456f));
auto const b2 = math::fma(b3, x, F(1.7540636947644606f));
auto const a1 = math::fma(a2, x, F(-0.30522735503261195f));
auto const b1 = math::fma(b2, x, F(-1.0787321786910509f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.12296815261776972f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit1_remez_pade_fma_ec_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_pade_fma_ec_T3_3<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_pade_fma_ec_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_fma_ec_T3_3(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.25f);
x = math::abs(math::abs(x - quarter) - F(0.5f)) - quarter;
auto const x2 = x * x;
auto const a2 = F(-29.062039688138515f);
auto const b1 = F(1.9739208802178716f);
auto const a1 = math::fma(a2, x2, F(6.309857700563125f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit1_quart_fma_ec_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_quart_fma_ec_T3_3<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_fma_ec_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_fma_T3_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a3 = F(-0.9211639754637541f);
auto const a2 = math::fma(a3, x, F(3.4294238681352915f));
auto const a1 = math::fma(a2, x, F(-3.387983671315244f));
auto const a0 = math::fma(a1, x, F(0.842602271890585f));
return math::setSign(a0, half - x0 );
}
inline static float sin_unit1_remez_fma_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_fma_T3_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_fma_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_pade_fma_T3_3(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a3 = F(-0.19059036714297822f);
auto const b3 = F(-0.7555154131241092f);
auto const a2 = math::fma(a3, x, F(0.5474856556611862f));
auto const b2 = math::fma(b3, x, F(1.7540636947644606f));
auto const a1 = math::fma(a2, x, F(-0.34779930993678904f));
auto const b1 = math::fma(b2, x, F(-1.0787321786910509f));
auto const a0 = math::fma(a1, x, F(0.0036691514423376685f));
auto const b0 = math::fma(b1, x, F(0.12296815261776972f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit1_remez_pade_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_pade_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_pade_fma_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_fma_T3_3(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.25f);
x = math::abs(math::abs(x - quarter) - F(0.5f)) - quarter;
auto const x2 = x * x;
auto const a2 = F(-28.939191568279828f);
auto const b1 = F(1.9739208802178716f);
auto const a1 = math::fma(a2, x2, F(6.283185307179586f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit1_quart_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_quart_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_fma_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_fma_ec_T3_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a3 = F(2.3966700710573745f);
auto const a2 = math::fma(a3, x, F(-7.381951885064795f));
auto const a1 = math::fma(a2, x, F(5.091808424768054f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_unit2_remez_fma_ec_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_fma_ec_T3_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_fma_ec_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_pade_fma_ec_T3_3(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a3 = F(1.164752751852712f);
auto const b3 = F(-0.17984420943109963f);
auto const a2 = math::fma(a3, x, F(-3.321060810786972f));
auto const b2 = math::fma(b3, x, F(0.6665412605904542f));
auto const a1 = math::fma(a2, x, F(2.1569155551232484f));
auto const b1 = math::fma(b2, x, F(-0.8341949796540574f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.6667293697047729f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit2_remez_pade_fma_ec_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_pade_fma_ec_T3_3<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_pade_fma_ec_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_fma_ec_T3_3(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.5f);
x = math::abs(math::abs(x - quarter) - F(1.0f)) - quarter;
auto const x2 = x * x;
auto const a2 = F(-3.6327549610173144f);
auto const b1 = F(0.4934802200544679f);
auto const a1 = math::fma(a2, x2, F(3.1549288502815624f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit2_quart_fma_ec_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_quart_fma_ec_T3_3<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_fma_ec_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_fma_T3_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a3 = F(2.521543181673429f);
auto const a2 = math::fma(a3, x, F(-7.766571906584653f));
auto const a1 = math::fma(a2, x, F(5.357105665443863f));
auto const a0 = math::fma(a1, x, F(-0.09657758802712156f));
return math::setSign(a0, half - x0 );
}
inline static float sin_unit2_remez_fma_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_fma_T3_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_fma_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_pade_fma_T3_3(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a3 = F(1.1713184064875053f);
auto const b3 = F(-0.17984420943109963f);
auto const a2 = math::fma(a3, x, F(-3.3397814691156085f));
auto const b2 = math::fma(b3, x, F(0.6665412605904542f));
auto const a1 = math::fma(a2, x, F(2.169073983243574f));
auto const b1 = math::fma(b2, x, F(-0.8341949796540574f));
auto const a0 = math::fma(a1, x, F(-0.0008140398851814068f));
auto const b0 = math::fma(b1, x, F(0.6667293697047729f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit2_remez_pade_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_pade_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_pade_fma_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_fma_T3_3(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.5f);
x = math::abs(math::abs(x - quarter) - F(1.0f)) - quarter;
auto const x2 = x * x;
auto const a2 = F(-3.6173989460349785f);
auto const b1 = F(0.4934802200544679f);
auto const a1 = math::fma(a2, x2, F(3.141592653589793f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit2_quart_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_quart_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_fma_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_fma_ec_T3_0(in_t(F) x) {
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
inline static float sin_remez_fma_ec_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_fma_ec_T3_0<cr::simd::float1x4>(x)[0];
#else
return sin_remez_fma_ec_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_pade_fma_ec_T3_3(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a3 = F(-0.14417574619040624f);
auto const b3 = F(0.015601376105009744f);
auto const a2 = math::fma(a3, x, F(0.12482968295252826f));
auto const b2 = math::fma(b3, x, F(0.02345725428431092f));
auto const a1 = math::fma(a2, x, F(0.9881942369521276f));
auto const b1 = math::fma(b2, x, F(0.12404233176622557f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.9882713728578445f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_remez_pade_fma_ec_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_pade_fma_ec_T3_3<cr::simd::float1x4>(x)[0];
#else
return sin_remez_pade_fma_ec_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_fma_ec_T3_3(in_t(F) x) {
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
inline static float sin_quart_fma_ec_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_quart_fma_ec_T3_3<cr::simd::float1x4>(x)[0];
#else
return sin_quart_fma_ec_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_fma_T3_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a3 = F(-0.11250597409097034f);
auto const a2 = math::fma(a3, x, F(-0.07068967781829631f));
auto const a1 = math::fma(a2, x, F(1.0252562228861475f));
auto const a0 = math::fma(a1, x, F(-0.0013670794478662879f));
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
auto const a3 = F(-0.14417550437851037f);
auto const b3 = F(0.015601376105009744f);
auto const a2 = math::fma(a3, x, F(0.12482947358789452f));
auto const b2 = math::fma(b3, x, F(0.02345725428431092f));
auto const a1 = math::fma(a2, x, F(0.9881925795504617f));
auto const b1 = math::fma(b2, x, F(0.12404233176622557f));
auto const a0 = math::fma(a1, x, F(1.2751864820983174e-06f));
auto const b0 = math::fma(b1, x, F(0.9882713728578445f));
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
inline constexpr static F atan_remez_fma_ec_T3_0(in_t(F) x) {
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
inline static float atan_remez_fma_ec_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_remez_fma_ec_T3_0<cr::simd::float1x4>(x)[0];
#else
return atan_remez_fma_ec_T3_0<float>(x);
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
auto const a3 = F(0.3620761867994797f);
auto const b3 = F(0.21051446224837067f);
auto const a2 = math::fma(a3, x, F(0.5333011788215934f));
auto const b2 = math::fma(b3, x, F(0.5878773560934046f));
auto const a1 = math::fma(a2, x, F(0.7061330929729225f));
auto const b1 = math::fma(b2, x, F(0.5346527552980739f));
auto const a0 = math::fma(a1, x, F(-4.4728427838139784e-07f));
auto const b0 = math::fma(b1, x, F(0.7060613219532977f));
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_remez_pade_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_remez_pade_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return atan_remez_pade_fma_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(x, F(1.0f) / x, m);
auto const x2 = x * x;
auto const a2 = F(0.5238095238095238f);
auto const b2 = F(0.08571428571428572f);
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(0.8571428571428571f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return atan_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_remez_fma_ec_T4_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(x, F(1.0f) / x, m);
auto const a4 = F(0.13807028257241816f);
auto const a3 = math::fma(a4, x, F(-0.3379530786314648f));
auto const a2 = math::fma(a3, x, F(-0.018282199487032354f));
auto const a1 = math::fma(a2, x, F(1.0035631589435272f));
auto const a0 = (a1 * x);
return math::setSign(a - a0, x0);
}
inline static float atan_remez_fma_ec_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_remez_fma_ec_T4_0<cr::simd::float1x4>(x)[0];
#else
return atan_remez_fma_ec_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_remez_pade_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(x, F(1.0f) / x, m);
auto const a4 = F(0.2046467855323483f);
auto const b4 = F(0.13529855764302437f);
auto const a3 = math::fma(a4, x, F(0.5347471993515589f));
auto const b3 = math::fma(b4, x, F(0.3897203361959534f));
auto const a2 = math::fma(a3, x, F(0.5630504151304101f));
auto const b2 = math::fma(b3, x, F(0.7299405262964694f));
auto const a1 = math::fma(a2, x, F(0.5842916343462611f));
auto const b1 = math::fma(b2, x, F(0.5630147332767709f));
auto const a0 = math::fma(a1, x, F(3.6053671751813873e-09f));
auto const b0 = math::fma(b1, x, F(0.5842927777356312f));
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_remez_pade_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_remez_pade_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return atan_remez_pade_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_fma_ec_T4_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a4 = F(-25.493654743464035f);
auto const a3 = math::fma(a4, x, F(76.19729920328143f));
auto const a2 = math::fma(a3, x, F(-68.12615362248481f));
auto const a1 = math::fma(a2, x, F(16.667545560782735f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_unit1_remez_fma_ec_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_fma_ec_T4_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_fma_ec_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_pade_fma_ec_T4_4(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a4 = F(-1.7345393901787518f);
auto const b4 = F(0.37034966884654585f);
auto const a3 = math::fma(a4, x, F(5.203154957780472f));
auto const b3 = math::fma(b4, x, F(-1.1119566512746117f));
auto const a2 = math::fma(a3, x, F(-4.763216348167951f));
auto const b2 = math::fma(b3, x, F(1.3026117982918222f));
auto const a1 = math::fma(a2, x, F(1.291554742188563f));
auto const b1 = math::fma(b2, x, F(-0.7023486105542447f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.20981297503663418f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit1_remez_pade_fma_ec_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_pade_fma_ec_T4_4<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_pade_fma_ec_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_fma_ec_T4_4(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.25f);
x = math::abs(math::abs(x - quarter) - F(0.5f)) - quarter;
auto const x2 = x * x;
auto const a2 = F(-26.162369208985194f);
auto const b2 = F(2.9156462622422494f);
auto const a1 = math::fma(a2, x2, F(6.284966542353357f));
auto const b1 = math::fma(b2, x2, F(2.4170459757769853f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_unit1_quart_fma_ec_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_quart_fma_ec_T4_4<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_fma_ec_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_fma_T4_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a4 = F(-14.643998139383317f);
auto const a3 = math::fma(a4, x, F(43.769052298982764f));
auto const a2 = math::fma(a3, x, F(-39.132846072090956f));
auto const a1 = math::fma(a2, x, F(9.574127704964123f));
auto const a0 = math::fma(a1, x, F(0.30068132302763495f));
return math::setSign(a0, half - x0 );
}
inline static float sin_unit1_remez_fma_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_fma_T4_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_fma_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_pade_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a4 = F(-1.725683703095198f);
auto const b4 = F(0.37034966884654585f);
auto const a3 = math::fma(a4, x, F(5.176590261461528f));
auto const b3 = math::fma(b4, x, F(-1.1119566512746117f));
auto const a2 = math::fma(a3, x, F(-4.738897757463421f));
auto const b2 = math::fma(b3, x, F(1.3026117982918222f));
auto const a1 = math::fma(a2, x, F(1.2849607122617341f));
auto const b1 = math::fma(b2, x, F(-0.7023486105542447f));
auto const a0 = math::fma(a1, x, F(0.00030340996661650676f));
auto const b0 = math::fma(b1, x, F(0.20981297503663418f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit1_remez_pade_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_pade_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_pade_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.25f);
x = math::abs(math::abs(x - quarter) - F(0.5f)) - quarter;
auto const x2 = x * x;
auto const a2 = F(-26.154954478620255f);
auto const b2 = F(2.9156462622422494f);
auto const a1 = math::fma(a2, x2, F(6.283185307179586f));
auto const b1 = math::fma(b2, x2, F(2.4170459757769853f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_unit1_quart_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_quart_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_fma_ec_T4_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
