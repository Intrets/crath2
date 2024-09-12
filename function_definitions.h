template <class F>
inline constexpr static F sin_unit1_remez_fma_ec_T2_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a2 = F(-12.731265030987721f);
auto const a1 = math::fma(a2, x, F(7.18281625774693f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_unit1_remez_fma_ec_T2_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_fma_ec_T2_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_fma_ec_T2_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_pade_fma_ec_T2_2(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a2 = F(-3.7081872627977766f);
auto const b2 = F(1.3609763122131802f);
auto const a1 = math::fma(a2, x, F(2.0188015522431826f));
auto const b1 = math::fma(b2, x, F(-0.526536717083196f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.31951184389341f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit1_remez_pade_fma_ec_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_pade_fma_ec_T2_2<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_pade_fma_ec_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_fma_ec_T2_2(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.25f);
x = math::abs(math::abs(x - quarter) - F(0.5f)) - quarter;
auto const x2 = x * x;
auto const a1 = F(5.644934066848227f);
auto const b1 = F(6.579736267392906f);
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_unit1_quart_fma_ec_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_quart_fma_ec_T2_2<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_fma_ec_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_fma_T2_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a2 = F(-13.084301757620732f);
auto const a1 = math::fma(a2, x, F(7.381995045830381f));
auto const a0 = math::fma(a1, x, F(-0.013864950803149768f));
return math::setSign(a0, half - x0 );
}
inline static float sin_unit1_remez_fma_T2_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_fma_T2_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_fma_T2_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_pade_fma_T2_2(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a2 = F(-3.709810204493062f);
auto const b2 = F(1.3609763122131802f);
auto const a1 = math::fma(a2, x, F(2.0196851098904767f));
auto const b1 = math::fma(b2, x, F(-0.526536717083196f));
auto const a0 = math::fma(a1, x, F(-1.864945053915537e-05f));
auto const b0 = math::fma(b1, x, F(0.31951184389341f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit1_remez_pade_fma_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_pade_fma_T2_2<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_pade_fma_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_fma_T2_2(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.25f);
x = math::abs(math::abs(x - quarter) - F(0.5f)) - quarter;
auto const x2 = x * x;
auto const a1 = F(6.283185307179586f);
auto const b1 = F(6.579736267392906f);
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_unit1_quart_fma_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_quart_fma_T2_2<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_fma_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_fma_ec_T2_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a2 = F(-3.1828162577469303f);
auto const a1 = math::fma(a2, x, F(3.591408128873465f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_unit2_remez_fma_ec_T2_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_fma_ec_T2_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_fma_ec_T2_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_pade_fma_ec_T2_2(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a2 = F(-1.8933695550972602f);
auto const b2 = F(0.6948948794640387f);
auto const a1 = math::fma(a2, x, F(2.061553227861921f));
auto const b1 = math::fma(b2, x, F(-0.5376841099546898f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.6525525602679807f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit2_remez_pade_fma_ec_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_pade_fma_ec_T2_2<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_pade_fma_ec_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_fma_ec_T2_2(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.5f);
x = math::abs(math::abs(x - quarter) - F(1.0f)) - quarter;
auto const x2 = x * x;
auto const a1 = F(2.8224670334241133f);
auto const b1 = F(1.6449340668482264f);
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_unit2_quart_fma_ec_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_quart_fma_ec_T2_2<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_fma_ec_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_fma_T2_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a2 = F(-3.271075439405183f);
auto const a1 = math::fma(a2, x, F(3.6909975229151906f));
auto const a0 = math::fma(a1, x, F(-0.013864950803149768f));
return math::setSign(a0, half - x0 );
}
inline static float sin_unit2_remez_fma_T2_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_fma_T2_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_fma_T2_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_pade_fma_T2_2(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a2 = F(-1.8942178716338633f);
auto const b2 = F(0.6948948794640387f);
auto const a1 = math::fma(a2, x, F(2.062476898409794f));
auto const b1 = math::fma(b2, x, F(-0.5376841099546898f));
auto const a0 = math::fma(a1, x, F(-7.778988218730588e-05f));
auto const b0 = math::fma(b1, x, F(0.6525525602679807f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit2_remez_pade_fma_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_pade_fma_T2_2<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_pade_fma_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_fma_T2_2(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.5f);
x = math::abs(math::abs(x - quarter) - F(1.0f)) - quarter;
auto const x2 = x * x;
auto const a1 = F(3.141592653589793f);
auto const b1 = F(1.6449340668482264f);
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_unit2_quart_fma_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_quart_fma_T2_2<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_fma_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_fma_ec_T2_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a2 = F(-0.32248671055099504f);
auto const a1 = math::fma(a2, x, F(1.1431807127412532f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_remez_fma_ec_T2_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_fma_ec_T2_0<cr::simd::float1x4>(x)[0];
#else
return sin_remez_fma_ec_T2_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_pade_fma_ec_T2_2(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a2 = F(-0.2789366953171604f);
auto const b2 = F(0.10237284191130874f);
auto const a1 = math::fma(a2, x, F(0.9541401955377196f));
auto const b1 = math::fma(b2, x, F(-0.24885290962310302f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.9488135790443456f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_remez_pade_fma_ec_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_pade_fma_ec_T2_2<cr::simd::float1x4>(x)[0];
#else
return sin_remez_pade_fma_ec_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_fma_ec_T2_2(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a1 = F(0.8984191601667307f);
auto const b1 = F(0.16666666666666666f);
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_quart_fma_ec_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_quart_fma_ec_T2_2<cr::simd::float1x4>(x)[0];
#else
return sin_quart_fma_ec_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_fma_T2_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a2 = F(-0.3314292353039133f);
auto const a1 = math::fma(a2, x, F(1.1748810014237876f));
auto const a0 = math::fma(a1, x, F(-0.013864950803149768f));
return math::setSign(a0, half - x0 );
}
inline static float sin_remez_fma_T2_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_fma_T2_0<cr::simd::float1x4>(x)[0];
#else
return sin_remez_fma_T2_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_pade_fma_T2_2(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a2 = F(-0.2790642477526072f);
auto const b2 = F(0.10237284191130874f);
auto const a1 = math::fma(a2, x, F(0.9545765056673715f));
auto const b1 = math::fma(b2, x, F(-0.24885290962310302f));
auto const a0 = math::fma(a1, x, F(-0.00016445758211553816f));
auto const b0 = math::fma(b1, x, F(0.9488135790443456f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_remez_pade_fma_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_pade_fma_T2_2<cr::simd::float1x4>(x)[0];
#else
return sin_remez_pade_fma_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_fma_T2_2(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a1 = F(1.0f);
auto const b1 = F(0.16666666666666666f);
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_quart_fma_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_quart_fma_T2_2<cr::simd::float1x4>(x)[0];
#else
return sin_quart_fma_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_fma_ec_T3_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a3 = F(-27.90713088681016f);
auto const a2 = math::fma(a3, x, F(-2.790716621228182f));
auto const a1 = math::fma(a2, x, F(6.441874835732681f));
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
auto const a3 = F(-24.64223391055914f);
auto const b3 = F(2.6665767055266403f);
auto const a2 = math::fma(a3, x, F(3.395714607818712f));
auto const b2 = math::fma(b3, x, F(0.6380772870209246f));
auto const a1 = math::fma(a2, x, F(4.278272607674573f));
auto const b1 = math::fma(b2, x, F(0.5370358484105082f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.6809613564895377f));
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
auto const a3 = F(-27.907130886810158f);
auto const a2 = math::fma(a3, x, F(-2.7907166212281815f));
auto const a1 = math::fma(a2, x, F(6.44187483573268f));
auto const a0 = math::fma(a1, x, F(-0.0013670794478662853f));
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
auto const a3 = F(-24.642190326712225f);
auto const b3 = F(2.6665767055266403f);
auto const a2 = math::fma(a3, x, F(3.395708601938476f));
auto const b2 = math::fma(b3, x, F(0.6380772870209246f));
auto const a1 = math::fma(a2, x, F(4.27826504084524f));
auto const b1 = math::fma(b2, x, F(0.5370358484105082f));
auto const a0 = math::fma(a1, x, F(6.053467999631444e-07f));
auto const b0 = math::fma(b1, x, F(0.6809613564895377f));
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
auto const a3 = F(-3.4883913608512693f);
auto const a2 = math::fma(a3, x, F(-0.6976791553070457f));
auto const a1 = math::fma(a2, x, F(3.2209374178663404f));
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
auto const a3 = F(-4.049157140377395f);
auto const b3 = F(0.43816600415806806f);
auto const a2 = math::fma(a3, x, F(1.1159526564891857f));
auto const b2 = math::fma(b3, x, F(0.20969490516508418f));
auto const a1 = math::fma(a2, x, F(2.8119851908875995f));
auto const b1 = math::fma(b2, x, F(0.3529781855808689f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.8951525474174579f));
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
auto const a3 = F(-3.4883913608512693f);
auto const a2 = math::fma(a3, x, F(-0.6976791553070457f));
auto const a1 = math::fma(a2, x, F(3.2209374178663404f));
auto const a0 = math::fma(a1, x, F(-0.0013670794478662872f));
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
auto const a3 = F(-4.049150251238691f);
auto const b3 = F(0.43816600415806806f);
auto const a2 = math::fma(a3, x, F(1.1159507578341397f));
auto const b2 = math::fma(b3, x, F(0.20969490516508418f));
auto const a1 = math::fma(a2, x, F(2.8119804066435354f));
auto const b1 = math::fma(b2, x, F(0.3529781855808689f));
auto const a0 = math::fma(a1, x, F(1.0460523565436268e-06f));
auto const b0 = math::fma(b1, x, F(0.8951525474174579f));
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
auto const a3 = F(-0.1441764321225367f);
auto const b3 = F(0.015601571289543207f);
auto const a2 = math::fma(a3, x, F(0.12483181962962371f));
auto const b2 = math::fma(b3, x, F(0.023456727000211532f));
auto const a1 = math::fma(a2, x, F(0.9881944939209818f));
auto const b1 = math::fma(b2, x, F(0.12404443136757155f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.9882716364998942f));
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
auto const a3 = F(-0.14417619104188775f);
auto const b3 = F(0.015601571289543207f);
auto const a2 = math::fma(a3, x, F(0.1248316108955356f));
auto const b2 = math::fma(b3, x, F(0.023456727000211532f));
auto const a1 = math::fma(a2, x, F(0.9881928415387833f));
auto const b1 = math::fma(b2, x, F(0.12404443136757155f));
auto const a0 = math::fma(a1, x, F(1.2750052928490735e-06f));
auto const b0 = math::fma(b1, x, F(0.9882716364998942f));
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
inline constexpr static F sin_unit1_remez_fma_ec_T4_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a4 = F(44.302222982456215f);
auto const a3 = math::fma(a4, x, F(-50.28212147755725f));
auto const a2 = math::fma(a3, x, F(0.753443785161698f));
auto const a1 = math::fma(a2, x, F(6.262049411956025f));
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
auto const a4 = F(8.776529393626818f);
auto const b4 = F(0.6686297827661395f);
auto const a3 = math::fma(a4, x, F(-9.65479225216267f));
auto const b3 = math::fma(b4, x, F(-0.5106399198683435f));
auto const a2 = math::fma(a3, x, F(-1.8167441676052412f));
auto const b2 = math::fma(b3, x, F(0.7910703805301001f));
auto const a1 = math::fma(a2, x, F(2.2225422763228315f));
auto const b1 = math::fma(b2, x, F(-0.2891495148502917f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.3537286411976476f));
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
auto const a4 = F(44.292678176619404f);
auto const a3 = math::fma(a4, x, F(-50.271288317181615f));
auto const a2 = math::fma(a3, x, F(0.7532814575367125f));
auto const a1 = math::fma(a2, x, F(6.260700268690657f));
auto const a0 = math::fma(a1, x, F(0.00010772377991723675f));
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
auto const a4 = F(8.776529365989134f);
auto const b4 = F(0.6686297827661395f);
auto const a3 = math::fma(a4, x, F(-9.654792221759296f));
auto const b3 = math::fma(b4, x, F(-0.5106399198683435f));
auto const a2 = math::fma(a3, x, F(-1.8167441618842324f));
auto const b2 = math::fma(b3, x, F(0.7910703805301001f));
auto const a1 = math::fma(a2, x, F(2.222542269323946f));
auto const b1 = math::fma(b2, x, F(-0.2891495148502917f));
auto const a0 = math::fma(a1, x, F(1.7877606565463105e-10f));
auto const b0 = math::fma(b1, x, F(0.3537286411976476f));
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
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a4 = F(2.768888936403679f);
auto const a3 = math::fma(a4, x, F(-6.2852651846948415f));
auto const a2 = math::fma(a3, x, F(0.1883609462904881f));
auto const a1 = math::fma(a2, x, F(3.1310247059780063f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_unit2_remez_fma_ec_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_fma_ec_T4_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_fma_ec_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_pade_fma_ec_T4_4(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a4 = F(1.1713697547645263f);
auto const b4 = F(0.08923946273894376f);
auto const a3 = math::fma(a4, x, F(-2.577176322636127f));
auto const b3 = math::fma(b4, x, F(-0.1363063128591918f));
auto const a2 = math::fma(a3, x, F(-0.9698955487529041f));
auto const b2 = math::fma(b3, x, F(0.4223245495459586f));
auto const a1 = math::fma(a2, x, F(2.3730736904091705f));
auto const b1 = math::fma(b2, x, F(-0.30873342808113025f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.7553729266999168f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit2_remez_pade_fma_ec_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_pade_fma_ec_T4_4<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_pade_fma_ec_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_fma_ec_T4_4(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.5f);
x = math::abs(math::abs(x - quarter) - F(1.0f)) - quarter;
auto const x2 = x * x;
auto const a2 = F(-3.270296151123149f);
auto const b2 = F(0.1822278913901406f);
auto const a1 = math::fma(a2, x2, F(3.1424832711766784f));
auto const b1 = math::fma(b2, x2, F(0.6042614939442466f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_unit2_quart_fma_ec_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_quart_fma_ec_T4_4<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_fma_ec_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_fma_T4_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a4 = F(2.7682923860388784f);
auto const a3 = math::fma(a4, x, F(-6.283911039647887f));
auto const a2 = math::fma(a3, x, F(0.18832036438424174f));
auto const a1 = math::fma(a2, x, F(3.1303501343453224f));
auto const a0 = math::fma(a1, x, F(0.00010772377991722722f));
return math::setSign(a0, half - x0 );
}
inline static float sin_unit2_remez_fma_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_fma_T4_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_fma_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_pade_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a4 = F(1.1713697510175436f);
auto const b4 = F(0.08923946273894376f);
auto const a3 = math::fma(a4, x, F(-2.577176314392244f));
auto const b3 = math::fma(b4, x, F(-0.1363063128591918f));
auto const a2 = math::fma(a3, x, F(-0.9698955456503979f));
auto const b2 = math::fma(b3, x, F(0.4223245495459586f));
auto const a1 = math::fma(a2, x, F(2.373073682818172f));
auto const b1 = math::fma(b2, x, F(-0.30873342808113025f));
auto const a0 = math::fma(a1, x, F(8.152555012597619e-10f));
auto const b0 = math::fma(b1, x, F(0.7553729266999168f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit2_remez_pade_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_pade_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_pade_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.5f);
x = math::abs(math::abs(x - quarter) - F(1.0f)) - quarter;
auto const x2 = x * x;
auto const a2 = F(-3.269369309827532f);
auto const b2 = F(0.1822278913901406f);
auto const a1 = math::fma(a2, x2, F(3.141592653589793f));
auto const b1 = math::fma(b2, x2, F(0.6042614939442466f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_unit2_quart_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_quart_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_fma_ec_T4_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a4 = F(0.02842536468631198f);
auto const a3 = math::fma(a4, x, F(-0.20270944652597572f));
auto const a2 = math::fma(a3, x, F(0.019084954030143125f));
auto const a1 = math::fma(a2, x, F(0.9966361177984959f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_remez_fma_ec_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_fma_ec_T4_0<cr::simd::float1x4>(x)[0];
#else
return sin_remez_fma_ec_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_pade_fma_ec_T4_4(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a4 = F(0.015474301473310699f);
auto const b4 = F(0.0011788920845260422f);
auto const a3 = math::fma(a4, x, F(-0.10695745738757091f));
auto const b3 = math::fma(b4, x, F(-0.005656957413676145f));
auto const a2 = math::fma(a3, x, F(-0.12645667681469216f));
auto const b2 = math::fma(b3, x, F(0.055063415720432815f));
auto const a1 = math::fma(a2, x, F(0.9720260655304644f));
auto const b1 = math::fma(b2, x, F(-0.12645916983383726f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.9720262076080863f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_remez_pade_fma_ec_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_pade_fma_ec_T4_4<cr::simd::float1x4>(x)[0];
#else
return sin_remez_pade_fma_ec_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_fma_ec_T4_4(in_t(F) x) {
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
inline static float sin_quart_fma_ec_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_quart_fma_ec_T4_4<cr::simd::float1x4>(x)[0];
#else
return sin_quart_fma_ec_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_fma_T4_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a4 = F(0.028419240510852914f);
auto const a3 = math::fma(a4, x, F(-0.20266577327036633f));
auto const a2 = math::fma(a3, x, F(0.01908084222336778f));
auto const a1 = math::fma(a2, x, F(0.9964213949788734f));
auto const a0 = math::fma(a1, x, F(0.00010772377991722864f));
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
auto const a4 = F(0.015474301423396238f);
auto const b4 = F(0.0011788920845260422f);
auto const a3 = math::fma(a4, x, F(-0.10695745704256511f));
auto const b3 = math::fma(b4, x, F(-0.005656957413676145f));
auto const a2 = math::fma(a3, x, F(-0.12645667640678898f));
auto const b2 = math::fma(b3, x, F(0.055063415720432815f));
auto const a1 = math::fma(a2, x, F(0.9720260623950624f));
auto const b1 = math::fma(b2, x, F(-0.12645916983383726f));
auto const a0 = math::fma(a1, x, F(1.3499801149662813e-09f));
auto const b0 = math::fma(b1, x, F(0.9720262076080863f));
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
inline constexpr static F sin_unit1_remez_fma_ec_T5_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a5 = F(56.03072613428438f);
auto const a4 = math::fma(a5, x, F(9.503049620762635f));
auto const a3 = math::fma(a4, x, F(-42.72388724815246f));
auto const a2 = math::fma(a3, x, F(0.08660444310140342f));
auto const a1 = math::fma(a2, x, F(6.281236667947713f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_unit1_remez_fma_ec_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_fma_ec_T5_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_fma_ec_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_pade_fma_ec_T5_5(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a5 = F(24.033797816893387f);
auto const b5 = F(0.5314381070167752f);
auto const a4 = math::fma(a5, x, F(-6.1792870775361175f));
auto const b4 = math::fma(b5, x, F(0.17092268022526289f));
auto const a3 = math::fma(a4, x, F(-21.161564210756396f));
auto const b3 = math::fma(b4, x, F(0.5328740837389988f));
auto const a2 = math::fma(a3, x, F(1.447914349100732f));
auto const b2 = math::fma(b3, x, F(0.6503769182262894f));
auto const a1 = math::fma(a2, x, F(3.8372388830806767f));
auto const b1 = math::fma(b2, x, F(0.23044276933548227f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.6107155358023817f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit1_remez_pade_fma_ec_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_pade_fma_ec_T5_5<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_pade_fma_ec_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_fma_ec_T5_5(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.25f);
x = math::abs(math::abs(x - quarter) - F(0.5f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(32.44181620571074f);
auto const b2 = F(0.7028072946176219f);
auto const a2 = math::fma(a3, x2, F(-33.19853993687724f));
auto const b1 = math::fma(b2, x2, F(1.2960086587289052f));
auto const a1 = math::fma(a2, x2, F(6.283166430161897f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit1_quart_fma_ec_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_quart_fma_ec_T5_5<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_fma_ec_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_fma_T5_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a5 = F(56.03072613428438f);
auto const a4 = math::fma(a5, x, F(9.503049620762635f));
auto const a3 = math::fma(a4, x, F(-42.72388724815246f));
auto const a2 = math::fma(a3, x, F(0.08660444310140342f));
auto const a1 = math::fma(a2, x, F(6.281236667947713f));
auto const a0 = math::fma(a1, x, F(7.068518675479387e-06f));
return math::setSign(a0, half - x0 );
}
inline static float sin_unit1_remez_fma_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_fma_T5_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_fma_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_pade_fma_T5_5(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a5 = F(24.033797816964757f);
auto const b5 = F(0.5314381070167752f);
auto const a4 = math::fma(a5, x, F(-6.179287077554467f));
auto const b4 = math::fma(b5, x, F(0.17092268022526289f));
auto const a3 = math::fma(a4, x, F(-21.161564210819236f));
auto const b3 = math::fma(b4, x, F(0.5328740837389988f));
auto const a2 = math::fma(a3, x, F(1.4479143491050317f));
auto const b2 = math::fma(b3, x, F(0.6503769182262894f));
auto const a1 = math::fma(a2, x, F(3.8372388830920716f));
auto const b1 = math::fma(b2, x, F(0.23044276933548227f));
auto const a0 = math::fma(a1, x, F(-5.324453116093476e-13f));
auto const b0 = math::fma(b1, x, F(0.6107155358023817f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit1_remez_pade_fma_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_pade_fma_T5_5<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_pade_fma_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_fma_T5_5(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.25f);
x = math::abs(math::abs(x - quarter) - F(0.5f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(32.441913673244855f);
auto const b2 = F(0.7028072946176219f);
auto const a2 = math::fma(a3, x2, F(-33.19863967789678f));
auto const b1 = math::fma(b2, x2, F(1.2960086587289052f));
auto const a1 = math::fma(a2, x2, F(6.283185307179586f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit1_quart_fma_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_quart_fma_T5_5<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_fma_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_fma_ec_T5_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a5 = F(1.750960191696539f);
auto const a4 = math::fma(a5, x, F(0.5939406012974779f));
auto const a3 = math::fma(a4, x, F(-5.340485906018979f));
auto const a2 = math::fma(a3, x, F(0.021651110775338198f));
auto const a1 = math::fma(a2, x, F(3.1406183339738574f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_unit2_remez_fma_ec_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_fma_ec_T5_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_fma_ec_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_pade_fma_ec_T5_5(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a5 = F(1.0878939399786924f);
auto const b5 = F(0.024411179369205904f);
auto const a4 = math::fma(a5, x, F(-0.5715469149061349f));
auto const b4 = math::fma(b5, x, F(0.014528673718442008f));
auto const a3 = math::fma(a4, x, F(-3.8114471238573846f));
auto const b3 = math::fma(b4, x, F(0.09839515340173187f));
auto const a2 = math::fma(a3, x, F(0.5353474478551439f));
auto const b2 = math::fma(b3, x, F(0.23196561536112245f));
auto const a1 = math::fma(a2, x, F(2.76010572788279f));
auto const b1 = math::fma(b2, x, F(0.17040641942499632f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.878568939675023f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit2_remez_pade_fma_ec_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_pade_fma_ec_T5_5<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_pade_fma_ec_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_fma_ec_T5_5(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.5f);
x = math::abs(math::abs(x - quarter) - F(1.0f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(1.0138067564284605f);
auto const b2 = F(0.04392545591360137f);
auto const a2 = math::fma(a3, x2, F(-4.149817492109655f));
auto const b1 = math::fma(b2, x2, F(0.3240021646822263f));
auto const a1 = math::fma(a2, x2, F(3.1415832150809484f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit2_quart_fma_ec_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_quart_fma_ec_T5_5<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_fma_ec_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_fma_T5_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a5 = F(1.750960191696539f);
auto const a4 = math::fma(a5, x, F(0.5939406012974779f));
auto const a3 = math::fma(a4, x, F(-5.340485906018979f));
auto const a2 = math::fma(a3, x, F(0.021651110775338198f));
auto const a1 = math::fma(a2, x, F(3.1406183339738574f));
auto const a0 = math::fma(a1, x, F(7.068518675469178e-06f));
return math::setSign(a0, half - x0 );
}
inline static float sin_unit2_remez_fma_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_fma_T5_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_fma_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_pade_fma_T5_5(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a5 = F(1.087893939984064f);
auto const b5 = F(0.024411179369205904f);
auto const a4 = math::fma(a5, x, F(-0.5715469149089568f));
auto const b4 = math::fma(b5, x, F(0.014528673718442008f));
auto const a3 = math::fma(a4, x, F(-3.8114471238762033f));
auto const b3 = math::fma(b4, x, F(0.09839515340173187f));
auto const a2 = math::fma(a3, x, F(0.5353474478577871f));
auto const b2 = math::fma(b3, x, F(0.23196561536112245f));
auto const a1 = math::fma(a2, x, F(2.7601057278964176f));
auto const b1 = math::fma(b2, x, F(0.17040641942499632f));
auto const a0 = math::fma(a1, x, F(-2.4483556833043144e-12f));
auto const b0 = math::fma(b1, x, F(0.878568939675023f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit2_remez_pade_fma_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_pade_fma_T5_5<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_pade_fma_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_fma_T5_5(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.5f);
x = math::abs(math::abs(x - quarter) - F(1.0f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(1.0138098022889017f);
auto const b2 = F(0.04392545591360137f);
auto const a2 = math::fma(a3, x2, F(-4.149829959737097f));
auto const b1 = math::fma(b2, x2, F(0.3240021646822263f));
auto const a1 = math::fma(a2, x2, F(3.141592653589793f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit2_quart_fma_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_quart_fma_T5_5<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_fma_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_fma_ec_T5_0(in_t(F) x) {
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
inline static float sin_remez_fma_ec_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_fma_ec_T5_0<cr::simd::float1x4>(x)[0];
#else
return sin_remez_fma_ec_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_pade_fma_ec_T5_5(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a5 = F(0.003979732084656471f);
auto const b5 = F(8.887406078484484e-05f);
auto const a4 = math::fma(a5, x, F(-0.006508045201536286f));
auto const b4 = math::fma(b5, x, F(0.00017166309375498981f));
auto const a3 = math::fma(a4, x, F(-0.137951999426406f));
auto const b3 = math::fma(b4, x, F(0.003524489315696567f));
auto const a2 = math::fma(a3, x, F(0.0601919300182939f));
auto const b2 = math::fma(b3, x, F(0.026495847188465857f));
auto const a1 = math::fma(a2, x, F(0.9866877031184441f));
auto const b1 = math::fma(b2, x, F(0.0601919400722258f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.9866877027456089f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_remez_pade_fma_ec_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_pade_fma_ec_T5_5<cr::simd::float1x4>(x)[0];
#else
return sin_remez_pade_fma_ec_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_fma_ec_T5_5(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(0.0033128808597388012f);
auto const b2 = F(0.00045093795093795094f);
auto const a2 = math::fma(a3, x2, F(-0.13383798173826808f));
auto const b1 = math::fma(b2, x2, F(0.03282828282828283f));
auto const a1 = math::fma(a2, x2, F(0.9999969956293239f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_quart_fma_ec_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_quart_fma_ec_T5_5<cr::simd::float1x4>(x)[0];
#else
return sin_quart_fma_ec_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_fma_T5_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a5 = F(0.005721724054858884f);
auto const a4 = math::fma(a5, x, F(0.006097383673259585f));
auto const a3 = math::fma(a4, x, F(-0.17223886508799158f));
auto const a2 = math::fma(a3, x, F(0.0021937161709305124f));
auto const a1 = math::fma(a2, x, F(0.9996898644339445f));
auto const a0 = math::fma(a1, x, F(7.068518675477414e-06f));
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
auto const a5 = F(0.003979732084670587f);
auto const b5 = F(8.887406078484484e-05f);
auto const a4 = math::fma(a5, x, F(-0.00650804520155937f));
auto const b4 = math::fma(b5, x, F(0.00017166309375498981f));
auto const a3 = math::fma(a4, x, F(-0.13795199942689534f));
auto const b3 = math::fma(b4, x, F(0.003524489315696567f));
auto const a2 = math::fma(a3, x, F(0.0601919300185074f));
auto const b2 = math::fma(b3, x, F(0.026495847188465857f));
auto const a1 = math::fma(a2, x, F(0.986687703121944f));
auto const b1 = math::fma(b2, x, F(0.0601919400722258f));
auto const a0 = math::fma(a1, x, F(-2.280475720282904e-12f));
auto const b0 = math::fma(b1, x, F(0.9866877027456089f));
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
inline constexpr static F sin_unit1_remez_fma_ec_T6_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a6 = F(-58.94609377686145f);
auto const a5 = math::fma(a6, x, F(100.44722366364346f));
auto const a4 = math::fma(a5, x, F(-3.061613950005718f));
auto const a3 = math::fma(a4, x, F(-41.083065351727626f));
auto const a2 = math::fma(a3, x, F(-0.01047198045368326f));
auto const a1 = math::fma(a2, x, F(6.2833398748330955f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_unit1_remez_fma_ec_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_fma_ec_T6_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_fma_ec_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_pade_fma_ec_T6_6(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a6 = F(-8.5827448407709f);
auto const b6 = F(0.13424185758967763f);
auto const a5 = math::fma(a6, x, F(14.117968930757586f));
auto const b5 = math::fma(b6, x, F(-0.15510680943012592f));
auto const a4 = math::fma(a5, x, F(8.489332193598878f));
auto const b4 = math::fma(b5, x, F(0.43493763732831403f));
auto const a3 = math::fma(a4, x, F(-15.313869445230493f));
auto const b3 = math::fma(b4, x, F(-0.3161675393253878f));
auto const a2 = math::fma(a3, x, F(-1.592141723126324f));
auto const b2 = math::fma(b3, x, F(0.651131642067846f));
auto const a1 = math::fma(a2, x, F(2.949213988285514f));
auto const b1 = math::fma(b2, x, F(-0.25339722528761893f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.46938198447118495f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit1_remez_pade_fma_ec_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_pade_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_pade_fma_ec_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_fma_ec_T6_6(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.25f);
x = math::abs(math::abs(x - quarter) - F(0.5f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(28.43370232347889f);
auto const b3 = F(0.4468185499096844f);
auto const a2 = math::fma(a3, x2, F(-32.23574770830088f));
auto const b2 = math::fma(b3, x2, F(1.0732160756647304f));
auto const a1 = math::fma(a2, x2, F(6.283184730635542f));
auto const b1 = math::fma(b2, x2, F(1.4492572045816738f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_unit1_quart_fma_ec_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_quart_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_fma_ec_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_fma_T6_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a6 = F(-58.9461406209653f);
auto const a5 = math::fma(a6, x, F(100.44730348844396f));
auto const a4 = math::fma(a5, x, F(-3.0616163830517884f));
auto const a3 = math::fma(a4, x, F(-41.08309800019094f));
auto const a2 = math::fma(a3, x, F(-0.010471988775702726f));
auto const a1 = math::fma(a2, x, F(6.283344868165253f));
auto const a0 = math::fma(a1, x, F(-3.973469728241433e-07f));
return math::setSign(a0, half - x0 );
}
inline static float sin_unit1_remez_fma_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_fma_T6_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_fma_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_pade_fma_T6_6(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a6 = F(-8.582744840770914f);
auto const b6 = F(0.13424185758967763f);
auto const a5 = math::fma(a6, x, F(14.117968930757609f));
auto const b5 = math::fma(b6, x, F(-0.15510680943012592f));
auto const a4 = math::fma(a5, x, F(8.489332193598893f));
auto const b4 = math::fma(b5, x, F(0.43493763732831403f));
auto const a3 = math::fma(a4, x, F(-15.313869445230518f));
auto const b3 = math::fma(b4, x, F(-0.3161675393253878f));
auto const a2 = math::fma(a3, x, F(-1.5921417231263266f));
auto const b2 = math::fma(b3, x, F(0.651131642067846f));
auto const a1 = math::fma(a2, x, F(2.949213988285519f));
auto const b1 = math::fma(b2, x, F(-0.25339722528761893f));
auto const a0 = math::fma(a1, x, F(-1.7939683026081166e-16f));
auto const b0 = math::fma(b1, x, F(0.46938198447118495f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit1_remez_pade_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_pade_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_pade_fma_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_fma_T6_6(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.25f);
x = math::abs(math::abs(x - quarter) - F(0.5f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(28.433704932550953f);
auto const b3 = F(0.4468185499096844f);
auto const a2 = math::fma(a3, x2, F(-32.23575066624802f));
auto const b2 = math::fma(b3, x2, F(1.0732160756647304f));
auto const a1 = math::fma(a2, x2, F(6.283185307179586f));
auto const b1 = math::fma(b2, x2, F(1.4492572045816738f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_unit1_quart_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_quart_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_fma_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_fma_ec_T6_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a6 = F(-0.9210327152988349f);
auto const a5 = math::fma(a6, x, F(3.1389757395402316f));
auto const a4 = math::fma(a5, x, F(-0.19135087190336136f));
auto const a3 = math::fma(a4, x, F(-5.13538316895882f));
auto const a2 = math::fma(a3, x, F(-0.0026179951142792602f));
auto const a1 = math::fma(a2, x, F(3.141669937416589f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_unit2_remez_fma_ec_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_fma_ec_T6_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_fma_ec_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_pade_fma_ec_T6_6(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a6 = F(-0.235851616761873f);
auto const b6 = F(0.0038050355553849256f);
auto const a5 = math::fma(a6, x, F(0.7834193519999778f));
auto const b5 = math::fma(b6, x, F(-0.008614445220771127f));
auto const a4 = math::fma(a5, x, F(0.9349921301296156f));
auto const b4 = math::fma(b5, x, F(0.0486882565201677f));
auto const a3 = math::fma(a4, x, F(-3.40532386756453f));
auto const b3 = math::fma(b4, x, F(-0.06983558715253932f));
auto const a2 = math::fma(a3, x, F(-0.7017832557088954f));
auto const b2 = math::fma(b3, x, F(0.2902639615404736f));
auto const a1 = math::fma(a2, x, F(2.62455200320566f));
auto const b1 = math::fma(b2, x, F(-0.22338454822674322f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.8354208494236425f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit2_remez_pade_fma_ec_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_pade_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_pade_fma_ec_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_fma_ec_T6_6(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.5f);
x = math::abs(math::abs(x - quarter) - F(1.0f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(0.8885531976087148f);
auto const b3 = F(0.006981539842338819f);
auto const a2 = math::fma(a3, x2, F(-4.029468463537608f));
auto const b2 = math::fma(b3, x2, F(0.06707600472904571f));
auto const a1 = math::fma(a2, x2, F(3.1415923653177704f));
auto const b1 = math::fma(b2, x2, F(0.3623143011454184f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_unit2_quart_fma_ec_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_quart_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_fma_ec_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_fma_T6_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a6 = F(-0.921033447237958f);
auto const a5 = math::fma(a6, x, F(3.1389782340652492f));
auto const a4 = math::fma(a5, x, F(-0.19135102396874087f));
auto const a3 = math::fma(a4, x, F(-5.135387250016736f));
auto const a2 = math::fma(a3, x, F(-0.002617997194784129f));
auto const a1 = math::fma(a2, x, F(3.141672434082669f));
auto const a0 = math::fma(a1, x, F(-3.9734697309065627e-07f));
return math::setSign(a0, half - x0 );
}
inline static float sin_unit2_remez_fma_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_fma_T6_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_fma_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_pade_fma_T6_6(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a6 = F(-0.23585161676187347f);
auto const b6 = F(0.0038050355553849256f);
auto const a5 = math::fma(a6, x, F(0.7834193519999794f));
auto const b5 = math::fma(b6, x, F(-0.008614445220771127f));
auto const a4 = math::fma(a5, x, F(0.9349921301296175f));
auto const b4 = math::fma(b5, x, F(0.0486882565201677f));
auto const a3 = math::fma(a4, x, F(-3.4053238675645368f));
auto const b3 = math::fma(b4, x, F(-0.06983558715253932f));
auto const a2 = math::fma(a3, x, F(-0.7017832557088968f));
auto const b2 = math::fma(b3, x, F(0.2902639615404736f));
auto const a1 = math::fma(a2, x, F(2.6245520032056655f));
auto const b1 = math::fma(b2, x, F(-0.22338454822674322f));
auto const a0 = math::fma(a1, x, F(-5.470956694196192e-16f));
auto const b0 = math::fma(b1, x, F(0.8354208494236425f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit2_remez_pade_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_pade_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_pade_fma_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_fma_T6_6(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.5f);
x = math::abs(math::abs(x - quarter) - F(1.0f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(0.8885532791422168f);
auto const b3 = F(0.006981539842338819f);
auto const a2 = math::fma(a3, x2, F(-4.029468833281002f));
auto const b2 = math::fma(b3, x2, F(0.06707600472904571f));
auto const a1 = math::fma(a2, x2, F(3.141592653589793f));
auto const b1 = math::fma(b2, x2, F(0.3623143011454184f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_unit2_quart_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_quart_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_fma_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_fma_ec_T6_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a6 = F(-0.0009580227460981794f);
auto const a5 = math::fma(a6, x, F(0.010257430798092455f));
auto const a4 = math::fma(a5, x, F(-0.0019644046553711314f));
auto const a3 = math::fma(a4, x, F(-0.16562398710135495f));
auto const a2 = math::fma(a3, x, F(-0.00026525836374606586f));
auto const a1 = math::fma(a2, x, F(1.000024600206111f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_remez_fma_ec_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_fma_ec_T6_0<cr::simd::float1x4>(x)[0];
#else
return sin_remez_fma_ec_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_pade_fma_ec_T6_6(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a6 = F(-0.0002890576638605029f);
auto const b6 = F(4.640027733962261e-06f);
auto const a5 = math::fma(a6, x, F(0.003011902408675785f));
auto const b5 = math::fma(b6, x, F(-3.310567543180418e-05f));
auto const a4 = math::fma(a5, x, F(0.011305646553066347f));
auto const b4 = math::fma(b5, x, F(0.0005871961271999791f));
auto const a3 = math::fma(a4, x, F(-0.12917206251957766f));
auto const b3 = math::fma(b4, x, F(-0.0026515323581613346f));
auto const a2 = math::fma(a3, x, F(-0.08374308055691404f));
auto const b2 = math::fma(b3, x, F(0.03457630390600984f));
auto const a1 = math::fma(a2, x, F(0.9824901994908946f));
auto const b1 = math::fma(b2, x, F(-0.083743080546325f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.9824901994906282f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_remez_pade_fma_ec_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_pade_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
return sin_remez_pade_fma_ec_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_fma_ec_T6_6(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(0.002903581834064588f);
auto const b3 = F(7.261928768280855e-06f);
auto const a2 = math::fma(a3, x2, F(-0.12995654089927464f));
auto const b2 = math::fma(b3, x2, F(0.0006886010742635062f));
auto const a1 = math::fma(a2, x2, F(0.9999999082401654f));
auto const b1 = math::fma(b2, x2, F(0.03671011384260023f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_quart_fma_ec_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_quart_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
return sin_quart_fma_ec_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_fma_T6_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a6 = F(-0.0009580235074330559f);
auto const a5 = math::fma(a6, x, F(0.010257438949610611f));
auto const a4 = math::fma(a5, x, F(-0.0019644062164716185f));
auto const a3 = math::fma(a4, x, F(-0.1656241187217348f));
auto const a2 = math::fma(a3, x, F(-0.00026525857454528167f));
auto const a1 = math::fma(a2, x, F(1.0000253949196067f));
auto const a0 = math::fma(a1, x, F(-3.973469730908651e-07f));
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
auto const a6 = F(-0.0002890576638605036f);
auto const b6 = F(4.640027733962261e-06f);
auto const a5 = math::fma(a6, x, F(0.003011902408675792f));
auto const b5 = math::fma(b6, x, F(-3.310567543180418e-05f));
auto const a4 = math::fma(a5, x, F(0.011305646553066373f));
auto const b4 = math::fma(b5, x, F(0.0005871961271999791f));
auto const a3 = math::fma(a4, x, F(-0.12917206251957797f));
auto const b3 = math::fma(b4, x, F(-0.0026515323581613346f));
auto const a2 = math::fma(a3, x, F(-0.08374308055691423f));
auto const b2 = math::fma(b3, x, F(0.03457630390600984f));
auto const a1 = math::fma(a2, x, F(0.9824901994908968f));
auto const b1 = math::fma(b2, x, F(-0.083743080546325f));
auto const a0 = math::fma(a1, x, F(-9.911088348065765e-16f));
auto const b0 = math::fma(b1, x, F(0.9824901994906282f));
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
inline constexpr static F cos_unit1_remez_fma_ec_T2_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a2 = F(-12.73126503098772f);
auto const a1 = math::fma(a2, x, F(-0.8171837422530693f));
auto const a0 = math::fma(a1, x, F(1.0f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit1_remez_fma_ec_T2_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_fma_ec_T2_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_fma_ec_T2_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_pade_fma_ec_T2_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a2 = F(-3.8891666537865492f);
auto const b2 = F(1.4274629322043746f);
auto const a1 = math::fma(a2, x, F(-0.17278247214461329f));
auto const b1 = math::fma(b2, x, F(-0.1614775766435267f));
auto const a0 = math::fma(a1, x, F(0.28626853389781265f));
auto const b0 = math::fma(b1, x, F(0.28626853389781265f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit1_remez_pade_fma_ec_T2_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_pade_fma_ec_T2_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_pade_fma_ec_T2_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_fma_ec_T2_2(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
auto const x2 = x * x;
auto const a1 = F(5.644934066848227f);
auto const b1 = F(6.579736267392906f);
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit1_quart_fma_ec_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_quart_fma_ec_T2_2<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_fma_ec_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_half_fma_ec_T2_2(in_t(F) x) {
using math = ApproxContext;
x = F(0.5f) - x;
auto const x2 = x * x;
auto const a1 = F(15.999999999999998f);
auto const b1 = F(3.289868133696452f);
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit1_half_fma_ec_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_half_fma_ec_T2_2<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_half_fma_ec_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_fma_T2_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a2 = F(-13.084301757620732f);
auto const a1 = math::fma(a2, x, F(-0.8398441670200146f));
auto const a0 = math::fma(a1, x, F(1.0138649508031499f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit1_remez_fma_T2_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_fma_T2_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_fma_T2_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_pade_fma_T2_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a2 = F(-3.890789420609708f);
auto const b2 = F(1.4274629322043746f);
auto const a1 = math::fma(a2, x, F(-0.17285456616587272f));
auto const b1 = math::fma(b2, x, F(-0.1614775766435267f));
auto const a0 = math::fma(a1, x, F(0.2862860587949362f));
auto const b0 = math::fma(b1, x, F(0.28626853389781265f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit1_remez_pade_fma_T2_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_pade_fma_T2_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_pade_fma_T2_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_fma_T2_2(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
auto const x2 = x * x;
auto const a1 = F(6.283185307179586f);
auto const b1 = F(6.579736267392906f);
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit1_quart_fma_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_quart_fma_T2_2<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_fma_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_half_fma_T2_2(in_t(F) x) {
using math = ApproxContext;
x = F(0.5f) - x;
auto const x2 = x * x;
auto const a1 = F(16.449340668482265f);
auto const b1 = F(3.289868133696452f);
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit1_half_fma_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_half_fma_T2_2<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_half_fma_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_fma_ec_T2_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a2 = F(-3.18281625774693f);
auto const a1 = math::fma(a2, x, F(-0.40859187112653467f));
auto const a0 = math::fma(a1, x, F(1.0f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit2_remez_fma_ec_T2_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_fma_ec_T2_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_fma_ec_T2_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_pade_fma_ec_T2_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a2 = F(-2.0922644127441603f);
auto const b2 = F(0.7679463258036592f);
auto const a1 = math::fma(a2, x, F(-0.18592146782426053f));
auto const b1 = math::fma(b2, x, F(-0.17374337208117394f));
auto const a0 = math::fma(a1, x, F(0.6160268370981704f));
auto const b0 = math::fma(b1, x, F(0.6160268370981704f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit2_remez_pade_fma_ec_T2_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_pade_fma_ec_T2_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_pade_fma_ec_T2_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_fma_ec_T2_2(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
auto const x2 = x * x;
auto const a1 = F(2.8224670334241133f);
auto const b1 = F(1.6449340668482264f);
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit2_quart_fma_ec_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_quart_fma_ec_T2_2<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_fma_ec_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_half_fma_ec_T2_2(in_t(F) x) {
using math = ApproxContext;
x = F(1.0f) - x;
auto const x2 = x * x;
auto const a1 = F(3.9999999999999996f);
auto const b1 = F(0.822467033424113f);
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit2_half_fma_ec_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_half_fma_ec_T2_2<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_half_fma_ec_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_fma_T2_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a2 = F(-3.271075439405183f);
auto const a1 = math::fma(a2, x, F(-0.4199220835100073f));
auto const a0 = math::fma(a1, x, F(1.0138649508031499f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit2_remez_fma_T2_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_fma_T2_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_fma_T2_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_pade_fma_T2_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a2 = F(-2.093112240635211f);
auto const b2 = F(0.7679463258036592f);
auto const a1 = math::fma(a2, x, F(-0.1859968069663911f));
auto const b1 = math::fma(b2, x, F(-0.17374337208117394f));
auto const a0 = math::fma(a1, x, F(0.6161079906466733f));
auto const b0 = math::fma(b1, x, F(0.6160268370981704f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit2_remez_pade_fma_T2_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_pade_fma_T2_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_pade_fma_T2_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_fma_T2_2(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
auto const x2 = x * x;
auto const a1 = F(3.141592653589793f);
auto const b1 = F(1.6449340668482264f);
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit2_quart_fma_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_quart_fma_T2_2<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_fma_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_half_fma_T2_2(in_t(F) x) {
using math = ApproxContext;
x = F(1.0f) - x;
auto const x2 = x * x;
auto const a1 = F(4.112335167120566f);
auto const b1 = F(0.822467033424113f);
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit2_half_fma_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_half_fma_T2_2<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_half_fma_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_fma_ec_T2_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a2 = F(-0.32248671055099504f);
auto const a1 = math::fma(a2, x, F(-0.13005883199390933f));
auto const a0 = math::fma(a1, x, F(1.0f));
return math::setSign(a0, x_sign);
}
inline static float cos_remez_fma_ec_T2_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_fma_ec_T2_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_fma_ec_T2_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_pade_fma_ec_T2_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a2 = F(-0.32367939755682484f);
auto const b2 = F(0.11880515191799584f);
auto const a1 = math::fma(a2, x, F(-0.09036850924107064f));
auto const b1 = math::fma(b2, x, F(-0.08444278066977963f));
auto const a0 = math::fma(a1, x, F(0.9405974240410021f));
auto const b0 = math::fma(b1, x, F(0.9405974240410021f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_remez_pade_fma_ec_T2_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_pade_fma_ec_T2_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_pade_fma_ec_T2_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_fma_ec_T2_2(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
auto const x2 = x * x;
auto const a1 = F(0.8984191601667307f);
auto const b1 = F(0.16666666666666666f);
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_quart_fma_ec_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_quart_fma_ec_T2_2<cr::simd::float1x4>(x)[0];
#else
return cos_quart_fma_ec_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_half_fma_ec_T2_2(in_t(F) x) {
using math = ApproxContext;
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a1 = F(0.40528473456935105f);
auto const b1 = F(0.08333333333333333f);
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_half_fma_ec_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_half_fma_ec_T2_2<cr::simd::float1x4>(x)[0];
#else
return cos_half_fma_ec_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_fma_T2_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a2 = F(-0.3314292353039133f);
auto const a1 = math::fma(a2, x, F(-0.13366535060813067f));
auto const a0 = math::fma(a1, x, F(1.0138649508031499f));
return math::setSign(a0, x_sign);
}
inline static float cos_remez_fma_T2_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_fma_T2_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_fma_T2_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_pade_fma_T2_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a2 = F(-0.32380672548616457f);
auto const b2 = F(0.11880515191799584f);
auto const a1 = math::fma(a2, x, F(-0.09040405810592281f));
auto const b1 = math::fma(b2, x, F(-0.08444278066977963f));
auto const a0 = math::fma(a1, x, F(0.940786621726602f));
auto const b0 = math::fma(b1, x, F(0.9405974240410021f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_remez_pade_fma_T2_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_pade_fma_T2_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_pade_fma_T2_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_fma_T2_2(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
auto const x2 = x * x;
auto const a1 = F(1.0f);
auto const b1 = F(0.16666666666666666f);
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_quart_fma_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_quart_fma_T2_2<cr::simd::float1x4>(x)[0];
#else
return cos_quart_fma_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_half_fma_T2_2(in_t(F) x) {
using math = ApproxContext;
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a1 = F(0.4166666666666667f);
auto const b1 = F(0.08333333333333333f);
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_half_fma_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_half_fma_T2_2<cr::simd::float1x4>(x)[0];
#else
return cos_half_fma_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_fma_ec_T3_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a3 = F(27.90713088681018f);
auto const a2 = math::fma(a3, x, F(-23.72106478633581f));
auto const a1 = math::fma(a2, x, F(0.18607051615831596f));
auto const a0 = math::fma(a1, x, F(1.0f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit1_remez_fma_ec_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_fma_ec_T3_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_fma_ec_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_pade_fma_ec_T3_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a3 = F(11.121299503153152f);
auto const b3 = F(-1.2034535739496464f);
auto const a2 = math::fma(a3, x, F(-6.808453518692719f));
auto const b2 = math::fma(b3, x, F(1.1905610360445593f));
auto const a1 = math::fma(a2, x, F(-0.6118457671847738f));
auto const b1 = math::fma(b2, x, F(-0.6120027872686977f));
auto const a0 = math::fma(a1, x, F(0.4047194819777204f));
auto const b0 = math::fma(b1, x, F(0.4047194819777204f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit1_remez_pade_fma_ec_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_pade_fma_ec_T3_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_pade_fma_ec_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_fma_ec_T3_3(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
auto const x2 = x * x;
auto const a2 = F(-29.062039688138515f);
auto const b1 = F(1.9739208802178716f);
auto const a1 = math::fma(a2, x2, F(6.309857700563125f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_unit1_quart_fma_ec_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_quart_fma_ec_T3_3<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_fma_ec_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_fma_T3_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a3 = F(27.907130886810176f);
auto const a2 = math::fma(a3, x, F(-23.721064786335806f));
auto const a1 = math::fma(a2, x, F(0.18607051615831594f));
auto const a0 = math::fma(a1, x, F(0.9986329205521337f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit1_remez_fma_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_fma_T3_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_fma_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_pade_fma_T3_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a3 = F(11.121276380449029f);
auto const b3 = F(-1.2034535739496464f);
auto const a2 = math::fma(a3, x, F(-6.8084393629858075f));
auto const b2 = math::fma(b3, x, F(1.1905610360445593f));
auto const a1 = math::fma(a2, x, F(-0.6118444950736649f));
auto const b1 = math::fma(b2, x, F(-0.6120027872686977f));
auto const a0 = math::fma(a1, x, F(0.4047193196057039f));
auto const b0 = math::fma(b1, x, F(0.4047194819777204f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit1_remez_pade_fma_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_pade_fma_T3_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_pade_fma_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_fma_T3_3(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
auto const x2 = x * x;
auto const a2 = F(-28.939191568279828f);
auto const b1 = F(1.9739208802178716f);
auto const a1 = math::fma(a2, x2, F(6.283185307179586f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_unit1_quart_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_quart_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_fma_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_fma_ec_T3_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a3 = F(3.4883913608512698f);
auto const a2 = math::fma(a3, x, F(-5.9302661965839505f));
auto const a1 = math::fma(a2, x, F(0.09303525807915772f));
auto const a0 = math::fma(a1, x, F(1.0f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit2_remez_fma_ec_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_fma_ec_T3_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_fma_ec_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_pade_fma_ec_T3_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a3 = F(2.5114058088164075f);
auto const b3 = F(-0.27176320204261883f);
auto const a2 = math::fma(a3, x, F(-3.074962609033988f));
auto const b2 = math::fma(b3, x, F(0.5377036313134508f));
auto const a1 = math::fma(a2, x, F(-0.5526665163736569f));
auto const b1 = math::fma(b2, x, F(-0.5528084849593089f));
auto const a0 = math::fma(a1, x, F(0.7311481843432746f));
auto const b0 = math::fma(b1, x, F(0.7311481843432746f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit2_remez_pade_fma_ec_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_pade_fma_ec_T3_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_pade_fma_ec_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_fma_ec_T3_3(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
auto const x2 = x * x;
auto const a2 = F(-3.6327549610173144f);
auto const b1 = F(0.4934802200544679f);
auto const a1 = math::fma(a2, x2, F(3.1549288502815624f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_unit2_quart_fma_ec_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_quart_fma_ec_T3_3<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_fma_ec_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_fma_T3_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a3 = F(3.4883913608512698f);
auto const a2 = math::fma(a3, x, F(-5.9302661965839505f));
auto const a1 = math::fma(a2, x, F(0.09303525807915772f));
auto const a0 = math::fma(a1, x, F(0.9986329205521337f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit2_remez_fma_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_fma_T3_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_fma_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_pade_fma_T3_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a3 = F(2.51140039169586f);
auto const b3 = F(-0.27176320204261883f);
auto const a2 = math::fma(a3, x, F(-3.074955976317334f));
auto const b2 = math::fma(b3, x, F(0.5377036313134508f));
auto const a1 = math::fma(a2, x, F(-0.552665324267972f));
auto const b1 = math::fma(b2, x, F(-0.5528084849593089f));
auto const a0 = math::fma(a1, x, F(0.7311476544190664f));
auto const b0 = math::fma(b1, x, F(0.7311481843432746f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit2_remez_pade_fma_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_pade_fma_T3_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_pade_fma_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_fma_T3_3(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
auto const x2 = x * x;
auto const a2 = F(-3.6173989460349785f);
auto const b1 = F(0.4934802200544679f);
auto const a1 = math::fma(a2, x2, F(3.141592653589793f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_unit2_quart_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_quart_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_fma_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_fma_ec_T3_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a3 = F(0.11250597409097034f);
auto const a2 = math::fma(a3, x, F(-0.6008615903520304f));
auto const a1 = math::fma(a2, x, F(0.029614042410256253f));
auto const a0 = math::fma(a1, x, F(1.0f));
return math::setSign(a0, x_sign);
}
inline static float cos_remez_fma_ec_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_fma_ec_T3_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_fma_ec_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_pade_fma_ec_T3_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a3 = F(0.10680105256664367f);
auto const b3 = F(-0.011557110157840916f);
auto const a2 = math::fma(a3, x, F(-0.41081695334502005f));
auto const b2 = math::fma(b3, x, F(0.07183753893637014f));
auto const a1 = math::fma(a2, x, F(-0.23196444683877437f));
auto const b1 = math::fma(b2, x, F(-0.23202407440202127f));
auto const a0 = math::fma(a1, x, F(0.9640812305318149f));
auto const b0 = math::fma(b1, x, F(0.9640812305318149f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_remez_pade_fma_ec_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_pade_fma_ec_T3_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_pade_fma_ec_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_fma_ec_T3_3(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
auto const x2 = x * x;
auto const a2 = F(-0.11716192171262622f);
auto const b1 = F(0.05f);
auto const a1 = math::fma(a2, x2, F(1.0042450432510819f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_quart_fma_ec_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_quart_fma_ec_T3_3<cr::simd::float1x4>(x)[0];
#else
return cos_quart_fma_ec_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_fma_T3_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a3 = F(0.11250597409097034f);
auto const a2 = math::fma(a3, x, F(-0.6008615903520304f));
auto const a1 = math::fma(a2, x, F(0.029614042410256256f));
auto const a0 = math::fma(a1, x, F(0.9986329205521337f));
return math::setSign(a0, x_sign);
}
inline static float cos_remez_fma_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_fma_T3_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_fma_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_pade_fma_T3_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a3 = F(0.10680081626141165f);
auto const b3 = F(-0.011557110157840916f);
auto const a2 = math::fma(a3, x, F(-0.41081604438211056f));
auto const b2 = math::fma(b3, x, F(0.07183753893637014f));
auto const a1 = math::fma(a2, x, F(-0.23196393360027048f));
auto const b1 = math::fma(b2, x, F(-0.23202407440202127f));
auto const a0 = math::fma(a1, x, F(0.9640803091700068f));
auto const b0 = math::fma(b1, x, F(0.9640812305318149f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_remez_pade_fma_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_pade_fma_T3_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_pade_fma_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_fma_T3_3(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
auto const x2 = x * x;
auto const a2 = F(-0.11666666666666667f);
auto const b1 = F(0.05f);
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_quart_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_quart_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return cos_quart_fma_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_fma_ec_T4_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a4 = F(44.30222298245881f);
auto const a3 = math::fma(a4, x, F(5.979898495099938f));
auto const a2 = math::fma(a3, x, F(-20.344813704585047f));
auto const a1 = math::fma(a2, x, F(0.020237536101597252f));
auto const a0 = math::fma(a1, x, F(1.0f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit1_remez_fma_ec_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_fma_ec_T4_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_fma_ec_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_pade_fma_ec_T4_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a4 = F(9.690693829920377f);
auto const b4 = F(0.7382743752111698f);
auto const a3 = math::fma(a4, x, F(0.9697428775035019f));
auto const b3 = math::fma(b4, x, F(-0.17444611743525812f));
auto const a2 = math::fma(a3, x, F(-6.367293843504604f));
auto const b2 = math::fma(b3, x, F(0.7274500872308214f));
auto const a1 = math::fma(a2, x, F(-0.05789082278192575f));
auto const b1 = math::fma(b2, x, F(-0.05789117565216611f));
auto const a0 = math::fma(a1, x, F(0.3594220656804006f));
auto const b0 = math::fma(b1, x, F(0.3594220656804006f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit1_remez_pade_fma_ec_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_pade_fma_ec_T4_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_pade_fma_ec_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_fma_ec_T4_4(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
auto const x2 = x * x;
auto const a2 = F(-26.162369208985194f);
auto const b2 = F(2.9156462622422494f);
auto const a1 = math::fma(a2, x2, F(6.284966542353357f));
auto const b1 = math::fma(b2, x2, F(2.4170459757769853f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit1_quart_fma_ec_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_quart_fma_ec_T4_4<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_fma_ec_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_half_fma_ec_T4_4(in_t(F) x) {
using math = ApproxContext;
x = F(0.5f) - x;
auto const x2 = x * x;
auto const a2 = F(-32.264602357913375f);
auto const b2 = F(1.3400192417376011f);
auto const a1 = math::fma(a2, x2, F(18.016537647369585f));
auto const b1 = math::fma(b2, x2, F(1.7232642605076665f));
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit1_half_fma_ec_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_half_fma_ec_T4_4<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_half_fma_ec_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_fma_T4_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a4 = F(44.292678176622f);
auto const a3 = math::fma(a4, x, F(5.978610140561112f));
auto const a2 = math::fma(a3, x, F(-20.34043046411711f));
auto const a1 = math::fma(a2, x, F(0.0202331759738271f));
auto const a0 = math::fma(a1, x, F(0.9998922762200827f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit1_remez_fma_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_fma_T4_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_fma_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_pade_fma_T4_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a4 = F(9.690693800296948f);
auto const b4 = F(0.7382743752111698f);
auto const a3 = math::fma(a4, x, F(0.9697428745391002f));
auto const b3 = math::fma(b4, x, F(-0.17444611743525812f));
auto const a2 = math::fma(a3, x, F(-6.367293824040459f));
auto const b2 = math::fma(b3, x, F(0.7274500872308214f));
auto const a1 = math::fma(a2, x, F(-0.05789082260495961f));
auto const b1 = math::fma(b2, x, F(-0.05789117565216611f));
auto const a0 = math::fma(a1, x, F(0.35942206547982586f));
auto const b0 = math::fma(b1, x, F(0.3594220656804006f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit1_remez_pade_fma_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_pade_fma_T4_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_pade_fma_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
auto const x2 = x * x;
auto const a2 = F(-26.154954478620255f);
auto const b2 = F(2.9156462622422494f);
auto const a1 = math::fma(a2, x2, F(6.283185307179586f));
auto const b1 = math::fma(b2, x2, F(2.4170459757769853f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit1_quart_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_quart_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_half_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
x = F(0.5f) - x;
auto const x2 = x * x;
auto const a2 = F(-32.26354020491294f);
auto const b2 = F(1.3400192417376011f);
auto const a1 = math::fma(a2, x2, F(18.015944541671047f));
auto const b1 = math::fma(b2, x2, F(1.7232642605076665f));
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit1_half_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_half_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_half_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_fma_ec_T4_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a4 = F(2.768888936403691f);
auto const a3 = math::fma(a4, x, F(0.7474873118874727f));
auto const a2 = math::fma(a3, x, F(-5.086203426146254f));
auto const a1 = math::fma(a2, x, F(0.01011876805079744f));
auto const a0 = math::fma(a1, x, F(1.0f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit2_remez_fma_ec_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_fma_ec_T4_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_fma_ec_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_pade_fma_ec_T4_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a4 = F(1.2951132107890502f);
auto const b4 = F(0.09866673582284327f);
auto const a3 = math::fma(a4, x, F(0.25920288452786844f));
auto const b3 = math::fma(b4, x, F(-0.04662775528568868f));
auto const a2 = math::fma(a3, x, F(-3.403829442752322f));
auto const b2 = math::fma(b3, x, F(0.38888047377780255f));
auto const a1 = math::fma(a2, x, F(-0.06189462545950232f));
auto const b1 = math::fma(b2, x, F(-0.06189500277795901f));
auto const a0 = math::fma(a1, x, F(0.7685597371775325f));
auto const b0 = math::fma(b1, x, F(0.7685597371775325f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit2_remez_pade_fma_ec_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_pade_fma_ec_T4_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_pade_fma_ec_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_fma_ec_T4_4(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
auto const x2 = x * x;
auto const a2 = F(-3.270296151123149f);
auto const b2 = F(0.1822278913901406f);
auto const a1 = math::fma(a2, x2, F(3.1424832711766784f));
auto const b1 = math::fma(b2, x2, F(0.6042614939442466f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit2_quart_fma_ec_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_quart_fma_ec_T4_4<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_fma_ec_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_half_fma_ec_T4_4(in_t(F) x) {
using math = ApproxContext;
x = F(1.0f) - x;
auto const x2 = x * x;
auto const a2 = F(-2.016537647369586f);
auto const b2 = F(0.08375120260860007f);
auto const a1 = math::fma(a2, x2, F(4.504134411842396f));
auto const b1 = math::fma(b2, x2, F(0.4308160651269166f));
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit2_half_fma_ec_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_half_fma_ec_T4_4<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_half_fma_ec_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_fma_T4_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a4 = F(2.7682923860388904f);
auto const a3 = math::fma(a4, x, F(0.7473262675701194f));
auto const a2 = math::fma(a3, x, F(-5.085107616029269f));
auto const a1 = math::fma(a2, x, F(0.010116587986912364f));
auto const a0 = math::fma(a1, x, F(0.9998922762200828f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit2_remez_fma_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_fma_T4_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_fma_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_pade_fma_T4_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a4 = F(1.295113206901323f);
auto const b4 = F(0.09866673582284327f);
auto const a3 = math::fma(a4, x, F(0.2592028837497819f));
auto const b3 = math::fma(b4, x, F(-0.04662775528568868f));
auto const a2 = math::fma(a3, x, F(-3.4038294325345584f));
auto const b2 = math::fma(b3, x, F(0.38888047377780255f));
auto const a1 = math::fma(a2, x, F(-0.06189462527370433f));
auto const b1 = math::fma(b2, x, F(-0.06189500277795901f));
auto const a0 = math::fma(a1, x, F(0.7685597362604168f));
auto const b0 = math::fma(b1, x, F(0.7685597371775325f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit2_remez_pade_fma_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_pade_fma_T4_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_pade_fma_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
auto const x2 = x * x;
auto const a2 = F(-3.269369309827532f);
auto const b2 = F(0.1822278913901406f);
auto const a1 = math::fma(a2, x2, F(3.141592653589793f));
auto const b1 = math::fma(b2, x2, F(0.6042614939442466f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit2_quart_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_quart_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_half_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
x = F(1.0f) - x;
auto const x2 = x * x;
auto const a2 = F(-2.016471262807059f);
auto const b2 = F(0.08375120260860007f);
auto const a1 = math::fma(a2, x2, F(4.503986135417762f));
auto const b1 = math::fma(b2, x2, F(0.4308160651269166f));
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit2_half_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_half_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_half_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_fma_ec_T4_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a4 = F(0.02842536468631212f);
auto const a3 = math::fma(a4, x, F(0.02410761277771843f));
auto const a2 = math::fma(a3, x, F(-0.515340151382852f));
auto const a1 = math::fma(a2, x, F(0.003220903906569424f));
auto const a0 = math::fma(a1, x, F(1.0f));
return math::setSign(a0, x_sign);
}
inline static float cos_remez_fma_ec_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_fma_ec_T4_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_fma_ec_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_pade_fma_ec_T4_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a4 = F(0.016858898915642125f);
auto const b4 = F(0.0012843759246730833f);
auto const a3 = math::fma(a4, x, F(0.010600123038042981f));
auto const b3 = math::fma(b4, x, F(-0.0019068459334950225f));
auto const a2 = math::fma(a3, x, F(-0.4373095645269982f));
auto const b2 = math::fma(b3, x, F(0.04996171000990943f));
auto const a1 = math::fma(a2, x, F(-0.024981802128735225f));
auto const b1 = math::fma(b2, x, F(-0.024981954429870636f));
auto const a0 = math::fma(a1, x, F(0.9745375040232929f));
auto const b0 = math::fma(b1, x, F(0.9745375040232929f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_remez_pade_fma_ec_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_pade_fma_ec_T4_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_pade_fma_ec_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_fma_ec_T4_4(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
auto const x2 = x * x;
auto const a2 = F(-0.105472068924708f);
auto const b2 = F(0.0018707482993197278f);
auto const a1 = math::fma(a2, x2, F(1.0002834923827146f));
auto const b1 = math::fma(b2, x2, F(0.061224489795918366f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_quart_fma_ec_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_quart_fma_ec_T4_4<cr::simd::float1x4>(x)[0];
#else
return cos_quart_fma_ec_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_half_fma_ec_T4_4(in_t(F) x) {
using math = ApproxContext;
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a2 = F(-0.02070173970379909f);
auto const b2 = F(0.0008597883597883598f);
auto const a1 = math::fma(a2, x2, F(0.45636422989205655f));
auto const b1 = math::fma(b2, x2, F(0.04365079365079365f));
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_half_fma_ec_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_half_fma_ec_T4_4<cr::simd::float1x4>(x)[0];
#else
return cos_half_fma_ec_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_fma_T4_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a4 = F(0.028419240510853046f);
auto const a3 = math::fma(a4, x, F(0.024102418851372032f));
auto const a2 = math::fma(a3, x, F(-0.5152291226047518f));
auto const a1 = math::fma(a2, x, F(0.003220209970682292f));
auto const a0 = math::fma(a1, x, F(0.9998922762200828f));
return math::setSign(a0, x_sign);
}
inline static float cos_remez_fma_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_fma_T4_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_fma_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_pade_fma_T4_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a4 = F(0.016858898865501702f);
auto const b4 = F(0.0012843759246730833f);
auto const a3 = math::fma(a4, x, F(0.010600123006516922f));
auto const b3 = math::fma(b4, x, F(-0.0019068459334950225f));
auto const a2 = math::fma(a3, x, F(-0.4373095632263862f));
auto const b2 = math::fma(b3, x, F(0.04996171000990943f));
auto const a1 = math::fma(a2, x, F(-0.024981802054436297f));
auto const b1 = math::fma(b2, x, F(-0.024981954429870636f));
auto const a0 = math::fma(a1, x, F(0.9745375025487232f));
auto const b0 = math::fma(b1, x, F(0.9745375040232929f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_remez_pade_fma_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_pade_fma_T4_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_pade_fma_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
auto const x2 = x * x;
auto const a2 = F(-0.1054421768707483f);
auto const b2 = F(0.0018707482993197278f);
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(0.061224489795918366f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_quart_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_quart_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return cos_quart_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_half_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a2 = F(-0.020701058201058203f);
auto const b2 = F(0.0008597883597883598f);
auto const a1 = math::fma(a2, x2, F(0.45634920634920634f));
auto const b1 = math::fma(b2, x2, F(0.04365079365079365f));
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_half_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_half_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return cos_half_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_fma_ec_T5_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a5 = F(-56.03072613416241f);
auto const a4 = math::fma(a5, x, F(79.54145728853986f));
auto const a3 = math::fma(a4, x, F(-1.7983662065202635f));
auto const a2 = math::fma(a3, x, F(-19.63786642674665f));
auto const a1 = math::fma(a2, x, F(-0.00210075157768397f));
auto const a0 = math::fma(a1, x, F(1.0f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit1_remez_fma_ec_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_fma_ec_T5_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_fma_ec_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_pade_fma_ec_T5_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a5 = F(-14.8147652842919f);
auto const b5 = F(-0.3337919326720673f);
auto const a4 = math::fma(a5, x, F(14.601382263293475f));
auto const b4 = math::fma(b5, x, F(0.5141912978682375f));
auto const a3 = math::fma(a4, x, F(7.612136129388003f));
auto const b3 = math::fma(b4, x, F(-0.6425139855393749f));
auto const a2 = math::fma(a3, x, F(-7.952790488120894f));
auto const b2 = math::fma(b3, x, F(0.7341821572451603f));
auto const a1 = math::fma(a2, x, F(-0.4181860457360452f));
auto const b1 = math::fma(b2, x, F(-0.41818604459261066f));
auto const a0 = math::fma(a1, x, F(0.44008718467683083f));
auto const b0 = math::fma(b1, x, F(0.44008718467683083f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit1_remez_pade_fma_ec_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_pade_fma_ec_T5_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_pade_fma_ec_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_fma_ec_T5_5(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
auto const x2 = x * x;
auto const a3 = F(32.44181620571074f);
auto const b2 = F(0.7028072946176219f);
auto const a2 = math::fma(a3, x2, F(-33.19853993687724f));
auto const b1 = math::fma(b2, x2, F(1.2960086587289052f));
auto const a1 = math::fma(a2, x2, F(6.283166430161897f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_unit1_quart_fma_ec_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_quart_fma_ec_T5_5<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_fma_ec_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_fma_T5_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a5 = F(-56.03072613416241f);
auto const a4 = math::fma(a5, x, F(79.54145728853986f));
auto const a3 = math::fma(a4, x, F(-1.7983662065202635f));
auto const a2 = math::fma(a3, x, F(-19.63786642674665f));
auto const a1 = math::fma(a2, x, F(-0.00210075157768397f));
auto const a0 = math::fma(a1, x, F(1.0000070685186753f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit1_remez_fma_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_fma_T5_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_fma_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_pade_fma_T5_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a5 = F(-14.814765284367189f);
auto const b5 = F(-0.3337919326720673f);
auto const a4 = math::fma(a5, x, F(14.601382263367679f));
auto const b4 = math::fma(b5, x, F(0.5141912978682375f));
auto const a3 = math::fma(a4, x, F(7.612136129426688f));
auto const b3 = math::fma(b4, x, F(-0.6425139855393749f));
auto const a2 = math::fma(a3, x, F(-7.95279048816131f));
auto const b2 = math::fma(b3, x, F(0.7341821572451603f));
auto const a1 = math::fma(a2, x, F(-0.41818604573817036f));
auto const b1 = math::fma(b2, x, F(-0.41818604459261066f));
auto const a0 = math::fma(a1, x, F(0.440087184677575f));
auto const b0 = math::fma(b1, x, F(0.44008718467683083f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit1_remez_pade_fma_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_pade_fma_T5_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_pade_fma_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_fma_T5_5(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
auto const x2 = x * x;
auto const a3 = F(32.441913673244855f);
auto const b2 = F(0.7028072946176219f);
auto const a2 = math::fma(a3, x2, F(-33.19863967789678f));
auto const b1 = math::fma(b2, x2, F(1.2960086587289052f));
auto const a1 = math::fma(a2, x2, F(6.283185307179586f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_unit1_quart_fma_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_quart_fma_T5_5<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_fma_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_fma_ec_T5_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a5 = F(-1.7509601916961974f);
auto const a4 = math::fma(a5, x, F(4.9713410805383615f));
auto const a3 = math::fma(a4, x, F(-0.2247957758171003f));
auto const a2 = math::fma(a3, x, F(-4.909466606686284f));
auto const a1 = math::fma(a2, x, F(-0.0010503757888654548f));
auto const a0 = math::fma(a1, x, F(1.0f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit2_remez_fma_ec_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_fma_ec_T5_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_fma_ec_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_pade_fma_ec_T5_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a5 = F(-0.8571187484935062f);
auto const b5 = F(-0.019708884275075736f);
auto const a4 = math::fma(a5, x, F(1.6753962100280233f));
auto const b4 = math::fma(b5, x, F(0.059387204955935705f));
auto const a3 = math::fma(a4, x, F(1.7661625804201286f));
auto const b3 = math::fma(b4, x, F(-0.14968578061644755f));
auto const a2 = math::fma(a3, x, F(-3.6536851489176136f));
auto const b2 = math::fma(b3, x, F(0.33777976834335427f));
auto const a1 = math::fma(a2, x, F(-0.3882325030585781f));
auto const b1 = math::fma(b2, x, F(-0.3882325022118949f));
auto const a0 = math::fma(a1, x, F(0.808839913969847f));
auto const b0 = math::fma(b1, x, F(0.808839913969847f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit2_remez_pade_fma_ec_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_pade_fma_ec_T5_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_pade_fma_ec_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_fma_ec_T5_5(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
auto const x2 = x * x;
auto const a3 = F(1.0138067564284605f);
auto const b2 = F(0.04392545591360137f);
auto const a2 = math::fma(a3, x2, F(-4.149817492109655f));
auto const b1 = math::fma(b2, x2, F(0.3240021646822263f));
auto const a1 = math::fma(a2, x2, F(3.1415832150809484f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_unit2_quart_fma_ec_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_quart_fma_ec_T5_5<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_fma_ec_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_fma_T5_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a5 = F(-1.7509601916961974f);
auto const a4 = math::fma(a5, x, F(4.9713410805383615f));
auto const a3 = math::fma(a4, x, F(-0.2247957758171003f));
auto const a2 = math::fma(a3, x, F(-4.909466606686284f));
auto const a1 = math::fma(a2, x, F(-0.0010503757888654548f));
auto const a0 = math::fma(a1, x, F(1.0000070685186755f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit2_remez_fma_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_fma_T5_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_fma_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_pade_fma_T5_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a5 = F(-0.8571187484960873f);
auto const b5 = F(-0.019708884275075736f);
auto const a4 = math::fma(a5, x, F(1.6753962100330684f));
auto const b4 = math::fma(b5, x, F(0.059387204955935705f));
auto const a3 = math::fma(a4, x, F(1.766162580425447f));
auto const b3 = math::fma(b4, x, F(-0.14968578061644755f));
auto const a2 = math::fma(a3, x, F(-3.653685148928616f));
auto const b2 = math::fma(b3, x, F(0.33777976834335427f));
auto const a1 = math::fma(a2, x, F(-0.38823250305974716f));
auto const b1 = math::fma(b2, x, F(-0.3882325022118949f));
auto const a0 = math::fma(a1, x, F(0.8088399139706096f));
auto const b0 = math::fma(b1, x, F(0.808839913969847f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit2_remez_pade_fma_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_pade_fma_T5_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_pade_fma_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_fma_T5_5(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
auto const x2 = x * x;
auto const a3 = F(1.0138098022889017f);
auto const b2 = F(0.04392545591360137f);
auto const a2 = math::fma(a3, x2, F(-4.149829959737097f));
auto const b1 = math::fma(b2, x2, F(0.3240021646822263f));
auto const a1 = math::fma(a2, x2, F(3.141592653589793f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_unit2_quart_fma_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_quart_fma_T5_5<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_fma_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_fma_ec_T5_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a5 = F(-0.0057217240548586915f);
auto const a4 = math::fma(a5, x, F(0.05103569931479055f));
auto const a3 = math::fma(a4, x, F(-0.007250008704204051f));
auto const a2 = math::fma(a3, x, F(-0.497432967641985f));
auto const a1 = math::fma(a2, x, F(-0.0003343449978041853f));
auto const a0 = math::fma(a1, x, F(1.0f));
return math::setSign(a0, x_sign);
}
inline static float cos_remez_fma_ec_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_fma_ec_T5_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_fma_ec_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_pade_fma_ec_T5_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a5 = F(-0.0033448481917180447f);
auto const b5 = F(-7.409774586223382e-05f);
auto const a4 = math::fma(a5, x, F(0.020860083241842787f));
auto const b4 = math::fma(b5, x, F(0.0007308617724463099f));
auto const a3 = math::fma(a4, x, F(0.06770859818657733f));
auto const b3 = math::fma(b4, x, F(-0.005696039814458122f));
auto const a2 = math::fma(a3, x, F(-0.44819908893728355f));
auto const b2 = math::fma(b3, x, F(0.041331089988785735f));
auto const a1 = math::fma(a2, x, F(-0.14680950970585985f));
auto const b1 = math::fma(b2, x, F(-0.14680950922337807f));
auto const a0 = math::fma(a1, x, F(0.9790603818409398f));
auto const b0 = math::fma(b1, x, F(0.9790603818409398f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_remez_pade_fma_ec_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_pade_fma_ec_T5_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_pade_fma_ec_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_fma_ec_T5_5(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
auto const x2 = x * x;
auto const a3 = F(0.0033128808597388012f);
auto const b2 = F(0.00045093795093795094f);
auto const a2 = math::fma(a3, x2, F(-0.13383798173826808f));
auto const b1 = math::fma(b2, x2, F(0.03282828282828283f));
auto const a1 = math::fma(a2, x2, F(0.9999969956293239f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_quart_fma_ec_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_quart_fma_ec_T5_5<cr::simd::float1x4>(x)[0];
#else
return cos_quart_fma_ec_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_fma_T5_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a5 = F(-0.0057217240548586915f);
auto const a4 = math::fma(a5, x, F(0.05103569931479055f));
auto const a3 = math::fma(a4, x, F(-0.0072500087042040515f));
auto const a2 = math::fma(a3, x, F(-0.4974329676419851f));
auto const a1 = math::fma(a2, x, F(-0.0003343449978041853f));
auto const a0 = math::fma(a1, x, F(1.0000070685186755f));
return math::setSign(a0, x_sign);
}
inline static float cos_remez_fma_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_fma_T5_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_fma_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_pade_fma_T5_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a5 = F(-0.0033448481917321923f);
auto const b5 = F(-7.409774586223382e-05f);
auto const a4 = math::fma(a5, x, F(0.02086008324193102f));
auto const b4 = math::fma(b5, x, F(0.0007308617724463099f));
auto const a3 = math::fma(a4, x, F(0.06770859818686371f));
auto const b3 = math::fma(b4, x, F(-0.005696039814458122f));
auto const a2 = math::fma(a3, x, F(-0.44819908893917926f));
auto const b2 = math::fma(b3, x, F(0.041331089988785735f));
auto const a1 = math::fma(a2, x, F(-0.1468095097064808f));
auto const b1 = math::fma(b2, x, F(-0.14680950922337807f));
auto const a0 = math::fma(a1, x, F(0.9790603818427851f));
auto const b0 = math::fma(b1, x, F(0.9790603818409398f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_remez_pade_fma_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_pade_fma_T5_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_pade_fma_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_fma_T5_5(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
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
inline static float cos_quart_fma_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_quart_fma_T5_5<cr::simd::float1x4>(x)[0];
#else
return cos_quart_fma_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_fma_ec_T6_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a6 = F(-58.946093779576614f);
auto const a5 = math::fma(a6, x, F(-12.028082996248292f));
auto const a4 = math::fma(a5, x, F(67.235452713123f));
auto const a3 = math::fma(a4, x, F(-0.21418118268990446f));
auto const a2 = math::fma(a3, x, F(-19.72987021030049f));
auto const a1 = math::fma(a2, x, F(-0.0001508282385920682f));
auto const a0 = math::fma(a1, x, F(1.0f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit1_remez_fma_ec_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_fma_ec_T6_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_fma_ec_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_pade_fma_ec_T6_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a6 = F(-9.392397300878548f);
auto const b6 = F(0.14983863070581377f);
auto const a5 = math::fma(a6, x, F(-1.4562429860479214f));
auto const b5 = math::fma(b6, x, F(-0.05389004791236221f));
auto const a4 = math::fma(a5, x, F(19.927499791184424f));
auto const b4 = math::fma(b5, x, F(0.4084195951045098f));
auto const a3 = math::fma(a4, x, F(0.798920755801731f));
auto const b3 = math::fma(b4, x, F(-0.07453284093798371f));
auto const a2 = math::fma(a3, x, F(-9.039226342298784f));
auto const b2 = math::fma(b3, x, F(0.6212275378056925f));
auto const a1 = math::fma(a2, x, F(-0.0442496770963624f));
auto const b1 = math::fma(b2, x, F(-0.04424967709553365f));
auto const a0 = math::fma(a1, x, F(0.4894043108373957f));
auto const b0 = math::fma(b1, x, F(0.4894043108373957f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit1_remez_pade_fma_ec_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_pade_fma_ec_T6_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_pade_fma_ec_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_fma_ec_T6_6(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
auto const x2 = x * x;
auto const a3 = F(28.43370232347889f);
auto const b3 = F(0.4468185499096844f);
auto const a2 = math::fma(a3, x2, F(-32.23574770830088f));
auto const b2 = math::fma(b3, x2, F(1.0732160756647304f));
auto const a1 = math::fma(a2, x2, F(6.283184730635542f));
auto const b1 = math::fma(b2, x2, F(1.4492572045816738f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit1_quart_fma_ec_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_quart_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_fma_ec_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_half_fma_ec_T6_6(in_t(F) x) {
using math = ApproxContext;
x = F(0.5f) - x;
auto const x2 = x * x;
auto const a3 = F(22.90981316783194f);
auto const b3 = F(0.19907945897076212f);
auto const a2 = math::fma(a3, x2, F(-42.68589413631793f));
auto const b2 = math::fma(b3, x2, F(0.6604006171796758f));
auto const a1 = math::fma(a2, x2, F(18.578376925833027f));
auto const b1 = math::fma(b2, x2, F(1.1608317451717827f));
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit1_half_fma_ec_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_half_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_half_fma_ec_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_fma_T6_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a6 = F(-58.946140623680485f);
auto const a5 = math::fma(a6, x, F(-12.028092554893032f));
auto const a4 = math::fma(a5, x, F(67.23550614473022f));
auto const a3 = math::fma(a4, x, F(-0.2141813528983937f));
auto const a2 = math::fma(a3, x, F(-19.729885889508903f));
auto const a1 = math::fma(a2, x, F(-0.0001508283584543563f));
auto const a0 = math::fma(a1, x, F(1.000000397346973f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit1_remez_fma_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_fma_T6_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_fma_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_remez_pade_fma_T6_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a6 = F(-9.392397300878567f);
auto const b6 = F(0.14983863070581377f);
auto const a5 = math::fma(a6, x, F(-1.4562429860479245f));
auto const b5 = math::fma(b6, x, F(-0.05389004791236221f));
auto const a4 = math::fma(a5, x, F(19.927499791184466f));
auto const b4 = math::fma(b5, x, F(0.4084195951045098f));
auto const a3 = math::fma(a4, x, F(0.7989207558017327f));
auto const b3 = math::fma(b4, x, F(-0.07453284093798371f));
auto const a2 = math::fma(a3, x, F(-9.039226342298804f));
auto const b2 = math::fma(b3, x, F(0.6212275378056925f));
auto const a1 = math::fma(a2, x, F(-0.04424967709636249f));
auto const b1 = math::fma(b2, x, F(-0.04424967709553365f));
auto const a0 = math::fma(a1, x, F(0.48940431083739605f));
auto const b0 = math::fma(b1, x, F(0.4894043108373957f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit1_remez_pade_fma_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_remez_pade_fma_T6_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_remez_pade_fma_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_fma_T6_6(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
auto const x2 = x * x;
auto const a3 = F(28.433704932550953f);
auto const b3 = F(0.4468185499096844f);
auto const a2 = math::fma(a3, x2, F(-32.23575066624802f));
auto const b2 = math::fma(b3, x2, F(1.0732160756647304f));
auto const a1 = math::fma(a2, x2, F(6.283185307179586f));
auto const b1 = math::fma(b2, x2, F(1.4492572045816738f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit1_quart_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_quart_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_fma_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_half_fma_T6_6(in_t(F) x) {
using math = ApproxContext;
x = F(0.5f) - x;
auto const x2 = x * x;
auto const a3 = F(22.909813329588246f);
auto const b3 = F(0.19907945897076212f);
auto const a2 = math::fma(a3, x2, F(-42.68589443770461f));
auto const b2 = math::fma(b3, x2, F(0.6604006171796758f));
auto const a1 = math::fma(a2, x2, F(18.578377057006932f));
auto const b1 = math::fma(b2, x2, F(1.1608317451717827f));
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit1_half_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit1_half_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_half_fma_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_fma_ec_T6_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a6 = F(-0.9210327152978252f);
auto const a5 = math::fma(a6, x, F(-0.3758775936448467f));
auto const a4 = math::fma(a5, x, F(4.20221579457692f));
auto const a3 = math::fma(a4, x, F(-0.026772647837923044f));
auto const a2 = math::fma(a3, x, F(-4.932467552574945f));
auto const a1 = math::fma(a2, x, F(-7.541411930166803e-05f));
auto const a0 = math::fma(a1, x, F(1.0f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit2_remez_fma_ec_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_fma_ec_T6_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_fma_ec_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_pade_fma_ec_T6_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a6 = F(-0.2563374876416444f);
auto const b6 = F(0.004014573434801332f);
auto const a5 = math::fma(a6, x, F(-0.07483907753368084f));
auto const b5 = math::fma(b6, x, F(-0.002779050965654499f));
auto const a4 = math::fma(a5, x, F(2.1625370087293856f));
auto const b4 = math::fma(b5, x, F(0.043896225374183404f));
auto const a3 = math::fma(a4, x, F(0.1643178003115632f));
auto const b3 = math::fma(b4, x, F(-0.015340958225688378f));
auto const a2 = math::fma(a3, x, F(-3.9172321030014454f));
auto const b2 = math::fma(b3, x, F(0.268254781507355f));
auto const a1 = math::fma(a2, x, F(-0.03640647689894123f));
auto const b1 = math::fma(b2, x, F(-0.03640647689825074f));
auto const a0 = math::fma(a1, x, F(0.8481569705326283f));
auto const b0 = math::fma(b1, x, F(0.8481569705326283f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit2_remez_pade_fma_ec_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_pade_fma_ec_T6_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_pade_fma_ec_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_fma_ec_T6_6(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
auto const x2 = x * x;
auto const a3 = F(0.8885531976087148f);
auto const b3 = F(0.006981539842338819f);
auto const a2 = math::fma(a3, x2, F(-4.029468463537608f));
auto const b2 = math::fma(b3, x2, F(0.06707600472904571f));
auto const a1 = math::fma(a2, x2, F(3.1415923653177704f));
auto const b1 = math::fma(b2, x2, F(0.3623143011454184f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit2_quart_fma_ec_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_quart_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_fma_ec_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_half_fma_ec_T6_6(in_t(F) x) {
using math = ApproxContext;
x = F(1.0f) - x;
auto const x2 = x * x;
auto const a3 = F(0.3579658307473739f);
auto const b3 = F(0.003110616546418158f);
auto const a2 = math::fma(a3, x2, F(-2.667868383519871f));
auto const b2 = math::fma(b3, x2, F(0.04127503857372976f));
auto const a1 = math::fma(a2, x2, F(4.644594231458257f));
auto const b1 = math::fma(b2, x2, F(0.29020793629294567f));
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit2_half_fma_ec_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_half_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_half_fma_ec_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_fma_T6_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a6 = F(-0.9210334472369481f);
auto const a5 = math::fma(a6, x, F(-0.3758778923524948f));
auto const a4 = math::fma(a5, x, F(4.202219134052371f));
auto const a3 = math::fma(a4, x, F(-0.0267726691139842f));
auto const a2 = math::fma(a3, x, F(-4.932471472377048f));
auto const a1 = math::fma(a2, x, F(-7.541417923281208e-05f));
auto const a0 = math::fma(a1, x, F(1.000000397346973f));
return math::setSign(a0, x_sign);
}
inline static float cos_unit2_remez_fma_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_fma_T6_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_fma_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_remez_pade_fma_T6_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a6 = F(-0.256337487641645f);
auto const b6 = F(0.004014573434801332f);
auto const a5 = math::fma(a6, x, F(-0.074839077533681f));
auto const b5 = math::fma(b6, x, F(-0.002779050965654499f));
auto const a4 = math::fma(a5, x, F(2.1625370087293905f));
auto const b4 = math::fma(b5, x, F(0.043896225374183404f));
auto const a3 = math::fma(a4, x, F(0.1643178003115636f));
auto const b3 = math::fma(b4, x, F(-0.015340958225688378f));
auto const a2 = math::fma(a3, x, F(-3.9172321030014543f));
auto const b2 = math::fma(b3, x, F(0.268254781507355f));
auto const a1 = math::fma(a2, x, F(-0.03640647689894131f));
auto const b1 = math::fma(b2, x, F(-0.03640647689825074f));
auto const a0 = math::fma(a1, x, F(0.8481569705326291f));
auto const b0 = math::fma(b1, x, F(0.8481569705326283f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_unit2_remez_pade_fma_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_remez_pade_fma_T6_0<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_remez_pade_fma_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_fma_T6_6(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
auto const x2 = x * x;
auto const a3 = F(0.8885532791422168f);
auto const b3 = F(0.006981539842338819f);
auto const a2 = math::fma(a3, x2, F(-4.029468833281002f));
auto const b2 = math::fma(b3, x2, F(0.06707600472904571f));
auto const a1 = math::fma(a2, x2, F(3.141592653589793f));
auto const b1 = math::fma(b2, x2, F(0.3623143011454184f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit2_quart_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_quart_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_fma_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_half_fma_T6_6(in_t(F) x) {
using math = ApproxContext;
x = F(1.0f) - x;
auto const x2 = x * x;
auto const a3 = F(0.35796583327481624f);
auto const b3 = F(0.003110616546418158f);
auto const a2 = math::fma(a3, x2, F(-2.6678684023565387f));
auto const b2 = math::fma(b3, x2, F(0.04127503857372976f));
auto const a1 = math::fma(a2, x2, F(4.644594264251733f));
auto const b1 = math::fma(b2, x2, F(0.29020793629294567f));
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit2_half_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_unit2_half_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_half_fma_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_fma_ec_T6_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a6 = F(-0.0009580227461002009f);
auto const a5 = math::fma(a6, x, F(-0.0012282791347405714f));
auto const a4 = math::fma(a5, x, F(0.04313987277746396f));
auto const a3 = math::fma(a4, x, F(-0.0008634589736009967f));
auto const a2 = math::fma(a3, x, F(-0.49976345070432127f));
auto const a1 = math::fma(a2, x, F(-2.400505973154057e-05f));
auto const a0 = math::fma(a1, x, F(1.0f));
return math::setSign(a0, x_sign);
}
inline static float cos_remez_fma_ec_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_fma_ec_T6_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_fma_ec_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_pade_fma_ec_T6_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a6 = F(-0.0003065217437727647f);
auto const b6 = F(4.900815592795572e-06f);
auto const a5 = math::fma(a6, x, F(-0.00030180466044500405f));
auto const b5 = math::fma(b6, x, F(-1.1147640103663664e-05f));
auto const a4 = math::fma(a5, x, F(0.02569948905240394f));
auto const b4 = math::fma(b5, x, F(0.0005274232488710517f));
auto const a3 = math::fma(a4, x, F(0.006534672553785914f));
auto const b3 = math::fma(b4, x, F(-0.0006093716392556644f));
auto const a2 = math::fma(a3, x, F(-0.46033322851572755f));
auto const b2 = math::fma(b3, x, F(0.031653691087328455f));
auto const a1 = math::fma(a2, x, F(-0.014288088771618523f));
auto const b1 = math::fma(b2, x, F(-0.014288088771287948f));
auto const a0 = math::fma(a1, x, F(0.9839738392331364f));
auto const b0 = math::fma(b1, x, F(0.9839738392331364f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_remez_pade_fma_ec_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_pade_fma_ec_T6_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_pade_fma_ec_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_fma_ec_T6_6(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
auto const x2 = x * x;
auto const a3 = F(0.002903581834064588f);
auto const b3 = F(7.261928768280855e-06f);
auto const a2 = math::fma(a3, x2, F(-0.12995654089927464f));
auto const b2 = math::fma(b3, x2, F(0.0006886010742635062f));
auto const a1 = math::fma(a2, x2, F(0.9999999082401654f));
auto const b1 = math::fma(b2, x2, F(0.03671011384260023f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_quart_fma_ec_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_quart_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
return cos_quart_fma_ec_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_half_fma_ec_T6_6(in_t(F) x) {
using math = ApproxContext;
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a3 = F(0.000372342265899761f);
auto const b3 = F(3.235543489780778e-06f);
auto const a2 = math::fma(a3, x2, F(-0.027388289483048365f));
auto const b2 = math::fma(b3, x2, F(0.000423728813559322f));
auto const a1 = math::fma(a2, x2, F(0.4705957850697246f));
auto const b1 = math::fma(b2, x2, F(0.029404211607601437f));
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_half_fma_ec_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_half_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
return cos_half_fma_ec_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_fma_T6_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a6 = F(-0.0009580235074350775f);
auto const a5 = math::fma(a6, x, F(-0.001228280110846564f));
auto const a4 = math::fma(a5, x, F(0.043139907060459684f));
auto const a3 = math::fma(a4, x, F(-0.0008634596597866157f));
auto const a2 = math::fma(a3, x, F(-0.49976384786331f));
auto const a1 = math::fma(a2, x, F(-2.4005078808216214e-05f));
auto const a0 = math::fma(a1, x, F(1.000000397346973f));
return math::setSign(a0, x_sign);
}
inline static float cos_remez_fma_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_fma_T6_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_fma_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_remez_pade_fma_T6_0(in_t(F) x) {
using math = ApproxContext;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
auto const x_sign = math::abs(x - half) - quarter;
x = quarter - math::abs(x_sign);
auto const a6 = F(-0.0003065217437727651f);
auto const b6 = F(4.900815592795572e-06f);
auto const a5 = math::fma(a6, x, F(-0.00030180466044500443f));
auto const b5 = math::fma(b6, x, F(-1.1147640103663664e-05f));
auto const a4 = math::fma(a5, x, F(0.025699489052403976f));
auto const b4 = math::fma(b5, x, F(0.0005274232488710517f));
auto const a3 = math::fma(a4, x, F(0.0065346725537859226f));
auto const b3 = math::fma(b4, x, F(-0.0006093716392556644f));
auto const a2 = math::fma(a3, x, F(-0.46033322851572817f));
auto const b2 = math::fma(b3, x, F(0.031653691087328455f));
auto const a1 = math::fma(a2, x, F(-0.014288088771618543f));
auto const b1 = math::fma(b2, x, F(-0.014288088771287948f));
auto const a0 = math::fma(a1, x, F(0.983973839233137f));
auto const b0 = math::fma(b1, x, F(0.9839738392331364f));
return math::setSign(a0 / b0, x_sign);
}
inline static float cos_remez_pade_fma_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_remez_pade_fma_T6_0<cr::simd::float1x4>(x)[0];
#else
return cos_remez_pade_fma_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_fma_T6_6(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
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
inline static float cos_quart_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_quart_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return cos_quart_fma_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_half_fma_T6_6(in_t(F) x) {
using math = ApproxContext;
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a3 = F(0.0003723422685287092f);
auto const b3 = F(3.235543489780778e-06f);
auto const a2 = math::fma(a3, x2, F(-0.02738828967642527f));
auto const b2 = math::fma(b3, x2, F(0.000423728813559322f));
auto const a1 = math::fma(a2, x2, F(0.4705957883923986f));
auto const b1 = math::fma(b2, x2, F(0.029404211607601437f));
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_half_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return cos_half_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return cos_half_fma_T6_6<float>(x);
#endif
}
