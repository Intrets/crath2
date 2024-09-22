template <class F>
inline constexpr static F tan_fma_ec_T1_1(in_t(F) x) {
auto const a1 = F(9.400946631447813f);
auto const a0 = (a1 * x);
return a0;
}
inline static float tan_fma_ec_T1_1_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_fma_ec_T1_1<cr::simd::float1x4>(x)[0];
#else
return tan_fma_ec_T1_1<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_T1_1(in_t(F) x) {
auto const a1 = F(1.0f);
auto const a0 = (a1 * x);
return a0;
}
inline static float tan_fma_T1_1_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_fma_T1_1<cr::simd::float1x4>(x)[0];
#else
return tan_fma_T1_1<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_ec_T1_1(in_t(F) x) {
auto const a1 = F(9.400946631447813f);
auto const a0 = (a1 * x);
return a0;
}
inline static float tan_ec_T1_1_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_ec_T1_1<cr::simd::float1x4>(x)[0];
#else
return tan_ec_T1_1<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_T1_1(in_t(F) x) {
auto const a1 = F(1.0f);
auto const a0 = (a1 * x);
return a0;
}
inline static float tan_T1_1_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_T1_1<cr::simd::float1x4>(x)[0];
#else
return tan_T1_1<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_ec_T2_2(in_t(F) x) {
using math = cr::StdContext;
auto const x2 = x * x;
auto const a1 = F(2.350236657861953f);
auto const b1 = F(-0.3333333333333333f);
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float tan_fma_ec_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_fma_ec_T2_2<cr::simd::float1x4>(x)[0];
#else
return tan_fma_ec_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_T2_2(in_t(F) x) {
using math = cr::StdContext;
auto const x2 = x * x;
auto const a1 = F(1.0f);
auto const b1 = F(-0.3333333333333333f);
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float tan_fma_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_fma_T2_2<cr::simd::float1x4>(x)[0];
#else
return tan_fma_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_ec_T2_2(in_t(F) x) {
auto const x2 = x * x;
auto const a1 = F(2.350236657861953f);
auto const b1 = F(-0.3333333333333333f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float tan_ec_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_ec_T2_2<cr::simd::float1x4>(x)[0];
#else
return tan_ec_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_T2_2(in_t(F) x) {
auto const x2 = x * x;
auto const a1 = F(1.0f);
auto const b1 = F(-0.3333333333333333f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float tan_T2_2_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_T2_2<cr::simd::float1x4>(x)[0];
#else
return tan_T2_2<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_ec_T3_3(in_t(F) x) {
using math = cr::StdContext;
auto const x2 = x * x;
auto const a2 = F(-0.07373291475645334f);
auto const b1 = F(-0.4f);
auto const a1 = math::fma(a2, x2, F(1.1059937213468f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tan_fma_ec_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_fma_ec_T3_3<cr::simd::float1x4>(x)[0];
#else
return tan_fma_ec_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_T3_3(in_t(F) x) {
using math = cr::StdContext;
auto const x2 = x * x;
auto const a2 = F(-0.06666666666666667f);
auto const b1 = F(-0.4f);
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tan_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return tan_fma_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_ec_T3_3(in_t(F) x) {
auto const x2 = x * x;
auto const a2 = F(-0.07373291475645334f);
auto const b1 = F(-0.4f);
auto const a1 = a2 * x2 + F(1.1059937213468f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tan_ec_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_ec_T3_3<cr::simd::float1x4>(x)[0];
#else
return tan_ec_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_T3_3(in_t(F) x) {
auto const x2 = x * x;
auto const a2 = F(-0.06666666666666667f);
auto const b1 = F(-0.4f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tan_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_T3_3<cr::simd::float1x4>(x)[0];
#else
return tan_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_ec_T4_4(in_t(F) x) {
using math = cr::StdContext;
auto const x2 = x * x;
auto const a2 = F(-0.09563733586104908f);
auto const b2 = F(0.009523809523809525f);
auto const a1 = math::fma(a2, x2, F(1.0041920265410154f));
auto const b1 = math::fma(b2, x2, F(-0.42857142857142855f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float tan_fma_ec_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_fma_ec_T4_4<cr::simd::float1x4>(x)[0];
#else
return tan_fma_ec_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_T4_4(in_t(F) x) {
using math = cr::StdContext;
auto const x2 = x * x;
auto const a2 = F(-0.09523809523809523f);
auto const b2 = F(0.009523809523809525f);
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(-0.42857142857142855f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float tan_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return tan_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_ec_T4_4(in_t(F) x) {
auto const x2 = x * x;
auto const a2 = F(-0.09563733586104908f);
auto const b2 = F(0.009523809523809525f);
auto const a1 = a2 * x2 + F(1.0041920265410154f);
auto const b1 = b2 * x2 + F(-0.42857142857142855f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float tan_ec_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_ec_T4_4<cr::simd::float1x4>(x)[0];
#else
return tan_ec_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_T4_4(in_t(F) x) {
auto const x2 = x * x;
auto const a2 = F(-0.09523809523809523f);
auto const b2 = F(0.009523809523809525f);
auto const a1 = a2 * x2 + F(1.0f);
auto const b1 = b2 * x2 + F(-0.42857142857142855f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float tan_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_T4_4<cr::simd::float1x4>(x)[0];
#else
return tan_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_ec_T5_5(in_t(F) x) {
using math = cr::StdContext;
auto const x2 = x * x;
auto const a3 = F(0.0010583076248393342f);
auto const b2 = F(0.015873015873015872f);
auto const a2 = math::fma(a3, x2, F(-0.11112230060813011f));
auto const b1 = math::fma(b2, x2, F(-0.4444444444444444f));
auto const a1 = math::fma(a2, x2, F(1.000100705473171f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tan_fma_ec_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_fma_ec_T5_5<cr::simd::float1x4>(x)[0];
#else
return tan_fma_ec_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_T5_5(in_t(F) x) {
using math = cr::StdContext;
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
inline static float tan_fma_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_fma_T5_5<cr::simd::float1x4>(x)[0];
#else
return tan_fma_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_ec_T5_5(in_t(F) x) {
auto const x2 = x * x;
auto const a3 = F(0.0010583076248393342f);
auto const b2 = F(0.015873015873015872f);
auto const a2 = a3 * x2 + F(-0.11112230060813011f);
auto const b1 = b2 * x2 + F(-0.4444444444444444f);
auto const a1 = a2 * x2 + F(1.000100705473171f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tan_ec_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_ec_T5_5<cr::simd::float1x4>(x)[0];
#else
return tan_ec_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_T5_5(in_t(F) x) {
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
inline static float tan_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_T5_5<cr::simd::float1x4>(x)[0];
#else
return tan_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_ec_T6_6(in_t(F) x) {
using math = cr::StdContext;
auto const x2 = x * x;
auto const a3 = F(0.002020205337392043f);
auto const b3 = F(-9.62000962000962e-05f);
auto const a2 = math::fma(a3, x2, F(-0.12121232024352258f));
auto const b2 = math::fma(b3, x2, F(0.020202020202020204f));
auto const a1 = math::fma(a2, x2, F(1.0000016420090612f));
auto const b1 = math::fma(b2, x2, F(-0.45454545454545453f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float tan_fma_ec_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
return tan_fma_ec_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_T6_6(in_t(F) x) {
using math = cr::StdContext;
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
inline static float tan_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return tan_fma_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_T6_6(in_t(F) x) {
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
inline static float tan_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_T6_6<cr::simd::float1x4>(x)[0];
#else
return tan_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_T7_7(in_t(F) x) {
using math = cr::StdContext;
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
inline static float tan_fma_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_fma_T7_7<cr::simd::float1x4>(x)[0];
#else
return tan_fma_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_ec_T7_7(in_t(F) x) {
auto const x2 = x * x;
auto const a4 = F(-7.400007543783827e-06f);
auto const b3 = F(-0.0002072002072002072f);
auto const a3 = a4 * x2 + F(0.002797202851550287f);
auto const b2 = b3 * x2 + F(0.023310023310023312f);
auto const a2 = a3 * x2 + F(-0.1282051306960548f);
auto const b1 = b2 * x2 + F(-0.46153846153846156f);
auto const a1 = a2 * x2 + F(1.0000000194292276f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tan_ec_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_ec_T7_7<cr::simd::float1x4>(x)[0];
#else
return tan_ec_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_T7_7(in_t(F) x) {
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
inline static float tan_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_T7_7<cr::simd::float1x4>(x)[0];
#else
return tan_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_ec_T8_8(in_t(F) x) {
using math = cr::StdContext;
auto const x2 = x * x;
auto const a4 = F(-1.7760017763120303e-05f);
auto const b4 = F(4.9333382666716e-07f);
auto const a3 = math::fma(a4, x2, F(0.0034188034194006585f));
auto const b3 = math::fma(b4, x2, F(-0.0003108003108003108f));
auto const a2 = math::fma(a3, x2, F(-0.13333333335662567f));
auto const b2 = math::fma(b3, x2, F(0.02564102564102564f));
auto const a1 = math::fma(a2, x2, F(1.0000000001746925f));
auto const b1 = math::fma(b2, x2, F(-0.4666666666666667f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float tan_fma_ec_T8_8_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_fma_ec_T8_8<cr::simd::float1x4>(x)[0];
#else
return tan_fma_ec_T8_8<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_T8_8(in_t(F) x) {
using math = cr::StdContext;
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
inline static float tan_fma_T8_8_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_fma_T8_8<cr::simd::float1x4>(x)[0];
#else
return tan_fma_T8_8<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_ec_T8_8(in_t(F) x) {
auto const x2 = x * x;
auto const a4 = F(-1.7760017763120303e-05f);
auto const b4 = F(4.9333382666716e-07f);
auto const a3 = a4 * x2 + F(0.0034188034194006585f);
auto const b3 = b4 * x2 + F(-0.0003108003108003108f);
auto const a2 = a3 * x2 + F(-0.13333333335662567f);
auto const b2 = b3 * x2 + F(0.02564102564102564f);
auto const a1 = a2 * x2 + F(1.0000000001746925f);
auto const b1 = b2 * x2 + F(-0.4666666666666667f);
auto const a0 = (a1 * x);
auto const b0 = b1 * x2 + F(1.0f);
return a0 / b0;
}
inline static float tan_ec_T8_8_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_ec_T8_8<cr::simd::float1x4>(x)[0];
#else
return tan_ec_T8_8<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_T8_8(in_t(F) x) {
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
inline static float tan_T8_8_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_T8_8<cr::simd::float1x4>(x)[0];
#else
return tan_T8_8<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_ec_T9_9(in_t(F) x) {
using math = cr::StdContext;
auto const x2 = x * x;
auto const a5 = F(2.9019636862809966e-08f);
auto const b4 = F(1.3058836588248353e-06f);
auto const a4 = math::fma(a5, x2, F(-2.8729440494181867e-05f));
auto const b3 = math::fma(b4, x2, F(-0.00040221216691804925f));
auto const a3 = math::fma(a4, x2, F(0.0039215686274558246f));
auto const b2 = math::fma(b3, x2, F(0.027450980392156862f));
auto const a2 = math::fma(a3, x2, F(-0.13725490196095388f));
auto const b1 = math::fma(b2, x2, F(-0.47058823529411764f));
auto const a1 = math::fma(a2, x2, F(1.0000000000012355f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tan_fma_ec_T9_9_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_fma_ec_T9_9<cr::simd::float1x4>(x)[0];
#else
return tan_fma_ec_T9_9<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_fma_T9_9(in_t(F) x) {
using math = cr::StdContext;
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
inline static float tan_fma_T9_9_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_fma_T9_9<cr::simd::float1x4>(x)[0];
#else
return tan_fma_T9_9<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_ec_T9_9(in_t(F) x) {
auto const x2 = x * x;
auto const a5 = F(2.9019636862809966e-08f);
auto const b4 = F(1.3058836588248353e-06f);
auto const a4 = a5 * x2 + F(-2.8729440494181867e-05f);
auto const b3 = b4 * x2 + F(-0.00040221216691804925f);
auto const a3 = a4 * x2 + F(0.0039215686274558246f);
auto const b2 = b3 * x2 + F(0.027450980392156862f);
auto const a2 = a3 * x2 + F(-0.13725490196095388f);
auto const b1 = b2 * x2 + F(-0.47058823529411764f);
auto const a1 = a2 * x2 + F(1.0000000000012355f);
auto const b0 = b1 * x2 + F(1.0f);
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tan_ec_T9_9_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_ec_T9_9<cr::simd::float1x4>(x)[0];
#else
return tan_ec_T9_9<float>(x);
#endif
}
template <class F>
inline constexpr static F tan_T9_9(in_t(F) x) {
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
inline static float tan_T9_9_float_simd(float x) {
#ifdef ARCH_x86_64
return tan_T9_9<cr::simd::float1x4>(x)[0];
#else
return tan_T9_9<float>(x);
#endif
}
