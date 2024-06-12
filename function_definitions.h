template <class F>
inline constexpr static F sin_unit1_quart_T4(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.25f);
x = math::abs(math::abs(x - quarter) - F(0.5f)) - quarter;
auto const x2 = x * x;
auto const a2 = F(-26.154954478620255f);
auto const b2 = F(2.9156462622422494f);
auto const a1 = a2 * x2 + F(6.283185307179586f);
auto const b1 = b2 * x2 + F(2.4170459757769853f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float sin_unit1_quart_T4_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_quart_T4<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_half_T4(in_t(F) x) {
x = F(0.5f) - x;
auto const x2 = x * x;
auto const a2 = F(-26.154954478620255f);
auto const b2 = F(2.9156462622422494f);
auto const a1 = a2 * x2 + F(6.283185307179586f);
auto const b1 = b2 * x2 + F(2.4170459757769853f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float sin_unit1_half_T4_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_half_T4<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_half_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_fma_T4(in_t(F) x) {
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
inline static float sin_unit1_quart_fma_T4_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_quart_fma_T4<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_fma_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_half_fma_T4(in_t(F) x) {
using math = ApproxContext;
x = F(0.5f) - x;
auto const x2 = x * x;
auto const a2 = F(-26.154954478620255f);
auto const b2 = F(2.9156462622422494f);
auto const a1 = math::fma(a2, x2, F(6.283185307179586f));
auto const b1 = math::fma(b2, x2, F(2.4170459757769853f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_unit1_half_fma_T4_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_half_fma_T4<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_half_fma_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_T4(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.5f);
x = math::abs(math::abs(x - quarter) - F(1.0f)) - quarter;
auto const x2 = x * x;
auto const a2 = F(-3.269369309827532f);
auto const b2 = F(0.1822278913901406f);
auto const a1 = a2 * x2 + F(3.141592653589793f);
auto const b1 = b2 * x2 + F(0.6042614939442466f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float sin_unit2_quart_T4_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_quart_T4<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_half_T4(in_t(F) x) {
x = F(1.0f) - x;
auto const x2 = x * x;
auto const a2 = F(-3.269369309827532f);
auto const b2 = F(0.1822278913901406f);
auto const a1 = a2 * x2 + F(3.141592653589793f);
auto const b1 = b2 * x2 + F(0.6042614939442466f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float sin_unit2_half_T4_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_half_T4<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_half_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_fma_T4(in_t(F) x) {
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
inline static float sin_unit2_quart_fma_T4_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_quart_fma_T4<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_fma_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_half_fma_T4(in_t(F) x) {
using math = ApproxContext;
x = F(1.0f) - x;
auto const x2 = x * x;
auto const a2 = F(-3.269369309827532f);
auto const b2 = F(0.1822278913901406f);
auto const a1 = math::fma(a2, x2, F(3.141592653589793f));
auto const b1 = math::fma(b2, x2, F(0.6042614939442466f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_unit2_half_fma_T4_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_half_fma_T4<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_half_fma_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_T4(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a2 = F(-0.1054421768707483f);
auto const b2 = F(0.0018707482993197278f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(0.061224489795918366f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float sin_quart_T4_float_simd(float x) {
#ifdef __x86_64__
return sin_quart_T4<cr::simd::float1x4>(x)[0];
#else
return sin_quart_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_half_T4(in_t(F) x) {
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a2 = F(-0.1054421768707483f);
auto const b2 = F(0.0018707482993197278f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(0.061224489795918366f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float sin_half_T4_float_simd(float x) {
#ifdef __x86_64__
return sin_half_T4<cr::simd::float1x4>(x)[0];
#else
return sin_half_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_fma_T4(in_t(F) x) {
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
inline static float sin_quart_fma_T4_float_simd(float x) {
#ifdef __x86_64__
return sin_quart_fma_T4<cr::simd::float1x4>(x)[0];
#else
return sin_quart_fma_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_half_fma_T4(in_t(F) x) {
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
inline static float sin_half_fma_T4_float_simd(float x) {
#ifdef __x86_64__
return sin_half_fma_T4<cr::simd::float1x4>(x)[0];
#else
return sin_half_fma_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_T5(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.25f);
x = math::abs(math::abs(x - quarter) - F(0.5f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(32.441913673244855f);
auto const b2 = F(0.7028072946176219f);
auto const a2 = a3 * x2 + F(-33.19863967789678f);
auto const b1 = b2 * x2 + F(1.2960086587289052f);
auto const a1 = a2 * x2 + F(6.283185307179586f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit1_quart_T5_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_quart_T5<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_half_T5(in_t(F) x) {
x = F(0.5f) - x;
auto const x2 = x * x;
auto const a3 = F(32.441913673244855f);
auto const b2 = F(0.7028072946176219f);
auto const a2 = a3 * x2 + F(-33.19863967789678f);
auto const b1 = b2 * x2 + F(1.2960086587289052f);
auto const a1 = a2 * x2 + F(6.283185307179586f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit1_half_T5_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_half_T5<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_half_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_fma_T5(in_t(F) x) {
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
inline static float sin_unit1_quart_fma_T5_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_quart_fma_T5<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_fma_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_half_fma_T5(in_t(F) x) {
using math = ApproxContext;
x = F(0.5f) - x;
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
inline static float sin_unit1_half_fma_T5_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_half_fma_T5<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_half_fma_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_T5(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.5f);
x = math::abs(math::abs(x - quarter) - F(1.0f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(1.0138098022889017f);
auto const b2 = F(0.04392545591360137f);
auto const a2 = a3 * x2 + F(-4.149829959737097f);
auto const b1 = b2 * x2 + F(0.3240021646822263f);
auto const a1 = a2 * x2 + F(3.141592653589793f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit2_quart_T5_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_quart_T5<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_half_T5(in_t(F) x) {
x = F(1.0f) - x;
auto const x2 = x * x;
auto const a3 = F(1.0138098022889017f);
auto const b2 = F(0.04392545591360137f);
auto const a2 = a3 * x2 + F(-4.149829959737097f);
auto const b1 = b2 * x2 + F(0.3240021646822263f);
auto const a1 = a2 * x2 + F(3.141592653589793f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit2_half_T5_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_half_T5<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_half_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_fma_T5(in_t(F) x) {
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
inline static float sin_unit2_quart_fma_T5_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_quart_fma_T5<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_fma_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_half_fma_T5(in_t(F) x) {
using math = ApproxContext;
x = F(1.0f) - x;
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
inline static float sin_unit2_half_fma_T5_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_half_fma_T5<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_half_fma_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_T5(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(0.003312890812890813f);
auto const b2 = F(0.00045093795093795094f);
auto const a2 = a3 * x2 + F(-0.13383838383838384f);
auto const b1 = b2 * x2 + F(0.03282828282828283f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_quart_T5_float_simd(float x) {
#ifdef __x86_64__
return sin_quart_T5<cr::simd::float1x4>(x)[0];
#else
return sin_quart_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_half_T5(in_t(F) x) {
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a3 = F(0.003312890812890813f);
auto const b2 = F(0.00045093795093795094f);
auto const a2 = a3 * x2 + F(-0.13383838383838384f);
auto const b1 = b2 * x2 + F(0.03282828282828283f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_half_T5_float_simd(float x) {
#ifdef __x86_64__
return sin_half_T5<cr::simd::float1x4>(x)[0];
#else
return sin_half_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_fma_T5(in_t(F) x) {
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
inline static float sin_quart_fma_T5_float_simd(float x) {
#ifdef __x86_64__
return sin_quart_fma_T5<cr::simd::float1x4>(x)[0];
#else
return sin_quart_fma_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_half_fma_T5(in_t(F) x) {
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
inline static float sin_half_fma_T5_float_simd(float x) {
#ifdef __x86_64__
return sin_half_fma_T5<cr::simd::float1x4>(x)[0];
#else
return sin_half_fma_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_T6(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.25f);
x = math::abs(math::abs(x - quarter) - F(0.5f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(28.433704932550953f);
auto const b3 = F(0.4468185499096844f);
auto const a2 = a3 * x2 + F(-32.23575066624802f);
auto const b2 = b3 * x2 + F(1.0732160756647304f);
auto const a1 = a2 * x2 + F(6.283185307179586f);
auto const b1 = b2 * x2 + F(1.4492572045816738f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float sin_unit1_quart_T6_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_quart_T6<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_half_T6(in_t(F) x) {
x = F(0.5f) - x;
auto const x2 = x * x;
auto const a3 = F(28.433704932550953f);
auto const b3 = F(0.4468185499096844f);
auto const a2 = a3 * x2 + F(-32.23575066624802f);
auto const b2 = b3 * x2 + F(1.0732160756647304f);
auto const a1 = a2 * x2 + F(6.283185307179586f);
auto const b1 = b2 * x2 + F(1.4492572045816738f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float sin_unit1_half_T6_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_half_T6<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_half_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_fma_T6(in_t(F) x) {
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
inline static float sin_unit1_quart_fma_T6_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_quart_fma_T6<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_fma_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_half_fma_T6(in_t(F) x) {
using math = ApproxContext;
x = F(0.5f) - x;
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
inline static float sin_unit1_half_fma_T6_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_half_fma_T6<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_half_fma_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_T6(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.5f);
x = math::abs(math::abs(x - quarter) - F(1.0f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(0.8885532791422168f);
auto const b3 = F(0.006981539842338819f);
auto const a2 = a3 * x2 + F(-4.029468833281002f);
auto const b2 = b3 * x2 + F(0.06707600472904571f);
auto const a1 = a2 * x2 + F(3.141592653589793f);
auto const b1 = b2 * x2 + F(0.3623143011454184f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float sin_unit2_quart_T6_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_quart_T6<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_half_T6(in_t(F) x) {
x = F(1.0f) - x;
auto const x2 = x * x;
auto const a3 = F(0.8885532791422168f);
auto const b3 = F(0.006981539842338819f);
auto const a2 = a3 * x2 + F(-4.029468833281002f);
auto const b2 = b3 * x2 + F(0.06707600472904571f);
auto const a1 = a2 * x2 + F(3.141592653589793f);
auto const b1 = b2 * x2 + F(0.3623143011454184f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float sin_unit2_half_T6_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_half_T6<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_half_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_fma_T6(in_t(F) x) {
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
inline static float sin_unit2_quart_fma_T6_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_quart_fma_T6<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_fma_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_half_fma_T6(in_t(F) x) {
using math = ApproxContext;
x = F(1.0f) - x;
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
inline static float sin_unit2_half_fma_T6_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_half_fma_T6<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_half_fma_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_T6(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a3 = F(0.002903582100496801f);
auto const b3 = F(7.261928768280855e-06f);
auto const a2 = a3 * x2 + F(-0.12995655282406643f);
auto const b2 = b3 * x2 + F(0.0006886010742635062f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(0.03671011384260023f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float sin_quart_T6_float_simd(float x) {
#ifdef __x86_64__
return sin_quart_T6<cr::simd::float1x4>(x)[0];
#else
return sin_quart_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_half_T6(in_t(F) x) {
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a3 = F(0.002903582100496801f);
auto const b3 = F(7.261928768280855e-06f);
auto const a2 = a3 * x2 + F(-0.12995655282406643f);
auto const b2 = b3 * x2 + F(0.0006886010742635062f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(0.03671011384260023f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float sin_half_T6_float_simd(float x) {
#ifdef __x86_64__
return sin_half_T6<cr::simd::float1x4>(x)[0];
#else
return sin_half_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_fma_T6(in_t(F) x) {
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
inline static float sin_quart_fma_T6_float_simd(float x) {
#ifdef __x86_64__
return sin_quart_fma_T6<cr::simd::float1x4>(x)[0];
#else
return sin_quart_fma_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_half_fma_T6(in_t(F) x) {
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
inline static float sin_half_fma_T6_float_simd(float x) {
#ifdef __x86_64__
return sin_half_fma_T6<cr::simd::float1x4>(x)[0];
#else
return sin_half_fma_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_T7(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.25f);
x = math::abs(math::abs(x - quarter) - F(0.5f)) - quarter;
auto const x2 = x * x;
auto const a4 = F(-16.09512739111402f);
auto const b3 = F(0.09814081615430073f);
auto const a3 = a4 * x2 + F(44.904260282931304f);
auto const b2 = b3 * x2 + F(0.4302384550371445f);
auto const a2 = a3 * x2 + F(-35.35297331099086f);
auto const b1 = b2 * x2 + F(0.9531358119528597f);
auto const a1 = a2 * x2 + F(6.283185307179586f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit1_quart_T7_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_quart_T7<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_half_T7(in_t(F) x) {
x = F(0.5f) - x;
auto const x2 = x * x;
auto const a4 = F(-16.09512739111402f);
auto const b3 = F(0.09814081615430073f);
auto const a3 = a4 * x2 + F(44.904260282931304f);
auto const b2 = b3 * x2 + F(0.4302384550371445f);
auto const a2 = a3 * x2 + F(-35.35297331099086f);
auto const b1 = b2 * x2 + F(0.9531358119528597f);
auto const a1 = a2 * x2 + F(6.283185307179586f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit1_half_T7_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_half_T7<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_half_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_fma_T7(in_t(F) x) {
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
inline static float sin_unit1_quart_fma_T7_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_quart_fma_T7<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_fma_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_half_fma_T7(in_t(F) x) {
using math = ApproxContext;
x = F(0.5f) - x;
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
inline static float sin_unit1_half_fma_T7_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_half_fma_T7<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_half_fma_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_T7(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.5f);
x = math::abs(math::abs(x - quarter) - F(1.0f)) - quarter;
auto const x2 = x * x;
auto const a4 = F(-0.12574318274307827f);
auto const b3 = F(0.001533450252410949f);
auto const a3 = a4 * x2 + F(1.4032581338416033f);
auto const b2 = b3 * x2 + F(0.02688990343982153f);
auto const a2 = a3 * x2 + F(-4.419121663873858f);
auto const b1 = b2 * x2 + F(0.23828395298821492f);
auto const a1 = a2 * x2 + F(3.141592653589793f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit2_quart_T7_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_quart_T7<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_half_T7(in_t(F) x) {
x = F(1.0f) - x;
auto const x2 = x * x;
auto const a4 = F(-0.12574318274307827f);
auto const b3 = F(0.001533450252410949f);
auto const a3 = a4 * x2 + F(1.4032581338416033f);
auto const b2 = b3 * x2 + F(0.02688990343982153f);
auto const a2 = a3 * x2 + F(-4.419121663873858f);
auto const b1 = b2 * x2 + F(0.23828395298821492f);
auto const a1 = a2 * x2 + F(3.141592653589793f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_unit2_half_T7_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_half_T7<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_half_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_fma_T7(in_t(F) x) {
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
inline static float sin_unit2_quart_fma_T7_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_quart_fma_T7<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_fma_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_half_fma_T7(in_t(F) x) {
using math = ApproxContext;
x = F(1.0f) - x;
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
inline static float sin_unit2_half_fma_T7_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_half_fma_T7<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_half_fma_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_T7(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a4 = F(-4.163277313164616e-05f);
auto const b3 = F(1.5950358737736648e-06f);
auto const a3 = a4 * x2 + F(0.0045855159115865355f);
auto const b2 = b3 * x2 + F(0.00027605127154338275f);
auto const a2 = a3 * x2 + F(-0.14252345450692558f);
auto const b1 = b2 * x2 + F(0.024143212159741086f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_quart_T7_float_simd(float x) {
#ifdef __x86_64__
return sin_quart_T7<cr::simd::float1x4>(x)[0];
#else
return sin_quart_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_half_T7(in_t(F) x) {
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a4 = F(-4.163277313164616e-05f);
auto const b3 = F(1.5950358737736648e-06f);
auto const a3 = a4 * x2 + F(0.0045855159115865355f);
auto const b2 = b3 * x2 + F(0.00027605127154338275f);
auto const a2 = a3 * x2 + F(-0.14252345450692558f);
auto const b1 = b2 * x2 + F(0.024143212159741086f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float sin_half_T7_float_simd(float x) {
#ifdef __x86_64__
return sin_half_T7<cr::simd::float1x4>(x)[0];
#else
return sin_half_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_fma_T7(in_t(F) x) {
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
inline static float sin_quart_fma_T7_float_simd(float x) {
#ifdef __x86_64__
return sin_quart_fma_T7<cr::simd::float1x4>(x)[0];
#else
return sin_quart_fma_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_half_fma_T7(in_t(F) x) {
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
inline static float sin_half_fma_T7_float_simd(float x) {
#ifdef __x86_64__
return sin_half_fma_T7<cr::simd::float1x4>(x)[0];
#else
return sin_half_fma_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_T8(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.25f);
x = math::abs(math::abs(x - quarter) - F(0.5f)) - quarter;
auto const x2 = x * x;
auto const a4 = F(-13.896097480429436f);
auto const b4 = F(0.03455643076520994f);
auto const a3 = a4 * x2 + F(42.411184544943424f);
auto const b3 = b4 * x2 + F(0.1811421083394948f);
auto const a2 = a3 * x2 + F(-34.86703901373211f);
auto const b2 = b3 * x2 + F(0.5423223339656964f);
auto const a1 = a2 * x2 + F(6.283185307179586f);
auto const b1 = b2 * x2 + F(1.0304746573794765f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float sin_unit1_quart_T8_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_quart_T8<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_half_T8(in_t(F) x) {
x = F(0.5f) - x;
auto const x2 = x * x;
auto const a4 = F(-13.896097480429436f);
auto const b4 = F(0.03455643076520994f);
auto const a3 = a4 * x2 + F(42.411184544943424f);
auto const b3 = b4 * x2 + F(0.1811421083394948f);
auto const a2 = a3 * x2 + F(-34.86703901373211f);
auto const b2 = b3 * x2 + F(0.5423223339656964f);
auto const a1 = a2 * x2 + F(6.283185307179586f);
auto const b1 = b2 * x2 + F(1.0304746573794765f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float sin_unit1_half_T8_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_half_T8<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_half_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_quart_fma_T8(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.25f);
x = math::abs(math::abs(x - quarter) - F(0.5f)) - quarter;
auto const x2 = x * x;
auto const a4 = F(-13.896097480429436f);
auto const b4 = F(0.03455643076520994f);
auto const a3 = math::fma(a4, x2, F(42.411184544943424f));
auto const b3 = math::fma(b4, x2, F(0.1811421083394948f));
auto const a2 = math::fma(a3, x2, F(-34.86703901373211f));
auto const b2 = math::fma(b3, x2, F(0.5423223339656964f));
auto const a1 = math::fma(a2, x2, F(6.283185307179586f));
auto const b1 = math::fma(b2, x2, F(1.0304746573794765f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_unit1_quart_fma_T8_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_quart_fma_T8<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_quart_fma_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit1_half_fma_T8(in_t(F) x) {
using math = ApproxContext;
x = F(0.5f) - x;
auto const x2 = x * x;
auto const a4 = F(-13.896097480429436f);
auto const b4 = F(0.03455643076520994f);
auto const a3 = math::fma(a4, x2, F(42.411184544943424f));
auto const b3 = math::fma(b4, x2, F(0.1811421083394948f));
auto const a2 = math::fma(a3, x2, F(-34.86703901373211f));
auto const b2 = math::fma(b3, x2, F(0.5423223339656964f));
auto const a1 = math::fma(a2, x2, F(6.283185307179586f));
auto const b1 = math::fma(b2, x2, F(1.0304746573794765f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_unit1_half_fma_T8_float_simd(float x) {
#ifdef __x86_64__
return sin_unit1_half_fma_T8<cr::simd::float1x4>(x)[0];
#else
return sin_unit1_half_fma_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_T8(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.5f);
x = math::abs(math::abs(x - quarter) - F(1.0f)) - quarter;
auto const x2 = x * x;
auto const a4 = F(-0.10856326156585497f);
auto const b4 = F(0.00013498605767660134f);
auto const a3 = a4 * x2 + F(1.325349517029482f);
auto const b3 = b4 * x2 + F(0.002830345442804606f);
auto const a2 = a3 * x2 + F(-4.358379876716514f);
auto const b2 = b3 * x2 + F(0.033895145872856025f);
auto const a1 = a2 * x2 + F(3.141592653589793f);
auto const b1 = b2 * x2 + F(0.25761866434486913f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float sin_unit2_quart_T8_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_quart_T8<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_half_T8(in_t(F) x) {
x = F(1.0f) - x;
auto const x2 = x * x;
auto const a4 = F(-0.10856326156585497f);
auto const b4 = F(0.00013498605767660134f);
auto const a3 = a4 * x2 + F(1.325349517029482f);
auto const b3 = b4 * x2 + F(0.002830345442804606f);
auto const a2 = a3 * x2 + F(-4.358379876716514f);
auto const b2 = b3 * x2 + F(0.033895145872856025f);
auto const a1 = a2 * x2 + F(3.141592653589793f);
auto const b1 = b2 * x2 + F(0.25761866434486913f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float sin_unit2_half_T8_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_half_T8<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_half_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_quart_fma_T8(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(0.5f);
x = math::abs(math::abs(x - quarter) - F(1.0f)) - quarter;
auto const x2 = x * x;
auto const a4 = F(-0.10856326156585497f);
auto const b4 = F(0.00013498605767660134f);
auto const a3 = math::fma(a4, x2, F(1.325349517029482f));
auto const b3 = math::fma(b4, x2, F(0.002830345442804606f));
auto const a2 = math::fma(a3, x2, F(-4.358379876716514f));
auto const b2 = math::fma(b3, x2, F(0.033895145872856025f));
auto const a1 = math::fma(a2, x2, F(3.141592653589793f));
auto const b1 = math::fma(b2, x2, F(0.25761866434486913f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_unit2_quart_fma_T8_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_quart_fma_T8<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_quart_fma_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_unit2_half_fma_T8(in_t(F) x) {
using math = ApproxContext;
x = F(1.0f) - x;
auto const x2 = x * x;
auto const a4 = F(-0.10856326156585497f);
auto const b4 = F(0.00013498605767660134f);
auto const a3 = math::fma(a4, x2, F(1.325349517029482f));
auto const b3 = math::fma(b4, x2, F(0.002830345442804606f));
auto const a2 = math::fma(a3, x2, F(-4.358379876716514f));
auto const b2 = math::fma(b3, x2, F(0.033895145872856025f));
auto const a1 = math::fma(a2, x2, F(3.141592653589793f));
auto const b1 = math::fma(b2, x2, F(0.25761866434486913f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float sin_unit2_half_fma_T8_float_simd(float x) {
#ifdef __x86_64__
return sin_unit2_half_fma_T8<cr::simd::float1x4>(x)[0];
#else
return sin_unit2_half_fma_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_T8(in_t(F) x) {
using math = ApproxContext;
auto const quarter = F(1.5707963267948966f);
x = math::abs(math::abs(x - quarter) - F(3.141592653589793f)) - quarter;
auto const x2 = x * x;
auto const a4 = F(-3.594460980391885e-05f);
auto const b4 = F(1.4226233486298017e-08f);
auto const a3 = a4 * x2 + F(0.004330928966087308f);
auto const b3 = b4 * x2 + F(2.944016285723832e-06f);
auto const a2 = a3 * x2 + F(-0.14056443866688645f);
auto const b2 = b3 * x2 + F(0.0003479669660506762f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(0.026102227999780212f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float sin_quart_T8_float_simd(float x) {
#ifdef __x86_64__
return sin_quart_T8<cr::simd::float1x4>(x)[0];
#else
return sin_quart_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_half_T8(in_t(F) x) {
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a4 = F(-3.594460980391885e-05f);
auto const b4 = F(1.4226233486298017e-08f);
auto const a3 = a4 * x2 + F(0.004330928966087308f);
auto const b3 = b4 * x2 + F(2.944016285723832e-06f);
auto const a2 = a3 * x2 + F(-0.14056443866688645f);
auto const b2 = b3 * x2 + F(0.0003479669660506762f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(0.026102227999780212f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float sin_half_T8_float_simd(float x) {
#ifdef __x86_64__
return sin_half_T8<cr::simd::float1x4>(x)[0];
#else
return sin_half_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_quart_fma_T8(in_t(F) x) {
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
inline static float sin_quart_fma_T8_float_simd(float x) {
#ifdef __x86_64__
return sin_quart_fma_T8<cr::simd::float1x4>(x)[0];
#else
return sin_quart_fma_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F sin_half_fma_T8(in_t(F) x) {
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
inline static float sin_half_fma_T8_float_simd(float x) {
#ifdef __x86_64__
return sin_half_fma_T8<cr::simd::float1x4>(x)[0];
#else
return sin_half_fma_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_T4(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
auto const x2 = x * x;
auto const a2 = F(-26.154954478620255f);
auto const b2 = F(2.9156462622422494f);
auto const a1 = a2 * x2 + F(6.283185307179586f);
auto const b1 = b2 * x2 + F(2.4170459757769853f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float cos_unit1_quart_T4_float_simd(float x) {
#ifdef __x86_64__
return cos_unit1_quart_T4<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_half_T4(in_t(F) x) {
x = F(0.5f) - x;
auto const x2 = x * x;
auto const a2 = F(-32.26354020491294f);
auto const b2 = F(1.3400192417376011f);
auto const a1 = a2 * x2 + F(18.015944541671047f);
auto const b1 = b2 * x2 + F(1.7232642605076665f);
auto const a0 = a1 * x2 + F(-1.0f);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float cos_unit1_half_T4_float_simd(float x) {
#ifdef __x86_64__
return cos_unit1_half_T4<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_half_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_fma_T4(in_t(F) x) {
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
inline static float cos_unit1_quart_fma_T4_float_simd(float x) {
#ifdef __x86_64__
return cos_unit1_quart_fma_T4<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_fma_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_half_fma_T4(in_t(F) x) {
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
inline static float cos_unit1_half_fma_T4_float_simd(float x) {
#ifdef __x86_64__
return cos_unit1_half_fma_T4<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_half_fma_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_T4(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
auto const x2 = x * x;
auto const a2 = F(-3.269369309827532f);
auto const b2 = F(0.1822278913901406f);
auto const a1 = a2 * x2 + F(3.141592653589793f);
auto const b1 = b2 * x2 + F(0.6042614939442466f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float cos_unit2_quart_T4_float_simd(float x) {
#ifdef __x86_64__
return cos_unit2_quart_T4<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_half_T4(in_t(F) x) {
x = F(1.0f) - x;
auto const x2 = x * x;
auto const a2 = F(-2.016471262807059f);
auto const b2 = F(0.08375120260860007f);
auto const a1 = a2 * x2 + F(4.503986135417762f);
auto const b1 = b2 * x2 + F(0.4308160651269166f);
auto const a0 = a1 * x2 + F(-1.0f);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float cos_unit2_half_T4_float_simd(float x) {
#ifdef __x86_64__
return cos_unit2_half_T4<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_half_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_fma_T4(in_t(F) x) {
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
inline static float cos_unit2_quart_fma_T4_float_simd(float x) {
#ifdef __x86_64__
return cos_unit2_quart_fma_T4<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_fma_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_half_fma_T4(in_t(F) x) {
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
inline static float cos_unit2_half_fma_T4_float_simd(float x) {
#ifdef __x86_64__
return cos_unit2_half_fma_T4<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_half_fma_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_T4(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
auto const x2 = x * x;
auto const a2 = F(-0.1054421768707483f);
auto const b2 = F(0.0018707482993197278f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(0.061224489795918366f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float cos_quart_T4_float_simd(float x) {
#ifdef __x86_64__
return cos_quart_T4<cr::simd::float1x4>(x)[0];
#else
return cos_quart_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_half_T4(in_t(F) x) {
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a2 = F(-0.020701058201058203f);
auto const b2 = F(0.0008597883597883598f);
auto const a1 = a2 * x2 + F(0.45634920634920634f);
auto const b1 = b2 * x2 + F(0.04365079365079365f);
auto const a0 = a1 * x2 + F(-1.0f);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float cos_half_T4_float_simd(float x) {
#ifdef __x86_64__
return cos_half_T4<cr::simd::float1x4>(x)[0];
#else
return cos_half_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_fma_T4(in_t(F) x) {
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
inline static float cos_quart_fma_T4_float_simd(float x) {
#ifdef __x86_64__
return cos_quart_fma_T4<cr::simd::float1x4>(x)[0];
#else
return cos_quart_fma_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_half_fma_T4(in_t(F) x) {
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
inline static float cos_half_fma_T4_float_simd(float x) {
#ifdef __x86_64__
return cos_half_fma_T4<cr::simd::float1x4>(x)[0];
#else
return cos_half_fma_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_T5(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
auto const x2 = x * x;
auto const a3 = F(32.441913673244855f);
auto const b2 = F(0.7028072946176219f);
auto const a2 = a3 * x2 + F(-33.19863967789678f);
auto const b1 = b2 * x2 + F(1.2960086587289052f);
auto const a1 = a2 * x2 + F(6.283185307179586f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_unit1_quart_T5_float_simd(float x) {
#ifdef __x86_64__
return cos_unit1_quart_T5<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_fma_T5(in_t(F) x) {
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
inline static float cos_unit1_quart_fma_T5_float_simd(float x) {
#ifdef __x86_64__
return cos_unit1_quart_fma_T5<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_fma_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_T5(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
auto const x2 = x * x;
auto const a3 = F(1.0138098022889017f);
auto const b2 = F(0.04392545591360137f);
auto const a2 = a3 * x2 + F(-4.149829959737097f);
auto const b1 = b2 * x2 + F(0.3240021646822263f);
auto const a1 = a2 * x2 + F(3.141592653589793f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_unit2_quart_T5_float_simd(float x) {
#ifdef __x86_64__
return cos_unit2_quart_T5<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_fma_T5(in_t(F) x) {
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
inline static float cos_unit2_quart_fma_T5_float_simd(float x) {
#ifdef __x86_64__
return cos_unit2_quart_fma_T5<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_fma_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_T5(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
auto const x2 = x * x;
auto const a3 = F(0.003312890812890813f);
auto const b2 = F(0.00045093795093795094f);
auto const a2 = a3 * x2 + F(-0.13383838383838384f);
auto const b1 = b2 * x2 + F(0.03282828282828283f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_quart_T5_float_simd(float x) {
#ifdef __x86_64__
return cos_quart_T5<cr::simd::float1x4>(x)[0];
#else
return cos_quart_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_fma_T5(in_t(F) x) {
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
inline static float cos_quart_fma_T5_float_simd(float x) {
#ifdef __x86_64__
return cos_quart_fma_T5<cr::simd::float1x4>(x)[0];
#else
return cos_quart_fma_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_T6(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
auto const x2 = x * x;
auto const a3 = F(28.433704932550953f);
auto const b3 = F(0.4468185499096844f);
auto const a2 = a3 * x2 + F(-32.23575066624802f);
auto const b2 = b3 * x2 + F(1.0732160756647304f);
auto const a1 = a2 * x2 + F(6.283185307179586f);
auto const b1 = b2 * x2 + F(1.4492572045816738f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float cos_unit1_quart_T6_float_simd(float x) {
#ifdef __x86_64__
return cos_unit1_quart_T6<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_half_T6(in_t(F) x) {
x = F(0.5f) - x;
auto const x2 = x * x;
auto const a3 = F(22.909813329588246f);
auto const b3 = F(0.19907945897076212f);
auto const a2 = a3 * x2 + F(-42.68589443770461f);
auto const b2 = b3 * x2 + F(0.6604006171796758f);
auto const a1 = a2 * x2 + F(18.578377057006932f);
auto const b1 = b2 * x2 + F(1.1608317451717827f);
auto const a0 = a1 * x2 + F(-1.0f);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float cos_unit1_half_T6_float_simd(float x) {
#ifdef __x86_64__
return cos_unit1_half_T6<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_half_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_fma_T6(in_t(F) x) {
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
inline static float cos_unit1_quart_fma_T6_float_simd(float x) {
#ifdef __x86_64__
return cos_unit1_quart_fma_T6<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_fma_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_half_fma_T6(in_t(F) x) {
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
inline static float cos_unit1_half_fma_T6_float_simd(float x) {
#ifdef __x86_64__
return cos_unit1_half_fma_T6<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_half_fma_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_T6(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
auto const x2 = x * x;
auto const a3 = F(0.8885532791422168f);
auto const b3 = F(0.006981539842338819f);
auto const a2 = a3 * x2 + F(-4.029468833281002f);
auto const b2 = b3 * x2 + F(0.06707600472904571f);
auto const a1 = a2 * x2 + F(3.141592653589793f);
auto const b1 = b2 * x2 + F(0.3623143011454184f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float cos_unit2_quart_T6_float_simd(float x) {
#ifdef __x86_64__
return cos_unit2_quart_T6<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_half_T6(in_t(F) x) {
x = F(1.0f) - x;
auto const x2 = x * x;
auto const a3 = F(0.35796583327481624f);
auto const b3 = F(0.003110616546418158f);
auto const a2 = a3 * x2 + F(-2.6678684023565387f);
auto const b2 = b3 * x2 + F(0.04127503857372976f);
auto const a1 = a2 * x2 + F(4.644594264251733f);
auto const b1 = b2 * x2 + F(0.29020793629294567f);
auto const a0 = a1 * x2 + F(-1.0f);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float cos_unit2_half_T6_float_simd(float x) {
#ifdef __x86_64__
return cos_unit2_half_T6<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_half_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_fma_T6(in_t(F) x) {
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
inline static float cos_unit2_quart_fma_T6_float_simd(float x) {
#ifdef __x86_64__
return cos_unit2_quart_fma_T6<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_fma_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_half_fma_T6(in_t(F) x) {
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
inline static float cos_unit2_half_fma_T6_float_simd(float x) {
#ifdef __x86_64__
return cos_unit2_half_fma_T6<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_half_fma_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_T6(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
auto const x2 = x * x;
auto const a3 = F(0.002903582100496801f);
auto const b3 = F(7.261928768280855e-06f);
auto const a2 = a3 * x2 + F(-0.12995655282406643f);
auto const b2 = b3 * x2 + F(0.0006886010742635062f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(0.03671011384260023f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float cos_quart_T6_float_simd(float x) {
#ifdef __x86_64__
return cos_quart_T6<cr::simd::float1x4>(x)[0];
#else
return cos_quart_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_half_T6(in_t(F) x) {
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a3 = F(0.0003723422685287092f);
auto const b3 = F(3.235543489780778e-06f);
auto const a2 = a3 * x2 + F(-0.02738828967642527f);
auto const b2 = b3 * x2 + F(0.000423728813559322f);
auto const a1 = a2 * x2 + F(0.4705957883923986f);
auto const b1 = b2 * x2 + F(0.029404211607601437f);
auto const a0 = a1 * x2 + F(-1.0f);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float cos_half_T6_float_simd(float x) {
#ifdef __x86_64__
return cos_half_T6<cr::simd::float1x4>(x)[0];
#else
return cos_half_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_fma_T6(in_t(F) x) {
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
inline static float cos_quart_fma_T6_float_simd(float x) {
#ifdef __x86_64__
return cos_quart_fma_T6<cr::simd::float1x4>(x)[0];
#else
return cos_quart_fma_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_half_fma_T6(in_t(F) x) {
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
inline static float cos_half_fma_T6_float_simd(float x) {
#ifdef __x86_64__
return cos_half_fma_T6<cr::simd::float1x4>(x)[0];
#else
return cos_half_fma_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_T7(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
auto const x2 = x * x;
auto const a4 = F(-16.09512739111402f);
auto const b3 = F(0.09814081615430073f);
auto const a3 = a4 * x2 + F(44.904260282931304f);
auto const b2 = b3 * x2 + F(0.4302384550371445f);
auto const a2 = a3 * x2 + F(-35.35297331099086f);
auto const b1 = b2 * x2 + F(0.9531358119528597f);
auto const a1 = a2 * x2 + F(6.283185307179586f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_unit1_quart_T7_float_simd(float x) {
#ifdef __x86_64__
return cos_unit1_quart_T7<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_fma_T7(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
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
inline static float cos_unit1_quart_fma_T7_float_simd(float x) {
#ifdef __x86_64__
return cos_unit1_quart_fma_T7<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_fma_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_T7(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
auto const x2 = x * x;
auto const a4 = F(-0.12574318274307827f);
auto const b3 = F(0.001533450252410949f);
auto const a3 = a4 * x2 + F(1.4032581338416033f);
auto const b2 = b3 * x2 + F(0.02688990343982153f);
auto const a2 = a3 * x2 + F(-4.419121663873858f);
auto const b1 = b2 * x2 + F(0.23828395298821492f);
auto const a1 = a2 * x2 + F(3.141592653589793f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_unit2_quart_T7_float_simd(float x) {
#ifdef __x86_64__
return cos_unit2_quart_T7<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_fma_T7(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
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
inline static float cos_unit2_quart_fma_T7_float_simd(float x) {
#ifdef __x86_64__
return cos_unit2_quart_fma_T7<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_fma_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_T7(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
auto const x2 = x * x;
auto const a4 = F(-4.163277313164616e-05f);
auto const b3 = F(1.5950358737736648e-06f);
auto const a3 = a4 * x2 + F(0.0045855159115865355f);
auto const b2 = b3 * x2 + F(0.00027605127154338275f);
auto const a2 = a3 * x2 + F(-0.14252345450692558f);
auto const b1 = b2 * x2 + F(0.024143212159741086f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_quart_T7_float_simd(float x) {
#ifdef __x86_64__
return cos_quart_T7<cr::simd::float1x4>(x)[0];
#else
return cos_quart_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_fma_T7(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
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
inline static float cos_quart_fma_T7_float_simd(float x) {
#ifdef __x86_64__
return cos_quart_fma_T7<cr::simd::float1x4>(x)[0];
#else
return cos_quart_fma_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_T8(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
auto const x2 = x * x;
auto const a4 = F(-13.896097480429436f);
auto const b4 = F(0.03455643076520994f);
auto const a3 = a4 * x2 + F(42.411184544943424f);
auto const b3 = b4 * x2 + F(0.1811421083394948f);
auto const a2 = a3 * x2 + F(-34.86703901373211f);
auto const b2 = b3 * x2 + F(0.5423223339656964f);
auto const a1 = a2 * x2 + F(6.283185307179586f);
auto const b1 = b2 * x2 + F(1.0304746573794765f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float cos_unit1_quart_T8_float_simd(float x) {
#ifdef __x86_64__
return cos_unit1_quart_T8<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_half_T8(in_t(F) x) {
x = F(0.5f) - x;
auto const x2 = x * x;
auto const a4 = F(-8.31187662099933f);
auto const b4 = F(0.01515139485579177f);
auto const a3 = a4 * x2 + F(36.126485942407456f);
auto const b3 = b4 * x2 + F(0.10255970369971446f);
auto const a2 = a3 * x2 + F(-48.06933702274396f);
auto const b2 = b3 * x2 + F(0.38132175042891436f);
auto const a1 = a2 * x2 + F(18.865243744954682f);
auto const b1 = b2 * x2 + F(0.8739650572240313f);
auto const a0 = a1 * x2 + F(-1.0f);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float cos_unit1_half_T8_float_simd(float x) {
#ifdef __x86_64__
return cos_unit1_half_T8<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_half_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_fma_T8(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
auto const x2 = x * x;
auto const a4 = F(-13.896097480429436f);
auto const b4 = F(0.03455643076520994f);
auto const a3 = math::fma(a4, x2, F(42.411184544943424f));
auto const b3 = math::fma(b4, x2, F(0.1811421083394948f));
auto const a2 = math::fma(a3, x2, F(-34.86703901373211f));
auto const b2 = math::fma(b3, x2, F(0.5423223339656964f));
auto const a1 = math::fma(a2, x2, F(6.283185307179586f));
auto const b1 = math::fma(b2, x2, F(1.0304746573794765f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit1_quart_fma_T8_float_simd(float x) {
#ifdef __x86_64__
return cos_unit1_quart_fma_T8<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_fma_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_half_fma_T8(in_t(F) x) {
using math = ApproxContext;
x = F(0.5f) - x;
auto const x2 = x * x;
auto const a4 = F(-8.31187662099933f);
auto const b4 = F(0.01515139485579177f);
auto const a3 = math::fma(a4, x2, F(36.126485942407456f));
auto const b3 = math::fma(b4, x2, F(0.10255970369971446f));
auto const a2 = math::fma(a3, x2, F(-48.06933702274396f));
auto const b2 = math::fma(b3, x2, F(0.38132175042891436f));
auto const a1 = math::fma(a2, x2, F(18.865243744954682f));
auto const b1 = math::fma(b2, x2, F(0.8739650572240313f));
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit1_half_fma_T8_float_simd(float x) {
#ifdef __x86_64__
return cos_unit1_half_fma_T8<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_half_fma_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_T8(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
auto const x2 = x * x;
auto const a4 = F(-0.10856326156585497f);
auto const b4 = F(0.00013498605767660134f);
auto const a3 = a4 * x2 + F(1.325349517029482f);
auto const b3 = b4 * x2 + F(0.002830345442804606f);
auto const a2 = a3 * x2 + F(-4.358379876716514f);
auto const b2 = b3 * x2 + F(0.033895145872856025f);
auto const a1 = a2 * x2 + F(3.141592653589793f);
auto const b1 = b2 * x2 + F(0.25761866434486913f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float cos_unit2_quart_T8_float_simd(float x) {
#ifdef __x86_64__
return cos_unit2_quart_T8<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_half_T8(in_t(F) x) {
x = F(1.0f) - x;
auto const x2 = x * x;
auto const a4 = F(-0.03246826805077863f);
auto const b4 = F(5.91851361554366e-05f);
auto const a3 = a4 * x2 + F(0.5644763428501165f);
auto const b3 = b4 * x2 + F(0.0016024953703080384f);
auto const a2 = a3 * x2 + F(-3.0043335639214974f);
auto const b2 = b3 * x2 + F(0.023832609401807148f);
auto const a1 = a2 * x2 + F(4.716310936238671f);
auto const b1 = b2 * x2 + F(0.21849126430600782f);
auto const a0 = a1 * x2 + F(-1.0f);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float cos_unit2_half_T8_float_simd(float x) {
#ifdef __x86_64__
return cos_unit2_half_T8<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_half_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_fma_T8(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
auto const x2 = x * x;
auto const a4 = F(-0.10856326156585497f);
auto const b4 = F(0.00013498605767660134f);
auto const a3 = math::fma(a4, x2, F(1.325349517029482f));
auto const b3 = math::fma(b4, x2, F(0.002830345442804606f));
auto const a2 = math::fma(a3, x2, F(-4.358379876716514f));
auto const b2 = math::fma(b3, x2, F(0.033895145872856025f));
auto const a1 = math::fma(a2, x2, F(3.141592653589793f));
auto const b1 = math::fma(b2, x2, F(0.25761866434486913f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit2_quart_fma_T8_float_simd(float x) {
#ifdef __x86_64__
return cos_unit2_quart_fma_T8<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_fma_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_half_fma_T8(in_t(F) x) {
using math = ApproxContext;
x = F(1.0f) - x;
auto const x2 = x * x;
auto const a4 = F(-0.03246826805077863f);
auto const b4 = F(5.91851361554366e-05f);
auto const a3 = math::fma(a4, x2, F(0.5644763428501165f));
auto const b3 = math::fma(b4, x2, F(0.0016024953703080384f));
auto const a2 = math::fma(a3, x2, F(-3.0043335639214974f));
auto const b2 = math::fma(b3, x2, F(0.023832609401807148f));
auto const a1 = math::fma(a2, x2, F(4.716310936238671f));
auto const b1 = math::fma(b2, x2, F(0.21849126430600782f));
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_unit2_half_fma_T8_float_simd(float x) {
#ifdef __x86_64__
return cos_unit2_half_fma_T8<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_half_fma_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_T8(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
auto const x2 = x * x;
auto const a4 = F(-3.594460980391885e-05f);
auto const b4 = F(1.4226233486298017e-08f);
auto const a3 = a4 * x2 + F(0.004330928966087308f);
auto const b3 = b4 * x2 + F(2.944016285723832e-06f);
auto const a2 = a3 * x2 + F(-0.14056443866688645f);
auto const b2 = b3 * x2 + F(0.0003479669660506762f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(0.026102227999780212f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float cos_quart_T8_float_simd(float x) {
#ifdef __x86_64__
return cos_quart_T8<cr::simd::float1x4>(x)[0];
#else
return cos_quart_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_half_T8(in_t(F) x) {
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a4 = F(-3.421843486182193e-06f);
auto const b4 = F(6.237544679486808e-09f);
auto const a3 = a4 * x2 + F(0.0005871465444196315f);
auto const b3 = b4 * x2 + F(1.6668539453293901e-06f);
auto const a2 = a3 * x2 + F(-0.03084243505437066f);
auto const b2 = b3 * x2 + F(0.00024466514520177457f);
auto const a1 = a2 * x2 + F(0.47786220648500444f);
auto const b1 = b2 * x2 + F(0.022137793514995566f);
auto const a0 = a1 * x2 + F(-1.0f);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float cos_half_T8_float_simd(float x) {
#ifdef __x86_64__
return cos_half_T8<cr::simd::float1x4>(x)[0];
#else
return cos_half_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_fma_T8(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
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
inline static float cos_quart_fma_T8_float_simd(float x) {
#ifdef __x86_64__
return cos_quart_fma_T8<cr::simd::float1x4>(x)[0];
#else
return cos_quart_fma_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_half_fma_T8(in_t(F) x) {
using math = ApproxContext;
x = F(3.141592653589793f) - x;
auto const x2 = x * x;
auto const a4 = F(-3.421843486182193e-06f);
auto const b4 = F(6.237544679486808e-09f);
auto const a3 = math::fma(a4, x2, F(0.0005871465444196315f));
auto const b3 = math::fma(b4, x2, F(1.6668539453293901e-06f));
auto const a2 = math::fma(a3, x2, F(-0.03084243505437066f));
auto const b2 = math::fma(b3, x2, F(0.00024466514520177457f));
auto const a1 = math::fma(a2, x2, F(0.47786220648500444f));
auto const b1 = math::fma(b2, x2, F(0.022137793514995566f));
auto const a0 = math::fma(a1, x2, F(-1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float cos_half_fma_T8_float_simd(float x) {
#ifdef __x86_64__
return cos_half_fma_T8<cr::simd::float1x4>(x)[0];
#else
return cos_half_fma_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_T9(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
auto const x2 = x * x;
auto const a5 = F(4.485153464426057f);
auto const b4 = F(0.007207991024429691f);
auto const a4 = a5 * x2 + F(-26.409356535879468f);
auto const b3 = b4 * x2 + F(0.06124958122569729f);
auto const a3 = a4 * x2 + F(52.26283137385228f);
auto const b2 = b3 * x2 + F(0.276716459270409f);
auto const a2 = a3 * x2 + F(-36.61794471726112f);
auto const b1 = b2 * x2 + F(0.7518093597750422f);
auto const a1 = a2 * x2 + F(6.283185307179586f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_unit1_quart_T9_float_simd(float x) {
#ifdef __x86_64__
return cos_unit1_quart_T9<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_T9<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit1_quart_fma_T9(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(0.5f)) - F(0.25f);
auto const x2 = x * x;
auto const a5 = F(4.485153464426057f);
auto const b4 = F(0.007207991024429691f);
auto const a4 = math::fma(a5, x2, F(-26.409356535879468f));
auto const b3 = math::fma(b4, x2, F(0.06124958122569729f));
auto const a3 = math::fma(a4, x2, F(52.26283137385228f));
auto const b2 = math::fma(b3, x2, F(0.276716459270409f));
auto const a2 = math::fma(a3, x2, F(-36.61794471726112f));
auto const b1 = math::fma(b2, x2, F(0.7518093597750422f));
auto const a1 = math::fma(a2, x2, F(6.283185307179586f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_unit1_quart_fma_T9_float_simd(float x) {
#ifdef __x86_64__
return cos_unit1_quart_fma_T9<cr::simd::float1x4>(x)[0];
#else
return cos_unit1_quart_fma_T9<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_T9(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
auto const x2 = x * x;
auto const a5 = F(0.008760065360207143f);
auto const b4 = F(2.815621493917848e-05f);
auto const a4 = a5 * x2 + F(-0.20632309793655834f);
auto const b3 = b4 * x2 + F(0.0009570247066515202f);
auto const a3 = a4 * x2 + F(1.6332134804328837f);
auto const b2 = b3 * x2 + F(0.017294778704400562f);
auto const a2 = a3 * x2 + F(-4.57724308965764f);
auto const b1 = b2 * x2 + F(0.18795233994376054f);
auto const a1 = a2 * x2 + F(3.141592653589793f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_unit2_quart_T9_float_simd(float x) {
#ifdef __x86_64__
return cos_unit2_quart_T9<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_T9<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_unit2_quart_fma_T9(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(1.0f)) - F(0.5f);
auto const x2 = x * x;
auto const a5 = F(0.008760065360207143f);
auto const b4 = F(2.815621493917848e-05f);
auto const a4 = math::fma(a5, x2, F(-0.20632309793655834f));
auto const b3 = math::fma(b4, x2, F(0.0009570247066515202f));
auto const a3 = math::fma(a4, x2, F(1.6332134804328837f));
auto const b2 = math::fma(b3, x2, F(0.017294778704400562f));
auto const a2 = math::fma(a3, x2, F(-4.57724308965764f));
auto const b1 = math::fma(b2, x2, F(0.18795233994376054f));
auto const a1 = math::fma(a2, x2, F(3.141592653589793f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_unit2_quart_fma_T9_float_simd(float x) {
#ifdef __x86_64__
return cos_unit2_quart_fma_T9<cr::simd::float1x4>(x)[0];
#else
return cos_unit2_quart_fma_T9<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_T9(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
auto const x2 = x * x;
auto const a5 = F(2.938721919175267e-07f);
auto const b4 = F(2.9673945199199805e-09f);
auto const a4 = a5 * x2 + F(-6.831227380145156e-05f);
auto const b3 = b4 * x2 + F(9.954602288511775e-07f);
auto const a3 = a4 * x2 + F(0.005336955632703259f);
auto const b2 = b3 * x2 + F(0.00017754789127806905f);
auto const a2 = a3 * x2 + F(-0.1476231131152178f);
auto const b1 = b2 * x2 + F(0.01904355355144886f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_quart_T9_float_simd(float x) {
#ifdef __x86_64__
return cos_quart_T9<cr::simd::float1x4>(x)[0];
#else
return cos_quart_T9<float>(x);
#endif
}
template <class F>
inline constexpr static F cos_quart_fma_T9(in_t(F) x) {
using math = ApproxContext;
x = math::abs(x - F(3.141592653589793f)) - F(1.5707963267948966f);
auto const x2 = x * x;
auto const a5 = F(2.938721919175267e-07f);
auto const b4 = F(2.9673945199199805e-09f);
auto const a4 = math::fma(a5, x2, F(-6.831227380145156e-05f));
auto const b3 = math::fma(b4, x2, F(9.954602288511775e-07f));
auto const a3 = math::fma(a4, x2, F(0.005336955632703259f));
auto const b2 = math::fma(b3, x2, F(0.00017754789127806905f));
auto const a2 = math::fma(a3, x2, F(-0.1476231131152178f));
auto const b1 = math::fma(b2, x2, F(0.01904355355144886f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float cos_quart_fma_T9_float_simd(float x) {
#ifdef __x86_64__
return cos_quart_fma_T9<cr::simd::float1x4>(x)[0];
#else
return cos_quart_fma_T9<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_T4(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-4.9716f), F(4.9716f));
auto const x2 = x * x;
auto const a2 = F(0.09523809523809523f);
auto const b2 = F(0.009523809523809525f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(0.42857142857142855f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float tanh_T4_float_simd(float x) {
#ifdef __x86_64__
return tanh_T4<cr::simd::float1x4>(x)[0];
#else
return tanh_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_T4(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-4.9716f), F(4.9716f));
auto const x2 = x * x;
auto const a2 = F(0.09523809523809523f);
auto const b2 = F(0.009523809523809525f);
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(0.42857142857142855f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float tanh_fma_T4_float_simd(float x) {
#ifdef __x86_64__
return tanh_fma_T4<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_T5(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-4.9716f), F(4.9716f));
auto const x2 = x * x;
auto const a3 = F(0.0010582010582010583f);
auto const b2 = F(0.015873015873015872f);
auto const a2 = a3 * x2 + F(0.1111111111111111f);
auto const b1 = b2 * x2 + F(0.4444444444444444f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tanh_T5_float_simd(float x) {
#ifdef __x86_64__
return tanh_T5<cr::simd::float1x4>(x)[0];
#else
return tanh_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_T5(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-4.9716f), F(4.9716f));
auto const x2 = x * x;
auto const a3 = F(0.0010582010582010583f);
auto const b2 = F(0.015873015873015872f);
auto const a2 = math::fma(a3, x2, F(0.1111111111111111f));
auto const b1 = math::fma(b2, x2, F(0.4444444444444444f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tanh_fma_T5_float_simd(float x) {
#ifdef __x86_64__
return tanh_fma_T5<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_T6(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-4.9716f), F(4.9716f));
auto const x2 = x * x;
auto const a3 = F(0.00202020202020202f);
auto const b3 = F(9.62000962000962e-05f);
auto const a2 = a3 * x2 + F(0.12121212121212122f);
auto const b2 = b3 * x2 + F(0.020202020202020204f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(0.45454545454545453f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float tanh_T6_float_simd(float x) {
#ifdef __x86_64__
return tanh_T6<cr::simd::float1x4>(x)[0];
#else
return tanh_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_T6(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-4.9716f), F(4.9716f));
auto const x2 = x * x;
auto const a3 = F(0.00202020202020202f);
auto const b3 = F(9.62000962000962e-05f);
auto const a2 = math::fma(a3, x2, F(0.12121212121212122f));
auto const b2 = math::fma(b3, x2, F(0.020202020202020204f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(0.45454545454545453f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float tanh_fma_T6_float_simd(float x) {
#ifdef __x86_64__
return tanh_fma_T6<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_T7(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-4.9716f), F(4.9716f));
auto const x2 = x * x;
auto const a4 = F(7.4000074000074e-06f);
auto const b3 = F(0.0002072002072002072f);
auto const a3 = a4 * x2 + F(0.002797202797202797f);
auto const b2 = b3 * x2 + F(0.023310023310023312f);
auto const a2 = a3 * x2 + F(0.1282051282051282f);
auto const b1 = b2 * x2 + F(0.46153846153846156f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tanh_T7_float_simd(float x) {
#ifdef __x86_64__
return tanh_T7<cr::simd::float1x4>(x)[0];
#else
return tanh_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_T7(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-4.9716f), F(4.9716f));
auto const x2 = x * x;
auto const a4 = F(7.4000074000074e-06f);
auto const b3 = F(0.0002072002072002072f);
auto const a3 = math::fma(a4, x2, F(0.002797202797202797f));
auto const b2 = math::fma(b3, x2, F(0.023310023310023312f));
auto const a2 = math::fma(a3, x2, F(0.1282051282051282f));
auto const b1 = math::fma(b2, x2, F(0.46153846153846156f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tanh_fma_T7_float_simd(float x) {
#ifdef __x86_64__
return tanh_fma_T7<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_T8(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-4.9716f), F(4.9716f));
auto const x2 = x * x;
auto const a4 = F(1.776001776001776e-05f);
auto const b4 = F(4.9333382666716e-07f);
auto const a3 = a4 * x2 + F(0.003418803418803419f);
auto const b3 = b4 * x2 + F(0.0003108003108003108f);
auto const a2 = a3 * x2 + F(0.13333333333333333f);
auto const b2 = b3 * x2 + F(0.02564102564102564f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(0.4666666666666667f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float tanh_T8_float_simd(float x) {
#ifdef __x86_64__
return tanh_T8<cr::simd::float1x4>(x)[0];
#else
return tanh_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_T8(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-4.9716f), F(4.9716f));
auto const x2 = x * x;
auto const a4 = F(1.776001776001776e-05f);
auto const b4 = F(4.9333382666716e-07f);
auto const a3 = math::fma(a4, x2, F(0.003418803418803419f));
auto const b3 = math::fma(b4, x2, F(0.0003108003108003108f));
auto const a2 = math::fma(a3, x2, F(0.13333333333333333f));
auto const b2 = math::fma(b3, x2, F(0.02564102564102564f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(0.4666666666666667f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float tanh_fma_T8_float_simd(float x) {
#ifdef __x86_64__
return tanh_fma_T8<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_T3(in_t(F) x) {
auto const x2 = x * x;
auto const a2 = F(0.00013020833333333333f);
auto const b1 = F(0.00625f);
auto const a1 = a2 * x2 + F(0.125f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
auto const w = a0 / b0;
auto v = F(2.0f) / (F(1.0f) - w) - F(1.0f);
v *= v;
v *= v;
return v;
}
inline static float exp_T3_float_simd(float x) {
#ifdef __x86_64__
return exp_T3<cr::simd::float1x4>(x)[0];
#else
return exp_T3<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_fma_T3(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a2 = F(0.00013020833333333333f);
auto const b1 = F(0.00625f);
auto const a1 = math::fma(a2, x2, F(0.125f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
auto const w = a0 / b0;
auto v = F(2.0f) / (F(1.0f) - w) - F(1.0f);
v *= v;
v *= v;
return v;
}
inline static float exp_fma_T3_float_simd(float x) {
#ifdef __x86_64__
return exp_fma_T3<cr::simd::float1x4>(x)[0];
#else
return exp_fma_T3<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_T4(in_t(F) x) {
auto const x2 = x * x;
auto const a2 = F(0.00018601190476190475f);
auto const b2 = F(2.3251488095238097e-06f);
auto const a1 = a2 * x2 + F(0.125f);
auto const b1 = b2 * x2 + F(0.006696428571428571f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
auto const w = a0 / b0;
auto v = F(2.0f) / (F(1.0f) - w) - F(1.0f);
v *= v;
v *= v;
return v;
}
inline static float exp_T4_float_simd(float x) {
#ifdef __x86_64__
return exp_T4<cr::simd::float1x4>(x)[0];
#else
return exp_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_fma_T4(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a2 = F(0.00018601190476190475f);
auto const b2 = F(2.3251488095238097e-06f);
auto const a1 = math::fma(a2, x2, F(0.125f));
auto const b1 = math::fma(b2, x2, F(0.006696428571428571f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const w = a0 / b0;
auto v = F(2.0f) / (F(1.0f) - w) - F(1.0f);
v *= v;
v *= v;
return v;
}
inline static float exp_fma_T4_float_simd(float x) {
#ifdef __x86_64__
return exp_fma_T4<cr::simd::float1x4>(x)[0];
#else
return exp_fma_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_T5(in_t(F) x) {
auto const x2 = x * x;
auto const a3 = F(3.229373346560847e-08f);
auto const b2 = F(3.875248015873016e-06f);
auto const a2 = a3 * x2 + F(0.00021701388888888888f);
auto const b1 = b2 * x2 + F(0.006944444444444444f);
auto const a1 = a2 * x2 + F(0.125f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
auto const w = a0 / b0;
auto v = F(2.0f) / (F(1.0f) - w) - F(1.0f);
v *= v;
v *= v;
return v;
}
inline static float exp_T5_float_simd(float x) {
#ifdef __x86_64__
return exp_T5<cr::simd::float1x4>(x)[0];
#else
return exp_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_fma_T5(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a3 = F(3.229373346560847e-08f);
auto const b2 = F(3.875248015873016e-06f);
auto const a2 = math::fma(a3, x2, F(0.00021701388888888888f));
auto const b1 = math::fma(b2, x2, F(0.006944444444444444f));
auto const a1 = math::fma(a2, x2, F(0.125f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
auto const w = a0 / b0;
auto v = F(2.0f) / (F(1.0f) - w) - F(1.0f);
v *= v;
v *= v;
return v;
}
inline static float exp_fma_T5_float_simd(float x) {
#ifdef __x86_64__
return exp_fma_T5<cr::simd::float1x4>(x)[0];
#else
return exp_fma_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_T6(in_t(F) x) {
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
inline static float exp_T6_float_simd(float x) {
#ifdef __x86_64__
return exp_T6<cr::simd::float1x4>(x)[0];
#else
return exp_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_fma_T6(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a3 = F(6.165167297979798e-08f);
auto const b3 = F(3.669742439273689e-10f);
auto const a2 = math::fma(a3, x2, F(0.00023674242424242425f));
auto const b2 = math::fma(b3, x2, F(4.932133838383839e-06f));
auto const a1 = math::fma(a2, x2, F(0.125f));
auto const b1 = math::fma(b2, x2, F(0.007102272727272727f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const w = a0 / b0;
auto v = F(2.0f) / (F(1.0f) - w) - F(1.0f);
v *= v;
v *= v;
return v;
}
inline static float exp_fma_T6_float_simd(float x) {
#ifdef __x86_64__
return exp_fma_T6<cr::simd::float1x4>(x)[0];
#else
return exp_fma_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_T7(in_t(F) x) {
auto const x2 = x * x;
auto const a4 = F(3.528598499301624e-12f);
auto const b3 = F(7.904060638435639e-10f);
auto const a3 = a4 * x2 + F(8.53638548951049e-08f);
auto const b2 = b3 * x2 + F(5.69092365967366e-06f);
auto const a2 = a3 * x2 + F(0.000250400641025641f);
auto const b1 = b2 * x2 + F(0.007211538461538462f);
auto const a1 = a2 * x2 + F(0.125f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
auto const w = a0 / b0;
auto v = F(2.0f) / (F(1.0f) - w) - F(1.0f);
v *= v;
v *= v;
return v;
}
inline static float exp_T7_float_simd(float x) {
#ifdef __x86_64__
return exp_T7<cr::simd::float1x4>(x)[0];
#else
return exp_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_fma_T7(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a4 = F(3.528598499301624e-12f);
auto const b3 = F(7.904060638435639e-10f);
auto const a3 = math::fma(a4, x2, F(8.53638548951049e-08f));
auto const b2 = math::fma(b3, x2, F(5.69092365967366e-06f));
auto const a2 = math::fma(a3, x2, F(0.000250400641025641f));
auto const b1 = math::fma(b2, x2, F(0.007211538461538462f));
auto const a1 = math::fma(a2, x2, F(0.125f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
auto const w = a0 / b0;
auto v = F(2.0f) / (F(1.0f) - w) - F(1.0f);
v *= v;
v *= v;
return v;
}
inline static float exp_fma_T7_float_simd(float x) {
#ifdef __x86_64__
return exp_fma_T7<cr::simd::float1x4>(x)[0];
#else
return exp_fma_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_T8(in_t(F) x) {
auto const x2 = x * x;
auto const a4 = F(8.468636398323898e-12f);
auto const b4 = F(2.94049874941802e-14f);
auto const a3 = a4 * x2 + F(1.0433360042735043e-07f);
auto const b3 = b4 * x2 + F(1.1856090957653458e-09f);
auto const a2 = a3 * x2 + F(0.00026041666666666666f);
auto const b2 = b3 * x2 + F(6.2600160256410254e-06f);
auto const a1 = a2 * x2 + F(0.125f);
auto const b1 = b2 * x2 + F(0.007291666666666667f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
auto const w = a0 / b0;
auto v = F(2.0f) / (F(1.0f) - w) - F(1.0f);
v *= v;
v *= v;
return v;
}
inline static float exp_T8_float_simd(float x) {
#ifdef __x86_64__
return exp_T8<cr::simd::float1x4>(x)[0];
#else
return exp_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_fma_T8(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a4 = F(8.468636398323898e-12f);
auto const b4 = F(2.94049874941802e-14f);
auto const a3 = math::fma(a4, x2, F(1.0433360042735043e-07f));
auto const b3 = math::fma(b4, x2, F(1.1856090957653458e-09f));
auto const a2 = math::fma(a3, x2, F(0.00026041666666666666f));
auto const b2 = math::fma(b3, x2, F(6.2600160256410254e-06f));
auto const a1 = math::fma(a2, x2, F(0.125f));
auto const b1 = math::fma(b2, x2, F(0.007291666666666667f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const w = a0 / b0;
auto v = F(2.0f) / (F(1.0f) - w) - F(1.0f);
v *= v;
v *= v;
return v;
}
inline static float exp_fma_T8_float_simd(float x) {
#ifdef __x86_64__
return exp_fma_T8<cr::simd::float1x4>(x)[0];
#else
return exp_fma_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_T3(in_t(F) x) {
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
inline static float atan_T3_float_simd(float x) {
#ifdef __x86_64__
return atan_T3<cr::simd::float1x4>(x)[0];
#else
return atan_T3<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_fma_T3(in_t(F) x) {
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
inline static float atan_fma_T3_float_simd(float x) {
#ifdef __x86_64__
return atan_fma_T3<cr::simd::float1x4>(x)[0];
#else
return atan_fma_T3<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_T4(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(-x, F(1.0f) / x, m);
auto const x2 = x * x;
auto const a2 = F(0.5238095238095238f);
auto const b2 = F(0.08571428571428572f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(0.8571428571428571f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_T4_float_simd(float x) {
#ifdef __x86_64__
return atan_T4<cr::simd::float1x4>(x)[0];
#else
return atan_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_fma_T4(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(-x, F(1.0f) / x, m);
auto const x2 = x * x;
auto const a2 = F(0.5238095238095238f);
auto const b2 = F(0.08571428571428572f);
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(0.8571428571428571f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_fma_T4_float_simd(float x) {
#ifdef __x86_64__
return atan_fma_T4<cr::simd::float1x4>(x)[0];
#else
return atan_fma_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_T5(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(-x, F(1.0f) / x, m);
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
inline static float atan_T5_float_simd(float x) {
#ifdef __x86_64__
return atan_T5<cr::simd::float1x4>(x)[0];
#else
return atan_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_fma_T5(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(-x, F(1.0f) / x, m);
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
inline static float atan_fma_T5_float_simd(float x) {
#ifdef __x86_64__
return atan_fma_T5<cr::simd::float1x4>(x)[0];
#else
return atan_fma_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_T6(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(-x, F(1.0f) / x, m);
auto const x2 = x * x;
auto const a3 = F(0.2f);
auto const b3 = F(0.021645021645021644f);
auto const a2 = a3 * x2 + F(1.0303030303030303f);
auto const b2 = b3 * x2 + F(0.45454545454545453f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(1.3636363636363635f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_T6_float_simd(float x) {
#ifdef __x86_64__
return atan_T6<cr::simd::float1x4>(x)[0];
#else
return atan_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_fma_T6(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(-x, F(1.0f) / x, m);
auto const x2 = x * x;
auto const a3 = F(0.2f);
auto const b3 = F(0.021645021645021644f);
auto const a2 = math::fma(a3, x2, F(1.0303030303030303f));
auto const b2 = math::fma(b3, x2, F(0.45454545454545453f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(1.3636363636363635f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_fma_T6_float_simd(float x) {
#ifdef __x86_64__
return atan_fma_T6<cr::simd::float1x4>(x)[0];
#else
return atan_fma_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_T7(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(-x, F(1.0f) / x, m);
auto const x2 = x * x;
auto const a4 = F(0.01704961704961705f);
auto const b3 = F(0.08158508158508158f);
auto const a3 = a4 * x2 + F(0.3958041958041958f);
auto const b2 = b3 * x2 + F(0.7342657342657343f);
auto const a2 = a3 * x2 + F(1.2820512820512822f);
auto const b1 = b2 * x2 + F(1.6153846153846154f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_T7_float_simd(float x) {
#ifdef __x86_64__
return atan_T7<cr::simd::float1x4>(x)[0];
#else
return atan_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_fma_T7(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(-x, F(1.0f) / x, m);
auto const x2 = x * x;
auto const a4 = F(0.01704961704961705f);
auto const b3 = F(0.08158508158508158f);
auto const a3 = math::fma(a4, x2, F(0.3958041958041958f));
auto const b2 = math::fma(b3, x2, F(0.7342657342657343f));
auto const a2 = math::fma(a3, x2, F(1.2820512820512822f));
auto const b1 = math::fma(b2, x2, F(1.6153846153846154f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_fma_T7_float_simd(float x) {
#ifdef __x86_64__
return atan_fma_T7<cr::simd::float1x4>(x)[0];
#else
return atan_fma_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_T8(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(-x, F(1.0f) / x, m);
auto const x2 = x * x;
auto const a4 = F(0.0673060273060273f);
auto const b4 = F(0.005439005439005439f);
auto const a3 = a4 * x2 + F(0.6547008547008547f);
auto const b3 = b4 * x2 + F(0.1958041958041958f);
auto const a2 = a3 * x2 + F(1.5333333333333334f);
auto const b2 = b3 * x2 + F(1.0769230769230769f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(1.8666666666666667f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_T8_float_simd(float x) {
#ifdef __x86_64__
return atan_T8<cr::simd::float1x4>(x)[0];
#else
return atan_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F atan_fma_T8(in_t(F) x) {
using math = ApproxContext;
auto x0 = x;
x = math::abs(x);
auto m = x > F(1.0f);
auto a = math::blend(F(0.0f), F(1.5707963267948966f), m);
x = math::blend(-x, F(1.0f) / x, m);
auto const x2 = x * x;
auto const a4 = F(0.0673060273060273f);
auto const b4 = F(0.005439005439005439f);
auto const a3 = math::fma(a4, x2, F(0.6547008547008547f));
auto const b3 = math::fma(b4, x2, F(0.1958041958041958f));
auto const a2 = math::fma(a3, x2, F(1.5333333333333334f));
auto const b2 = math::fma(b3, x2, F(1.0769230769230769f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(1.8666666666666667f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return math::setSign(a - a0 / b0, x0);
}
inline static float atan_fma_T8_float_simd(float x) {
#ifdef __x86_64__
return atan_fma_T8<cr::simd::float1x4>(x)[0];
#else
return atan_fma_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F log_T3(in_t(F) x) {
x = x - F(1.0f);
auto const a3 = F(0.18333333333333332f);
auto const b3 = F(0.05f);
auto const a2 = a3 * x + F(1.0f);
auto const b2 = b3 * x + F(0.6f);
auto const a1 = a2 * x + F(1.0f);
auto const b1 = b2 * x + F(1.5f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x + F(1.0f);
return a0 / b0;
}
inline static float log_T3_float_simd(float x) {
#ifdef __x86_64__
return log_T3<cr::simd::float1x4>(x)[0];
#else
return log_T3<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_T3(in_t(F) x) {
using math = ApproxContext;
x = x - F(1.0f);
auto const a3 = F(0.18333333333333332f);
auto const b3 = F(0.05f);
auto const a2 = math::fma(a3, x, F(1.0f));
auto const b2 = math::fma(b3, x, F(0.6f));
auto const a1 = math::fma(a2, x, F(1.0f));
auto const b1 = math::fma(b2, x, F(1.5f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(1.0f));
return a0 / b0;
}
inline static float log_fma_T3_float_simd(float x) {
#ifdef __x86_64__
return log_fma_T3<cr::simd::float1x4>(x)[0];
#else
return log_fma_T3<float>(x);
#endif
}
template <class F>
inline constexpr static F log_T4(in_t(F) x) {
x = x - F(1.0f);
auto const a4 = F(0.05952380952380952f);
auto const b4 = F(0.014285714285714285f);
auto const a3 = a4 * x + F(0.6190476190476191f);
auto const b3 = b4 * x + F(0.2857142857142857f);
auto const a2 = a3 * x + F(1.5f);
auto const b2 = b3 * x + F(1.2857142857142858f);
auto const a1 = a2 * x + F(1.0f);
auto const b1 = b2 * x + F(2.0f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x + F(1.0f);
return a0 / b0;
}
inline static float log_T4_float_simd(float x) {
#ifdef __x86_64__
return log_T4<cr::simd::float1x4>(x)[0];
#else
return log_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_T4(in_t(F) x) {
using math = ApproxContext;
x = x - F(1.0f);
auto const a4 = F(0.05952380952380952f);
auto const b4 = F(0.014285714285714285f);
auto const a3 = math::fma(a4, x, F(0.6190476190476191f));
auto const b3 = math::fma(b4, x, F(0.2857142857142857f));
auto const a2 = math::fma(a3, x, F(1.5f));
auto const b2 = math::fma(b3, x, F(1.2857142857142858f));
auto const a1 = math::fma(a2, x, F(1.0f));
auto const b1 = math::fma(b2, x, F(2.0f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(1.0f));
return a0 / b0;
}
inline static float log_fma_T4_float_simd(float x) {
#ifdef __x86_64__
return log_fma_T4<cr::simd::float1x4>(x)[0];
#else
return log_fma_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F log_T5(in_t(F) x) {
x = x - F(1.0f);
auto const a5 = F(0.018121693121693122f);
auto const b5 = F(0.003968253968253968f);
auto const a4 = a5 * x + F(0.3055555555555556f);
auto const b4 = b5 * x + F(0.11904761904761904f);
auto const a3 = a4 * x + F(1.3055555555555556f);
auto const b3 = b4 * x + F(0.8333333333333334f);
auto const a2 = a3 * x + F(2.0f);
auto const b2 = b3 * x + F(2.2222222222222223f);
auto const a1 = a2 * x + F(1.0f);
auto const b1 = b2 * x + F(2.5f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x + F(1.0f);
return a0 / b0;
}
inline static float log_T5_float_simd(float x) {
#ifdef __x86_64__
return log_T5<cr::simd::float1x4>(x)[0];
#else
return log_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_T5(in_t(F) x) {
using math = ApproxContext;
x = x - F(1.0f);
auto const a5 = F(0.018121693121693122f);
auto const b5 = F(0.003968253968253968f);
auto const a4 = math::fma(a5, x, F(0.3055555555555556f));
auto const b4 = math::fma(b5, x, F(0.11904761904761904f));
auto const a3 = math::fma(a4, x, F(1.3055555555555556f));
auto const b3 = math::fma(b4, x, F(0.8333333333333334f));
auto const a2 = math::fma(a3, x, F(2.0f));
auto const b2 = math::fma(b3, x, F(2.2222222222222223f));
auto const a1 = math::fma(a2, x, F(1.0f));
auto const b1 = math::fma(b2, x, F(2.5f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(1.0f));
return a0 / b0;
}
inline static float log_fma_T5_float_simd(float x) {
#ifdef __x86_64__
return log_fma_T5<cr::simd::float1x4>(x)[0];
#else
return log_fma_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F log_T6(in_t(F) x) {
x = x - F(1.0f);
auto const a6 = F(0.005303030303030303f);
auto const b6 = F(0.0010822510822510823f);
auto const a5 = a6 * x + F(0.1318181818181818f);
auto const b5 = b6 * x + F(0.045454545454545456f);
auto const a4 = a5 * x + F(0.8636363636363636f);
auto const b4 = b5 * x + F(0.45454545454545453f);
auto const a3 = a4 * x + F(2.242424242424242f);
auto const b3 = b4 * x + F(1.8181818181818181f);
auto const a2 = a3 * x + F(2.5f);
auto const b2 = b3 * x + F(3.409090909090909f);
auto const a1 = a2 * x + F(1.0f);
auto const b1 = b2 * x + F(3.0f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x + F(1.0f);
return a0 / b0;
}
inline static float log_T6_float_simd(float x) {
#ifdef __x86_64__
return log_T6<cr::simd::float1x4>(x)[0];
#else
return log_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_T6(in_t(F) x) {
using math = ApproxContext;
x = x - F(1.0f);
auto const a6 = F(0.005303030303030303f);
auto const b6 = F(0.0010822510822510823f);
auto const a5 = math::fma(a6, x, F(0.1318181818181818f));
auto const b5 = math::fma(b6, x, F(0.045454545454545456f));
auto const a4 = math::fma(a5, x, F(0.8636363636363636f));
auto const b4 = math::fma(b5, x, F(0.45454545454545453f));
auto const a3 = math::fma(a4, x, F(2.242424242424242f));
auto const b3 = math::fma(b4, x, F(1.8181818181818181f));
auto const a2 = math::fma(a3, x, F(2.5f));
auto const b2 = math::fma(b3, x, F(3.409090909090909f));
auto const a1 = math::fma(a2, x, F(1.0f));
auto const b1 = math::fma(b2, x, F(3.0f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(1.0f));
return a0 / b0;
}
inline static float log_fma_T6_float_simd(float x) {
#ifdef __x86_64__
return log_fma_T6<cr::simd::float1x4>(x)[0];
#else
return log_fma_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F log_T7(in_t(F) x) {
x = x - F(1.0f);
auto const a7 = F(0.001510989010989011f);
auto const b7 = F(0.0002913752913752914f);
auto const a6 = a7 * x + F(0.05198135198135198f);
auto const b6 = b7 * x + F(0.016317016317016316f);
auto const a5 = a6 * x + F(0.48146853146853147f);
auto const b5 = b6 * x + F(0.2202797202797203f);
auto const a4 = a5 * x + F(1.858974358974359f);
auto const b4 = b5 * x + F(1.2237762237762237f);
auto const a3 = a4 * x + F(3.4294871794871793f);
auto const b3 = b4 * x + F(3.3653846153846154f);
auto const a2 = a3 * x + F(3.0f);
auto const b2 = b3 * x + F(4.846153846153846f);
auto const a1 = a2 * x + F(1.0f);
auto const b1 = b2 * x + F(3.5f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x + F(1.0f);
return a0 / b0;
}
inline static float log_T7_float_simd(float x) {
#ifdef __x86_64__
return log_T7<cr::simd::float1x4>(x)[0];
#else
return log_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_T7(in_t(F) x) {
using math = ApproxContext;
x = x - F(1.0f);
auto const a7 = F(0.001510989010989011f);
auto const b7 = F(0.0002913752913752914f);
auto const a6 = math::fma(a7, x, F(0.05198135198135198f));
auto const b6 = math::fma(b7, x, F(0.016317016317016316f));
auto const a5 = math::fma(a6, x, F(0.48146853146853147f));
auto const b5 = math::fma(b6, x, F(0.2202797202797203f));
auto const a4 = math::fma(a5, x, F(1.858974358974359f));
auto const b4 = math::fma(b5, x, F(1.2237762237762237f));
auto const a3 = math::fma(a4, x, F(3.4294871794871793f));
auto const b3 = math::fma(b4, x, F(3.3653846153846154f));
auto const a2 = math::fma(a3, x, F(3.0f));
auto const b2 = math::fma(b3, x, F(4.846153846153846f));
auto const a1 = math::fma(a2, x, F(1.0f));
auto const b1 = math::fma(b2, x, F(3.5f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(1.0f));
return a0 / b0;
}
inline static float log_fma_T7_float_simd(float x) {
#ifdef __x86_64__
return log_fma_T7<cr::simd::float1x4>(x)[0];
#else
return log_fma_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F log_T8(in_t(F) x) {
x = x - F(1.0f);
auto const a8 = F(0.00042235542235542236f);
auto const b8 = F(7.77000777000777e-05f);
auto const a7 = a8 * x + F(0.01922077922077922f);
auto const b7 = b8 * x + F(0.005594405594405594f);
auto const a6 = a7 * x + F(0.23846153846153847f);
auto const b6 = b7 * x + F(0.0979020979020979f);
auto const a5 = a6 * x + F(1.27008547008547f);
auto const b5 = b6 * x + F(0.717948717948718f);
auto const a4 = a5 * x + F(3.4166666666666665f);
auto const b4 = b5 * x + F(2.6923076923076925f);
auto const a3 = a4 * x + F(4.866666666666666f);
auto const b3 = b4 * x + F(5.6f);
auto const a2 = a3 * x + F(3.5f);
auto const b2 = b3 * x + F(6.533333333333333f);
auto const a1 = a2 * x + F(1.0f);
auto const b1 = b2 * x + F(4.0f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x + F(1.0f);
return a0 / b0;
}
inline static float log_T8_float_simd(float x) {
#ifdef __x86_64__
return log_T8<cr::simd::float1x4>(x)[0];
#else
return log_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_T8(in_t(F) x) {
using math = ApproxContext;
x = x - F(1.0f);
auto const a8 = F(0.00042235542235542236f);
auto const b8 = F(7.77000777000777e-05f);
auto const a7 = math::fma(a8, x, F(0.01922077922077922f));
auto const b7 = math::fma(b8, x, F(0.005594405594405594f));
auto const a6 = math::fma(a7, x, F(0.23846153846153847f));
auto const b6 = math::fma(b7, x, F(0.0979020979020979f));
auto const a5 = math::fma(a6, x, F(1.27008547008547f));
auto const b5 = math::fma(b6, x, F(0.717948717948718f));
auto const a4 = math::fma(a5, x, F(3.4166666666666665f));
auto const b4 = math::fma(b5, x, F(2.6923076923076925f));
auto const a3 = math::fma(a4, x, F(4.866666666666666f));
auto const b3 = math::fma(b4, x, F(5.6f));
auto const a2 = math::fma(a3, x, F(3.5f));
auto const b2 = math::fma(b3, x, F(6.533333333333333f));
auto const a1 = math::fma(a2, x, F(1.0f));
auto const b1 = math::fma(b2, x, F(4.0f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(1.0f));
return a0 / b0;
}
inline static float log_fma_T8_float_simd(float x) {
#ifdef __x86_64__
return log_fma_T8<cr::simd::float1x4>(x)[0];
#else
return log_fma_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F log_T9(in_t(F) x) {
x = x - F(1.0f);
auto const a9 = F(0.00011637055754702813f);
auto const b9 = F(2.0567667626491154e-05f);
auto const a8 = a9 * x + F(0.006771170006464124f);
auto const b8 = b9 * x + F(0.001851090086384204f);
auto const a7 = a8 * x + F(0.10824175824175825f);
auto const b7 = b8 * x + F(0.04072398190045249f);
auto const a6 = a7 * x + F(0.7568627450980392f);
auto const b6 = b7 * x + F(0.38009049773755654f);
auto const a5 = a6 * x + F(2.763235294117647f);
auto const b5 = b6 * x + F(1.8529411764705883f);
auto const a4 = a5 * x + F(5.661764705882353f);
auto const b4 = b5 * x + F(5.188235294117647f);
auto const a3 = a4 * x + F(6.553921568627451f);
auto const b3 = b4 * x + F(8.647058823529411f);
auto const a2 = a3 * x + F(4.0f);
auto const b2 = b3 * x + F(8.470588235294118f);
auto const a1 = a2 * x + F(1.0f);
auto const b1 = b2 * x + F(4.5f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x + F(1.0f);
return a0 / b0;
}
inline static float log_T9_float_simd(float x) {
#ifdef __x86_64__
return log_T9<cr::simd::float1x4>(x)[0];
#else
return log_T9<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_T9(in_t(F) x) {
using math = ApproxContext;
x = x - F(1.0f);
auto const a9 = F(0.00011637055754702813f);
auto const b9 = F(2.0567667626491154e-05f);
auto const a8 = math::fma(a9, x, F(0.006771170006464124f));
auto const b8 = math::fma(b9, x, F(0.001851090086384204f));
auto const a7 = math::fma(a8, x, F(0.10824175824175825f));
auto const b7 = math::fma(b8, x, F(0.04072398190045249f));
auto const a6 = math::fma(a7, x, F(0.7568627450980392f));
auto const b6 = math::fma(b7, x, F(0.38009049773755654f));
auto const a5 = math::fma(a6, x, F(2.763235294117647f));
auto const b5 = math::fma(b6, x, F(1.8529411764705883f));
auto const a4 = math::fma(a5, x, F(5.661764705882353f));
auto const b4 = math::fma(b5, x, F(5.188235294117647f));
auto const a3 = math::fma(a4, x, F(6.553921568627451f));
auto const b3 = math::fma(b4, x, F(8.647058823529411f));
auto const a2 = math::fma(a3, x, F(4.0f));
auto const b2 = math::fma(b3, x, F(8.470588235294118f));
auto const a1 = math::fma(a2, x, F(1.0f));
auto const b1 = math::fma(b2, x, F(4.5f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(1.0f));
return a0 / b0;
}
inline static float log_fma_T9_float_simd(float x) {
#ifdef __x86_64__
return log_fma_T9<cr::simd::float1x4>(x)[0];
#else
return log_fma_T9<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_special_T3(in_t(F) x) {
auto const x2 = x * x;
auto const a2 = F(0.02570115212202806f);
auto const b1 = F(0.33633796273813665f);
auto const a1 = a2 * x2 + F(0.4584879788078804f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
constexpr float c1 = 1.6909569472766688f;
auto a = F(c1) / (F(0.5f) - (a0 / b0)) - F(c1);
a *= a;
a *= a;
return a;
}
inline static float exp_special_T3_float_simd(float x) {
#ifdef __x86_64__
return exp_special_T3<cr::simd::float1x4>(x)[0];
#else
return exp_special_T3<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_special_fma_T3(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a2 = F(0.02570115212202806f);
auto const b1 = F(0.33633796273813665f);
auto const a1 = math::fma(a2, x2, F(0.4584879788078804f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
constexpr float c1 = 1.6909569472766688f;
auto a = F(c1) / (F(0.5f) - (a0 / b0)) - F(c1);
a *= a;
a *= a;
return a;
}
inline static float exp_special_fma_T3_float_simd(float x) {
#ifdef __x86_64__
return exp_special_fma_T3<cr::simd::float1x4>(x)[0];
#else
return exp_special_fma_T3<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_special_T4(in_t(F) x) {
auto const x2 = x * x;
auto const a2 = F(0.0367159316028971f);
auto const b2 = F(0.006733525308264321f);
auto const a1 = a2 * x2 + F(0.4584879788078804f);
auto const b1 = b2 * x2 + F(0.36036210293371784f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
constexpr float c1 = 1.6909569472766688f;
auto a = F(c1) / (F(0.5f) - (a0 / b0)) - F(c1);
a *= a;
a *= a;
return a;
}
inline static float exp_special_T4_float_simd(float x) {
#ifdef __x86_64__
return exp_special_T4<cr::simd::float1x4>(x)[0];
#else
return exp_special_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_special_fma_T4(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a2 = F(0.0367159316028971f);
auto const b2 = F(0.006733525308264321f);
auto const a1 = math::fma(a2, x2, F(0.4584879788078804f));
auto const b1 = math::fma(b2, x2, F(0.36036210293371784f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
constexpr float c1 = 1.6909569472766688f;
auto a = F(c1) / (F(0.5f) - (a0 / b0)) - F(c1);
a *= a;
a *= a;
return a;
}
inline static float exp_special_fma_T4_float_simd(float x) {
#ifdef __x86_64__
return exp_special_fma_T4<cr::simd::float1x4>(x)[0];
#else
return exp_special_fma_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_special_T5(in_t(F) x) {
auto const x2 = x * x;
auto const a3 = F(0.00034302671209318625f);
auto const b2 = F(0.01122254218044283f);
auto const a2 = a3 * x2 + F(0.04283525353671358f);
auto const b1 = b2 * x2 + F(0.3737088474868244f);
auto const a1 = a2 * x2 + F(0.4584879788078804f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
constexpr float c1 = 1.6909569472766688f;
auto a = F(c1) / (F(0.5f) - (a0 / b0)) - F(c1);
a *= a;
a *= a;
return a;
}
inline static float exp_special_T5_float_simd(float x) {
#ifdef __x86_64__
return exp_special_T5<cr::simd::float1x4>(x)[0];
#else
return exp_special_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_special_fma_T5(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a3 = F(0.00034302671209318625f);
auto const b2 = F(0.01122254218044283f);
auto const a2 = math::fma(a3, x2, F(0.04283525353671358f));
auto const b1 = math::fma(b2, x2, F(0.3737088474868244f));
auto const a1 = math::fma(a2, x2, F(0.4584879788078804f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
constexpr float c1 = 1.6909569472766688f;
auto a = F(c1) / (F(0.5f) - (a0 / b0)) - F(c1);
a *= a;
a *= a;
return a;
}
inline static float exp_special_fma_T5_float_simd(float x) {
#ifdef __x86_64__
return exp_special_fma_T5<cr::simd::float1x4>(x)[0];
#else
return exp_special_fma_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_special_T6(in_t(F) x) {
auto const x2 = x * x;
auto const a3 = F(0.0006548691776282478f);
auto const b3 = F(5.719040869095471e-05f);
auto const a2 = a3 * x2 + F(0.0467293674945104f);
auto const b2 = b3 * x2 + F(0.014283235502311697f);
auto const a1 = a2 * x2 + F(0.4584879788078804f);
auto const b1 = b2 * x2 + F(0.3822022303839745f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
constexpr float c1 = 1.6909569472766688f;
auto a = F(c1) / (F(0.5f) - (a0 / b0)) - F(c1);
a *= a;
a *= a;
return a;
}
inline static float exp_special_T6_float_simd(float x) {
#ifdef __x86_64__
return exp_special_T6<cr::simd::float1x4>(x)[0];
#else
return exp_special_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_special_fma_T6(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a3 = F(0.0006548691776282478f);
auto const b3 = F(5.719040869095471e-05f);
auto const a2 = math::fma(a3, x2, F(0.0467293674945104f));
auto const b2 = math::fma(b3, x2, F(0.014283235502311697f));
auto const a1 = math::fma(a2, x2, F(0.4584879788078804f));
auto const b1 = math::fma(b2, x2, F(0.3822022303839745f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
constexpr float c1 = 1.6909569472766688f;
auto a = F(c1) / (F(0.5f) - (a0 / b0)) - F(c1);
a *= a;
a *= a;
return a;
}
inline static float exp_special_fma_T6_float_simd(float x) {
#ifdef __x86_64__
return exp_special_fma_T6<cr::simd::float1x4>(x)[0];
#else
return exp_special_fma_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_special_T7(in_t(F) x) {
auto const x2 = x * x;
auto const a4 = F(2.0170088422897386e-06f);
auto const b3 = F(0.00012317934192651592f);
auto const a3 = a4 * x2 + F(0.0009067419387065456f);
auto const b2 = b3 * x2 + F(0.016480656353451195f);
auto const a2 = a3 * x2 + F(0.04942529254913097f);
auto const b1 = b2 * x2 + F(0.3880822647079185f);
auto const a1 = a2 * x2 + F(0.4584879788078804f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
constexpr float c1 = 1.6909569472766688f;
auto a = F(c1) / (F(0.5f) - (a0 / b0)) - F(c1);
a *= a;
a *= a;
return a;
}
inline static float exp_special_T7_float_simd(float x) {
#ifdef __x86_64__
return exp_special_T7<cr::simd::float1x4>(x)[0];
#else
return exp_special_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_special_fma_T7(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a4 = F(2.0170088422897386e-06f);
auto const b3 = F(0.00012317934192651592f);
auto const a3 = math::fma(a4, x2, F(0.0009067419387065456f));
auto const b2 = math::fma(b3, x2, F(0.016480656353451195f));
auto const a2 = math::fma(a3, x2, F(0.04942529254913097f));
auto const b1 = math::fma(b2, x2, F(0.3880822647079185f));
auto const a1 = math::fma(a2, x2, F(0.4584879788078804f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
constexpr float c1 = 1.6909569472766688f;
auto a = F(c1) / (F(0.5f) - (a0 / b0)) - F(c1);
a *= a;
a *= a;
return a;
}
inline static float exp_special_fma_T7_float_simd(float x) {
#ifdef __x86_64__
return exp_special_fma_T7<cr::simd::float1x4>(x)[0];
#else
return exp_special_fma_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_special_T8(in_t(F) x) {
auto const x2 = x * x;
auto const a4 = F(4.840820565732429e-06f);
auto const b4 = F(2.466064330519657e-07f);
auto const a3 = a4 * x2 + F(0.00110824013245292f);
auto const b3 = b4 * x2 + F(0.00018476900368114002f);
auto const a2 = a3 * x2 + F(0.05140230373945087f);
auto const b2 = b3 * x2 + F(0.018128721741959453f);
auto const a1 = a2 * x2 + F(0.4584879788078804f);
auto const b1 = b2 * x2 + F(0.3923942884430289f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
constexpr float c1 = 1.6909569472766688f;
auto a = F(c1) / (F(0.5f) - (a0 / b0)) - F(c1);
a *= a;
a *= a;
return a;
}
inline static float exp_special_T8_float_simd(float x) {
#ifdef __x86_64__
return exp_special_T8<cr::simd::float1x4>(x)[0];
#else
return exp_special_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_special_fma_T8(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a4 = F(4.840820565732429e-06f);
auto const b4 = F(2.466064330519657e-07f);
auto const a3 = math::fma(a4, x2, F(0.00110824013245292f));
auto const b3 = math::fma(b4, x2, F(0.00018476900368114002f));
auto const a2 = math::fma(a3, x2, F(0.05140230373945087f));
auto const b2 = math::fma(b3, x2, F(0.018128721741959453f));
auto const a1 = math::fma(a2, x2, F(0.4584879788078804f));
auto const b1 = math::fma(b2, x2, F(0.3923942884430289f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
constexpr float c1 = 1.6909569472766688f;
auto a = F(c1) / (F(0.5f) - (a0 / b0)) - F(c1);
a *= a;
a *= a;
return a;
}
inline static float exp_special_fma_T8_float_simd(float x) {
#ifdef __x86_64__
return exp_special_fma_T8<cr::simd::float1x4>(x)[0];
#else
return exp_special_fma_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_special_T9(in_t(F) x) {
auto const x2 = x * x;
auto const a5 = F(6.651191597484285e-09f);
auto const b4 = F(6.527952791657299e-07f);
auto const a4 = a5 * x2 + F(7.83085124567151e-06f);
auto const b3 = b4 * x2 + F(0.00023911474272608757f);
auto const a3 = a4 * x2 + F(0.0012712227180600166f);
auto const b2 = b3 * x2 + F(0.019408442080020905f);
auto const a2 = a3 * x2 + F(0.05291419476270676f);
auto const b1 = b2 * x2 + F(0.39569181203842163f);
auto const a1 = a2 * x2 + F(0.4584879788078804f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
constexpr float c1 = 1.6909569472766688f;
auto a = F(c1) / (F(0.5f) - (a0 / b0)) - F(c1);
a *= a;
a *= a;
return a;
}
inline static float exp_special_T9_float_simd(float x) {
#ifdef __x86_64__
return exp_special_T9<cr::simd::float1x4>(x)[0];
#else
return exp_special_T9<float>(x);
#endif
}
template <class F>
inline constexpr static F exp_special_fma_T9(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a5 = F(6.651191597484285e-09f);
auto const b4 = F(6.527952791657299e-07f);
auto const a4 = math::fma(a5, x2, F(7.83085124567151e-06f));
auto const b3 = math::fma(b4, x2, F(0.00023911474272608757f));
auto const a3 = math::fma(a4, x2, F(0.0012712227180600166f));
auto const b2 = math::fma(b3, x2, F(0.019408442080020905f));
auto const a2 = math::fma(a3, x2, F(0.05291419476270676f));
auto const b1 = math::fma(b2, x2, F(0.39569181203842163f));
auto const a1 = math::fma(a2, x2, F(0.4584879788078804f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
constexpr float c1 = 1.6909569472766688f;
auto a = F(c1) / (F(0.5f) - (a0 / b0)) - F(c1);
a *= a;
a *= a;
return a;
}
inline static float exp_special_fma_T9_float_simd(float x) {
#ifdef __x86_64__
return exp_special_fma_T9<cr::simd::float1x4>(x)[0];
#else
return exp_special_fma_T9<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_T3(in_t(F) x) {
auto const x2 = x * x;
auto const a2 = F(-0.06666666666666667f);
auto const b1 = F(-0.4f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tan_T3_float_simd(float x) {
#ifdef __x86_64__
return tan_T3<cr::simd::float1x4>(x)[0];
#else
return tan_T3<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_T3(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a2 = F(-0.06666666666666667f);
auto const b1 = F(-0.4f);
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tan_fma_T3_float_simd(float x) {
#ifdef __x86_64__
return tan_fma_T3<cr::simd::float1x4>(x)[0];
#else
return tan_fma_T3<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_T4(in_t(F) x) {
auto const x2 = x * x;
auto const a2 = F(-0.09523809523809523f);
auto const b2 = F(0.009523809523809525f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(-0.42857142857142855f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float tan_T4_float_simd(float x) {
#ifdef __x86_64__
return tan_T4<cr::simd::float1x4>(x)[0];
#else
return tan_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_T4(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a2 = F(-0.09523809523809523f);
auto const b2 = F(0.009523809523809525f);
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(-0.42857142857142855f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float tan_fma_T4_float_simd(float x) {
#ifdef __x86_64__
return tan_fma_T4<cr::simd::float1x4>(x)[0];
#else
return tan_fma_T4<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_T5(in_t(F) x) {
auto const x2 = x * x;
auto const a3 = F(0.0010582010582010583f);
auto const b2 = F(0.015873015873015872f);
auto const a2 = a3 * x2 + F(-0.1111111111111111f);
auto const b1 = b2 * x2 + F(-0.4444444444444444f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tan_T5_float_simd(float x) {
#ifdef __x86_64__
return tan_T5<cr::simd::float1x4>(x)[0];
#else
return tan_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_T5(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a3 = F(0.0010582010582010583f);
auto const b2 = F(0.015873015873015872f);
auto const a2 = math::fma(a3, x2, F(-0.1111111111111111f));
auto const b1 = math::fma(b2, x2, F(-0.4444444444444444f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tan_fma_T5_float_simd(float x) {
#ifdef __x86_64__
return tan_fma_T5<cr::simd::float1x4>(x)[0];
#else
return tan_fma_T5<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_T6(in_t(F) x) {
auto const x2 = x * x;
auto const a3 = F(0.00202020202020202f);
auto const b3 = F(-9.62000962000962e-05f);
auto const a2 = a3 * x2 + F(-0.12121212121212122f);
auto const b2 = b3 * x2 + F(0.020202020202020204f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(-0.45454545454545453f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float tan_T6_float_simd(float x) {
#ifdef __x86_64__
return tan_T6<cr::simd::float1x4>(x)[0];
#else
return tan_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_T6(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a3 = F(0.00202020202020202f);
auto const b3 = F(-9.62000962000962e-05f);
auto const a2 = math::fma(a3, x2, F(-0.12121212121212122f));
auto const b2 = math::fma(b3, x2, F(0.020202020202020204f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(-0.45454545454545453f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float tan_fma_T6_float_simd(float x) {
#ifdef __x86_64__
return tan_fma_T6<cr::simd::float1x4>(x)[0];
#else
return tan_fma_T6<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_T7(in_t(F) x) {
auto const x2 = x * x;
auto const a4 = F(-7.4000074000074e-06f);
auto const b3 = F(-0.0002072002072002072f);
auto const a3 = a4 * x2 + F(0.002797202797202797f);
auto const b2 = b3 * x2 + F(0.023310023310023312f);
auto const a2 = a3 * x2 + F(-0.1282051282051282f);
auto const b1 = b2 * x2 + F(-0.46153846153846156f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tan_T7_float_simd(float x) {
#ifdef __x86_64__
return tan_T7<cr::simd::float1x4>(x)[0];
#else
return tan_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_T7(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a4 = F(-7.4000074000074e-06f);
auto const b3 = F(-0.0002072002072002072f);
auto const a3 = math::fma(a4, x2, F(0.002797202797202797f));
auto const b2 = math::fma(b3, x2, F(0.023310023310023312f));
auto const a2 = math::fma(a3, x2, F(-0.1282051282051282f));
auto const b1 = math::fma(b2, x2, F(-0.46153846153846156f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tan_fma_T7_float_simd(float x) {
#ifdef __x86_64__
return tan_fma_T7<cr::simd::float1x4>(x)[0];
#else
return tan_fma_T7<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_T8(in_t(F) x) {
auto const x2 = x * x;
auto const a4 = F(-1.776001776001776e-05f);
auto const b4 = F(4.9333382666716e-07f);
auto const a3 = a4 * x2 + F(0.003418803418803419f);
auto const b3 = b4 * x2 + F(-0.0003108003108003108f);
auto const a2 = a3 * x2 + F(-0.13333333333333333f);
auto const b2 = b3 * x2 + F(0.02564102564102564f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(-0.4666666666666667f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float tan_T8_float_simd(float x) {
#ifdef __x86_64__
return tan_T8<cr::simd::float1x4>(x)[0];
#else
return tan_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_T8(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a4 = F(-1.776001776001776e-05f);
auto const b4 = F(4.9333382666716e-07f);
auto const a3 = math::fma(a4, x2, F(0.003418803418803419f));
auto const b3 = math::fma(b4, x2, F(-0.0003108003108003108f));
auto const a2 = math::fma(a3, x2, F(-0.13333333333333333f));
auto const b2 = math::fma(b3, x2, F(0.02564102564102564f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(-0.4666666666666667f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float tan_fma_T8_float_simd(float x) {
#ifdef __x86_64__
return tan_fma_T8<cr::simd::float1x4>(x)[0];
#else
return tan_fma_T8<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_T9(in_t(F) x) {
auto const x2 = x * x;
auto const a5 = F(2.901963686277412e-08f);
auto const b4 = F(1.3058836588248353e-06f);
auto const a4 = a5 * x2 + F(-2.8729440494146376e-05f);
auto const b3 = b4 * x2 + F(-0.00040221216691804925f);
auto const a3 = a4 * x2 + F(0.00392156862745098f);
auto const b2 = b3 * x2 + F(0.027450980392156862f);
auto const a2 = a3 * x2 + F(-0.13725490196078433f);
auto const b1 = b2 * x2 + F(-0.47058823529411764f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tan_T9_float_simd(float x) {
#ifdef __x86_64__
return tan_T9<cr::simd::float1x4>(x)[0];
#else
return tan_T9<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_T9(in_t(F) x) {
using math = ApproxContext;
auto const x2 = x * x;
auto const a5 = F(2.901963686277412e-08f);
auto const b4 = F(1.3058836588248353e-06f);
auto const a4 = math::fma(a5, x2, F(-2.8729440494146376e-05f));
auto const b3 = math::fma(b4, x2, F(-0.00040221216691804925f));
auto const a3 = math::fma(a4, x2, F(0.00392156862745098f));
auto const b2 = math::fma(b3, x2, F(0.027450980392156862f));
auto const a2 = math::fma(a3, x2, F(-0.13725490196078433f));
auto const b1 = math::fma(b2, x2, F(-0.47058823529411764f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tan_fma_T9_float_simd(float x) {
#ifdef __x86_64__
return tan_fma_T9<cr::simd::float1x4>(x)[0];
#else
return tan_fma_T9<float>(x);
#endif
}
