template <class F>
inline constexpr static F atan_T5_5(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(x, F(1.0f) / x, m);
auto const x2 = x * x;
auto const a3 = F(0.06772486772486773f);
auto const b2 = F(0.23809523809523808f);
auto const a2 = a3 * x2 + F(0.7777777777777778f);
auto const b1 = b2 * x2 + F(1.1111111111111112f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_T5_5<cr::simd::float1x4>(x)[0];
#else
return atan_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_remez_T12_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(x, F(1.0f) / x, m);
auto const a5 = F(-0.04949198893794596f);
auto const a4 = a5 * x + F(0.2641109273295943f);
auto const a3 = a4 * x + F(-0.4511286858741659f);
auto const a2 = a3 * x + F(0.023653901912443098f);
auto const a1 = a2 * x + F(0.9982540089675227f);
auto const a0 = a1 * x + F(2.0926855255665465e-05f);
auto const offset = a0 + F(-2.09268552556655e-5f);
return math::setSign(a - offset, x0);
}
inline static float atan_remez_T12_0_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_remez_T12_0<cr::simd::float1x4>(x)[0];
#else
return atan_remez_T12_0<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_remez_pade_T5_5(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(x, F(1.0f) / x, m);
auto const a5 = F(-1.0056312661939348e-11f);
auto const b5 = F(0.486403033551013f);
auto const a4 = a5 * x + F(0.4864030417438582f);
auto const b4 = b5 * x + F(0.5494751237038659f);
auto const a3 = a4 * x + F(0.5494746918020175f);
auto const b3 = b4 * x + F(0.8093240851616892f);
auto const a2 = a3 * x + F(0.6471985102977554f);
auto const b2 = b3 * x + F(0.545999765455407f);
auto const a1 = a2 * x + F(0.3627512513001282f);
auto const b1 = b2 * x + F(0.29049313031504637f);
auto const a0 = a1 * x + F(0.11853329326750953f);
auto const b0 = b1 * x + F(0.07405460671109766f);
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_remez_pade_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_remez_pade_T5_5<cr::simd::float1x4>(x)[0];
#else
return atan_remez_pade_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_fma_T5_5(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(x, F(1.0f) / x, m);
auto const x2 = x * x;
auto const a3 = F(0.06772486772486773f);
auto const b2 = F(0.23809523809523808f);
auto const a2 = math::fma(a3, x2, F(0.7777777777777778f));
auto const b1 = math::fma(b2, x2, F(1.1111111111111112f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_fma_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_fma_T5_5<cr::simd::float1x4>(x)[0];
#else
return atan_fma_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_remez_fma_T12_0(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(x, F(1.0f) / x, m);
auto const a5 = F(-0.04949198893794596f);
auto const a4 = math::fma(a5, x, F(0.2641109273295943f));
auto const a3 = math::fma(a4, x, F(-0.4511286858741659f));
auto const a2 = math::fma(a3, x, F(0.023653901912443098f));
auto const a1 = math::fma(a2, x, F(0.9982540089675227f));
auto const a0 = math::fma(a1, x, F(2.0926855255665465e-05f));
auto const offset = a0 + F(-2.09268552556655e-5f);
return math::setSign(a - offset, x0);
}
inline static float atan_remez_fma_T12_0_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_remez_fma_T12_0<cr::simd::float1x4>(x)[0];
#else
return atan_remez_fma_T12_0<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_remez_pade_fma_T5_5(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(x, F(1.0f) / x, m);
auto const a5 = F(-1.0056312661939348e-11f);
auto const b5 = F(0.486403033551013f);
auto const a4 = math::fma(a5, x, F(0.4864030417438582f));
auto const b4 = math::fma(b5, x, F(0.5494751237038659f));
auto const a3 = math::fma(a4, x, F(0.5494746918020175f));
auto const b3 = math::fma(b4, x, F(0.8093240851616892f));
auto const a2 = math::fma(a3, x, F(0.6471985102977554f));
auto const b2 = math::fma(b3, x, F(0.545999765455407f));
auto const a1 = math::fma(a2, x, F(0.3627512513001282f));
auto const b1 = math::fma(b2, x, F(0.29049313031504637f));
auto const a0 = math::fma(a1, x, F(0.11853329326750953f));
auto const b0 = math::fma(b1, x, F(0.07405460671109766f));
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_remez_pade_fma_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return atan_remez_pade_fma_T5_5<cr::simd::float1x4>(x)[0];
#else
return atan_remez_pade_fma_T5_5<float>(x);
#endif
}
