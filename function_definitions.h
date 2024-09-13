template <class F>
inline constexpr static F sin_unit1_remez_fma_ec_T3_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a3 = F(-27.90713070391372f);
auto const a2 = math::fma(a3, x, F(-2.7907165673019194f));
auto const a1 = math::fma(a2, x, F(6.441874810820087f));
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
auto const a3 = F(-24.031527407137652f);
auto const b3 = F(2.5601912187225335f);
auto const a2 = math::fma(a3, x, F(3.2235998702829454f));
auto const b2 = math::fma(b3, x, F(0.6587648704649871f));
auto const a1 = math::fma(a2, x, F(4.213333230885444f));
auto const b1 = math::fma(b2, x, F(0.5100893076536461f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.6706175647675064f));
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
auto const a2 = F(-29.062039688138512f);
auto const b1 = F(1.9739208802178716f);
auto const a1 = math::fma(a2, x2, F(6.309857700563124f));
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
auto const a3 = F(-27.907130703913726f);
auto const a2 = math::fma(a3, x, F(-2.79071656730192f));
auto const a1 = math::fma(a2, x, F(6.441874810820089f));
auto const a0 = math::fma(a1, x, F(-0.0013670787320267273f));
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
auto const a3 = F(-24.031499266326932f);
auto const b3 = F(2.5601912187225335f);
auto const a2 = math::fma(a3, x, F(3.223596095461968f));
auto const b2 = math::fma(b3, x, F(0.6587648704649871f));
auto const a1 = math::fma(a2, x, F(4.213328297091143f));
auto const b1 = math::fma(b2, x, F(0.5100893076536461f));
auto const a0 = math::fma(a1, x, F(3.6582572297675676e-07f));
auto const b0 = math::fma(b1, x, F(0.6706175647675064f));
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
auto const a3 = F(-3.4883914821273345f);
auto const a2 = math::fma(a3, x, F(-0.6976790518458656f));
auto const a1 = math::fma(a2, x, F(3.2209373964547665f));
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
auto const a3 = F(-4.045646463136217f);
auto const b3 = F(0.4371713179274738f);
auto const a2 = math::fma(a3, x, F(1.1133510677644272f));
auto const b2 = math::fma(b3, x, F(0.21032145396452795f));
auto const a1 = math::fma(a2, x, F(2.810995304050971f));
auto const b1 = math::fma(b2, x, F(0.35212711964952614f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.894839273017736f));
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
auto const a2 = F(-3.632754961017314f);
auto const b1 = F(0.4934802200544679f);
auto const a1 = math::fma(a2, x2, F(3.154928850281562f));
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
auto const a3 = F(-3.4883914821273345f);
auto const a2 = math::fma(a3, x, F(-0.6976790518458656f));
auto const a1 = math::fma(a2, x, F(3.2209373964547665f));
auto const a0 = math::fma(a1, x, F(-0.0013670788483769064f));
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
auto const a3 = F(-4.045640642816337f);
auto const b3 = F(0.4371713179274738f);
auto const a2 = math::fma(a3, x, F(1.1133494660279895f));
auto const b2 = math::fma(b3, x, F(0.21032145396452795f));
auto const a1 = math::fma(a2, x, F(2.810991259977422f));
auto const b1 = math::fma(b2, x, F(0.35212711964952614f));
auto const a0 = math::fma(a1, x, F(8.810245146410704e-07f));
auto const b0 = math::fma(b1, x, F(0.894839273017736f));
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
auto const a3 = F(-0.11250597415021531f);
auto const a2 = math::fma(a3, x, F(-0.07068967757881607f));
auto const a1 = math::fma(a2, x, F(1.025256222656154f));
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
auto const a3 = F(-0.14229057851817623f);
auto const b3 = F(0.015065439093655797f);
auto const a2 = math::fma(a3, x, F(0.11893539148674406f));
auto const b2 = math::fma(b3, x, F(0.024886717828934132f));
auto const a1 = math::fma(a2, x, F(0.9874947314822657f));
auto const b1 = math::fma(b2, x, F(0.11826754756601236f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.987556641085533f));
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
auto const a3 = F(-0.11250597415021528f);
auto const a2 = math::fma(a3, x, F(-0.07068967757881606f));
auto const a1 = math::fma(a2, x, F(1.0252562226561537f));
auto const a0 = math::fma(a1, x, F(-0.0013670794198654434f));
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
auto const a3 = F(-0.14229039714457398f);
auto const b3 = F(0.015065439093655797f);
auto const a2 = math::fma(a3, x, F(0.11893523988330963f));
auto const b2 = math::fma(b3, x, F(0.024886717828934132f));
auto const a1 = math::fma(a2, x, F(0.9874934727518668f));
auto const b1 = math::fma(b2, x, F(0.11826754756601236f));
auto const a0 = math::fma(a1, x, F(9.457524345411045e-07f));
auto const b0 = math::fma(b1, x, F(0.987556641085533f));
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
auto const a4 = F(44.298387390205846f);
auto const a3 = math::fma(a4, x, F(-50.27962307477746f));
auto const a2 = math::fma(a3, x, F(0.7529106614991812f));
auto const a1 = math::fma(a2, x, F(6.262086473826829f));
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
auto const a4 = F(8.85129234472583f);
auto const b4 = F(0.6649308498551116f);
auto const a3 = math::fma(a4, x, F(-9.684715866310052f));
auto const b3 = math::fma(b4, x, F(-0.5137836606696989f));
auto const a2 = math::fma(a3, x, F(-1.831126565009785f));
auto const b2 = math::fma(b3, x, F(0.792085076233666f));
auto const a1 = math::fma(a2, x, F(2.2280699853962282f));
auto const b1 = math::fma(b2, x, F(-0.2914378621598018f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.35460839318750015f));
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
auto const a2 = F(-26.16236920898519f);
auto const b2 = F(2.9156462622422494f);
auto const a1 = math::fma(a2, x2, F(6.284966542353356f));
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
auto const a4 = F(44.2888815351058f);
auto const a3 = math::fma(a4, x, F(-50.26883372465454f));
auto const a2 = math::fma(a3, x, F(0.7527490967092838f));
auto const a1 = math::fma(a2, x, F(6.260742711894373f));
auto const a0 = math::fma(a1, x, F(0.00010729346664796469f));
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
auto const a4 = F(8.851292333960126f);
auto const b4 = F(0.6649308498551116f);
auto const a3 = math::fma(a4, x, F(-9.684715854530667f));
auto const b3 = math::fma(b4, x, F(-0.5137836606696989f));
auto const a2 = math::fma(a3, x, F(-1.8311265627826114f));
auto const b2 = math::fma(b3, x, F(0.792085076233666f));
auto const a1 = math::fma(a2, x, F(2.228069982686258f));
auto const b1 = math::fma(b2, x, F(-0.2914378621598018f));
auto const a0 = math::fma(a1, x, F(6.910640419285907e-11f));
auto const b0 = math::fma(b1, x, F(0.35460839318750015f));
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
auto const a4 = F(2.7688446050204245f);
auto const a3 = math::fma(a4, x, F(-6.285223382217138f));
auto const a2 = math::fma(a3, x, F(0.18834932273309252f));
auto const a1 = math::fma(a2, x, F(3.131025608560185f));
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
auto const a4 = F(1.1760702800599148f);
auto const b4 = F(0.08878435887226117f);
auto const a3 = math::fma(a4, x, F(-2.5794462537247718f));
auto const b3 = math::fma(b4, x, F(-0.1365333134760655f));
auto const a2 = math::fma(a3, x, F(-0.9731258754884641f));
auto const b2 = math::fma(b3, x, F(0.42208321203174537f));
auto const a1 = math::fma(a2, x, F(2.3739889636795244f));
auto const b1 = math::fma(b2, x, F(-0.309761593808359f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.7556642594070293f));
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
auto const a2 = F(-3.2702961511231488f);
auto const b2 = F(0.1822278913901406f);
auto const a1 = math::fma(a2, x2, F(3.142483271176678f));
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
auto const a4 = F(2.768248138235145f);
auto const a3 = math::fma(a4, x, F(-6.283869414219527f));
auto const a2 = math::fma(a3, x, F(0.18830874836686173f));
auto const a1 = math::fma(a2, x, F(3.130351120444825f));
auto const a0 = math::fma(a1, x, F(0.00010771041180825157f));
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
auto const a4 = F(1.1760702772225597f);
auto const b4 = F(0.08878435887226117f);
auto const a3 = math::fma(a4, x, F(-2.5794462475016706f));
auto const b3 = math::fma(b4, x, F(-0.1365333134760655f));
auto const a2 = math::fma(a3, x, F(-0.9731258731407273f));
auto const b2 = math::fma(b3, x, F(0.42208321203174537f));
auto const a1 = math::fma(a2, x, F(2.3739889579521036f));
auto const b1 = math::fma(b2, x, F(-0.309761593808359f));
auto const a0 = math::fma(a1, x, F(6.767896714720569e-10f));
auto const b0 = math::fma(b1, x, F(0.7556642594070293f));
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
auto const a4 = F(0.028425119084719182f);
auto const a3 = math::fma(a4, x, F(-0.20270866054955933f));
auto const a2 = math::fma(a3, x, F(0.019084195490256663f));
auto const a1 = math::fma(a2, x, F(0.9966363218899561f));
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
auto const a4 = F(0.015402878081383293f);
auto const b4 = F(0.001191539638849307f);
auto const a3 = math::fma(a4, x, F(-0.10680838510569131f));
auto const b3 = math::fma(b4, x, F(-0.005676662397895612f));
auto const a2 = math::fma(a3, x, F(-0.12620277249820025f));
auto const b2 = math::fma(b3, x, F(0.05519634791778334f));
auto const a1 = math::fma(a2, x, F(0.9719549232691784f));
auto const b1 = math::fma(b2, x, F(-0.1262043561863939f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.9719549986765399f));
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
auto const a4 = F(0.028418995490430324f);
auto const a3 = math::fma(a4, x, F(-0.20266499123044956f));
auto const a2 = math::fma(a3, x, F(0.019080084201569945f));
auto const a1 = math::fma(a2, x, F(0.9964216175479759f));
auto const a0 = math::fma(a1, x, F(0.00010771448785513419f));
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
auto const a4 = F(0.015402878059997812f);
auto const b4 = F(0.001191539638849307f);
auto const a3 = math::fma(a4, x, F(-0.10680838495739768f));
auto const b3 = math::fma(b4, x, F(-0.005676662397895612f));
auto const a2 = math::fma(a3, x, F(-0.1262027723229793f));
auto const b2 = math::fma(b3, x, F(0.05519634791778334f));
auto const a1 = math::fma(a2, x, F(0.9719549219197083f));
auto const b1 = math::fma(b2, x, F(-0.1262043561863939f));
auto const a0 = math::fma(a1, x, F(5.919833476907997e-10f));
auto const b0 = math::fma(b1, x, F(0.9719549986765399f));
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
auto const a5 = F(55.67326999260218f);
auto const a4 = math::fma(a5, x, F(9.735059042607633f));
auto const a3 = math::fma(a4, x, F(-42.7777275382163f));
auto const a2 = math::fma(a3, x, F(0.09182281156379178f));
auto const a1 = math::fma(a2, x, F(6.281068259798223f));
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
auto const a5 = F(24.28904533631103f);
auto const b5 = F(0.5436932279268988f);
auto const a4 = math::fma(a5, x, F(-6.354781437746228f));
auto const b4 = math::fma(b5, x, F(0.16414802908577525f));
auto const a3 = math::fma(a4, x, F(-21.29608752239588f));
auto const b3 = math::fma(b4, x, F(0.547261438356577f));
auto const a2 = math::fma(a3, x, F(1.4883211717792726f));
auto const b2 = math::fma(b3, x, F(0.6492826379834966f));
auto const a1 = math::fma(a2, x, F(3.856639061373949f));
auto const b1 = math::fma(b2, x, F(0.2368737131256461f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.613803170101086f));
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
auto const a2 = math::fma(a3, x2, F(-33.198539936877246f));
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
auto const a5 = F(55.673269992602194f);
auto const a4 = math::fma(a5, x, F(9.735059042607634f));
auto const a3 = math::fma(a4, x, F(-42.777727538216304f));
auto const a2 = math::fma(a3, x, F(0.0918228115637918f));
auto const a1 = math::fma(a2, x, F(6.281068259798225f));
auto const a0 = math::fma(a1, x, F(6.413711414967552e-06f));
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
auto const a5 = F(24.28904533640208f);
auto const b5 = F(0.5436932279268988f);
auto const a4 = math::fma(a5, x, F(-6.354781437770049f));
auto const b4 = math::fma(b5, x, F(0.16414802908577525f));
auto const a3 = math::fma(a4, x, F(-21.29608752247571f));
auto const b3 = math::fma(b4, x, F(0.547261438356577f));
auto const a2 = math::fma(a3, x, F(1.4883211717848517f));
auto const b2 = math::fma(b3, x, F(0.6492826379834966f));
auto const a1 = math::fma(a2, x, F(3.856639061388406f));
auto const b1 = math::fma(b2, x, F(0.2368737131256461f));
auto const a0 = math::fma(a1, x, F(-1.0086929121827515e-12f));
auto const b0 = math::fma(b1, x, F(0.613803170101086f));
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
auto const a5 = F(1.751306953179185f);
auto const a4 = math::fma(a5, x, F(0.5933965889129833f));
auto const a3 = math::fma(a4, x, F(-5.3401841788305235f));
auto const a2 = math::fma(a3, x, F(0.021583004659857134f));
auto const a1 = math::fma(a2, x, F(3.140623284189881f));
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
auto const a5 = F(1.0849079887715936f);
auto const b5 = F(0.024293918321860487f);
auto const a4 = math::fma(a5, x, F(-0.5663784181542537f));
auto const b4 = math::fma(b5, x, F(0.014762039574913127f));
auto const a3 = math::fma(a4, x, F(-3.8079306147565966f));
auto const b3 = math::fma(b4, x, F(0.09763676633719146f));
auto const a2 = math::fma(a3, x, F(0.5307615388412505f));
auto const b2 = math::fma(b3, x, F(0.2325009295886607f));
auto const a1 = math::fma(a2, x, F(2.7589899302215493f));
auto const b1 = math::fma(b2, x, F(0.16894667103120573f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.8782137703650772f));
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
auto const a2 = math::fma(a3, x2, F(-4.149817492109656f));
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
auto const a5 = F(1.7513069531791845f);
auto const a4 = math::fma(a5, x, F(0.5933965889129832f));
auto const a3 = math::fma(a4, x, F(-5.340184178830523f));
auto const a2 = math::fma(a3, x, F(0.02158300465985713f));
auto const a1 = math::fma(a2, x, F(3.1406232841898802f));
auto const a0 = math::fma(a1, x, F(7.017527427451761e-06f));
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
auto const a5 = F(1.0849079887735587f);
auto const b5 = F(0.024293918321860487f);
auto const a4 = math::fma(a5, x, F(-0.5663784181552796f));
auto const b4 = math::fma(b5, x, F(0.014762039574913127f));
auto const a3 = math::fma(a4, x, F(-3.8079306147634937f));
auto const b3 = math::fma(b4, x, F(0.09763676633719146f));
auto const a2 = math::fma(a3, x, F(0.5307615388422119f));
auto const b2 = math::fma(b3, x, F(0.2325009295886607f));
auto const a1 = math::fma(a2, x, F(2.7589899302265466f));
auto const b1 = math::fma(b2, x, F(0.16894667103120573f));
auto const a0 = math::fma(a1, x, F(-9.068658367653026e-13f));
auto const b0 = math::fma(b1, x, F(0.8782137703650772f));
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
auto const a5 = F(0.005721646344109508f);
auto const a4 = math::fma(a5, x, F(0.006094398602226541f));
auto const a3 = math::fma(a4, x, F(-0.17222894930744018f));
auto const a2 = math::fma(a3, x, F(0.0021842646960018156f));
auto const a1 = math::fma(a2, x, F(0.9996922871688391f));
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
auto const a5 = F(0.003954087609406091f);
auto const b5 = F(8.686070910636742e-05f);
auto const a4 = math::fma(a5, x, F(-0.006330943280006021f));
auto const b4 = math::fma(b5, x, F(0.00018101952993969923f));
auto const a3 = math::fma(a4, x, F(-0.1377300358178443f));
auto const b3 = math::fma(b4, x, F(0.0034325018310020386f));
auto const a2 = math::fma(a3, x, F(0.058577477109647974f));
auto const b2 = math::fma(b3, x, F(0.026700198005781255f));
auto const a1 = math::fma(a2, x, F(0.9865820190237347f));
auto const b1 = math::fma(b2, x, F(0.0585774870831604f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.986582018673382f));
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
auto const a3 = F(0.0033128808597388017f);
auto const b2 = F(0.00045093795093795094f);
auto const a2 = math::fma(a3, x2, F(-0.1338379817382681f));
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
auto const a5 = F(0.005721646344109508f);
auto const a4 = math::fma(a5, x, F(0.006094398602226541f));
auto const a3 = math::fma(a4, x, F(-0.17222894930744018f));
auto const a2 = math::fma(a3, x, F(0.0021842646960018156f));
auto const a1 = math::fma(a2, x, F(0.9996922871688391f));
auto const a0 = math::fma(a1, x, F(6.986101754234579e-06f));
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
auto const a5 = F(0.003954087609418288f);
auto const b5 = F(8.686070910636742e-05f);
auto const a4 = math::fma(a5, x, F(-0.006330943280025549f));
auto const b4 = math::fma(b5, x, F(0.00018101952993969923f));
auto const a3 = math::fma(a4, x, F(-0.13773003581826912f));
auto const b3 = math::fma(b4, x, F(0.0034325018310020386f));
auto const a2 = math::fma(a3, x, F(0.058577477109828656f));
auto const b2 = math::fma(b3, x, F(0.026700198005781255f));
auto const a1 = math::fma(a2, x, F(0.9865820190267778f));
auto const b1 = math::fma(b2, x, F(0.0585774870831604f));
auto const a0 = math::fma(a1, x, F(-1.9198636787059933e-12f));
auto const b0 = math::fma(b1, x, F(0.986582018673382f));
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
auto const a6 = F(-59.50225080264183f);
auto const a5 = math::fma(a6, x, F(100.73454333098964f));
auto const a4 = math::fma(a5, x, F(-3.092186935891956f));
auto const a3 = math::fma(a4, x, F(-41.08837144742968f));
auto const a2 = math::fma(a3, x, F(-0.009384003022559739f));
auto const a1 = math::fma(a2, x, F(6.283297994006084f));
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
auto const a6 = F(-8.58299676454876f);
auto const b6 = F(0.1342323243086419f);
auto const a5 = math::fma(a6, x, F(14.118417202593458f));
auto const b5 = math::fma(b6, x, F(-0.15509440320250942f));
auto const a4 = math::fma(a5, x, F(8.489379635135338f));
auto const b4 = math::fma(b5, x, F(0.4349261163119057f));
auto const a3 = math::fma(a4, x, F(-15.314146402919564f));
auto const b3 = math::fma(b4, x, F(-0.31615956790269456f));
auto const a2 = math::fma(a3, x, F(-1.5921413280940775f));
auto const b2 = math::fma(b3, x, F(0.6511325627200459f));
auto const a1 = math::fma(a2, x, F(2.9492569602807914f));
auto const b1 = math::fma(b2, x, F(-0.25339716240787136f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.46938882367656176f));
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
auto const a2 = math::fma(a3, x2, F(-32.23574770830087f));
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
auto const a6 = F(-59.502276307165126f);
auto const a5 = math::fma(a6, x, F(100.73458650896144f));
auto const a4 = math::fma(a5, x, F(-3.0921882612998637f));
auto const a3 = math::fma(a4, x, F(-41.08838905918911f));
auto const a2 = math::fma(a3, x, F(-0.009384007044836551f));
auto const a1 = math::fma(a2, x, F(6.283300687223868f));
auto const a0 = math::fma(a1, x, F(-2.1431561541065958e-07f));
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
auto const a6 = F(-8.582996764548776f);
auto const b6 = F(0.1342323243086419f);
auto const a5 = math::fma(a6, x, F(14.118417202593482f));
auto const b5 = math::fma(b6, x, F(-0.15509440320250942f));
auto const a4 = math::fma(a5, x, F(8.489379635135352f));
auto const b4 = math::fma(b5, x, F(0.4349261163119057f));
auto const a3 = math::fma(a4, x, F(-15.31414640291959f));
auto const b3 = math::fma(b4, x, F(-0.31615956790269456f));
auto const a2 = math::fma(a3, x, F(-1.5921413280940804f));
auto const b2 = math::fma(b3, x, F(0.6511325627200459f));
auto const a1 = math::fma(a2, x, F(2.9492569602807968f));
auto const b1 = math::fma(b2, x, F(-0.25339716240787136f));
auto const a0 = math::fma(a1, x, F(-1.358505322124337e-16f));
auto const b0 = math::fma(b1, x, F(0.46938882367656176f));
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
auto const a6 = F(-0.9153301109213217f);
auto const a5 = math::fma(a6, x, F(3.127996154477995f));
auto const a4 = math::fma(a5, x, F(-0.1836200419507149f));
auto const a3 = math::fma(a4, x, F(-5.137833138218834f));
auto const a2 = math::fma(a3, x, F(-0.0022740873551606406f));
auto const a1 = math::fma(a2, x, F(3.1416521397875443f));
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
auto const a6 = F(-0.23700015692000279f);
auto const b6 = F(0.003778100370301153f);
auto const a5 = math::fma(a6, x, F(0.7842218418531977f));
auto const b5 = math::fma(b6, x, F(-0.008623060416748008f));
auto const a4 = math::fma(a5, x, F(0.9388649474463803f));
auto const b4 = math::fma(b5, x, F(0.04858011602033124f));
auto const a3 = math::fma(a4, x, F(-3.406480873007661f));
auto const b3 = math::fma(b4, x, F(-0.07005418214881498f));
auto const a2 = math::fma(a3, x, F(-0.7045551393527865f));
auto const b2 = math::fma(b3, x, F(0.29010607986492504f));
auto const a1 = math::fma(a2, x, F(2.6249538467428826f));
auto const b1 = math::fma(b2, x, F(-0.2242668661892673f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.8355487601941942f));
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
auto const a3 = F(0.8885531976087147f);
auto const b3 = F(0.006981539842338819f);
auto const a2 = math::fma(a3, x2, F(-4.029468463537607f));
auto const b2 = math::fma(b3, x2, F(0.06707600472904571f));
auto const a1 = math::fma(a2, x2, F(3.14159236531777f));
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
auto const a6 = F(-0.9153305702129244f);
auto const a5 = math::fma(a6, x, F(3.1279977240345405f));
auto const a4 = math::fma(a5, x, F(-0.18362013408702982f));
auto const a3 = math::fma(a4, x, F(-5.137835716265364f));
auto const a2 = math::fma(a3, x, F(-0.0022740884962453856f));
auto const a1 = math::fma(a2, x, F(3.1416537161963496f));
auto const a0 = math::fma(a1, x, F(-2.508885029743526e-07f));
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
auto const a6 = F(-0.23700015692000326f);
auto const b6 = F(0.003778100370301153f);
auto const a5 = math::fma(a6, x, F(0.7842218418531992f));
auto const b5 = math::fma(b6, x, F(-0.008623060416748008f));
auto const a4 = math::fma(a5, x, F(0.9388649474463822f));
auto const b4 = math::fma(b5, x, F(0.04858011602033124f));
auto const a3 = math::fma(a4, x, F(-3.4064808730076677f));
auto const b3 = math::fma(b4, x, F(-0.07005418214881498f));
auto const a2 = math::fma(a3, x, F(-0.7045551393527879f));
auto const b2 = math::fma(b3, x, F(0.29010607986492504f));
auto const a1 = math::fma(a2, x, F(2.624953846742888f));
auto const b1 = math::fma(b2, x, F(-0.2242668661892673f));
auto const a0 = math::fma(a1, x, F(-6.095791189528188e-16f));
auto const b0 = math::fma(b1, x, F(0.8355487601941942f));
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
auto const a6 = F(-0.0009507397193942091f);
auto const a5 = math::fma(a6, x, F(0.010209023238149803f));
auto const a4 = math::fma(a5, x, F(-0.0018509856778177666f));
auto const a3 = math::fma(a4, x, F(-0.16574180416652595f));
auto const a2 = math::fma(a3, x, F(-0.00021108453678989907f));
auto const a1 = math::fma(a2, x, F(1.0000156786919185f));
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
auto const a6 = F(-0.00029047226488253947f);
auto const b6 = F(4.605319916254793e-06f);
auto const a5 = math::fma(a6, x, F(0.0030146475481812904f));
auto const b5 = math::fma(b6, x, F(-3.313611932923988e-05f));
auto const a4 = math::fma(a5, x, F(0.01135254463447542f));
auto const b4 = math::fma(b5, x, F(0.0005857633554576513f));
auto const a3 = math::fma(a4, x, F(-0.12919861569434757f));
auto const b3 = math::fma(b4, x, F(-0.0026597783556160082f));
auto const a2 = math::fma(a3, x, F(-0.08407394576057356f));
auto const b2 = math::fma(b3, x, F(0.03455187759895015f));
auto const a1 = math::fma(a2, x, F(0.9825029607799487f));
auto const b1 = math::fma(b2, x, F(-0.08407394574982406f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.9825029607797545f));
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
auto const a6 = F(-0.0009507400830919237f);
auto const a5 = math::fma(a6, x, F(0.010209027143528263f));
auto const a4 = math::fma(a5, x, F(-0.00185098638589722f));
auto const a3 = math::fma(a4, x, F(-0.16574186756969947f));
auto const a2 = math::fma(a3, x, F(-0.0002110846175385646f));
auto const a1 = math::fma(a2, x, F(1.000016061239749f));
auto const a0 = math::fma(a1, x, F(-1.9127091633677281e-07f));
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
auto const a6 = F(-0.00029047226488253985f);
auto const b6 = F(4.605319916254793e-06f);
auto const a5 = math::fma(a6, x, F(0.003014647548181294f));
auto const b5 = math::fma(b6, x, F(-3.313611932923988e-05f));
auto const a4 = math::fma(a5, x, F(0.011352544634475433f));
auto const b4 = math::fma(b5, x, F(0.0005857633554576513f));
auto const a3 = math::fma(a4, x, F(-0.12919861569434773f));
auto const b3 = math::fma(b4, x, F(-0.0026597783556160082f));
auto const a2 = math::fma(a3, x, F(-0.08407394576057366f));
auto const b2 = math::fma(b3, x, F(0.03455187759895015f));
auto const a1 = math::fma(a2, x, F(0.9825029607799499f));
auto const b1 = math::fma(b2, x, F(-0.08407394574982406f));
auto const a0 = math::fma(a1, x, F(-5.153009637916262e-16f));
auto const b0 = math::fma(b1, x, F(0.9825029607797545f));
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
inline constexpr static F sin_unit1_remez_fma_ec_T7_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a7 = F(-54.245262831966f);
auto const a6 = math::fma(a7, x, F(-11.64277462647554f));
auto const a5 = math::fma(a6, x, F(84.25482811470408f));
auto const a4 = math::fma(a5, x, F(-0.3158636656647244f));
auto const a3 = math::fma(a4, x, F(-41.321794259434164f));
auto const a2 = math::fma(a3, x, F(-0.0006073471059506729f));
auto const a1 = math::fma(a2, x, F(6.2831922949113235f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_unit1_remez_fma_ec_T7_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_fma_ec_T7_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_fma_ec_T7_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_pade_fma_ec_T7_7(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a7 = F(43.811509730124016f);
auto const b7 = F(-1.591666444885183f);
auto const a6 = math::fma(a7, x, F(-92.12092778074766f));
auto const b6 = math::fma(b7, x, F(1.0785289184283497f));
auto const a5 = math::fma(a6, x, F(-59.47258220247413f));
auto const b5 = math::fma(b6, x, F(-3.800686660422122f));
auto const a4 = math::fma(a5, x, F(107.15234597532645f));
auto const b4 = math::fma(b5, x, F(1.6203404426864956f));
auto const a3 = math::fma(a4, x, F(22.0494616116897f));
auto const b3 = math::fma(b4, x, F(-4.950588246782644f));
auto const a2 = math::fma(a3, x, F(-21.012666413979403f));
auto const b2 = math::fma(b3, x, F(0.9029067977618581f));
auto const a1 = math::fma(a2, x, F(-2.488903858102391f));
auto const b1 = math::fma(b2, x, F(-3.3442697274323656f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(-0.3961213518972244f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit1_remez_pade_fma_ec_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_pade_fma_ec_T7_7<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_pade_fma_ec_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_fma_ec_T7_7(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.25f);
x = math::abs(math::abs(x - quarter) - F(0.5f)) - quarter;
auto const x2 = x * x;
auto const a4 = F(-16.095127398609012f);
auto const b3 = F(0.09814081615430073f);
auto const a3 = math::fma(a4, x2, F(44.9042603038418f));
auto const b2 = math::fma(b3, x2, F(0.4302384550371445f));
auto const a2 = math::fma(a3, x2, F(-35.352973327453626f));
auto const b1 = math::fma(b2, x2, F(0.9531358119528597f));
auto const a1 = math::fma(a2, x2, F(6.283185310105467f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit1_quart_fma_ec_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_quart_fma_ec_T7_7<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_fma_ec_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_fma_T7_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a7 = F(-54.245262831966016f);
auto const a6 = math::fma(a7, x, F(-11.642774626475541f));
auto const a5 = math::fma(a6, x, F(84.2548281147041f));
auto const a4 = math::fma(a5, x, F(-0.31586366566472446f));
auto const a3 = math::fma(a4, x, F(-41.32179425943417f));
auto const a2 = math::fma(a3, x, F(-0.000607347105950673f));
auto const a1 = math::fma(a2, x, F(6.283192294911325f));
auto const a0 = math::fma(a1, x, F(-1.2233859874796749e-08f));
return math::setSign(a0, half - x0 );
}
inline static float sin_unit1_remez_fma_T7_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_fma_T7_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_fma_T7_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_remez_pade_fma_T7_7(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(0.5f);
auto const quarter = F(0.25f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a7 = F(43.81150973012402f);
auto const b7 = F(-1.591666444885183f);
auto const a6 = math::fma(a7, x, F(-92.12092778074768f));
auto const b6 = math::fma(b7, x, F(1.0785289184283497f));
auto const a5 = math::fma(a6, x, F(-59.47258220247414f));
auto const b5 = math::fma(b6, x, F(-3.800686660422122f));
auto const a4 = math::fma(a5, x, F(107.15234597532648f));
auto const b4 = math::fma(b5, x, F(1.6203404426864956f));
auto const a3 = math::fma(a4, x, F(22.049461611689704f));
auto const b3 = math::fma(b4, x, F(-4.950588246782644f));
auto const a2 = math::fma(a3, x, F(-21.012666413979407f));
auto const b2 = math::fma(b3, x, F(0.9029067977618581f));
auto const a1 = math::fma(a2, x, F(-2.4889038581023915f));
auto const b1 = math::fma(b2, x, F(-3.3442697274323656f));
auto const a0 = math::fma(a1, x, F(1.352000109089424e-16f));
auto const b0 = math::fma(b1, x, F(-0.3961213518972244f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit1_remez_pade_fma_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_remez_pade_fma_T7_7<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_remez_pade_fma_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_fma_T7_7(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.25f);
x = math::abs(math::abs(x - quarter) - F(0.5f)) - quarter;
auto const x2 = x * x;
auto const a4 = F(-16.09512739111402f);
auto const b3 = F(0.09814081615430073f);
auto const a3 = math::fma(a4, x2, F(44.904260282931304f));
auto const b2 = math::fma(b3, x2, F(0.4302384550371445f));
auto const a2 = math::fma(a3, x2, F(-35.35297331099086f));
auto const b1 = math::fma(b2, x2, F(0.9531358119528597f));
auto const a1 = math::fma(a2, x2, F(6.283185307179586f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit1_quart_fma_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit1_quart_fma_T7_7<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_fma_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_fma_ec_T7_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a7 = F(-0.4240292267768113f);
auto const a6 = math::fma(a7, x, F(-0.18173587471986363f));
auto const a5 = math::fma(a6, x, F(2.6330554552000347f));
auto const a4 = math::fma(a5, x, F(-0.019872179427345538f));
auto const a3 = math::fma(a4, x, F(-5.165178988222969f));
auto const a2 = math::fma(a3, x, F(-0.00015777255850615846f));
auto const a1 = math::fma(a2, x, F(3.141596392566795f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_unit2_remez_fma_ec_T7_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_fma_ec_T7_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_fma_ec_T7_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_pade_fma_ec_T7_7(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a7 = F(1.0693206448062285f);
auto const b7 = F(-0.0162237182185071f);
auto const a6 = math::fma(a7, x, F(-3.579101794366809f));
auto const b6 = math::fma(b7, x, F(0.039490175465961466f));
auto const a5 = math::fma(a6, x, F(-3.9307040328028653f));
auto const b5 = math::fma(b6, x, F(-0.216170067433441f));
auto const a4 = math::fma(a5, x, F(15.463175695701644f));
auto const b4 = math::fma(b5, x, F(0.33088520029494123f));
auto const a3 = math::fma(a4, x, F(1.9111677611180211f));
auto const b3 = math::fma(b4, x, F(-1.3077929143894131f));
auto const a2 = math::fma(a3, x, F(-11.89818415938027f));
auto const b2 = math::fma(b3, x, F(1.1132554875727356f));
auto const a1 = math::fma(a2, x, F(0.9643106909129069f));
auto const b1 = math::fma(b2, x, F(-3.7873096455213338f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.3069496262699163f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit2_remez_pade_fma_ec_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_pade_fma_ec_T7_7<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_pade_fma_ec_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_fma_ec_T7_7(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.5f);
x = math::abs(math::abs(x - quarter) - F(1.0f)) - quarter;
auto const x2 = x * x;
auto const a4 = F(-0.1257431828016329f);
auto const b3 = F(0.001533450252410949f);
auto const a3 = math::fma(a4, x2, F(1.4032581344950563f));
auto const b2 = math::fma(b3, x2, F(0.02688990343982153f));
auto const a2 = math::fma(a3, x2, F(-4.419121665931703f));
auto const b1 = math::fma(b2, x2, F(0.23828395298821492f));
auto const a1 = math::fma(a2, x2, F(3.1415926550527336f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit2_quart_fma_ec_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_quart_fma_ec_T7_7<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_fma_ec_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_fma_T7_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a7 = F(-0.4240292267768113f);
auto const a6 = math::fma(a7, x, F(-0.18173587471986363f));
auto const a5 = math::fma(a6, x, F(2.6330554552000347f));
auto const a4 = math::fma(a5, x, F(-0.019872179427345538f));
auto const a3 = math::fma(a4, x, F(-5.165178988222969f));
auto const a2 = math::fma(a3, x, F(-0.00015777255850615846f));
auto const a1 = math::fma(a2, x, F(3.141596392566795f));
auto const a0 = math::fma(a1, x, F(-1.1479370293918036e-08f));
return math::setSign(a0, half - x0 );
}
inline static float sin_unit2_remez_fma_T7_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_fma_T7_0<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_fma_T7_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_remez_pade_fma_T7_7(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(1.0f);
auto const quarter = F(0.5f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a7 = F(1.0693206448062282f);
auto const b7 = F(-0.0162237182185071f);
auto const a6 = math::fma(a7, x, F(-3.579101794366808f));
auto const b6 = math::fma(b7, x, F(0.039490175465961466f));
auto const a5 = math::fma(a6, x, F(-3.9307040328028644f));
auto const b5 = math::fma(b6, x, F(-0.216170067433441f));
auto const a4 = math::fma(a5, x, F(15.46317569570164f));
auto const b4 = math::fma(b5, x, F(0.33088520029494123f));
auto const a3 = math::fma(a4, x, F(1.9111677611180207f));
auto const b3 = math::fma(b4, x, F(-1.3077929143894131f));
auto const a2 = math::fma(a3, x, F(-11.898184159380268f));
auto const b2 = math::fma(b3, x, F(1.1132554875727356f));
auto const a1 = math::fma(a2, x, F(0.9643106909129067f));
auto const b1 = math::fma(b2, x, F(-3.7873096455213338f));
auto const a0 = math::fma(a1, x, F(-2.3353714795337766e-16f));
auto const b0 = math::fma(b1, x, F(0.3069496262699163f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_unit2_remez_pade_fma_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_remez_pade_fma_T7_7<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_remez_pade_fma_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_fma_T7_7(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.5f);
x = math::abs(math::abs(x - quarter) - F(1.0f)) - quarter;
auto const x2 = x * x;
auto const a4 = F(-0.12574318274307827f);
auto const b3 = F(0.001533450252410949f);
auto const a3 = math::fma(a4, x2, F(1.4032581338416033f));
auto const b2 = math::fma(b3, x2, F(0.02688990343982153f));
auto const a2 = math::fma(a3, x2, F(-4.419121663873858f));
auto const b1 = math::fma(b2, x2, F(0.23828395298821492f));
auto const a1 = math::fma(a2, x2, F(3.141592653589793f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit2_quart_fma_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_unit2_quart_fma_T7_7<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_fma_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_fma_ec_T7_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a7 = F(-0.00013088187259230672f);
auto const a6 = math::fma(a7, x, F(-0.00023899827414695064f));
auto const a5 = math::fma(a6, x, F(0.008703511134428008f));
auto const a4 = math::fma(a5, x, F(-0.00029481146377985845f));
auto const a3 = math::fma(a4, x, F(-0.16654941264953982f));
auto const a2 = math::fma(a3, x, F(-1.9109996047577106e-05f));
auto const a1 = math::fma(a2, x, F(1.0000006877982166f));
auto const a0 = (a1 * x);
return math::setSign(a0, half - x0 );
}
inline static float sin_remez_fma_ec_T7_0_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_fma_ec_T7_0<cr::simd::float1x4>(x)[0];
#else
return sin_remez_fma_ec_T7_0<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_remez_pade_fma_ec_T7_7(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
auto const half = F(3.141592653589793f);
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);
auto const a7 = F(-3.92845154301368e-05f);
auto const b7 = F(1.0684343432296154e-07f);
auto const a6 = math::fma(a7, x, F(1.9179061826839737e-05f));
auto const b6 = math::fma(b7, x, F(1.60353451792255e-06f));
auto const a5 = math::fma(a6, x, F(0.00446934598393658f));
auto const b5 = math::fma(b6, x, F(7.494498685931808e-06f));
auto const a4 = math::fma(a5, x, F(-0.0009949162413165826f));
auto const b4 = math::fma(b5, x, F(0.00028290757865486095f));
auto const a3 = math::fma(a4, x, F(-0.1403571479233033f));
auto const b3 = math::fma(b4, x, F(0.0003262255639066462f));
auto const a2 = math::fma(a3, x, F(0.007926849892242963f));
auto const b2 = math::fma(b3, x, F(0.024269310902488392f));
auto const a1 = math::fma(a2, x, F(0.9877587531022943f));
auto const b1 = math::fma(b2, x, F(0.007926849894342582f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.9877587531022234f));
return math::setSign(a0 / b0, half - x0 );
}
inline static float sin_remez_pade_fma_ec_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return sin_remez_pade_fma_ec_T7_7<cr::simd::float1x4>(x)[0];
#else
return sin_remez_pade_fma_ec_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_fma_ec_T7_7(in_t(F) x) {
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
