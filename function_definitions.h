template <class F>
inline constexpr static F log_remez_fma_ec_T3_0(in_t(F) x) {
using math = ApproxContext;
auto const a3 = F(0.04911535508581226f);
auto const a2 = math::fma(a3, x, F(-0.8126996465070443f));
auto const a1 = math::fma(a2, x, F(3.9101385008033045f));
auto const a0 = math::fma(a1, x, F(-4.644190350146829f));
return a0;
}
inline static float log_remez_fma_ec_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_fma_ec_T3_0<cr::simd::float1x4>(x)[0];
#else
return log_remez_fma_ec_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_pade_fma_ec_T3_3(in_t(F) x) {
using math = ApproxContext;
auto const a3 = F(0.45138684561337056f);
auto const b3 = F(0.09980463631369431f);
auto const a2 = math::fma(a3, x, F(2.6375741824445433f));
auto const b2 = math::fma(b3, x, F(1.7866204604569207f));
auto const a1 = math::fma(a2, x, F(-2.496158858922494f));
auto const b1 = math::fma(b2, x, F(2.092429552667891f));
auto const a0 = math::fma(a1, x, F(-0.5638103377851117f));
auto const b0 = math::fma(b1, x, F(0.10668976977153968f));
return a0 / b0;
}
inline static float log_remez_pade_fma_ec_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_pade_fma_ec_T3_3<cr::simd::float1x4>(x)[0];
#else
return log_remez_pade_fma_ec_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_fma_T3_0(in_t(F) x) {
using math = ApproxContext;
auto const a3 = F(0.04911535508581227f);
auto const a2 = math::fma(a3, x, F(-0.8126996465070445f));
auto const a1 = math::fma(a2, x, F(3.9101385008033054f));
auto const a0 = math::fma(a1, x, F(-3.4744271513607403f));
return a0;
}
inline static float log_remez_fma_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_fma_T3_0<cr::simd::float1x4>(x)[0];
#else
return log_remez_fma_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_pade_fma_T3_3(in_t(F) x) {
using math = ApproxContext;
auto const a3 = F(0.4549807588919545f);
auto const b3 = F(0.09980463631369431f);
auto const a2 = math::fma(a3, x, F(2.658574379879754f));
auto const b2 = math::fma(b3, x, F(1.7866204604569207f));
auto const a1 = math::fma(a2, x, F(-2.5160331165702687f));
auto const b1 = math::fma(b2, x, F(2.092429552667891f));
auto const a0 = math::fma(a1, x, F(-0.5612520765613268f));
auto const b0 = math::fma(b1, x, F(0.10668976977153968f));
return a0 / b0;
}
inline static float log_remez_pade_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_pade_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return log_remez_pade_fma_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_ec_T3_3(in_t(F) x) {
using math = ApproxContext;
x = x - F(1.0f);
auto const a3 = F(0.18794926663664818f);
auto const b3 = F(0.05f);
auto const a2 = math::fma(a3, x, F(1.025177818018081f));
auto const b2 = math::fma(b3, x, F(0.6f));
auto const a1 = math::fma(a2, x, F(1.025177818018081f));
auto const b1 = math::fma(b2, x, F(1.5f));
auto const a0 = math::fma(a1, x, F(-0.058672992186577524f));
auto const b0 = math::fma(b1, x, F(1.0f));
return a0 / b0;
}
inline static float log_fma_ec_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return log_fma_ec_T3_3<cr::simd::float1x4>(x)[0];
#else
return log_fma_ec_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_T3_3(in_t(F) x) {
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
inline static float log_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return log_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return log_fma_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_fma_ec_T4_0(in_t(F) x) {
using math = ApproxContext;
auto const a4 = F(-0.021557856514769828f);
auto const a3 = math::fma(a4, x, F(0.45773411151359183f));
auto const a2 = math::fma(a3, x, F(-3.1960071918210664f));
auto const a1 = math::fma(a2, x, F(8.443704599799256f));
auto const a0 = math::fma(a1, x, F(-4.6892880887854345f));
return a0;
}
inline static float log_remez_fma_ec_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_fma_ec_T4_0<cr::simd::float1x4>(x)[0];
#else
return log_remez_fma_ec_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_pade_fma_ec_T4_4(in_t(F) x) {
using math = ApproxContext;
auto const a4 = F(0.17690583047610028f);
auto const b4 = F(0.03791148734905878f);
auto const a3 = math::fma(a4, x, F(1.5987177643909722f));
auto const b3 = math::fma(b4, x, F(0.8606927544179578f));
auto const a2 = math::fma(a3, x, F(-0.381407826184901f));
auto const b2 = math::fma(b3, x, F(1.9488983222462408f));
auto const a1 = math::fma(a2, x, F(-1.3289657253833151f));
auto const b1 = math::fma(b2, x, F(0.5533473698443565f));
auto const a0 = math::fma(a1, x, F(-0.06525299898421635f));
auto const b0 = math::fma(b1, x, F(0.011334031120982592f));
return a0 / b0;
}
inline static float log_remez_pade_fma_ec_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_pade_fma_ec_T4_4<cr::simd::float1x4>(x)[0];
#else
return log_remez_pade_fma_ec_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_fma_T4_0(in_t(F) x) {
using math = ApproxContext;
auto const a4 = F(-0.015535097016249149f);
auto const a3 = math::fma(a4, x, F(0.3298539363196137f));
auto const a2 = math::fma(a3, x, F(-2.303117740650775f));
auto const a1 = math::fma(a2, x, F(6.084731570810865f));
auto const a0 = math::fma(a1, x, F(-3.7008551133900127f));
return a0;
}
inline static float log_remez_fma_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_fma_T4_0<cr::simd::float1x4>(x)[0];
#else
return log_remez_fma_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_pade_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
auto const a4 = F(0.1769058135033874f);
auto const b4 = F(0.03791148734905878f);
auto const a3 = math::fma(a4, x, F(1.5987176110066688f));
auto const b3 = math::fma(b4, x, F(0.8606927544179578f));
auto const a2 = math::fma(a3, x, F(-0.3814077895918418f));
auto const b2 = math::fma(b3, x, F(1.9488983222462408f));
auto const a1 = math::fma(a2, x, F(-1.3289655978795827f));
auto const b1 = math::fma(b2, x, F(0.5533473698443565f));
auto const a0 = math::fma(a1, x, F(-0.06509391107816206f));
auto const b0 = math::fma(b1, x, F(0.011334031120982592f));
return a0 / b0;
}
inline static float log_remez_pade_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_pade_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return log_remez_pade_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_ec_T4_4(in_t(F) x) {
using math = ApproxContext;
x = x - F(1.0f);
auto const a4 = F(0.059931024501761465f);
auto const b4 = F(0.014285714285714285f);
auto const a3 = math::fma(a4, x, F(0.6232826548183192f));
auto const b3 = math::fma(b4, x, F(0.2857142857142857f));
auto const a2 = math::fma(a3, x, F(1.510261817444389f));
auto const b2 = math::fma(b3, x, F(1.2857142857142858f));
auto const a1 = math::fma(a2, x, F(1.0068412116295926f));
auto const b1 = math::fma(b2, x, F(2.0f));
auto const a0 = math::fma(a1, x, F(-0.012785913476428566f));
auto const b0 = math::fma(b1, x, F(1.0f));
return a0 / b0;
}
inline static float log_fma_ec_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return log_fma_ec_T4_4<cr::simd::float1x4>(x)[0];
#else
return log_fma_ec_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_T4_4(in_t(F) x) {
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
inline static float log_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return log_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return log_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_fma_ec_T5_0(in_t(F) x) {
using math = ApproxContext;
auto const a5 = F(0.005103594912970201f);
auto const a4 = math::fma(a5, x, F(-0.1330128112731535f));
auto const a3 = math::fma(a4, x, F(1.2435985621192964f));
auto const a2 = math::fma(a3, x, F(-5.019229514981925f));
auto const a1 = math::fma(a2, x, F(8.50853507624732f));
auto const a0 = math::fma(a1, x, F(-4.689754856068011f));
return a0;
}
inline static float log_remez_fma_ec_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_fma_ec_T5_0<cr::simd::float1x4>(x)[0];
#else
return log_remez_fma_ec_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_pade_fma_ec_T5_5(in_t(F) x) {
using math = ApproxContext;
auto const a5 = F(0.021827824107728766f);
auto const b5 = F(0.00399063268682568f);
auto const a4 = math::fma(a5, x, F(0.6301430502744555f));
auto const b4 = math::fma(b5, x, F(0.22135151569488468f));
auto const a3 = math::fma(a4, x, F(1.5882441983095408f));
auto const b3 = math::fma(b4, x, F(1.5164607316059053f));
auto const a2 = math::fma(a3, x, F(-1.2794560877055665f));
auto const b2 = math::fma(b3, x, F(1.8241296267815297f));
auto const a1 = math::fma(a2, x, F(-0.9308278378912086f));
auto const b1 = math::fma(b2, x, F(0.3334093402114759f));
auto const a0 = math::fma(a1, x, F(-0.029462448994451804f));
auto const b0 = math::fma(b1, x, F(0.004928368223653459f));
return a0 / b0;
}
inline static float log_remez_pade_fma_ec_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_pade_fma_ec_T5_5<cr::simd::float1x4>(x)[0];
#else
return log_remez_pade_fma_ec_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_fma_T5_0(in_t(F) x) {
using math = ApproxContext;
auto const a5 = F(0.0051035949129702215f);
auto const a4 = math::fma(a5, x, F(-0.13301281127315406f));
auto const a3 = math::fma(a4, x, F(1.2435985621193015f));
auto const a2 = math::fma(a3, x, F(-5.019229514981945f));
auto const a1 = math::fma(a2, x, F(8.508535076247355f));
auto const a0 = math::fma(a1, x, F(-3.8760176107326796f));
return a0;
}
inline static float log_remez_fma_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_fma_T5_0<cr::simd::float1x4>(x)[0];
#else
return log_remez_fma_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_pade_fma_T5_5(in_t(F) x) {
using math = ApproxContext;
auto const a5 = F(0.021829231968236208f);
auto const b5 = F(0.00399063268682568f);
auto const a4 = math::fma(a5, x, F(0.6301836935154007f));
auto const b4 = math::fma(b5, x, F(0.22135151569488468f));
auto const a3 = math::fma(a4, x, F(1.5883466375756783f));
auto const b3 = math::fma(b4, x, F(1.5164607316059053f));
auto const a2 = math::fma(a3, x, F(-1.279538610621639f));
auto const b2 = math::fma(b3, x, F(1.8241296267815297f));
auto const a1 = math::fma(a2, x, F(-0.930887874830563f));
auto const b1 = math::fma(b2, x, F(0.3334093402114759f));
auto const a0 = math::fma(a1, x, F(-0.029460547869280495f));
auto const b0 = math::fma(b1, x, F(0.004928368223653459f));
return a0 / b0;
}
inline static float log_remez_pade_fma_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_pade_fma_T5_5<cr::simd::float1x4>(x)[0];
#else
return log_remez_pade_fma_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_ec_T5_5(in_t(F) x) {
using math = ApproxContext;
x = x - F(1.0f);
auto const a5 = F(0.01815562537115285f);
auto const b5 = F(0.003968253968253968f);
auto const a4 = math::fma(a5, x, F(0.30612769786396415f));
auto const b4 = math::fma(b5, x, F(0.11904761904761904f));
auto const a3 = math::fma(a4, x, F(1.308000163600574f));
auto const b3 = math::fma(b4, x, F(0.8333333333333334f));
auto const a2 = math::fma(a3, x, F(2.0037449314732196f));
auto const b2 = math::fma(b3, x, F(2.2222222222222223f));
auto const a1 = math::fma(a2, x, F(1.0018724657366098f));
auto const b1 = math::fma(b2, x, F(2.5f));
auto const a0 = math::fma(a1, x, F(-0.002692324505992065f));
auto const b0 = math::fma(b1, x, F(1.0f));
return a0 / b0;
}
inline static float log_fma_ec_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return log_fma_ec_T5_5<cr::simd::float1x4>(x)[0];
#else
return log_fma_ec_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_T5_5(in_t(F) x) {
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
inline static float log_fma_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return log_fma_T5_5<cr::simd::float1x4>(x)[0];
#else
return log_fma_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_fma_ec_T6_0(in_t(F) x) {
using math = ApproxContext;
auto const a6 = F(-0.0021497890521556665f);
auto const a5 = math::fma(a6, x, F(0.06654538320999341f));
auto const a4 = math::fma(a5, x, F(-0.7835217904046705f));
auto const a3 = math::fma(a4, x, F(4.3677237124197505f));
auto const a2 = math::fma(a3, x, F(-11.695402984835157f));
auto const a1 = math::fma(a2, x, F(13.933114250788261f));
auto const a0 = math::fma(a1, x, F(-4.743336148092637f));
return a0;
}
inline static float log_remez_fma_ec_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_fma_ec_T6_0<cr::simd::float1x4>(x)[0];
#else
return log_remez_fma_ec_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_pade_fma_ec_T6_6(in_t(F) x) {
using math = ApproxContext;
auto const a6 = F(0.004857283460765279f);
auto const b6 = F(0.0008303879678231f);
auto const a5 = math::fma(a6, x, F(0.23770199975342343f));
auto const b5 = math::fma(b6, x, F(0.07110465750620062f));
auto const a4 = math::fma(a5, x, F(1.488148530000562f));
auto const b4 = math::fma(b5, x, F(0.8670789767525413f));
auto const a3 = math::fma(a4, x, F(0.5562271018369294f));
auto const b3 = math::fma(b4, x, F(2.3081634516101066f));
auto const a2 = math::fma(a3, x, F(-1.8306452534529427f));
auto const b2 = math::fma(b3, x, F(1.3466428631387481f));
auto const a1 = math::fma(a2, x, F(-0.44830276344708686f));
auto const b1 = math::fma(b2, x, F(0.13445748920407755f));
auto const a0 = math::fma(a1, x, F(-0.007980331234593923f));
auto const b0 = math::fma(b1, x, F(0.001264455908478253f));
return a0 / b0;
}
inline static float log_remez_pade_fma_ec_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_pade_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
return log_remez_pade_fma_ec_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_fma_T6_0(in_t(F) x) {
using math = ApproxContext;
auto const a6 = F(-0.0017162192526486279f);
auto const a5 = math::fma(a6, x, F(0.053124499692354804f));
auto const a4 = math::fma(a5, x, F(-0.6255009905338604f));
auto const a3 = math::fma(a4, x, F(3.486840496274855f));
auto const a2 = math::fma(a3, x, F(-9.336672242298178f));
auto const a1 = math::fma(a2, x, F(11.123081542618388f));
auto const a0 = math::fma(a1, x, F(-4.0188922206280555f));
return a0;
}
inline static float log_remez_fma_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_fma_T6_0<cr::simd::float1x4>(x)[0];
#else
return log_remez_fma_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_pade_fma_T6_6(in_t(F) x) {
using math = ApproxContext;
auto const a6 = F(0.0048572834599145825f);
auto const b6 = F(0.0008303879678231f);
auto const a5 = math::fma(a6, x, F(0.2377019997117927f));
auto const b5 = math::fma(b6, x, F(0.07110465750620062f));
auto const a4 = math::fma(a5, x, F(1.4881485297399302f));
auto const b4 = math::fma(b5, x, F(0.8670789767525413f));
auto const a3 = math::fma(a4, x, F(0.5562271017395127f));
auto const b3 = math::fma(b4, x, F(2.3081634516101066f));
auto const a2 = math::fma(a3, x, F(-1.8306452531323265f));
auto const b2 = math::fma(b3, x, F(1.3466428631387481f));
auto const a1 = math::fma(a2, x, F(-0.4483027633685719f));
auto const b1 = math::fma(b2, x, F(0.13445748920407755f));
auto const a0 = math::fma(a1, x, F(-0.007976488911558862f));
auto const b0 = math::fma(b1, x, F(0.001264455908478253f));
return a0 / b0;
}
inline static float log_remez_pade_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_pade_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return log_remez_pade_fma_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_ec_T6_6(in_t(F) x) {
using math = ApproxContext;
x = x - F(1.0f);
auto const a6 = F(0.005305742594488834f);
auto const b6 = F(0.0010822510822510823f);
auto const a5 = math::fma(a6, x, F(0.13188560163443672f));
auto const b5 = math::fma(b6, x, F(0.045454545454545456f));
auto const a4 = math::fma(a5, x, F(0.8640780796738957f));
auto const b4 = math::fma(b5, x, F(0.45454545454545453f));
auto const a3 = math::fma(a4, x, F(2.2435711542409926f));
auto const b3 = math::fma(b4, x, F(1.8181818181818181f));
auto const a2 = math::fma(a3, x, F(2.501278651687593f));
auto const b2 = math::fma(b3, x, F(3.409090909090909f));
auto const a1 = math::fma(a2, x, F(1.0005114606750372f));
auto const b1 = math::fma(b2, x, F(3.0f));
auto const a0 = math::fma(a1, x, F(-0.0005576414406908203f));
auto const b0 = math::fma(b1, x, F(1.0f));
return a0 / b0;
}
inline static float log_fma_ec_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return log_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
return log_fma_ec_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_T6_6(in_t(F) x) {
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
inline static float log_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return log_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return log_fma_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_fma_ec_T7_0(in_t(F) x) {
using math = ApproxContext;
auto const a7 = F(0.0005863611812705964f);
auto const a6 = math::fma(a7, x, F(-0.021038233512570302f));
auto const a5 = math::fma(a6, x, F(0.29927090666044004f));
auto const a4 = math::fma(a5, x, F(-2.14372962786612f));
auto const a3 = math::fma(a4, x, F(8.114481369188496f));
auto const a2 = math::fma(a3, x, F(-15.614667615777273f));
auto const a1 = math::fma(a2, x, F(13.885776454060128f));
auto const a0 = math::fma(a1, x, F(-4.742474576841094f));
return a0;
}
inline static float log_remez_fma_ec_T7_0_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_fma_ec_T7_0<cr::simd::float1x4>(x)[0];
#else
return log_remez_fma_ec_T7_0<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_pade_fma_ec_T7_7(in_t(F) x) {
using math = ApproxContext;
auto const a7 = F(0.002103351990838969f);
auto const b7 = F(0.000353580013502492f);
auto const a6 = math::fma(a7, x, F(0.1203365091447352f));
auto const b6 = math::fma(b7, x, F(0.03436243902579016f));
auto const a5 = math::fma(a6, x, F(1.0166682369503797f));
auto const b5 = math::fma(b6, x, F(0.5143974063015346f));
auto const a4 = math::fma(a5, x, F(1.3013595569745748f));
auto const b4 = math::fma(b5, x, F(1.923285091290605f));
auto const a3 = math::fma(a4, x, F(-1.22514757809733f));
auto const b3 = math::fma(b4, x, F(1.9961521024936466f));
auto const a2 = math::fma(a3, x, F(-1.1028271865903967f));
auto const b2 = math::fma(b3, x, F(0.5357405398948237f));
auto const a1 = math::fma(a2, x, F(-0.11140468680864635f));
auto const b1 = math::fma(b2, x, F(0.028547115745040992f));
auto const a0 = math::fma(a1, x, F(-0.0010798953220275045f));
auto const b0 = math::fma(b1, x, F(0.0001595586230518291f));
return a0 / b0;
}
inline static float log_remez_pade_fma_ec_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_pade_fma_ec_T7_7<cr::simd::float1x4>(x)[0];
#else
return log_remez_pade_fma_ec_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_fma_T7_0(in_t(F) x) {
using math = ApproxContext;
auto const a7 = F(0.0005863611812706237f);
auto const a6 = math::fma(a7, x, F(-0.02103823351257128f));
auto const a5 = math::fma(a6, x, F(0.299270906660454f));
auto const a4 = math::fma(a5, x, F(-2.14372962786622f));
auto const a3 = math::fma(a4, x, F(8.114481369188873f));
auto const a2 = math::fma(a3, x, F(-15.614667615778f));
auto const a1 = math::fma(a2, x, F(13.885776454060775f));
auto const a0 = math::fma(a1, x, F(-4.139657483647317f));
return a0;
}
inline static float log_remez_fma_T7_0_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_fma_T7_0<cr::simd::float1x4>(x)[0];
#else
return log_remez_fma_T7_0<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_pade_fma_T7_7(in_t(F) x) {
using math = ApproxContext;
auto const a7 = F(0.0021033534922951604f);
auto const b7 = F(0.000353580013502492f);
auto const a6 = math::fma(a7, x, F(0.12033659504571494f));
auto const b6 = math::fma(b7, x, F(0.03436243902579016f));
auto const a5 = math::fma(a6, x, F(1.016668962688547f));
auto const b5 = math::fma(b6, x, F(0.5143974063015346f));
auto const a4 = math::fma(a5, x, F(1.3013604859367136f));
auto const b4 = math::fma(b5, x, F(1.923285091290605f));
auto const a3 = math::fma(a4, x, F(-1.2251484526563314f));
auto const b3 = math::fma(b4, x, F(1.9961521024936466f));
auto const a2 = math::fma(a3, x, F(-1.1028279738322444f));
auto const b2 = math::fma(b3, x, F(0.5357405398948237f));
auto const a1 = math::fma(a2, x, F(-0.11140476633373654f));
auto const b1 = math::fma(b2, x, F(0.028547115745040992f));
auto const a0 = math::fma(a1, x, F(-0.0010815373010461893f));
auto const b0 = math::fma(b1, x, F(0.0001595586230518291f));
return a0 / b0;
}
inline static float log_remez_pade_fma_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_pade_fma_T7_7<cr::simd::float1x4>(x)[0];
#else
return log_remez_pade_fma_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_ec_T7_7(in_t(F) x) {
using math = ApproxContext;
x = x - F(1.0f);
auto const a7 = F(0.0015111995197508688f);
auto const b7 = F(0.0002913752913752914f);
auto const a6 = math::fma(a7, x, F(0.051988593946691045f));
auto const b6 = math::fma(b7, x, F(0.016317016317016316f));
auto const a5 = math::fma(a6, x, F(0.48153560895466524f));
auto const b5 = math::fma(b6, x, F(0.2202797202797203f));
auto const a4 = math::fma(a5, x, F(1.8592333485419779f));
auto const b4 = math::fma(b5, x, F(1.2237762237762237f));
auto const a3 = math::fma(a4, x, F(3.4299649705860626f));
auto const b3 = math::fma(b4, x, F(3.3653846153846154f));
auto const a2 = math::fma(a3, x, F(3.0004179555780883f));
auto const b2 = math::fma(b3, x, F(4.846153846153846f));
auto const a1 = math::fma(a2, x, F(1.0001393185260294f));
auto const b1 = math::fma(b2, x, F(3.5f));
auto const a0 = math::fma(a1, x, F(-0.00011455384419582682f));
auto const b0 = math::fma(b1, x, F(1.0f));
return a0 / b0;
}
inline static float log_fma_ec_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return log_fma_ec_T7_7<cr::simd::float1x4>(x)[0];
#else
return log_fma_ec_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_T7_7(in_t(F) x) {
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
inline static float log_fma_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return log_fma_T7_7<cr::simd::float1x4>(x)[0];
#else
return log_fma_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_fma_ec_T8_0(in_t(F) x) {
using math = ApproxContext;
auto const a8 = F(-0.00023907460613532708f);
auto const a7 = math::fma(a8, x, F(0.00976004190709266f));
auto const a6 = math::fma(a7, x, F(-0.16289833632290662f));
auto const a5 = math::fma(a6, x, F(1.4297300462026437f));
auto const a4 = math::fma(a5, x, F(-7.0674621970760345f));
auto const a3 = math::fma(a4, x, F(19.56995311723698f));
auto const a2 = math::fma(a3, x, F(-28.53622203651501f));
auto const a1 = math::fma(a2, x, F(19.77669905700179f));
auto const a0 = math::fma(a1, x, F(-4.800103053775763f));
return a0;
}
inline static float log_remez_fma_ec_T8_0_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_fma_ec_T8_0<cr::simd::float1x4>(x)[0];
#else
return log_remez_fma_ec_T8_0<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_pade_fma_ec_T8_8(in_t(F) x) {
using math = ApproxContext;
auto const a8 = F(0.0004002140468845496f);
auto const b8 = F(6.37741348188656e-05f);
auto const a7 = math::fma(a8, x, F(0.03416511702074352f));
auto const b7 = math::fma(b8, x, F(0.008806407697916505f));
auto const a6 = math::fma(a7, x, F(0.4794964876009392f));
auto const b6 = math::fma(b7, x, F(0.1982996291226007f));
auto const a5 = math::fma(a6, x, F(1.444858236732345f));
auto const b5 = math::fma(b6, x, F(1.200517795860818f));
auto const a4 = math::fma(a5, x, F(0.08841328128708648f));
auto const b4 = math::fma(b5, x, F(2.2370768473494818f));
auto const a3 = math::fma(a4, x, F(-1.5085916183001793f));
auto const b3 = math::fma(b4, x, F(1.2733448516446813f));
auto const a2 = math::fma(a3, x, F(-0.5100038176913388f));
auto const b2 = math::fma(b3, x, F(0.19816560644706865f));
auto const a1 = math::fma(a2, x, F(-0.02854620521909609f));
auto const b1 = math::fma(b2, x, F(0.006642462256511608f));
auto const a0 = math::fma(a1, x, F(-0.00019090478076591052f));
auto const b0 = math::fma(b1, x, F(2.7306679607729487e-05f));
return a0 / b0;
}
inline static float log_remez_pade_fma_ec_T8_8_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_pade_fma_ec_T8_8<cr::simd::float1x4>(x)[0];
#else
return log_remez_pade_fma_ec_T8_8<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_fma_T8_0(in_t(F) x) {
using math = ApproxContext;
auto const a8 = F(-0.00020266269988196848f);
auto const a7 = math::fma(a8, x, F(0.008273553079631214f));
auto const a6 = math::fma(a7, x, F(-0.13808834480226687f));
auto const a5 = math::fma(a6, x, F(1.2119771143815499f));
auto const a4 = math::fma(a5, x, F(-5.991062762066938f));
auto const a3 = math::fma(a4, x, F(16.589380191461235f));
auto const a2 = math::fma(a3, x, F(-24.19005471069515f));
auto const a1 = math::fma(a2, x, F(16.764637994954818f));
auto const a0 = math::fma(a1, x, F(-4.244376336191431f));
return a0;
}
inline static float log_remez_fma_T8_0_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_fma_T8_0<cr::simd::float1x4>(x)[0];
#else
return log_remez_fma_T8_0<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_pade_fma_T8_8(in_t(F) x) {
using math = ApproxContext;
auto const a8 = F(0.00040021407846479984f);
auto const b8 = F(6.37741348188656e-05f);
auto const a7 = math::fma(a8, x, F(0.034165119716658254f));
auto const b7 = math::fma(b8, x, F(0.008806407697916505f));
auto const a6 = math::fma(a7, x, F(0.47949652543724003f));
auto const b6 = math::fma(b7, x, F(0.1982996291226007f));
auto const a5 = math::fma(a6, x, F(1.4448583507437973f));
auto const b5 = math::fma(b6, x, F(1.200517795860818f));
auto const a4 = math::fma(a5, x, F(0.08841328826363708f));
auto const b4 = math::fma(b5, x, F(2.2370768473494818f));
auto const a3 = math::fma(a4, x, F(-1.5085917373407307f));
auto const b3 = math::fma(b4, x, F(1.2733448516446813f));
auto const a2 = math::fma(a3, x, F(-0.5100038579349243f));
auto const b2 = math::fma(b3, x, F(0.19816560644706865f));
auto const a1 = math::fma(a2, x, F(-0.02854620747163148f));
auto const b1 = math::fma(b2, x, F(0.006642462256511608f));
auto const a0 = math::fma(a1, x, F(-0.00019106661213506493f));
auto const b0 = math::fma(b1, x, F(2.7306679607729487e-05f));
return a0 / b0;
}
inline static float log_remez_pade_fma_T8_8_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_pade_fma_T8_8<cr::simd::float1x4>(x)[0];
#else
return log_remez_pade_fma_T8_8<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_ec_T8_8(in_t(F) x) {
using math = ApproxContext;
x = x - F(1.0f);
auto const a8 = F(0.0004223714161341407f);
auto const b8 = F(7.77000777000777e-05f);
auto const a7 = math::fma(a8, x, F(0.019221507074320052f));
auto const b7 = math::fma(b8, x, F(0.005594405594405594f));
auto const a6 = math::fma(a7, x, F(0.23847056853639276f));
auto const b6 = math::fma(b7, x, F(0.0979020979020979f));
auto const a5 = math::fma(a6, x, F(1.2701335657529735f));
auto const b5 = math::fma(b6, x, F(0.717948717948718f));
auto const a4 = math::fma(a5, x, F(3.4167960491907885f));
auto const b4 = math::fma(b5, x, F(2.6923076923076925f));
auto const a3 = math::fma(a4, x, F(4.866850957871757f));
auto const b3 = math::fma(b4, x, F(5.6f));
auto const a2 = math::fma(a3, x, F(3.5001325381954422f));
auto const b2 = math::fma(b3, x, F(6.533333333333333f));
auto const a1 = math::fma(a2, x, F(1.0000378680558406f));
auto const b1 = math::fma(b2, x, F(4.0f));
auto const a0 = math::fma(a1, x, F(-2.3430537874029852e-05f));
auto const b0 = math::fma(b1, x, F(1.0f));
return a0 / b0;
}
inline static float log_fma_ec_T8_8_float_simd(float x) {
#ifdef ARCH_x86_64
return log_fma_ec_T8_8<cr::simd::float1x4>(x)[0];
#else
return log_fma_ec_T8_8<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_T8_8(in_t(F) x) {
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
inline static float log_fma_T8_8_float_simd(float x) {
#ifdef ARCH_x86_64
return log_fma_T8_8<cr::simd::float1x4>(x)[0];
#else
return log_fma_T8_8<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_fma_ec_T9_0(in_t(F) x) {
using math = ApproxContext;
auto const a9 = F(7.066573839882596e-05f);
auto const a8 = math::fma(a9, x, F(-0.003235241312024717f));
auto const a7 = math::fma(a8, x, F(0.06200169666624493f));
auto const a6 = math::fma(a7, x, F(-0.6451270273171444f));
auto const a5 = math::fma(a6, x, F(3.9535561432981736f));
auto const a4 = math::fma(a5, x, F(-14.485869378478721f));
auto const a3 = math::fma(a4, x, F(30.818723222011275f));
auto const a2 = math::fma(a3, x, F(-35.37440189777934f));
auto const a1 = math::fma(a2, x, F(19.735148107154085f));
auto const a0 = math::fma(a1, x, F(-4.799014901129094f));
return a0;
}
inline static float log_remez_fma_ec_T9_0_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_fma_ec_T9_0<cr::simd::float1x4>(x)[0];
#else
return log_remez_fma_ec_T9_0<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_pade_fma_ec_T9_9(in_t(F) x) {
using math = ApproxContext;
auto const a9 = F(8.973410717619212e-05f);
auto const b9 = F(1.3825415405666853e-05f);
auto const a8 = math::fma(a9, x, F(0.010013934421544494f));
auto const b8 = math::fma(b9, x, F(0.002418756004720412f));
auto const a7 = math::fma(a8, x, F(0.19959502002765261f));
auto const b7 = math::fma(b8, x, F(0.07280529171514473f));
auto const a6 = math::fma(a7, x, F(1.026474625102362f));
auto const b6 = math::fma(b7, x, F(0.6351567060368437f));
auto const a5 = math::fma(a6, x, F(1.1023569329786886f));
auto const b5 = math::fma(b6, x, F(1.8990371190205964f));
auto const a4 = math::fma(a5, x, F(-0.9270784136345677f));
auto const b4 = math::fma(b5, x, F(2.026113599836724f));
auto const a3 = math::fma(a4, x, F(-1.1663928183951786f));
auto const b3 = math::fma(b4, x, F(0.7410597620744422f));
auto const a2 = math::fma(a3, x, F(-0.23536751317439703f));
auto const b2 = math::fma(b3, x, F(0.08210478977342642f));
auto const a1 = math::fma(a2, x, F(-0.009640052062091198f));
auto const b1 = math::fma(b2, x, F(0.0021321950479196955f));
auto const a0 = math::fma(a1, x, F(-5.1350264321976986e-05f));
auto const b0 = math::fma(b1, x, F(7.155942960993191e-06f));
return a0 / b0;
}
inline static float log_remez_pade_fma_ec_T9_9_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_pade_fma_ec_T9_9<cr::simd::float1x4>(x)[0];
#else
return log_remez_pade_fma_ec_T9_9<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_fma_T9_0(in_t(F) x) {
using math = ApproxContext;
auto const a9 = F(7.066573839931999e-05f);
auto const a8 = math::fma(a9, x, F(-0.003235241312047335f));
auto const a7 = math::fma(a8, x, F(0.06200169666667839f));
auto const a6 = math::fma(a7, x, F(-0.6451270273216546f));
auto const a5 = math::fma(a6, x, F(3.9535561433258133f));
auto const a4 = math::fma(a5, x, F(-14.485869378579993f));
auto const a3 = math::fma(a4, x, F(30.818723222226733f));
auto const a2 = math::fma(a3, x, F(-35.37440189802665f));
auto const a1 = math::fma(a2, x, F(19.735148107292055f));
auto const a0 = math::fma(a1, x, F(-4.336937614041896f));
return a0;
}
inline static float log_remez_fma_T9_0_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_fma_T9_0<cr::simd::float1x4>(x)[0];
#else
return log_remez_fma_T9_0<float>(x);
#endif
}
template <class F>
inline constexpr static F log_remez_pade_fma_T9_9(in_t(F) x) {
using math = ApproxContext;
auto const a9 = F(8.973410776068673e-05f);
auto const b9 = F(1.3825415405666853e-05f);
auto const a8 = math::fma(a9, x, F(0.01001393448677154f));
auto const b8 = math::fma(b9, x, F(0.002418756004720412f));
auto const a7 = math::fma(a8, x, F(0.19959502132774037f));
auto const b7 = math::fma(b8, x, F(0.07280529171514473f));
auto const a6 = math::fma(a7, x, F(1.0264746317884361f));
auto const b6 = math::fma(b7, x, F(0.6351567060368437f));
auto const a5 = math::fma(a6, x, F(1.1023569401590319f));
auto const b5 = math::fma(b6, x, F(1.8990371190205964f));
auto const a4 = math::fma(a5, x, F(-0.9270784196732118f));
auto const b4 = math::fma(b5, x, F(2.026113599836724f));
auto const a3 = math::fma(a4, x, F(-1.1663928259926277f));
auto const b3 = math::fma(b4, x, F(0.7410597620744422f));
auto const a2 = math::fma(a3, x, F(-0.2353675147074935f));
auto const b2 = math::fma(b3, x, F(0.08210478977342642f));
auto const a1 = math::fma(a2, x, F(-0.009640052124882913f));
auto const b1 = math::fma(b2, x, F(0.0021321950479196955f));
auto const a0 = math::fma(a1, x, F(-5.136526115462191e-05f));
auto const b0 = math::fma(b1, x, F(7.155942960993191e-06f));
return a0 / b0;
}
inline static float log_remez_pade_fma_T9_9_float_simd(float x) {
#ifdef ARCH_x86_64
return log_remez_pade_fma_T9_9<cr::simd::float1x4>(x)[0];
#else
return log_remez_pade_fma_T9_9<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_ec_T9_9(in_t(F) x) {
using math = ApproxContext;
x = x - F(1.0f);
auto const a9 = F(0.00011637175349806651f);
auto const b9 = F(2.0567667626491154e-05f);
auto const a8 = math::fma(a9, x, F(0.006771239594407767f));
auto const b8 = math::fma(b9, x, F(0.001851090086384204f));
auto const a7 = math::fma(a8, x, F(0.10824287065237047f));
auto const b7 = math::fma(b8, x, F(0.04072398190045249f));
auto const a6 = math::fma(a7, x, F(0.7568705234468329f));
auto const b6 = math::fma(b7, x, F(0.38009049773755654f));
auto const a5 = math::fma(a6, x, F(2.7632636921436506f));
auto const b5 = math::fma(b6, x, F(1.8529411764705883f));
auto const a4 = math::fma(a5, x, F(5.661822892364586f));
auto const b4 = math::fma(b5, x, F(5.188235294117647f));
auto const a3 = math::fma(a4, x, F(6.553988923888702f));
auto const b3 = math::fma(b4, x, F(8.647058823529411f));
auto const a2 = math::fma(a3, x, F(4.000041108371863f));
auto const b2 = math::fma(b3, x, F(8.470588235294118f));
auto const a1 = math::fma(a2, x, F(1.0000102770929657f));
auto const b1 = math::fma(b2, x, F(4.5f));
auto const a0 = math::fma(a1, x, F(-4.78058359495769e-06f));
auto const b0 = math::fma(b1, x, F(1.0f));
return a0 / b0;
}
inline static float log_fma_ec_T9_9_float_simd(float x) {
#ifdef ARCH_x86_64
return log_fma_ec_T9_9<cr::simd::float1x4>(x)[0];
#else
return log_fma_ec_T9_9<float>(x);
#endif
}
template <class F>
inline constexpr static F log_fma_T9_9(in_t(F) x) {
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
inline static float log_fma_T9_9_float_simd(float x) {
#ifdef ARCH_x86_64
return log_fma_T9_9<cr::simd::float1x4>(x)[0];
#else
return log_fma_T9_9<float>(x);
#endif
}
