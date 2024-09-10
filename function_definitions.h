template <class F>
inline constexpr static F atan_T3_3(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(-x, F(1.0f) / x, m);
auto const x2 = x * x;
auto const a2 = F(0.26666666666666666f);
auto const b1 = F(0.6f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_T3_3<cr::simd::float1x4>(x)[0];
#else
return atan_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_T12_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(-x, F(1.0f) / x, m);
auto const x2 = x * x;
auto const a5 = F(1.0f);
auto const a4 = a5 * x2 + F(-0.3333333333333333f);
auto const a3 = a4 * x2 + F(0.2f);
auto const a2 = a3 * x2 + F(-0.14285714285714285f);
auto const a1 = a2 * x2 + F(0.1111111111111111f);
auto const a0 = a1 * x2 + F(-0.09090909090909091f);
return math::setSign(a - a0, x0);
}
inline static float atan_T12_0_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_T12_0<cr::simd::float1x4>(x)[0];
#else
return atan_T12_0<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_remez_T3_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(-x, F(1.0f) / x, m);
auto const a2 = F(-1.2504281301801284e-11f);
auto const a1 = a2 * x + F(1.0000000086154026f);
auto const a0 = a1 * x + F(-8.925378507662618e-07f);
return math::setSign(a - a0, x0);
}
inline static float atan_remez_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_remez_T3_0<cr::simd::float1x4>(x)[0];
#else
return atan_remez_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_remez_pade_T3_3(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(-x, F(1.0f) / x, m);
auto const a3 = F(0.2770856951199859f);
auto const b3 = F(0.07429963550953801f);
auto const a2 = a3 * x + F(0.22170760911719345f);
auto const b2 = b3 * x + F(0.6103921776821636f);
auto const a1 = a2 * x + F(1.0000000086126302f);
auto const b1 = b2 * x + F(0.22170849975256873f);
auto const a0 = a1 * x + F(-1.2504281301801284e-11f);
auto const b0 = b1 * x + F(1.0f);
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_remez_pade_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_remez_pade_T3_3<cr::simd::float1x4>(x)[0];
#else
return atan_remez_pade_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_fma_T3_3(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(-x, F(1.0f) / x, m);
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
inline constexpr static F atan_fma_T12_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(-x, F(1.0f) / x, m);
auto const x2 = x * x;
auto const a5 = F(1.0f);
auto const a4 = math::fma(a5, x2, F(-0.3333333333333333f));
auto const a3 = math::fma(a4, x2, F(0.2f));
auto const a2 = math::fma(a3, x2, F(-0.14285714285714285f));
auto const a1 = math::fma(a2, x2, F(0.1111111111111111f));
auto const a0 = math::fma(a1, x2, F(-0.09090909090909091f));
return math::setSign(a - a0, x0);
}
inline static float atan_fma_T12_0_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_fma_T12_0<cr::simd::float1x4>(x)[0];
#else
return atan_fma_T12_0<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_remez_fma_T3_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(-x, F(1.0f) / x, m);
auto const a2 = F(-1.2504281301801284e-11f);
auto const a1 = math::fma(a2, x, F(1.0000000086154026f));
auto const a0 = math::fma(a1, x, F(-8.925378507662618e-07f));
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
x = math::blend(-x, F(1.0f) / x, m);
auto const a3 = F(0.2770856951199859f);
auto const b3 = F(0.07429963550953801f);
auto const a2 = math::fma(a3, x, F(0.22170760911719345f));
auto const b2 = math::fma(b3, x, F(0.6103921776821636f));
auto const a1 = math::fma(a2, x, F(1.0000000086126302f));
auto const b1 = math::fma(b2, x, F(0.22170849975256873f));
auto const a0 = math::fma(a1, x, F(-1.2504281301801284e-11f));
auto const b0 = math::fma(b1, x, F(1.0f));
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_remez_pade_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_remez_pade_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return atan_remez_pade_fma_T3_3<float>(x);
#endif
}
