template <class F>
inline constexpr static F tanh_remez_fma_ec_T3_0(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a3 = F(0.006986384352070976f);
auto const a2 = math::fma(a3, x, F(-0.12268219080056031f));
auto const a1 = math::fma(a2, x, F(0.6281834723862749f));
auto const a0 = (a1 * x);
return math::setSign(a0, x0);
}
inline static float tanh_remez_fma_ec_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_fma_ec_T3_0<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_fma_ec_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_pade_fma_ec_T3_3(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a3 = F(1.465576213294377f);
auto const b3 = F(1.4617370754582704f);
auto const a2 = math::fma(a3, x, F(-0.6861409760168042f));
auto const b2 = math::fma(b3, x, F(-0.6009843537749723f));
auto const a1 = math::fma(a2, x, F(1.805494855928226f));
auto const b1 = math::fma(b2, x, F(1.207793782745338f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(1.3004921768874862f));
return math::setSign(a0 / b0, x0);
}
inline static float tanh_remez_pade_fma_ec_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_pade_fma_ec_T3_3<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_pade_fma_ec_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_ec_T3_3(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-10.0f), F(10.0f));
auto const x2 = x * x;
auto const a2 = F(0.03565217376607426f);
auto const b1 = F(0.4f);
auto const a1 = math::fma(a2, x2, F(0.534782606491114f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tanh_fma_ec_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_fma_ec_T3_3<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_ec_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_fma_T3_0(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a3 = F(0.0069863843520709765f);
auto const a2 = math::fma(a3, x, F(-0.12268219080056032f));
auto const a1 = math::fma(a2, x, F(0.6281834723862749f));
auto const a0 = math::fma(a1, x, F(0.12470616218613542f));
return math::setSign(a0, x0);
}
inline static float tanh_remez_fma_T3_0_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_fma_T3_0<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_fma_T3_0<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_pade_fma_T3_3(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a3 = F(1.4357627202293075f);
auto const b3 = F(1.4617370754582704f);
auto const a2 = math::fma(a3, x, F(-0.6721831490238602f));
auto const b2 = math::fma(b3, x, F(-0.6009843537749723f));
auto const a1 = math::fma(a2, x, F(1.7687665658004559f));
auto const b1 = math::fma(b2, x, F(1.207793782745338f));
auto const a0 = math::fma(a1, x, F(-0.026517120463039928f));
auto const b0 = math::fma(b1, x, F(1.3004921768874862f));
return math::setSign(a0 / b0, x0);
}
inline static float tanh_remez_pade_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_pade_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_pade_fma_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_T3_3(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-10.0f), F(10.0f));
auto const x2 = x * x;
auto const a2 = F(0.06666666666666667f);
auto const b1 = F(0.4f);
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tanh_fma_T3_3_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_fma_T3_3<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_T3_3<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_fma_ec_T4_0(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a4 = F(-0.0016651069323302136f);
auto const a3 = math::fma(a4, x, F(0.03902960274165389f));
auto const a2 = math::fma(a3, x, F(-0.31480900374375054f));
auto const a1 = math::fma(a2, x, F(1.0102366951900994f));
auto const a0 = (a1 * x);
return math::setSign(a0, x0);
}
inline static float tanh_remez_fma_ec_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_fma_ec_T4_0<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_fma_ec_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_pade_fma_ec_T4_4(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a4 = F(0.05343872791191864f);
auto const b4 = F(0.053962687932549415f);
auto const a3 = math::fma(a4, x, F(0.11520755416341395f));
auto const b3 = math::fma(b4, x, F(0.10192814216497043f));
auto const a2 = math::fma(a3, x, F(0.28578721797722256f));
auto const b2 = math::fma(b3, x, F(0.40852341855387175f));
auto const a1 = math::fma(a2, x, F(0.7737174252170003f));
auto const b1 = math::fma(b2, x, F(0.2727866531427323f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.7755022827483581f));
return math::setSign(a0 / b0, x0);
}
inline static float tanh_remez_pade_fma_ec_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_pade_fma_ec_T4_4<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_pade_fma_ec_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_ec_T4_4(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-10.0f), F(10.0f));
auto const x2 = x * x;
auto const a2 = F(0.12587804300619437f);
auto const b2 = F(0.009523809523809525f);
auto const a1 = math::fma(a2, x2, F(1.321719451565041f));
auto const b1 = math::fma(b2, x2, F(0.42857142857142855f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float tanh_fma_ec_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_fma_ec_T4_4<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_ec_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_fma_T4_0(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a4 = F(-0.001482331824077813f);
auto const a3 = math::fma(a4, x, F(0.034745409499979674f));
auto const a2 = math::fma(a3, x, F(-0.28025311509726475f));
auto const a1 = math::fma(a2, x, F(0.8993452456748918f));
auto const a0 = math::fma(a1, x, F(0.05488389482685466f));
return math::setSign(a0, x0);
}
inline static float tanh_remez_fma_T4_0_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_fma_T4_0<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_fma_T4_0<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_pade_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a4 = F(0.053438724341774775f);
auto const b4 = F(0.053962687932549415f);
auto const a3 = math::fma(a4, x, F(0.11520754646660755f));
auto const b3 = math::fma(b4, x, F(0.10192814216497043f));
auto const a2 = math::fma(a3, x, F(0.2857871988843002f));
auto const b2 = math::fma(b3, x, F(0.40852341855387175f));
auto const a1 = math::fma(a2, x, F(0.7737173735263514f));
auto const b1 = math::fma(b2, x, F(0.2727866531427323f));
auto const a0 = math::fma(a1, x, F(2.2912221925831455e-05f));
auto const b0 = math::fma(b1, x, F(0.7755022827483581f));
return math::setSign(a0 / b0, x0);
}
inline static float tanh_remez_pade_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_pade_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_pade_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_T4_4(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-10.0f), F(10.0f));
auto const x2 = x * x;
auto const a2 = F(0.09523809523809523f);
auto const b2 = F(0.009523809523809525f);
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(0.42857142857142855f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float tanh_fma_T4_4_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_fma_T4_4<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_T4_4<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_fma_ec_T5_0(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a5 = F(0.000263545866694209f);
auto const a4 = math::fma(a5, x, F(-0.007816740824627149f));
auto const a3 = math::fma(a4, x, F(0.08741954608956093f));
auto const a2 = math::fma(a3, x, F(-0.45609385063876756f));
auto const a1 = math::fma(a2, x, F(1.1002660547044116f));
auto const a0 = (a1 * x);
return math::setSign(a0, x0);
}
inline static float tanh_remez_fma_ec_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_fma_ec_T5_0<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_fma_ec_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_pade_fma_ec_T5_5(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a5 = F(0.024598752731126553f);
auto const b5 = F(0.02457806135066179f);
auto const a4 = math::fma(a5, x, F(0.014977691242796874f));
auto const b4 = math::fma(b5, x, F(0.0158246864851303f));
auto const a3 = math::fma(a4, x, F(0.20102264773980444f));
auto const b3 = math::fma(b4, x, F(0.18714530960464024f));
auto const a2 = math::fma(a3, x, F(0.30087255060643225f));
auto const b2 = math::fma(b3, x, F(0.41490227228744814f));
auto const a1 = math::fma(a2, x, F(0.7887859869817057f));
auto const b1 = math::fma(b2, x, F(0.31748085966075057f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.7866146064243521f));
return math::setSign(a0 / b0, x0);
}
inline static float tanh_remez_pade_fma_ec_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_pade_fma_ec_T5_5<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_pade_fma_ec_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_ec_T5_5(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-10.0f), F(10.0f));
auto const x2 = x * x;
auto const a3 = F(0.0009520848791463405f);
auto const b2 = F(0.015873015873015872f);
auto const a2 = math::fma(a3, x2, F(0.09996891231036575f));
auto const b1 = math::fma(b2, x2, F(0.4444444444444444f));
auto const a1 = math::fma(a2, x2, F(0.8997202107932918f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tanh_fma_ec_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_fma_ec_T5_5<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_ec_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_fma_T5_0(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a5 = F(0.00026354586669420757f);
auto const a4 = math::fma(a5, x, F(-0.007816740824627107f));
auto const a3 = math::fma(a4, x, F(0.08741954608956046f));
auto const a2 = math::fma(a3, x, F(-0.4560938506387651f));
auto const a1 = math::fma(a2, x, F(1.1002660547044056f));
auto const a0 = math::fma(a1, x, F(0.018778061354114986f));
return math::setSign(a0, x0);
}
inline static float tanh_remez_fma_T5_0_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_fma_T5_0<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_fma_T5_0<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_pade_fma_T5_5(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a5 = F(0.02459763413588991f);
auto const b5 = F(0.02457806135066179f);
auto const a4 = math::fma(a5, x, F(0.014977010152407324f));
auto const b4 = math::fma(b5, x, F(0.0158246864851303f));
auto const a3 = math::fma(a4, x, F(0.20101350650493466f));
auto const b3 = math::fma(b4, x, F(0.18714530960464024f));
auto const a2 = math::fma(a3, x, F(0.3008588688313592f));
auto const b2 = math::fma(b3, x, F(0.41490227228744814f));
auto const a1 = math::fma(a2, x, F(0.7887501179985336f));
auto const b1 = math::fma(b2, x, F(0.31748085966075057f));
auto const a0 = math::fma(a1, x, F(-3.580526793024572e-05f));
auto const b0 = math::fma(b1, x, F(0.7866146064243521f));
return math::setSign(a0 / b0, x0);
}
inline static float tanh_remez_pade_fma_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_pade_fma_T5_5<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_pade_fma_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_T5_5(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-10.0f), F(10.0f));
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
inline static float tanh_fma_T5_5_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_fma_T5_5<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_T5_5<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_fma_ec_T6_0(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a6 = F(-3.927357151475244e-05f);
auto const a5 = math::fma(a6, x, F(0.0014288377948692632f));
auto const a4 = math::fma(a5, x, F(-0.02078840938252461f));
auto const a3 = math::fma(a4, x, F(0.15417984416987388f));
auto const a2 = math::fma(a3, x, F(-0.6130740938955428f));
auto const a1 = math::fma(a2, x, F(1.2401451068630296f));
auto const a0 = (a1 * x);
return math::setSign(a0, x0);
}
inline static float tanh_remez_fma_ec_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_fma_ec_T6_0<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_fma_ec_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_pade_fma_ec_T6_6(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a6 = F(0.002693824806176263f);
auto const b6 = F(0.0026953688231001233f);
auto const a5 = math::fma(a6, x, F(0.005670493225994192f));
auto const b5 = math::fma(b6, x, F(0.005590151294103836f));
auto const a4 = math::fma(a5, x, F(0.045555486123335105f));
auto const b4 = math::fma(b5, x, F(0.04731101308773901f));
auto const a3 = math::fma(a4, x, F(0.14923949339281267f));
auto const b3 = math::fma(b4, x, F(0.12857397231782977f));
auto const a2 = math::fma(a3, x, F(0.27320604511932967f));
auto const b2 = math::fma(b3, x, F(0.4117808549590379f));
auto const a1 = math::fma(a2, x, F(0.7754219160777925f));
auto const b1 = math::fma(b2, x, F(0.2721656313133142f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.7755256398553602f));
return math::setSign(a0 / b0, x0);
}
inline static float tanh_remez_pade_fma_ec_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_pade_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_pade_fma_ec_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_ec_T6_6(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-10.0f), F(10.0f));
auto const x2 = x * x;
auto const a3 = F(0.0020895716414306644f);
auto const b3 = F(9.62000962000962e-05f);
auto const a2 = math::fma(a3, x2, F(0.12537429848583986f));
auto const b2 = math::fma(b3, x2, F(0.020202020202020204f));
auto const a1 = math::fma(a2, x2, F(1.0343379625081788f));
auto const b1 = math::fma(b2, x2, F(0.45454545454545453f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float tanh_fma_ec_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_fma_ec_T6_6<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_ec_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_fma_T6_0(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a6 = F(-3.890096279867989e-05f);
auto const a5 = math::fma(a6, x, F(0.0014152816705931151f));
auto const a4 = math::fma(a5, x, F(-0.020591178974633046f));
auto const a3 = math::fma(a4, x, F(0.15271706012542244f));
auto const a2 = math::fma(a3, x, F(-0.6072575424037093f));
auto const a1 = math::fma(a2, x, F(1.228379207857936f));
auto const a0 = math::fma(a1, x, F(0.004743758972838817f));
return math::setSign(a0, x0);
}
inline static float tanh_remez_fma_T6_0_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_fma_T6_0<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_fma_T6_0<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_pade_fma_T6_6(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a6 = F(0.0026938293095848964f);
auto const b6 = F(0.0026953688231001233f);
auto const a5 = math::fma(a6, x, F(0.005670502705656006f));
auto const b5 = math::fma(b6, x, F(0.005590151294103836f));
auto const a4 = math::fma(a5, x, F(0.04555556228083764f));
auto const b4 = math::fma(b5, x, F(0.04731101308773901f));
auto const a3 = math::fma(a4, x, F(0.14923974288432432f));
auto const b3 = math::fma(b4, x, F(0.12857397231782977f));
auto const a2 = math::fma(a3, x, F(0.27320650185224693f));
auto const b2 = math::fma(b3, x, F(0.4117808549590379f));
auto const a1 = math::fma(a2, x, F(0.7754232123913996f));
auto const b1 = math::fma(b2, x, F(0.2721656313133142f));
auto const a0 = math::fma(a1, x, F(1.2974150396094913e-06f));
auto const b0 = math::fma(b1, x, F(0.7755256398553602f));
return math::setSign(a0 / b0, x0);
}
inline static float tanh_remez_pade_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_pade_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_pade_fma_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_T6_6(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-10.0f), F(10.0f));
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
inline static float tanh_fma_T6_6_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_fma_T6_6<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_T6_6<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_fma_ec_T7_0(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a7 = F(-5.08463817335522e-06f);
auto const a6 = math::fma(a7, x, F(0.00014011666847619725f));
auto const a5 = math::fma(a6, x, F(-0.001060604091759733f));
auto const a4 = math::fma(a5, x, F(-0.0036463936363083905f));
auto const a3 = math::fma(a4, x, F(0.09373245546595614f));
auto const a2 = math::fma(a3, x, F(-0.513364416708358f));
auto const a1 = math::fma(a2, x, F(1.185804499716951f));
auto const a0 = (a1 * x);
return math::setSign(a0, x0);
}
inline static float tanh_remez_fma_ec_T7_0_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_fma_ec_T7_0<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_fma_ec_T7_0<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_pade_fma_ec_T7_7(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a7 = F(0.00022348511061265146f);
auto const b7 = F(0.00022337459787502402f);
auto const a6 = math::fma(a7, x, F(0.0010235375885528628f));
auto const b6 = math::fma(b7, x, F(0.0010305612819325699f));
auto const a5 = math::fma(a6, x, F(0.008375774680275635f));
auto const b5 = math::fma(b6, x, F(0.008182115747174054f));
auto const a4 = math::fma(a5, x, F(0.03523505079563988f));
auto const b4 = math::fma(b5, x, F(0.0382441938045312f));
auto const a3 = math::fma(a4, x, F(0.14418372587637052f));
auto const b3 = math::fma(b4, x, F(0.11566334846219654f));
auto const a2 = math::fma(a3, x, F(0.2396831317049517f));
auto const b2 = math::fma(b3, x, F(0.40493220346936315f));
auto const a1 = math::fma(a2, x, F(0.7828735866743892f));
auto const b1 = math::fma(b2, x, F(0.2397252109874774f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.7828702751880153f));
return math::setSign(a0 / b0, x0);
}
inline static float tanh_remez_pade_fma_ec_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_pade_fma_ec_T7_7<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_pade_fma_ec_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_ec_T7_7(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-10.0f), F(10.0f));
auto const x2 = x * x;
auto const a4 = F(7.332747427391097e-06f);
auto const b3 = F(0.0002072002072002072f);
auto const a3 = math::fma(a4, x2, F(0.0027717785275538343f));
auto const b2 = math::fma(b3, x2, F(0.023310023310023312f));
auto const a2 = math::fma(a3, x2, F(0.12703984917955075f));
auto const b1 = math::fma(b2, x2, F(0.46153846153846156f));
auto const a1 = math::fma(a2, x2, F(0.9909108236004959f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tanh_fma_ec_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_fma_ec_T7_7<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_ec_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_fma_T7_0(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a7 = F(-5.084638173355203e-06f);
auto const a6 = math::fma(a7, x, F(0.00014011666847619679f));
auto const a5 = math::fma(a6, x, F(-0.0010606040917597295f));
auto const a4 = math::fma(a5, x, F(-0.0036463936363083788f));
auto const a3 = math::fma(a4, x, F(0.09373245546595584f));
auto const a2 = math::fma(a3, x, F(-0.5133644167083563f));
auto const a1 = math::fma(a2, x, F(1.1858044997169472f));
auto const a0 = math::fma(a1, x, F(-0.010473013673929363f));
return math::setSign(a0, x0);
}
inline static float tanh_remez_fma_T7_0_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_fma_T7_0<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_fma_T7_0<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_pade_fma_T7_7(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a7 = F(0.00022348510238467294f);
auto const b7 = F(0.00022337459787502402f);
auto const a6 = math::fma(a7, x, F(0.0010235375508696129f));
auto const b6 = math::fma(b7, x, F(0.0010305612819325699f));
auto const a5 = math::fma(a6, x, F(0.008375774371907467f));
auto const b5 = math::fma(b6, x, F(0.008182115747174054f));
auto const a4 = math::fma(a5, x, F(0.03523504949840249f));
auto const b4 = math::fma(b5, x, F(0.0382441938045312f));
auto const a3 = math::fma(a4, x, F(0.14418372056800524f));
auto const b3 = math::fma(b4, x, F(0.11566334846219654f));
auto const a2 = math::fma(a3, x, F(0.2396831228806159f));
auto const b2 = math::fma(b3, x, F(0.40493220346936315f));
auto const a1 = math::fma(a2, x, F(0.7828735578515873f));
auto const b1 = math::fma(b2, x, F(0.2397252109874774f));
auto const a0 = math::fma(a1, x, F(-3.444108369663584e-08f));
auto const b0 = math::fma(b1, x, F(0.7828702751880153f));
return math::setSign(a0 / b0, x0);
}
inline static float tanh_remez_pade_fma_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_pade_fma_T7_7<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_pade_fma_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_T7_7(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-10.0f), F(10.0f));
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
inline static float tanh_fma_T7_7_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_fma_T7_7<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_T7_7<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_fma_ec_T8_0(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a8 = F(2.7991648411173844e-06f);
auto const a7 = math::fma(a8, x, F(-0.00011093882426637292f));
auto const a6 = math::fma(a7, x, F(0.0017497957406680256f));
auto const a5 = math::fma(a6, x, F(-0.013644039772770242f));
auto const a4 = math::fma(a5, x, F(0.05000795766651026f));
auto const a3 = math::fma(a4, x, F(-0.02856559142350981f));
auto const a2 = math::fma(a3, x, F(-0.37611384315788426f));
auto const a1 = math::fma(a2, x, F(1.1177394231062496f));
auto const a0 = (a1 * x);
return math::setSign(a0, x0);
}
inline static float tanh_remez_fma_ec_T8_0_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_fma_ec_T8_0<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_fma_ec_T8_0<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_pade_fma_ec_T8_8(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a8 = F(9.36009341396424e-06f);
auto const b8 = F(9.370123221227415e-06f);
auto const a7 = math::fma(a8, x, F(0.0001020944212265133f));
auto const b7 = math::fma(b8, x, F(0.0001013711869510957f));
auto const a6 = math::fma(a7, x, F(0.0009278767495268466f));
auto const b6 = math::fma(b7, x, F(0.0009510811407919524f));
auto const a5 = math::fma(a6, x, F(0.006348664297260432f));
auto const b5 = math::fma(b6, x, F(0.005915017780456707f));
auto const a4 = math::fma(a5, x, F(0.027872806862167723f));
auto const b4 = math::fma(b5, x, F(0.03304711402910718f));
auto const a3 = math::fma(a4, x, F(0.13269478258110154f));
auto const b3 = math::fma(b4, x, F(0.09224474164765278f));
auto const a2 = math::fma(a3, x, F(0.19312860820155944f));
auto const b2 = math::fma(b3, x, F(0.3958272963382632f));
auto const a1 = math::fma(a2, x, F(0.7893938984720705f));
auto const b1 = math::fma(b2, x, F(0.19312842865977545f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.7893939090703874f));
return math::setSign(a0 / b0, x0);
}
inline static float tanh_remez_pade_fma_ec_T8_8_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_pade_fma_ec_T8_8<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_pade_fma_ec_T8_8<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_ec_T8_8(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-10.0f), F(10.0f));
auto const x2 = x * x;
auto const a4 = F(1.7797443803422566e-05f);
auto const b4 = F(4.9333382666716e-07f);
auto const a3 = math::fma(a4, x2, F(0.003426007932158844f));
auto const b3 = math::fma(b4, x2, F(0.0003108003108003108f));
auto const a2 = math::fma(a3, x2, F(0.13361430935419494f));
auto const b2 = math::fma(b3, x2, F(0.02564102564102564f));
auto const a1 = math::fma(a2, x2, F(1.0021073201564619f));
auto const b1 = math::fma(b2, x2, F(0.4666666666666667f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float tanh_fma_ec_T8_8_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_fma_ec_T8_8<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_ec_T8_8<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_fma_T8_0(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a8 = F(2.8395753107250753e-06f);
auto const a7 = math::fma(a8, x, F(-0.00011254040553821385f));
auto const a6 = math::fma(a7, x, F(0.001775056870902037f));
auto const a5 = math::fma(a6, x, F(-0.013841013543826742f));
auto const a4 = math::fma(a5, x, F(0.05072990337822423f));
auto const a3 = math::fma(a4, x, F(-0.028977981914805297f));
auto const a2 = math::fma(a3, x, F(-0.38154365450900724f));
auto const a1 = math::fma(a2, x, F(1.133875798614854f));
auto const a0 = math::fma(a1, x, F(-0.007218308269501942f));
return math::setSign(a0, x0);
}
inline static float tanh_remez_fma_T8_0_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_fma_T8_0<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_fma_T8_0<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_pade_fma_T8_8(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a8 = F(9.360093416804755e-06f);
auto const b8 = F(9.370123221227415e-06f);
auto const a7 = math::fma(a8, x, F(0.00010209442125749597f));
auto const b7 = math::fma(b8, x, F(0.0001013711869510957f));
auto const a6 = math::fma(a7, x, F(0.0009278767498084301f));
auto const b6 = math::fma(b7, x, F(0.0009510811407919524f));
auto const a5 = math::fma(a6, x, F(0.006348664299187066f));
auto const b5 = math::fma(b6, x, F(0.005915017780456707f));
auto const a4 = math::fma(a5, x, F(0.027872806870626304f));
auto const b4 = math::fma(b5, x, F(0.03304711402910718f));
auto const a3 = math::fma(a4, x, F(0.13269478262137052f));
auto const b3 = math::fma(b4, x, F(0.09224474164765278f));
auto const a2 = math::fma(a3, x, F(0.19312860826016834f));
auto const b2 = math::fma(b3, x, F(0.3958272963382632f));
auto const a1 = math::fma(a2, x, F(0.7893938987116285f));
auto const b1 = math::fma(b2, x, F(0.19312842865977545f));
auto const a0 = math::fma(a1, x, F(3.614269172004481e-11f));
auto const b0 = math::fma(b1, x, F(0.7893939090703874f));
return math::setSign(a0 / b0, x0);
}
inline static float tanh_remez_pade_fma_T8_8_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_pade_fma_T8_8<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_pade_fma_T8_8<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_T8_8(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-10.0f), F(10.0f));
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
inline static float tanh_fma_T8_8_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_fma_T8_8<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_T8_8<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_fma_ec_T9_0(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a9 = F(-8.530114415298893e-07f);
auto const a8 = math::fma(a9, x, F(3.985616799822416e-05f));
auto const a7 = math::fma(a8, x, F(-0.000778043436945658f));
auto const a6 = math::fma(a7, x, F(0.008181554004012215f));
auto const a5 = math::fma(a6, x, F(-0.04946506630109461f));
auto const a4 = math::fma(a5, x, F(0.1657821167921792f));
auto const a3 = math::fma(a4, x, F(-0.2347321608197157f));
auto const a2 = math::fma(a3, x, F(-0.20043887042144412f));
auto const a1 = math::fma(a2, x, F(1.0736517197245516f));
auto const a0 = (a1 * x);
return math::setSign(a0, x0);
}
inline static float tanh_remez_fma_ec_T9_0_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_fma_ec_T9_0<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_fma_ec_T9_0<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_pade_fma_ec_T9_9(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a9 = F(8.390937920572221e-07f);
auto const b9 = F(8.386806489278081e-07f);
auto const a8 = math::fma(a9, x, F(1.128325317482137e-05f));
auto const b8 = math::fma(b9, x, F(1.1320012510507168e-05f));
auto const a7 = math::fma(a8, x, F(0.00012701547677285938f));
auto const b7 = math::fma(b8, x, F(0.00012553633170796192f));
auto const a6 = math::fma(a7, x, F(0.0009991657664171017f));
auto const b6 = math::fma(b7, x, F(0.00103455064572169f));
auto const a5 = math::fma(a6, x, F(0.0066489275518092795f));
auto const b5 = math::fma(b6, x, F(0.006093465995650051f));
auto const a4 = math::fma(a5, x, F(0.02782317965751745f));
auto const b4 = math::fma(b5, x, F(0.033765357021296294f));
auto const a3 = math::fma(a4, x, F(0.13392636374160255f));
auto const b3 = math::fma(b4, x, F(0.09054791196420812f));
auto const a2 = math::fma(a3, x, F(0.18817302940125288f));
auto const b2 = math::fma(b3, x, F(0.39679725930917564f));
auto const a1 = math::fma(a2, x, F(0.7886129696547883f));
auto const b1 = math::fma(b2, x, F(0.188173041259211f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.7886129690697172f));
return math::setSign(a0 / b0, x0);
}
inline static float tanh_remez_pade_fma_ec_T9_9_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_pade_fma_ec_T9_9<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_pade_fma_ec_T9_9<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_ec_T9_9(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-10.0f), F(10.0f));
auto const x2 = x * x;
auto const a5 = F(2.900754204553186e-08f);
auto const b4 = F(1.3058836588248353e-06f);
auto const a4 = math::fma(a5, x2, F(2.871746662507654e-05f));
auto const b3 = math::fma(b4, x2, F(0.00040221216691804925f));
auto const a3 = math::fma(a4, x2, F(0.003919934194322947f));
auto const b2 = math::fma(b3, x2, F(0.027450980392156862f));
auto const a2 = math::fma(a3, x2, F(0.13719769680130317f));
auto const b1 = math::fma(b2, x2, F(0.47058823529411764f));
auto const a1 = math::fma(a2, x2, F(0.9995832195523516f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tanh_fma_ec_T9_9_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_fma_ec_T9_9<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_ec_T9_9<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_fma_T9_0(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a9 = F(-8.530114415301082e-07f);
auto const a8 = math::fma(a9, x, F(3.985616799823438e-05f));
auto const a7 = math::fma(a8, x, F(-0.0007780434369458576f));
auto const a6 = math::fma(a7, x, F(0.008181554004014314f));
auto const a5 = math::fma(a6, x, F(-0.0494650663011073f));
auto const a4 = math::fma(a5, x, F(0.1657821167922217f));
auto const a3 = math::fma(a4, x, F(-0.23473216081977594f));
auto const a2 = math::fma(a3, x, F(-0.20043887042149555f));
auto const a1 = math::fma(a2, x, F(1.073651719724827f));
auto const a0 = math::fma(a1, x, F(-0.003951988884169025f));
return math::setSign(a0, x0);
}
inline static float tanh_remez_fma_T9_0_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_fma_T9_0<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_fma_T9_0<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_pade_fma_T9_9(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a9 = F(8.390937920551584e-07f);
auto const b9 = F(8.386806489278081e-07f);
auto const a8 = math::fma(a9, x, F(1.128325317479362e-05f));
auto const b8 = math::fma(b9, x, F(1.1320012510507168e-05f));
auto const a7 = math::fma(a8, x, F(0.000127015476772547f));
auto const b7 = math::fma(b8, x, F(0.00012553633170796192f));
auto const a6 = math::fma(a7, x, F(0.0009991657664146442f));
auto const b6 = math::fma(b7, x, F(0.00103455064572169f));
auto const a5 = math::fma(a6, x, F(0.006648927551792927f));
auto const b5 = math::fma(b6, x, F(0.006093465995650051f));
auto const a4 = math::fma(a5, x, F(0.02782317965744902f));
auto const b4 = math::fma(b5, x, F(0.033765357021296294f));
auto const a3 = math::fma(a4, x, F(0.13392636374127317f));
auto const b3 = math::fma(b4, x, F(0.09054791196420812f));
auto const a2 = math::fma(a3, x, F(0.1881730294007901f));
auto const b2 = math::fma(b3, x, F(0.39679725930917564f));
auto const a1 = math::fma(a2, x, F(0.7886129696528488f));
auto const b1 = math::fma(b2, x, F(0.188173041259211f));
auto const a0 = math::fma(a1, x, F(-4.089596887121745e-12f));
auto const b0 = math::fma(b1, x, F(0.7886129690697172f));
return math::setSign(a0 / b0, x0);
}
inline static float tanh_remez_pade_fma_T9_9_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_pade_fma_T9_9<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_pade_fma_T9_9<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_T9_9(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-10.0f), F(10.0f));
auto const x2 = x * x;
auto const a5 = F(2.901963686277412e-08f);
auto const b4 = F(1.3058836588248353e-06f);
auto const a4 = math::fma(a5, x2, F(2.8729440494146376e-05f));
auto const b3 = math::fma(b4, x2, F(0.00040221216691804925f));
auto const a3 = math::fma(a4, x2, F(0.00392156862745098f));
auto const b2 = math::fma(b3, x2, F(0.027450980392156862f));
auto const a2 = math::fma(a3, x2, F(0.13725490196078433f));
auto const b1 = math::fma(b2, x2, F(0.47058823529411764f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tanh_fma_T9_9_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_fma_T9_9<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_T9_9<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_fma_ec_T10_0(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a10 = F(1.9104132024264177e-07f);
auto const a9 = math::fma(a10, x, F(-1.0165455224960551e-05f));
auto const a8 = math::fma(a9, x, F(0.00023213829315860154f));
auto const a7 = math::fma(a8, x, F(-0.0029673241468614097f));
auto const a6 = math::fma(a7, x, F(0.023172582906346457f));
auto const a5 = math::fma(a6, x, F(-0.11263247586605014f));
auto const a4 = math::fma(a5, x, F(0.326742148396979f));
auto const a3 = math::fma(a4, x, F(-0.4687366069276831f));
auto const a2 = math::fma(a3, x, F(-0.027806718908935678f));
auto const a1 = math::fma(a2, x, F(1.0214650391299824f));
auto const a0 = (a1 * x);
return math::setSign(a0, x0);
}
inline static float tanh_remez_fma_ec_T10_0_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_fma_ec_T10_0<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_fma_ec_T10_0<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_pade_fma_ec_T10_10(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a10 = F(5.7108853867382624e-08f);
auto const b10 = F(5.712711578016419e-08f);
auto const a9 = math::fma(a10, x, F(9.817349925636985e-07f));
auto const b9 = math::fma(b10, x, F(9.798175627819517e-07f));
auto const a8 = math::fma(a9, x, F(1.3232247076293722e-05f));
auto const b8 = math::fma(b9, x, F(1.3324567569315043e-05f));
auto const a7 = math::fma(a8, x, F(0.00013254295777330962f));
auto const b7 = math::fma(b8, x, F(0.0001298554489987583f));
auto const a6 = math::fma(a7, x, F(0.0009938923030566084f));
auto const b6 = math::fma(b7, x, F(0.0010463347961579817f));
auto const a5 = math::fma(a6, x, F(0.006617030296089065f));
auto const b5 = math::fma(b6, x, F(0.005899515455760391f));
auto const a4 = math::fma(a5, x, F(0.026534819127228933f));
auto const b4 = math::fma(b5, x, F(0.033512346842548765f));
auto const a3 = math::fma(a4, x, F(0.13328340545753198f));
auto const b3 = math::fma(b4, x, F(0.08562203403439733f));
auto const a2 = math::fma(a3, x, F(0.17726175391512267f));
auto const b2 = math::fma(b3, x, F(0.39627213539752887f));
auto const a1 = math::fma(a2, x, F(0.7889661650804763f));
auto const b1 = math::fma(b2, x, F(0.17726175297215985f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.7889661651164095f));
return math::setSign(a0 / b0, x0);
}
inline static float tanh_remez_pade_fma_ec_T10_10_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_pade_fma_ec_T10_10<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_pade_fma_ec_T10_10<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_ec_T10_10(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-10.0f), F(10.0f));
auto const x2 = x * x;
auto const a5 = F(8.40102125214124e-08f);
auto const b5 = F(1.5273493085670588e-09f);
auto const a4 = math::fma(a5, x2, F(3.9316779460021004e-05f));
auto const b4 = math::fma(b5, x2, F(2.2681137232220826e-06f));
auto const a3 = math::fma(a4, x2, F(0.004334674935467316f));
auto const b3 = math::fma(b4, x2, F(0.00048159614723082214f));
auto const a2 = math::fma(a3, x2, F(0.14036090267227497f));
auto const b2 = math::fma(b3, x2, F(0.02889576883384933f));
auto const a1 = math::fma(a2, x2, F(1.0000714315399593f));
auto const b1 = math::fma(b2, x2, F(0.47368421052631576f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float tanh_fma_ec_T10_10_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_fma_ec_T10_10<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_ec_T10_10<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_fma_T10_0(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a10 = F(1.9169273819026633e-07f);
auto const a9 = math::fma(a10, x, F(-1.0200117673748608e-05f));
auto const a8 = math::fma(a9, x, F(0.00023292984469469008f));
auto const a7 = math::fma(a8, x, F(-0.002977442210342285f));
auto const a6 = math::fma(a7, x, F(0.023251597416813825f));
auto const a5 = math::fma(a6, x, F(-0.11301653317978388f));
auto const a4 = math::fma(a5, x, F(0.32785628276037676f));
auto const a3 = math::fma(a4, x, F(-0.4703349179007936f));
auto const a2 = math::fma(a3, x, F(-0.027901535023788872f));
auto const a1 = math::fma(a2, x, F(1.0249480587118989f));
auto const a0 = math::fma(a1, x, F(-0.0017049137413621249f));
return math::setSign(a0, x0);
}
inline static float tanh_remez_fma_T10_0_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_fma_T10_0<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_fma_T10_0<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_pade_fma_T10_10(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a10 = F(5.710885386739007e-08f);
auto const b10 = F(5.712711578016419e-08f);
auto const a9 = math::fma(a10, x, F(9.817349925638264e-07f));
auto const b9 = math::fma(b10, x, F(9.798175627819517e-07f));
auto const a8 = math::fma(a9, x, F(1.3232247076295446e-05f));
auto const b8 = math::fma(b9, x, F(1.3324567569315043e-05f));
auto const a7 = math::fma(a8, x, F(0.00013254295777332688f));
auto const b7 = math::fma(b8, x, F(0.0001298554489987583f));
auto const a6 = math::fma(a7, x, F(0.0009938923030567378f));
auto const b6 = math::fma(b7, x, F(0.0010463347961579817f));
auto const a5 = math::fma(a6, x, F(0.006617030296089927f));
auto const b5 = math::fma(b6, x, F(0.005899515455760391f));
auto const a4 = math::fma(a5, x, F(0.026534819127232392f));
auto const b4 = math::fma(b5, x, F(0.033512346842548765f));
auto const a3 = math::fma(a4, x, F(0.13328340545754935f));
auto const b3 = math::fma(b4, x, F(0.08562203403439733f));
auto const a2 = math::fma(a3, x, F(0.17726175391514576f));
auto const b2 = math::fma(b3, x, F(0.39627213539752887f));
auto const a1 = math::fma(a2, x, F(0.7889661650805792f));
auto const b1 = math::fma(b2, x, F(0.17726175297215985f));
auto const a0 = math::fma(a1, x, F(1.1512068936053648e-13f));
auto const b0 = math::fma(b1, x, F(0.7889661651164095f));
return math::setSign(a0 / b0, x0);
}
inline static float tanh_remez_pade_fma_T10_10_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_pade_fma_T10_10<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_pade_fma_T10_10<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_T10_10(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-10.0f), F(10.0f));
auto const x2 = x * x;
auto const a5 = F(8.400421197118823e-08f);
auto const b5 = F(1.5273493085670588e-09f);
auto const a4 = math::fma(a5, x2, F(3.9313971202516095e-05f));
auto const b4 = math::fma(b5, x2, F(2.2681137232220826e-06f));
auto const a3 = math::fma(a4, x2, F(0.0043343653250774f));
auto const b3 = math::fma(b4, x2, F(0.00048159614723082214f));
auto const a2 = math::fma(a3, x2, F(0.14035087719298245f));
auto const b2 = math::fma(b3, x2, F(0.02889576883384933f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b1 = math::fma(b2, x2, F(0.47368421052631576f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x2, F(1.0f));
return a0 / b0;
}
inline static float tanh_fma_T10_10_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_fma_T10_10<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_T10_10<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_fma_ec_T11_0(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a11 = F(-3.445450206547798e-08f);
auto const a10 = math::fma(a11, x, F(2.059193540718862e-06f));
auto const a9 = math::fma(a10, x, F(-5.385266500204654e-05f));
auto const a8 = math::fma(a9, x, F(0.000808727268534147f));
auto const a7 = math::fma(a8, x, F(-0.007686373552707984f));
auto const a6 = math::fma(a7, x, F(0.04795293326826481f));
auto const a5 = math::fma(a6, x, F(-0.1961232032651448f));
auto const a4 = math::fma(a5, x, F(0.5020504253717247f));
auto const a3 = math::fma(a4, x, F(-0.6834717925686675f));
auto const a2 = math::fma(a3, x, F(0.10623298734496592f));
auto const a1 = math::fma(a2, x, F(0.9919773433326998f));
auto const a0 = (a1 * x);
return math::setSign(a0, x0);
}
inline static float tanh_remez_fma_ec_T11_0_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_fma_ec_T11_0<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_fma_ec_T11_0<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_pade_fma_ec_T11_11(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a11 = F(2.7886554006555174e-09f);
auto const b11 = F(2.7878199157226115e-09f);
auto const a10 = math::fma(a11, x, F(6.531217954746917e-08f));
auto const b10 = math::fma(b11, x, F(6.541300070946486e-08f));
auto const a9 = math::fma(a10, x, F(1.0839302203079584e-06f));
auto const b9 = math::fma(b10, x, F(1.0782891834679096e-06f));
auto const a8 = math::fma(a9, x, F(1.3080285200720989e-05f));
auto const b8 = math::fma(b9, x, F(1.3273646899593561e-05f));
auto const a7 = math::fma(a8, x, F(0.00012860058750900364f));
auto const b7 = math::fma(b8, x, F(0.0001240846584948836f));
auto const a6 = math::fma(a7, x, F(0.0009300011464177604f));
auto const b6 = math::fma(b7, x, F(0.0010055179351590047f));
auto const a5 = math::fma(a6, x, F(0.006384707620197541f));
auto const b5 = math::fma(b6, x, F(0.005461377722571981f));
auto const a4 = math::fma(a5, x, F(0.02441835694657276f));
auto const b4 = math::fma(b5, x, F(0.03267808902906438f));
auto const a3 = math::fma(a4, x, F(0.13154613853383515f));
auto const b3 = math::fma(b4, x, F(0.07853956718201653f));
auto const a2 = math::fma(a3, x, F(0.16236362849504804f));
auto const b2 = math::fma(b3, x, F(0.39487607480891385f));
auto const a1 = math::fma(a2, x, F(0.7899898092448658f));
auto const b1 = math::fma(b2, x, F(0.1623636285087883f));
auto const a0 = (a1 * x);
auto const b0 = math::fma(b1, x, F(0.789989809244352f));
return math::setSign(a0 / b0, x0);
}
inline static float tanh_remez_pade_fma_ec_T11_11_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_pade_fma_ec_T11_11<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_pade_fma_ec_T11_11<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_ec_T11_11(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-10.0f), F(10.0f));
auto const x2 = x * x;
auto const a6 = F(7.273014379046046e-11f);
auto const b5 = F(4.800240684067899e-09f);
auto const a5 = math::fma(a6, x2, F(1.5600615843053768e-07f));
auto const b4 = math::fma(b5, x2, F(3.2761642668763414e-06f));
auto const a4 = math::fma(a5, x2, F(4.9141939905619375e-05f));
auto const b3 = math::fma(b4, x2, F(0.0005503955968352253f));
auto const a3 = math::fma(a4, x2, F(0.0046783126790149645f));
auto const b2 = math::fma(b3, x2, F(0.03007518796992481f));
auto const a2 = math::fma(a3, x2, F(0.1428556193056355f));
auto const b1 = math::fma(b2, x2, F(0.47619047619047616f));
auto const a1 = math::fma(a2, x2, F(0.9999893351394487f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tanh_fma_ec_T11_11_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_fma_ec_T11_11<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_ec_T11_11<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_fma_T11_0(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a11 = F(-3.445450206535007e-08f);
auto const a10 = math::fma(a11, x, F(2.059193540711217e-06f));
auto const a9 = math::fma(a10, x, F(-5.385266500184661e-05f));
auto const a8 = math::fma(a9, x, F(0.0008087272685311447f));
auto const a7 = math::fma(a8, x, F(-0.007686373552679449f));
auto const a6 = math::fma(a7, x, F(0.047952933268086785f));
auto const a5 = math::fma(a6, x, F(-0.19612320326441668f));
auto const a4 = math::fma(a5, x, F(0.5020504253698609f));
auto const a3 = math::fma(a4, x, F(-0.6834717925661301f));
auto const a2 = math::fma(a3, x, F(0.10623298734457153f));
auto const a1 = math::fma(a2, x, F(0.9919773433290171f));
auto const a0 = math::fma(a1, x, F(-0.0005654707478036112f));
return math::setSign(a0, x0);
}
inline static float tanh_remez_fma_T11_0_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_fma_T11_0<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_fma_T11_0<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_remez_pade_fma_T11_11(in_t(F) x) {
using math = ApproxContext;
auto const x0 = x;
x = math::min(math::abs(x), F(10.0f));
auto const a11 = F(2.7886554006555125e-09f);
auto const b11 = F(2.7878199157226115e-09f);
auto const a10 = math::fma(a11, x, F(6.531217954746905e-08f));
auto const b10 = math::fma(b11, x, F(6.541300070946486e-08f));
auto const a9 = math::fma(a10, x, F(1.0839302203079565e-06f));
auto const b9 = math::fma(b10, x, F(1.0782891834679096e-06f));
auto const a8 = math::fma(a9, x, F(1.3080285200720967e-05f));
auto const b8 = math::fma(b9, x, F(1.3273646899593561e-05f));
auto const a7 = math::fma(a8, x, F(0.00012860058750900342f));
auto const b7 = math::fma(b8, x, F(0.0001240846584948836f));
auto const a6 = math::fma(a7, x, F(0.0009300011464177587f));
auto const b6 = math::fma(b7, x, F(0.0010055179351590047f));
auto const a5 = math::fma(a6, x, F(0.0063847076201975295f));
auto const b5 = math::fma(b6, x, F(0.005461377722571981f));
auto const a4 = math::fma(a5, x, F(0.024418356946572718f));
auto const b4 = math::fma(b5, x, F(0.03267808902906438f));
auto const a3 = math::fma(a4, x, F(0.13154613853383493f));
auto const b3 = math::fma(b4, x, F(0.07853956718201653f));
auto const a2 = math::fma(a3, x, F(0.16236362849504776f));
auto const b2 = math::fma(b3, x, F(0.39487607480891385f));
auto const a1 = math::fma(a2, x, F(0.7899898092448645f));
auto const b1 = math::fma(b2, x, F(0.1623636285087883f));
auto const a0 = math::fma(a1, x, F(-2.4109308177267022e-15f));
auto const b0 = math::fma(b1, x, F(0.789989809244352f));
return math::setSign(a0 / b0, x0);
}
inline static float tanh_remez_pade_fma_T11_11_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_remez_pade_fma_T11_11<cr::simd::float1x4>(x)[0];
#else
return tanh_remez_pade_fma_T11_11<float>(x);
#endif
}
template <class F>
inline constexpr static F tanh_fma_T11_11(in_t(F) x) {
using math = ApproxContext;
x = math::clamp(x, F(-10.0f), F(10.0f));
auto const x2 = x * x;
auto const a6 = F(7.273091945557423e-11f);
auto const b5 = F(4.800240684067899e-09f);
auto const a5 = math::fma(a6, x2, F(1.5600782223220672e-07f));
auto const b4 = math::fma(b5, x2, F(3.2761642668763414e-06f));
auto const a4 = math::fma(a5, x2, F(4.9142464003145115e-05f));
auto const b3 = math::fma(b4, x2, F(0.0005503955968352253f));
auto const a3 = math::fma(a4, x2, F(0.004678362573099415f));
auto const b2 = math::fma(b3, x2, F(0.03007518796992481f));
auto const a2 = math::fma(a3, x2, F(0.14285714285714285f));
auto const b1 = math::fma(b2, x2, F(0.47619047619047616f));
auto const a1 = math::fma(a2, x2, F(1.0f));
auto const b0 = math::fma(b1, x2, F(1.0f));
auto const a0 = (a1 * x);
return a0 / b0;
}
inline static float tanh_fma_T11_11_float_simd(float x) {
#ifdef ARCH_x86_64
return tanh_fma_T11_11<cr::simd::float1x4>(x)[0];
#else
return tanh_fma_T11_11<float>(x);
#endif
}
