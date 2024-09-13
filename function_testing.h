{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_ec_T3_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T3_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_ec_T3_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_ec_T3_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_fma_ec_T3_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T3_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_ec_T3_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T3_3<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T3_3<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T3_3<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_ec_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T3_3<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T3_3_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T3_3_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_ec_T3_3<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T3_3<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_ec_T3_3<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_ec_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_quart_fma_ec_T3_3<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T3_3_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_ec_T3_3_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_T3_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_T3_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_T3_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_T3_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_fma_T3_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_T3_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_T3_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_T3_3<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T3_3<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_T3_3<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_pade_fma_T3_3<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T3_3_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T3_3_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_T3_3_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_T3_3<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_T3_3<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_T3_3<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_quart_fma_T3_3<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_T3_3_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_T3_3_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_T3_3_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_ec_T3_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T3_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_ec_T3_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_ec_T3_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_fma_ec_T3_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T3_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_ec_T3_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T3_3<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T3_3<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T3_3<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_ec_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T3_3<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T3_3_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T3_3_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_ec_T3_3<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T3_3<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_ec_T3_3<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_ec_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_quart_fma_ec_T3_3<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T3_3_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_ec_T3_3_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_T3_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_T3_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_T3_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_T3_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_fma_T3_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_T3_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_T3_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_T3_3<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T3_3<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_T3_3<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_pade_fma_T3_3<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T3_3_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T3_3_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_T3_3_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_T3_3<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_T3_3<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_T3_3<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_quart_fma_T3_3<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_T3_3_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_T3_3_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_T3_3_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_ec_T3_0<float>";
entry.accuracy_test<float>(sin_remez_fma_ec_T3_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_ec_T3_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_ec_T3_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_fma_ec_T3_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_ec_T3_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_ec_T3_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_ec_T3_3<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T3_3<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_ec_T3_3<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_ec_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_pade_fma_ec_T3_3<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T3_3_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_ec_T3_3_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_ec_T3_3<float>";
entry.accuracy_test<float>(sin_quart_fma_ec_T3_3<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_ec_T3_3<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_ec_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_quart_fma_ec_T3_3<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(sin_quart_fma_ec_T3_3_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_ec_T3_3_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_T3_0<float>";
entry.accuracy_test<float>(sin_remez_fma_T3_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_T3_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_T3_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_fma_T3_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_T3_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_T3_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_T3_3<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_T3_3<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_T3_3<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_pade_fma_T3_3<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_T3_3_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_T3_3_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_T3_3_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_T3_3<float>";
entry.accuracy_test<float>(sin_quart_fma_T3_3<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_T3_3<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_quart_fma_T3_3<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_T3_3_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T3_3_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_T3_3_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_ec_T4_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T4_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_ec_T4_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_ec_T4_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_fma_ec_T4_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T4_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_ec_T4_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T4_4<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T4_4<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T4_4<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_ec_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T4_4<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T4_4_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T4_4_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_ec_T4_4<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T4_4<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_ec_T4_4<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_ec_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_quart_fma_ec_T4_4<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T4_4_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_ec_T4_4_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_T4_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_T4_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_T4_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_T4_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_fma_T4_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_T4_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_T4_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_T4_4<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T4_4<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_T4_4<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_pade_fma_T4_4<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T4_4_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T4_4_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_T4_4_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_T4_4<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_T4_4<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_T4_4<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_quart_fma_T4_4<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_T4_4_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_T4_4_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_T4_4_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_ec_T4_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T4_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_ec_T4_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_ec_T4_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_fma_ec_T4_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T4_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_ec_T4_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T4_4<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T4_4<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T4_4<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_ec_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T4_4<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T4_4_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T4_4_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_ec_T4_4<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T4_4<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_ec_T4_4<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_ec_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_quart_fma_ec_T4_4<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T4_4_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_ec_T4_4_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_T4_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_T4_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_T4_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_T4_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_fma_T4_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_T4_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_T4_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_T4_4<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T4_4<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_T4_4<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_pade_fma_T4_4<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T4_4_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T4_4_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_T4_4_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_T4_4<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_T4_4<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_T4_4<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_quart_fma_T4_4<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_T4_4_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_T4_4_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_T4_4_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_ec_T4_0<float>";
entry.accuracy_test<float>(sin_remez_fma_ec_T4_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_ec_T4_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_ec_T4_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_fma_ec_T4_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_ec_T4_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_ec_T4_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_ec_T4_4<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T4_4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_ec_T4_4<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_ec_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_pade_fma_ec_T4_4<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T4_4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_ec_T4_4_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_ec_T4_4<float>";
entry.accuracy_test<float>(sin_quart_fma_ec_T4_4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_ec_T4_4<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_ec_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_quart_fma_ec_T4_4<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(sin_quart_fma_ec_T4_4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_ec_T4_4_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_T4_0<float>";
entry.accuracy_test<float>(sin_remez_fma_T4_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_T4_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_T4_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_fma_T4_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_T4_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_T4_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_T4_4<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_T4_4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_T4_4<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_pade_fma_T4_4<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_T4_4_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_T4_4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_T4_4_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_T4_4<float>";
entry.accuracy_test<float>(sin_quart_fma_T4_4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_T4_4<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_quart_fma_T4_4<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_T4_4_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T4_4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_T4_4_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_ec_T5_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T5_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_ec_T5_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_ec_T5_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_fma_ec_T5_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T5_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_ec_T5_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T5_5<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T5_5<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T5_5<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_ec_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T5_5<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T5_5_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T5_5_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_ec_T5_5<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T5_5<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_ec_T5_5<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_ec_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_quart_fma_ec_T5_5<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T5_5_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_ec_T5_5_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_T5_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_T5_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_T5_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_T5_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_fma_T5_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_T5_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_T5_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_T5_5<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T5_5<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_T5_5<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_pade_fma_T5_5<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T5_5_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T5_5_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_T5_5_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_T5_5<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_T5_5<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_T5_5<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_quart_fma_T5_5<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_T5_5_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_T5_5_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_T5_5_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_ec_T5_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T5_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_ec_T5_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_ec_T5_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_fma_ec_T5_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T5_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_ec_T5_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T5_5<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T5_5<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T5_5<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_ec_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T5_5<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T5_5_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T5_5_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_ec_T5_5<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T5_5<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_ec_T5_5<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_ec_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_quart_fma_ec_T5_5<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T5_5_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_ec_T5_5_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_T5_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_T5_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_T5_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_T5_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_fma_T5_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_T5_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_T5_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_T5_5<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T5_5<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_T5_5<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_pade_fma_T5_5<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T5_5_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T5_5_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_T5_5_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_T5_5<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_T5_5<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_T5_5<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_quart_fma_T5_5<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_T5_5_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_T5_5_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_T5_5_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_ec_T5_0<float>";
entry.accuracy_test<float>(sin_remez_fma_ec_T5_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_ec_T5_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_ec_T5_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_fma_ec_T5_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_ec_T5_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_ec_T5_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_ec_T5_5<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T5_5<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_ec_T5_5<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_ec_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_pade_fma_ec_T5_5<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T5_5_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_ec_T5_5_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_ec_T5_5<float>";
entry.accuracy_test<float>(sin_quart_fma_ec_T5_5<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_ec_T5_5<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_ec_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_quart_fma_ec_T5_5<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(sin_quart_fma_ec_T5_5_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_ec_T5_5_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_T5_0<float>";
entry.accuracy_test<float>(sin_remez_fma_T5_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_T5_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_T5_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_fma_T5_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_T5_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_T5_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_T5_5<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_T5_5<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_T5_5<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_pade_fma_T5_5<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_T5_5_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_T5_5_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_T5_5_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_T5_5<float>";
entry.accuracy_test<float>(sin_quart_fma_T5_5<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_T5_5<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_quart_fma_T5_5<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_T5_5_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T5_5_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_T5_5_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_ec_T6_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T6_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_ec_T6_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_ec_T6_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_fma_ec_T6_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T6_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_ec_T6_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T6_6<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T6_6<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T6_6<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_ec_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T6_6<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T6_6_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T6_6_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_ec_T6_6<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T6_6<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_ec_T6_6<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_ec_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_quart_fma_ec_T6_6<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T6_6_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_ec_T6_6_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_T6_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_T6_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_T6_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_T6_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_fma_T6_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_T6_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_T6_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_T6_6<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T6_6<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_T6_6<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_pade_fma_T6_6<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T6_6_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T6_6_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_T6_6_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_T6_6<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_T6_6<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_T6_6<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_quart_fma_T6_6<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_T6_6_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_T6_6_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_T6_6_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_ec_T6_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T6_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_ec_T6_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_ec_T6_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_fma_ec_T6_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T6_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_ec_T6_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T6_6<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T6_6<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T6_6<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_ec_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T6_6<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T6_6_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T6_6_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_ec_T6_6<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T6_6<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_ec_T6_6<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_ec_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_quart_fma_ec_T6_6<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T6_6_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_ec_T6_6_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_T6_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_T6_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_T6_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_T6_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_fma_T6_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_T6_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_T6_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_T6_6<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T6_6<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_T6_6<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_pade_fma_T6_6<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T6_6_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T6_6_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_T6_6_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_T6_6<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_T6_6<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_T6_6<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_quart_fma_T6_6<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_T6_6_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_T6_6_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_T6_6_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_ec_T6_0<float>";
entry.accuracy_test<float>(sin_remez_fma_ec_T6_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_ec_T6_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_ec_T6_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_fma_ec_T6_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_ec_T6_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_ec_T6_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_ec_T6_6<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T6_6<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_ec_T6_6<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_ec_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_pade_fma_ec_T6_6<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T6_6_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_ec_T6_6_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_ec_T6_6<float>";
entry.accuracy_test<float>(sin_quart_fma_ec_T6_6<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_ec_T6_6<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_ec_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_quart_fma_ec_T6_6<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(sin_quart_fma_ec_T6_6_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_ec_T6_6_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_T6_0<float>";
entry.accuracy_test<float>(sin_remez_fma_T6_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_T6_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_T6_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_fma_T6_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_T6_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_T6_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_T6_6<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_T6_6<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_T6_6<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_pade_fma_T6_6<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_T6_6_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_T6_6_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_T6_6_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_T6_6<float>";
entry.accuracy_test<float>(sin_quart_fma_T6_6<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_T6_6<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_quart_fma_T6_6<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_T6_6_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T6_6_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_T6_6_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_ec_T7_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T7_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_ec_T7_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_ec_T7_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_fma_ec_T7_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T7_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T7_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_ec_T7_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T7_7<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T7_7<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T7_7<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_ec_T7_7<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T7_7<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T7_7_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T7_7_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_ec_T7_7<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T7_7<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_ec_T7_7<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_ec_T7_7<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_quart_fma_ec_T7_7<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T7_7_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_ec_T7_7_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_T7_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_T7_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_T7_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_T7_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_fma_T7_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_T7_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_T7_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_T7_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_T7_7<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T7_7<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_T7_7<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_T7_7<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_pade_fma_T7_7<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T7_7_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T7_7_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_T7_7_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_T7_7<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_T7_7<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_T7_7<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_T7_7<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_quart_fma_T7_7<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_T7_7_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_T7_7_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_T7_7_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_ec_T7_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T7_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_ec_T7_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_ec_T7_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_fma_ec_T7_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T7_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T7_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_ec_T7_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T7_7<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T7_7<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T7_7<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_ec_T7_7<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T7_7<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T7_7_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T7_7_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_ec_T7_7<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T7_7<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_ec_T7_7<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_ec_T7_7<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_quart_fma_ec_T7_7<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T7_7_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_ec_T7_7_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_T7_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_T7_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_T7_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_T7_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_fma_T7_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_T7_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_T7_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_T7_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_T7_7<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T7_7<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_T7_7<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_T7_7<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_pade_fma_T7_7<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T7_7_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T7_7_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_T7_7_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_T7_7<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_T7_7<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_T7_7<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_T7_7<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_quart_fma_T7_7<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_T7_7_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_T7_7_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_T7_7_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_ec_T7_0<float>";
entry.accuracy_test<float>(sin_remez_fma_ec_T7_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_ec_T7_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_ec_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_ec_T7_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_fma_ec_T7_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_ec_T7_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_ec_T7_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_ec_T7_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_ec_T7_7<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T7_7<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_ec_T7_7<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_ec_T7_7<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_pade_fma_ec_T7_7<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T7_7_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_ec_T7_7_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_ec_T7_7<float>";
entry.accuracy_test<float>(sin_quart_fma_ec_T7_7<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_ec_T7_7<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_ec_T7_7<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_quart_fma_ec_T7_7<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(sin_quart_fma_ec_T7_7_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_ec_T7_7_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_T7_0<float>";
entry.accuracy_test<float>(sin_remez_fma_T7_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_T7_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_T7_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_fma_T7_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_T7_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_T7_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_T7_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_T7_7<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_T7_7<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_T7_7<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_T7_7<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_pade_fma_T7_7<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_T7_7_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_T7_7_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_T7_7_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_T7_7<float>";
entry.accuracy_test<float>(sin_quart_fma_T7_7<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_T7_7<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T7_7<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_quart_fma_T7_7<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_T7_7_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T7_7_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_T7_7_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_ec_T8_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T8_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_ec_T8_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_ec_T8_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_fma_ec_T8_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T8_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T8_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_ec_T8_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T8_8<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T8_8<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T8_8<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_ec_T8_8<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T8_8<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T8_8_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T8_8_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_ec_T8_8<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T8_8<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_ec_T8_8<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_ec_T8_8<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_quart_fma_ec_T8_8<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T8_8_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_ec_T8_8_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_T8_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_T8_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_T8_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_T8_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_fma_T8_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_T8_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_T8_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_T8_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_T8_8<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T8_8<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_T8_8<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_T8_8<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_pade_fma_T8_8<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T8_8_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T8_8_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_T8_8_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_T8_8<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_T8_8<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_T8_8<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_T8_8<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_quart_fma_T8_8<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_T8_8_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_T8_8_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_T8_8_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_ec_T8_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T8_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_ec_T8_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_ec_T8_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_fma_ec_T8_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T8_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T8_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_ec_T8_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T8_8<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T8_8<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T8_8<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_ec_T8_8<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T8_8<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T8_8_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T8_8_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_ec_T8_8<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T8_8<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_ec_T8_8<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_ec_T8_8<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_quart_fma_ec_T8_8<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T8_8_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_ec_T8_8_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_T8_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_T8_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_T8_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_T8_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_fma_T8_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_T8_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_T8_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_T8_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_T8_8<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T8_8<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_T8_8<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_T8_8<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_pade_fma_T8_8<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T8_8_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T8_8_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_T8_8_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_T8_8<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_T8_8<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_T8_8<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_T8_8<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_quart_fma_T8_8<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_T8_8_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_T8_8_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_T8_8_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_ec_T8_0<float>";
entry.accuracy_test<float>(sin_remez_fma_ec_T8_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_ec_T8_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_ec_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_ec_T8_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_fma_ec_T8_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_ec_T8_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_ec_T8_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_ec_T8_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_ec_T8_8<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T8_8<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_ec_T8_8<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_ec_T8_8<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_pade_fma_ec_T8_8<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T8_8_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_ec_T8_8_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_ec_T8_8<float>";
entry.accuracy_test<float>(sin_quart_fma_ec_T8_8<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_ec_T8_8<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_ec_T8_8<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_quart_fma_ec_T8_8<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(sin_quart_fma_ec_T8_8_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_ec_T8_8_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_T8_0<float>";
entry.accuracy_test<float>(sin_remez_fma_T8_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_T8_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_T8_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_fma_T8_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_T8_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_T8_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_T8_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_T8_8<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_T8_8<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_T8_8<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_T8_8<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_pade_fma_T8_8<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_T8_8_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_T8_8_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_T8_8_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_T8_8<float>";
entry.accuracy_test<float>(sin_quart_fma_T8_8<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_T8_8<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T8_8<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_quart_fma_T8_8<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_T8_8_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T8_8_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_T8_8_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_ec_T9_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T9_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_ec_T9_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_ec_T9_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_fma_ec_T9_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T9_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T9_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_ec_T9_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T9_9<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T9_9<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T9_9<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_ec_T9_9<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T9_9<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T9_9_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_ec_T9_9_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_ec_T9_9<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T9_9<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_ec_T9_9<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_ec_T9_9<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_quart_fma_ec_T9_9<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T9_9_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_ec_T9_9_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_T9_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_T9_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_T9_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_T9_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_fma_T9_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_T9_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_T9_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_fma_T9_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_T9_9<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T9_9<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_T9_9<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_T9_9<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_remez_pade_fma_T9_9<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T9_9_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T9_9_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_remez_pade_fma_T9_9_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_T9_9<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_T9_9<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_T9_9<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_T9_9<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit1_quart_fma_T9_9<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_T9_9_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_T9_9_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit1_quart_fma_T9_9_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_ec_T9_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T9_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_ec_T9_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_ec_T9_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_fma_ec_T9_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T9_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T9_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_ec_T9_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T9_9<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T9_9<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T9_9<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_ec_T9_9<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T9_9<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T9_9_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_ec_T9_9_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_ec_T9_9<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T9_9<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_ec_T9_9<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_ec_T9_9<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_quart_fma_ec_T9_9<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T9_9_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_ec_T9_9_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_T9_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_T9_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_T9_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_T9_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_fma_T9_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_T9_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_T9_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_fma_T9_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_T9_9<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T9_9<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_T9_9<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_T9_9<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_remez_pade_fma_T9_9<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T9_9_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T9_9_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_remez_pade_fma_T9_9_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_T9_9<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_T9_9<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_T9_9<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_T9_9<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_unit2_quart_fma_T9_9<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_T9_9_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_T9_9_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_unit2_quart_fma_T9_9_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_ec_T9_0<float>";
entry.accuracy_test<float>(sin_remez_fma_ec_T9_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_ec_T9_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_ec_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_ec_T9_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_fma_ec_T9_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_ec_T9_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_ec_T9_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_ec_T9_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_ec_T9_9<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T9_9<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_ec_T9_9<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_ec_T9_9<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_pade_fma_ec_T9_9<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T9_9_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_ec_T9_9_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_ec_T9_9<float>";
entry.accuracy_test<float>(sin_quart_fma_ec_T9_9<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_ec_T9_9<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_ec_T9_9<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_quart_fma_ec_T9_9<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(sin_quart_fma_ec_T9_9_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_ec_T9_9_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_T9_0<float>";
entry.accuracy_test<float>(sin_remez_fma_T9_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_T9_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_T9_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_fma_T9_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_T9_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_T9_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_fma_T9_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_T9_9<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_T9_9<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_T9_9<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_T9_9<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_remez_pade_fma_T9_9<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_T9_9_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_T9_9_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_remez_pade_fma_T9_9_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_T9_9<float>";
entry.accuracy_test<float>(sin_quart_fma_T9_9<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_T9_9<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T9_9<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return sin_quart_fma_T9_9<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_T9_9_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T9_9_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return sin_quart_fma_T9_9_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_ec_T3_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T3_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_ec_T3_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_ec_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_fma_ec_T3_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T3_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_ec_T3_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T3_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T3_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T3_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_ec_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T3_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T3_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T3_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_ec_T3_3<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T3_3<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_ec_T3_3<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_ec_T3_3<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_quart_fma_ec_T3_3<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T3_3_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_ec_T3_3_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_T3_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_T3_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_T3_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_fma_T3_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_T3_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_T3_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_T3_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T3_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_T3_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_pade_fma_T3_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T3_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T3_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_T3_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_T3_3<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_T3_3<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_T3_3<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_T3_3<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_quart_fma_T3_3<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_T3_3_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_T3_3_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_T3_3_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_ec_T3_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T3_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_ec_T3_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_ec_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_fma_ec_T3_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T3_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_ec_T3_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T3_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T3_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T3_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_ec_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T3_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T3_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T3_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_ec_T3_3<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T3_3<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_ec_T3_3<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_ec_T3_3<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_quart_fma_ec_T3_3<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T3_3_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_ec_T3_3_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_T3_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_T3_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_T3_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_fma_T3_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_T3_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_T3_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_T3_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T3_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_T3_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_pade_fma_T3_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T3_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T3_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_T3_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_T3_3<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_T3_3<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_T3_3<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_T3_3<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_quart_fma_T3_3<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_T3_3_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_T3_3_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_T3_3_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_ec_T3_0<float>";
entry.accuracy_test<float>(cos_remez_fma_ec_T3_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_ec_T3_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_ec_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_fma_ec_T3_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_ec_T3_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_ec_T3_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_ec_T3_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T3_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_ec_T3_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_ec_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_pade_fma_ec_T3_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T3_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_ec_T3_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_ec_T3_3<float>";
entry.accuracy_test<float>(cos_quart_fma_ec_T3_3<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_ec_T3_3<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_ec_T3_3<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_quart_fma_ec_T3_3<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(cos_quart_fma_ec_T3_3_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_ec_T3_3_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_T3_0<float>";
entry.accuracy_test<float>(cos_remez_fma_T3_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_T3_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_fma_T3_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_T3_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_T3_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_T3_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_T3_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_T3_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_pade_fma_T3_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_T3_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_T3_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_T3_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_T3_3<float>";
entry.accuracy_test<float>(cos_quart_fma_T3_3<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_T3_3<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_T3_3<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_quart_fma_T3_3<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_T3_3_float_simd";
entry.accuracy_test<float>(cos_quart_fma_T3_3_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_T3_3_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_ec_T4_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T4_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_ec_T4_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_ec_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_fma_ec_T4_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T4_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_ec_T4_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T4_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T4_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T4_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_ec_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T4_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T4_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T4_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_ec_T4_4<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T4_4<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_ec_T4_4<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_ec_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_quart_fma_ec_T4_4<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T4_4_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_ec_T4_4_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_half_fma_ec_T4_4<float>";
entry.accuracy_test<float>(cos_unit1_half_fma_ec_T4_4<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_half_fma_ec_T4_4<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_half_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_half_fma_ec_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_half_fma_ec_T4_4<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_half_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(cos_unit1_half_fma_ec_T4_4_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_half_fma_ec_T4_4_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_T4_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_T4_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_T4_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_fma_T4_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_T4_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_T4_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_T4_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T4_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_T4_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_pade_fma_T4_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T4_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T4_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_T4_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_T4_4<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_T4_4<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_T4_4<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_quart_fma_T4_4<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_T4_4_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_T4_4_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_T4_4_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_half_fma_T4_4<float>";
entry.accuracy_test<float>(cos_unit1_half_fma_T4_4<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_half_fma_T4_4<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_half_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_half_fma_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_half_fma_T4_4<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_half_fma_T4_4_float_simd";
entry.accuracy_test<float>(cos_unit1_half_fma_T4_4_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_half_fma_T4_4_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_ec_T4_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T4_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_ec_T4_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_ec_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_fma_ec_T4_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T4_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_ec_T4_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T4_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T4_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T4_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_ec_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T4_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T4_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T4_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_ec_T4_4<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T4_4<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_ec_T4_4<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_ec_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_quart_fma_ec_T4_4<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T4_4_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_ec_T4_4_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_half_fma_ec_T4_4<float>";
entry.accuracy_test<float>(cos_unit2_half_fma_ec_T4_4<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_half_fma_ec_T4_4<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_half_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_half_fma_ec_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_half_fma_ec_T4_4<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_half_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(cos_unit2_half_fma_ec_T4_4_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_half_fma_ec_T4_4_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_T4_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_T4_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_T4_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_fma_T4_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_T4_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_T4_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_T4_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T4_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_T4_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_pade_fma_T4_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T4_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T4_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_T4_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_T4_4<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_T4_4<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_T4_4<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_quart_fma_T4_4<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_T4_4_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_T4_4_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_T4_4_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_half_fma_T4_4<float>";
entry.accuracy_test<float>(cos_unit2_half_fma_T4_4<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_half_fma_T4_4<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_half_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_half_fma_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_half_fma_T4_4<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_half_fma_T4_4_float_simd";
entry.accuracy_test<float>(cos_unit2_half_fma_T4_4_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_half_fma_T4_4_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_ec_T4_0<float>";
entry.accuracy_test<float>(cos_remez_fma_ec_T4_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_ec_T4_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_ec_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_fma_ec_T4_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_ec_T4_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_ec_T4_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_ec_T4_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T4_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_ec_T4_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_ec_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_pade_fma_ec_T4_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T4_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_ec_T4_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_ec_T4_4<float>";
entry.accuracy_test<float>(cos_quart_fma_ec_T4_4<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_ec_T4_4<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_ec_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_quart_fma_ec_T4_4<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(cos_quart_fma_ec_T4_4_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_ec_T4_4_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "scalar",  };
entry.subName = "cos_half_fma_ec_T4_4<float>";
entry.accuracy_test<float>(cos_half_fma_ec_T4_4<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_half_fma_ec_T4_4<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float2x4", "simd",  };
entry.subName = "cos_half_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_half_fma_ec_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_half_fma_ec_T4_4<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "simd",  };
entry.subName = "cos_half_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(cos_half_fma_ec_T4_4_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_half_fma_ec_T4_4_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_T4_0<float>";
entry.accuracy_test<float>(cos_remez_fma_T4_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_T4_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_fma_T4_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_T4_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_T4_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_T4_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_T4_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_T4_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_pade_fma_T4_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_T4_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_T4_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_T4_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_T4_4<float>";
entry.accuracy_test<float>(cos_quart_fma_T4_4<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_T4_4<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_quart_fma_T4_4<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_T4_4_float_simd";
entry.accuracy_test<float>(cos_quart_fma_T4_4_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_T4_4_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "scalar",  };
entry.subName = "cos_half_fma_T4_4<float>";
entry.accuracy_test<float>(cos_half_fma_T4_4<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_half_fma_T4_4<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float2x4", "simd",  };
entry.subName = "cos_half_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_half_fma_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_half_fma_T4_4<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "simd",  };
entry.subName = "cos_half_fma_T4_4_float_simd";
entry.accuracy_test<float>(cos_half_fma_T4_4_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_half_fma_T4_4_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_ec_T5_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T5_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_ec_T5_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_ec_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_fma_ec_T5_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T5_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_ec_T5_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T5_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T5_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T5_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_ec_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T5_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T5_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T5_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_ec_T5_5<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T5_5<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_ec_T5_5<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_ec_T5_5<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_quart_fma_ec_T5_5<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T5_5_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_ec_T5_5_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_T5_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_T5_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_T5_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_fma_T5_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_T5_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_T5_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_T5_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T5_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_T5_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_pade_fma_T5_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T5_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T5_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_T5_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_T5_5<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_T5_5<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_T5_5<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_T5_5<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_quart_fma_T5_5<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_T5_5_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_T5_5_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_T5_5_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_ec_T5_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T5_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_ec_T5_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_ec_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_fma_ec_T5_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T5_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_ec_T5_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T5_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T5_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T5_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_ec_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T5_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T5_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T5_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_ec_T5_5<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T5_5<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_ec_T5_5<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_ec_T5_5<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_quart_fma_ec_T5_5<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T5_5_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_ec_T5_5_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_T5_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_T5_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_T5_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_fma_T5_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_T5_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_T5_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_T5_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T5_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_T5_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_pade_fma_T5_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T5_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T5_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_T5_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_T5_5<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_T5_5<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_T5_5<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_T5_5<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_quart_fma_T5_5<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_T5_5_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_T5_5_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_T5_5_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_ec_T5_0<float>";
entry.accuracy_test<float>(cos_remez_fma_ec_T5_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_ec_T5_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_ec_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_fma_ec_T5_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_ec_T5_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_ec_T5_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_ec_T5_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T5_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_ec_T5_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_ec_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_pade_fma_ec_T5_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T5_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_ec_T5_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_ec_T5_5<float>";
entry.accuracy_test<float>(cos_quart_fma_ec_T5_5<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_ec_T5_5<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_ec_T5_5<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_quart_fma_ec_T5_5<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(cos_quart_fma_ec_T5_5_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_ec_T5_5_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_T5_0<float>";
entry.accuracy_test<float>(cos_remez_fma_T5_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_T5_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_fma_T5_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_T5_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_T5_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_T5_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_T5_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_T5_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_pade_fma_T5_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_T5_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_T5_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_T5_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_T5_5<float>";
entry.accuracy_test<float>(cos_quart_fma_T5_5<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_T5_5<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_T5_5<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_quart_fma_T5_5<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_T5_5_float_simd";
entry.accuracy_test<float>(cos_quart_fma_T5_5_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_T5_5_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_ec_T6_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T6_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_ec_T6_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_ec_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_fma_ec_T6_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T6_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_ec_T6_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T6_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T6_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T6_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_ec_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T6_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T6_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T6_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_ec_T6_6<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T6_6<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_ec_T6_6<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_ec_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_quart_fma_ec_T6_6<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T6_6_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_ec_T6_6_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_half_fma_ec_T6_6<float>";
entry.accuracy_test<float>(cos_unit1_half_fma_ec_T6_6<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_half_fma_ec_T6_6<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_half_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_half_fma_ec_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_half_fma_ec_T6_6<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_half_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(cos_unit1_half_fma_ec_T6_6_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_half_fma_ec_T6_6_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_T6_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_T6_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_T6_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_fma_T6_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_T6_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_T6_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_T6_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T6_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_T6_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_pade_fma_T6_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T6_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T6_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_T6_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_T6_6<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_T6_6<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_T6_6<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_quart_fma_T6_6<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_T6_6_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_T6_6_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_T6_6_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_half_fma_T6_6<float>";
entry.accuracy_test<float>(cos_unit1_half_fma_T6_6<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_half_fma_T6_6<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_half_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_half_fma_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_half_fma_T6_6<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_half_fma_T6_6_float_simd";
entry.accuracy_test<float>(cos_unit1_half_fma_T6_6_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_half_fma_T6_6_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_ec_T6_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T6_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_ec_T6_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_ec_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_fma_ec_T6_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T6_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_ec_T6_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T6_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T6_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T6_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_ec_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T6_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T6_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T6_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_ec_T6_6<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T6_6<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_ec_T6_6<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_ec_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_quart_fma_ec_T6_6<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T6_6_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_ec_T6_6_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_half_fma_ec_T6_6<float>";
entry.accuracy_test<float>(cos_unit2_half_fma_ec_T6_6<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_half_fma_ec_T6_6<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_half_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_half_fma_ec_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_half_fma_ec_T6_6<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_half_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(cos_unit2_half_fma_ec_T6_6_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_half_fma_ec_T6_6_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_T6_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_T6_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_T6_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_fma_T6_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_T6_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_T6_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_T6_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T6_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_T6_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_pade_fma_T6_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T6_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T6_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_T6_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_T6_6<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_T6_6<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_T6_6<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_quart_fma_T6_6<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_T6_6_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_T6_6_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_T6_6_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_half_fma_T6_6<float>";
entry.accuracy_test<float>(cos_unit2_half_fma_T6_6<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_half_fma_T6_6<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_half_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_half_fma_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_half_fma_T6_6<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_half_fma_T6_6_float_simd";
entry.accuracy_test<float>(cos_unit2_half_fma_T6_6_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_half_fma_T6_6_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_ec_T6_0<float>";
entry.accuracy_test<float>(cos_remez_fma_ec_T6_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_ec_T6_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_ec_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_fma_ec_T6_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_ec_T6_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_ec_T6_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_ec_T6_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T6_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_ec_T6_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_ec_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_pade_fma_ec_T6_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T6_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_ec_T6_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_ec_T6_6<float>";
entry.accuracy_test<float>(cos_quart_fma_ec_T6_6<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_ec_T6_6<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_ec_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_quart_fma_ec_T6_6<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(cos_quart_fma_ec_T6_6_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_ec_T6_6_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "scalar",  };
entry.subName = "cos_half_fma_ec_T6_6<float>";
entry.accuracy_test<float>(cos_half_fma_ec_T6_6<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_half_fma_ec_T6_6<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float2x4", "simd",  };
entry.subName = "cos_half_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_half_fma_ec_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_half_fma_ec_T6_6<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "simd",  };
entry.subName = "cos_half_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(cos_half_fma_ec_T6_6_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_half_fma_ec_T6_6_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_T6_0<float>";
entry.accuracy_test<float>(cos_remez_fma_T6_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_T6_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_fma_T6_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_T6_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_T6_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_T6_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_T6_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_T6_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_pade_fma_T6_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_T6_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_T6_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_T6_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_T6_6<float>";
entry.accuracy_test<float>(cos_quart_fma_T6_6<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_T6_6<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_quart_fma_T6_6<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_T6_6_float_simd";
entry.accuracy_test<float>(cos_quart_fma_T6_6_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_T6_6_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "scalar",  };
entry.subName = "cos_half_fma_T6_6<float>";
entry.accuracy_test<float>(cos_half_fma_T6_6<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_half_fma_T6_6<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float2x4", "simd",  };
entry.subName = "cos_half_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_half_fma_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_half_fma_T6_6<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "simd",  };
entry.subName = "cos_half_fma_T6_6_float_simd";
entry.accuracy_test<float>(cos_half_fma_T6_6_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_half_fma_T6_6_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_ec_T7_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T7_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_ec_T7_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_ec_T7_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_fma_ec_T7_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T7_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T7_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_ec_T7_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T7_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T7_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T7_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_ec_T7_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T7_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T7_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T7_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T7_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_ec_T7_7<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T7_7<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_ec_T7_7<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_ec_T7_7<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_quart_fma_ec_T7_7<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T7_7_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_ec_T7_7_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_T7_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_T7_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_T7_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_T7_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_fma_T7_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_T7_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_T7_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_T7_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_T7_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T7_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_T7_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_T7_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_pade_fma_T7_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T7_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T7_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_T7_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_T7_7<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_T7_7<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_T7_7<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_T7_7<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_quart_fma_T7_7<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_T7_7_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_T7_7_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_T7_7_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_ec_T7_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T7_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_ec_T7_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_ec_T7_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_fma_ec_T7_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T7_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T7_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_ec_T7_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T7_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T7_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T7_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_ec_T7_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T7_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T7_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T7_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T7_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_ec_T7_7<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T7_7<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_ec_T7_7<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_ec_T7_7<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_quart_fma_ec_T7_7<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T7_7_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_ec_T7_7_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_T7_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_T7_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_T7_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_T7_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_fma_T7_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_T7_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_T7_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_T7_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_T7_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T7_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_T7_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_T7_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_pade_fma_T7_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T7_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T7_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_T7_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_T7_7<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_T7_7<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_T7_7<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_T7_7<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_quart_fma_T7_7<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_T7_7_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_T7_7_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_T7_7_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_ec_T7_0<float>";
entry.accuracy_test<float>(cos_remez_fma_ec_T7_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_ec_T7_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_ec_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_ec_T7_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_fma_ec_T7_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_ec_T7_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_ec_T7_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_ec_T7_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_ec_T7_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T7_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_ec_T7_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_ec_T7_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_pade_fma_ec_T7_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T7_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T7_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_ec_T7_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_ec_T7_7<float>";
entry.accuracy_test<float>(cos_quart_fma_ec_T7_7<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_ec_T7_7<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_ec_T7_7<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_quart_fma_ec_T7_7<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(cos_quart_fma_ec_T7_7_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_ec_T7_7_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_T7_0<float>";
entry.accuracy_test<float>(cos_remez_fma_T7_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_T7_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_T7_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_fma_T7_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_T7_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_T7_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_T7_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_T7_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_T7_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_T7_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_T7_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_pade_fma_T7_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_T7_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_T7_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_T7_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_T7_7<float>";
entry.accuracy_test<float>(cos_quart_fma_T7_7<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_T7_7<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_T7_7<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_quart_fma_T7_7<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_T7_7_float_simd";
entry.accuracy_test<float>(cos_quart_fma_T7_7_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_T7_7_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_ec_T8_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T8_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_ec_T8_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_ec_T8_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_fma_ec_T8_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T8_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T8_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_ec_T8_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T8_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T8_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T8_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_ec_T8_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T8_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T8_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T8_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T8_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_ec_T8_8<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T8_8<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_ec_T8_8<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_ec_T8_8<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_quart_fma_ec_T8_8<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T8_8_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_ec_T8_8_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_half_fma_ec_T8_8<float>";
entry.accuracy_test<float>(cos_unit1_half_fma_ec_T8_8<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_half_fma_ec_T8_8<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_half_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_half_fma_ec_T8_8<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_half_fma_ec_T8_8<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_half_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(cos_unit1_half_fma_ec_T8_8_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_half_fma_ec_T8_8_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_T8_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_T8_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_T8_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_T8_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_fma_T8_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_T8_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_T8_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_T8_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_T8_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T8_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_T8_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_T8_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_pade_fma_T8_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T8_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T8_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_T8_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_T8_8<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_T8_8<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_T8_8<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_T8_8<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_quart_fma_T8_8<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_T8_8_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_T8_8_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_T8_8_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_half_fma_T8_8<float>";
entry.accuracy_test<float>(cos_unit1_half_fma_T8_8<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_half_fma_T8_8<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_half_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_half_fma_T8_8<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_half_fma_T8_8<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_half_fma_T8_8_float_simd";
entry.accuracy_test<float>(cos_unit1_half_fma_T8_8_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_half_fma_T8_8_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_ec_T8_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T8_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_ec_T8_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_ec_T8_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_fma_ec_T8_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T8_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T8_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_ec_T8_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T8_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T8_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T8_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_ec_T8_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T8_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T8_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T8_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T8_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_ec_T8_8<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T8_8<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_ec_T8_8<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_ec_T8_8<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_quart_fma_ec_T8_8<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T8_8_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_ec_T8_8_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_half_fma_ec_T8_8<float>";
entry.accuracy_test<float>(cos_unit2_half_fma_ec_T8_8<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_half_fma_ec_T8_8<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_half_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_half_fma_ec_T8_8<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_half_fma_ec_T8_8<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_half_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(cos_unit2_half_fma_ec_T8_8_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_half_fma_ec_T8_8_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_T8_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_T8_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_T8_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_T8_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_fma_T8_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_T8_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_T8_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_T8_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_T8_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T8_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_T8_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_T8_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_pade_fma_T8_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T8_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T8_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_T8_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_T8_8<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_T8_8<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_T8_8<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_T8_8<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_quart_fma_T8_8<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_T8_8_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_T8_8_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_T8_8_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_half_fma_T8_8<float>";
entry.accuracy_test<float>(cos_unit2_half_fma_T8_8<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_half_fma_T8_8<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_half_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_half_fma_T8_8<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_half_fma_T8_8<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_half_fma_T8_8_float_simd";
entry.accuracy_test<float>(cos_unit2_half_fma_T8_8_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_half_fma_T8_8_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_ec_T8_0<float>";
entry.accuracy_test<float>(cos_remez_fma_ec_T8_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_ec_T8_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_ec_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_ec_T8_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_fma_ec_T8_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_ec_T8_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_ec_T8_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_ec_T8_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_ec_T8_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T8_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_ec_T8_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_ec_T8_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_pade_fma_ec_T8_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T8_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T8_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_ec_T8_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_ec_T8_8<float>";
entry.accuracy_test<float>(cos_quart_fma_ec_T8_8<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_ec_T8_8<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_ec_T8_8<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_quart_fma_ec_T8_8<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(cos_quart_fma_ec_T8_8_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_ec_T8_8_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "scalar",  };
entry.subName = "cos_half_fma_ec_T8_8<float>";
entry.accuracy_test<float>(cos_half_fma_ec_T8_8<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_half_fma_ec_T8_8<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float2x4", "simd",  };
entry.subName = "cos_half_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_half_fma_ec_T8_8<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_half_fma_ec_T8_8<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "simd",  };
entry.subName = "cos_half_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(cos_half_fma_ec_T8_8_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_half_fma_ec_T8_8_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_T8_0<float>";
entry.accuracy_test<float>(cos_remez_fma_T8_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_T8_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_T8_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_fma_T8_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_T8_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_T8_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_T8_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_T8_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_T8_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_T8_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_T8_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_pade_fma_T8_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_T8_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_T8_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_T8_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_T8_8<float>";
entry.accuracy_test<float>(cos_quart_fma_T8_8<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_T8_8<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_T8_8<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_quart_fma_T8_8<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_T8_8_float_simd";
entry.accuracy_test<float>(cos_quart_fma_T8_8_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_T8_8_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "scalar",  };
entry.subName = "cos_half_fma_T8_8<float>";
entry.accuracy_test<float>(cos_half_fma_T8_8<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_half_fma_T8_8<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float2x4", "simd",  };
entry.subName = "cos_half_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_half_fma_T8_8<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_half_fma_T8_8<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "simd",  };
entry.subName = "cos_half_fma_T8_8_float_simd";
entry.accuracy_test<float>(cos_half_fma_T8_8_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_half_fma_T8_8_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_ec_T9_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T9_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_ec_T9_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_ec_T9_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_fma_ec_T9_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T9_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T9_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_ec_T9_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T9_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T9_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T9_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_ec_T9_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T9_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T9_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T9_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_ec_T9_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_ec_T9_9<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T9_9<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_ec_T9_9<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_ec_T9_9<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_quart_fma_ec_T9_9<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T9_9_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_ec_T9_9_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_T9_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_T9_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_T9_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_T9_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_fma_T9_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_T9_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_T9_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_fma_T9_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_T9_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T9_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_T9_0<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_T9_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_remez_pade_fma_T9_0<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T9_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T9_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_remez_pade_fma_T9_0_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_T9_9<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_T9_9<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_T9_9<float>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_T9_9<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit1_quart_fma_T9_9<cr::simd::float2x4>(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_T9_9_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_T9_9_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit1_quart_fma_T9_9_float_simd(x); }, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_ec_T9_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T9_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_ec_T9_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_ec_T9_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_fma_ec_T9_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T9_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T9_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_ec_T9_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T9_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T9_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T9_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_ec_T9_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T9_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T9_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T9_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_ec_T9_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_ec_T9_9<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T9_9<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_ec_T9_9<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_ec_T9_9<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_quart_fma_ec_T9_9<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T9_9_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_ec_T9_9_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_T9_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_T9_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_T9_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_T9_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_fma_T9_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_T9_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_T9_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_fma_T9_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_T9_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T9_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_T9_0<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_T9_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_remez_pade_fma_T9_0<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T9_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T9_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_remez_pade_fma_T9_0_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_T9_9<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_T9_9<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_T9_9<float>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_T9_9<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_unit2_quart_fma_T9_9<cr::simd::float2x4>(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_T9_9_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_T9_9_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_unit2_quart_fma_T9_9_float_simd(x); }, 0.0f, 2.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_ec_T9_0<float>";
entry.accuracy_test<float>(cos_remez_fma_ec_T9_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_ec_T9_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_ec_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_ec_T9_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_fma_ec_T9_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_ec_T9_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_ec_T9_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_ec_T9_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_ec_T9_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T9_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_ec_T9_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_ec_T9_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_pade_fma_ec_T9_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T9_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T9_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_ec_T9_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_ec_T9_9<float>";
entry.accuracy_test<float>(cos_quart_fma_ec_T9_9<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_ec_T9_9<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_ec_T9_9<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_quart_fma_ec_T9_9<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(cos_quart_fma_ec_T9_9_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_ec_T9_9_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_T9_0<float>";
entry.accuracy_test<float>(cos_remez_fma_T9_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_T9_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_T9_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_fma_T9_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_T9_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_T9_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_fma_T9_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_T9_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_T9_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_T9_0<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_T9_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_remez_pade_fma_T9_0<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_T9_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_T9_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_remez_pade_fma_T9_0_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_T9_9<float>";
entry.accuracy_test<float>(cos_quart_fma_T9_9<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_T9_9<float>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_T9_9<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>([](auto&& x){ return cos_quart_fma_T9_9<cr::simd::float2x4>(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_T9_9_float_simd";
entry.accuracy_test<float>(cos_quart_fma_T9_9_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>([](auto&& x){ return cos_quart_fma_T9_9_float_simd(x); }, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float", "scalar",  };
entry.subName = "tanh_remez_fma_ec_T3_0<float>";
entry.accuracy_test<float>(tanh_remez_fma_ec_T3_0<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_ec_T3_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float2x4", "simd",  };
entry.subName = "tanh_remez_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_fma_ec_T3_0<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_fma_ec_T3_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float", "simd",  };
entry.subName = "tanh_remez_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(tanh_remez_fma_ec_T3_0_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_ec_T3_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float", "scalar",  };
entry.subName = "tanh_remez_pade_fma_ec_T3_3<float>";
entry.accuracy_test<float>(tanh_remez_pade_fma_ec_T3_3<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_ec_T3_3<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float2x4", "simd",  };
entry.subName = "tanh_remez_pade_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_pade_fma_ec_T3_3<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_pade_fma_ec_T3_3<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float", "simd",  };
entry.subName = "tanh_remez_pade_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(tanh_remez_pade_fma_ec_T3_3_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_ec_T3_3_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float", "scalar",  };
entry.subName = "tanh_fma_ec_T3_3<float>";
entry.accuracy_test<float>(tanh_fma_ec_T3_3<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_ec_T3_3<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float2x4", "simd",  };
entry.subName = "tanh_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_fma_ec_T3_3<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_fma_ec_T3_3<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float", "simd",  };
entry.subName = "tanh_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(tanh_fma_ec_T3_3_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_ec_T3_3_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float", "scalar",  };
entry.subName = "tanh_remez_fma_T3_0<float>";
entry.accuracy_test<float>(tanh_remez_fma_T3_0<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_T3_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float2x4", "simd",  };
entry.subName = "tanh_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_fma_T3_0<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_fma_T3_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float", "simd",  };
entry.subName = "tanh_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(tanh_remez_fma_T3_0_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_T3_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float", "scalar",  };
entry.subName = "tanh_remez_pade_fma_T3_3<float>";
entry.accuracy_test<float>(tanh_remez_pade_fma_T3_3<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_T3_3<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float2x4", "simd",  };
entry.subName = "tanh_remez_pade_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_pade_fma_T3_3<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_pade_fma_T3_3<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float", "simd",  };
entry.subName = "tanh_remez_pade_fma_T3_3_float_simd";
entry.accuracy_test<float>(tanh_remez_pade_fma_T3_3_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_T3_3_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float", "scalar",  };
entry.subName = "tanh_fma_T3_3<float>";
entry.accuracy_test<float>(tanh_fma_T3_3<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_T3_3<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float2x4", "simd",  };
entry.subName = "tanh_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_fma_T3_3<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_fma_T3_3<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float", "simd",  };
entry.subName = "tanh_fma_T3_3_float_simd";
entry.accuracy_test<float>(tanh_fma_T3_3_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_T3_3_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float", "scalar",  };
entry.subName = "tanh_remez_fma_ec_T4_0<float>";
entry.accuracy_test<float>(tanh_remez_fma_ec_T4_0<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_ec_T4_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float2x4", "simd",  };
entry.subName = "tanh_remez_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_fma_ec_T4_0<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_fma_ec_T4_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float", "simd",  };
entry.subName = "tanh_remez_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(tanh_remez_fma_ec_T4_0_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_ec_T4_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float", "scalar",  };
entry.subName = "tanh_remez_pade_fma_ec_T4_4<float>";
entry.accuracy_test<float>(tanh_remez_pade_fma_ec_T4_4<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_ec_T4_4<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float2x4", "simd",  };
entry.subName = "tanh_remez_pade_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_pade_fma_ec_T4_4<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_pade_fma_ec_T4_4<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float", "simd",  };
entry.subName = "tanh_remez_pade_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(tanh_remez_pade_fma_ec_T4_4_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_ec_T4_4_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float", "scalar",  };
entry.subName = "tanh_fma_ec_T4_4<float>";
entry.accuracy_test<float>(tanh_fma_ec_T4_4<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_ec_T4_4<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float2x4", "simd",  };
entry.subName = "tanh_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_fma_ec_T4_4<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_fma_ec_T4_4<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float", "simd",  };
entry.subName = "tanh_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(tanh_fma_ec_T4_4_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_ec_T4_4_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float", "scalar",  };
entry.subName = "tanh_remez_fma_T4_0<float>";
entry.accuracy_test<float>(tanh_remez_fma_T4_0<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_T4_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float2x4", "simd",  };
entry.subName = "tanh_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_fma_T4_0<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_fma_T4_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float", "simd",  };
entry.subName = "tanh_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(tanh_remez_fma_T4_0_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_T4_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float", "scalar",  };
entry.subName = "tanh_remez_pade_fma_T4_4<float>";
entry.accuracy_test<float>(tanh_remez_pade_fma_T4_4<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_T4_4<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float2x4", "simd",  };
entry.subName = "tanh_remez_pade_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_pade_fma_T4_4<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_pade_fma_T4_4<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float", "simd",  };
entry.subName = "tanh_remez_pade_fma_T4_4_float_simd";
entry.accuracy_test<float>(tanh_remez_pade_fma_T4_4_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_T4_4_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float", "scalar",  };
entry.subName = "tanh_fma_T4_4<float>";
entry.accuracy_test<float>(tanh_fma_T4_4<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_T4_4<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float2x4", "simd",  };
entry.subName = "tanh_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_fma_T4_4<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_fma_T4_4<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float", "simd",  };
entry.subName = "tanh_fma_T4_4_float_simd";
entry.accuracy_test<float>(tanh_fma_T4_4_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_T4_4_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float", "scalar",  };
entry.subName = "tanh_remez_fma_ec_T5_0<float>";
entry.accuracy_test<float>(tanh_remez_fma_ec_T5_0<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_ec_T5_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float2x4", "simd",  };
entry.subName = "tanh_remez_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_fma_ec_T5_0<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_fma_ec_T5_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float", "simd",  };
entry.subName = "tanh_remez_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(tanh_remez_fma_ec_T5_0_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_ec_T5_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float", "scalar",  };
entry.subName = "tanh_remez_pade_fma_ec_T5_5<float>";
entry.accuracy_test<float>(tanh_remez_pade_fma_ec_T5_5<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_ec_T5_5<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float2x4", "simd",  };
entry.subName = "tanh_remez_pade_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_pade_fma_ec_T5_5<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_pade_fma_ec_T5_5<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float", "simd",  };
entry.subName = "tanh_remez_pade_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(tanh_remez_pade_fma_ec_T5_5_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_ec_T5_5_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float", "scalar",  };
entry.subName = "tanh_fma_ec_T5_5<float>";
entry.accuracy_test<float>(tanh_fma_ec_T5_5<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_ec_T5_5<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float2x4", "simd",  };
entry.subName = "tanh_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_fma_ec_T5_5<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_fma_ec_T5_5<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float", "simd",  };
entry.subName = "tanh_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(tanh_fma_ec_T5_5_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_ec_T5_5_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float", "scalar",  };
entry.subName = "tanh_remez_fma_T5_0<float>";
entry.accuracy_test<float>(tanh_remez_fma_T5_0<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_T5_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float2x4", "simd",  };
entry.subName = "tanh_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_fma_T5_0<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_fma_T5_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float", "simd",  };
entry.subName = "tanh_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(tanh_remez_fma_T5_0_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_T5_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float", "scalar",  };
entry.subName = "tanh_remez_pade_fma_T5_5<float>";
entry.accuracy_test<float>(tanh_remez_pade_fma_T5_5<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_T5_5<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float2x4", "simd",  };
entry.subName = "tanh_remez_pade_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_pade_fma_T5_5<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_pade_fma_T5_5<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float", "simd",  };
entry.subName = "tanh_remez_pade_fma_T5_5_float_simd";
entry.accuracy_test<float>(tanh_remez_pade_fma_T5_5_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_T5_5_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float", "scalar",  };
entry.subName = "tanh_fma_T5_5<float>";
entry.accuracy_test<float>(tanh_fma_T5_5<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_T5_5<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float2x4", "simd",  };
entry.subName = "tanh_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_fma_T5_5<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_fma_T5_5<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float", "simd",  };
entry.subName = "tanh_fma_T5_5_float_simd";
entry.accuracy_test<float>(tanh_fma_T5_5_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_T5_5_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float", "scalar",  };
entry.subName = "tanh_remez_fma_ec_T6_0<float>";
entry.accuracy_test<float>(tanh_remez_fma_ec_T6_0<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_ec_T6_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float2x4", "simd",  };
entry.subName = "tanh_remez_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_fma_ec_T6_0<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_fma_ec_T6_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float", "simd",  };
entry.subName = "tanh_remez_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(tanh_remez_fma_ec_T6_0_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_ec_T6_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float", "scalar",  };
entry.subName = "tanh_remez_pade_fma_ec_T6_6<float>";
entry.accuracy_test<float>(tanh_remez_pade_fma_ec_T6_6<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_ec_T6_6<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float2x4", "simd",  };
entry.subName = "tanh_remez_pade_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_pade_fma_ec_T6_6<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_pade_fma_ec_T6_6<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float", "simd",  };
entry.subName = "tanh_remez_pade_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(tanh_remez_pade_fma_ec_T6_6_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_ec_T6_6_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float", "scalar",  };
entry.subName = "tanh_fma_ec_T6_6<float>";
entry.accuracy_test<float>(tanh_fma_ec_T6_6<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_ec_T6_6<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float2x4", "simd",  };
entry.subName = "tanh_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_fma_ec_T6_6<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_fma_ec_T6_6<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float", "simd",  };
entry.subName = "tanh_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(tanh_fma_ec_T6_6_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_ec_T6_6_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float", "scalar",  };
entry.subName = "tanh_remez_fma_T6_0<float>";
entry.accuracy_test<float>(tanh_remez_fma_T6_0<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_T6_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float2x4", "simd",  };
entry.subName = "tanh_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_fma_T6_0<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_fma_T6_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float", "simd",  };
entry.subName = "tanh_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(tanh_remez_fma_T6_0_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_T6_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float", "scalar",  };
entry.subName = "tanh_remez_pade_fma_T6_6<float>";
entry.accuracy_test<float>(tanh_remez_pade_fma_T6_6<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_T6_6<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float2x4", "simd",  };
entry.subName = "tanh_remez_pade_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_pade_fma_T6_6<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_pade_fma_T6_6<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float", "simd",  };
entry.subName = "tanh_remez_pade_fma_T6_6_float_simd";
entry.accuracy_test<float>(tanh_remez_pade_fma_T6_6_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_T6_6_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float", "scalar",  };
entry.subName = "tanh_fma_T6_6<float>";
entry.accuracy_test<float>(tanh_fma_T6_6<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_T6_6<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float2x4", "simd",  };
entry.subName = "tanh_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_fma_T6_6<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_fma_T6_6<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float", "simd",  };
entry.subName = "tanh_fma_T6_6_float_simd";
entry.accuracy_test<float>(tanh_fma_T6_6_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_T6_6_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float", "scalar",  };
entry.subName = "tanh_remez_fma_ec_T7_0<float>";
entry.accuracy_test<float>(tanh_remez_fma_ec_T7_0<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_ec_T7_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float2x4", "simd",  };
entry.subName = "tanh_remez_fma_ec_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_fma_ec_T7_0<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_fma_ec_T7_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float", "simd",  };
entry.subName = "tanh_remez_fma_ec_T7_0_float_simd";
entry.accuracy_test<float>(tanh_remez_fma_ec_T7_0_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_ec_T7_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float", "scalar",  };
entry.subName = "tanh_remez_pade_fma_ec_T7_7<float>";
entry.accuracy_test<float>(tanh_remez_pade_fma_ec_T7_7<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_ec_T7_7<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float2x4", "simd",  };
entry.subName = "tanh_remez_pade_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_pade_fma_ec_T7_7<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_pade_fma_ec_T7_7<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float", "simd",  };
entry.subName = "tanh_remez_pade_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(tanh_remez_pade_fma_ec_T7_7_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_ec_T7_7_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float", "scalar",  };
entry.subName = "tanh_fma_ec_T7_7<float>";
entry.accuracy_test<float>(tanh_fma_ec_T7_7<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_ec_T7_7<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float2x4", "simd",  };
entry.subName = "tanh_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_fma_ec_T7_7<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_fma_ec_T7_7<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float", "simd",  };
entry.subName = "tanh_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(tanh_fma_ec_T7_7_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_ec_T7_7_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float", "scalar",  };
entry.subName = "tanh_remez_fma_T7_0<float>";
entry.accuracy_test<float>(tanh_remez_fma_T7_0<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_T7_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float2x4", "simd",  };
entry.subName = "tanh_remez_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_fma_T7_0<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_fma_T7_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float", "simd",  };
entry.subName = "tanh_remez_fma_T7_0_float_simd";
entry.accuracy_test<float>(tanh_remez_fma_T7_0_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_T7_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float", "scalar",  };
entry.subName = "tanh_remez_pade_fma_T7_7<float>";
entry.accuracy_test<float>(tanh_remez_pade_fma_T7_7<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_T7_7<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float2x4", "simd",  };
entry.subName = "tanh_remez_pade_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_pade_fma_T7_7<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_pade_fma_T7_7<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float", "simd",  };
entry.subName = "tanh_remez_pade_fma_T7_7_float_simd";
entry.accuracy_test<float>(tanh_remez_pade_fma_T7_7_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_T7_7_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float", "scalar",  };
entry.subName = "tanh_fma_T7_7<float>";
entry.accuracy_test<float>(tanh_fma_T7_7<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_T7_7<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float2x4", "simd",  };
entry.subName = "tanh_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_fma_T7_7<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_fma_T7_7<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float", "simd",  };
entry.subName = "tanh_fma_T7_7_float_simd";
entry.accuracy_test<float>(tanh_fma_T7_7_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_T7_7_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float", "scalar",  };
entry.subName = "tanh_remez_fma_ec_T8_0<float>";
entry.accuracy_test<float>(tanh_remez_fma_ec_T8_0<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_ec_T8_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float2x4", "simd",  };
entry.subName = "tanh_remez_fma_ec_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_fma_ec_T8_0<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_fma_ec_T8_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float", "simd",  };
entry.subName = "tanh_remez_fma_ec_T8_0_float_simd";
entry.accuracy_test<float>(tanh_remez_fma_ec_T8_0_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_ec_T8_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float", "scalar",  };
entry.subName = "tanh_remez_pade_fma_ec_T8_8<float>";
entry.accuracy_test<float>(tanh_remez_pade_fma_ec_T8_8<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_ec_T8_8<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float2x4", "simd",  };
entry.subName = "tanh_remez_pade_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_pade_fma_ec_T8_8<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_pade_fma_ec_T8_8<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float", "simd",  };
entry.subName = "tanh_remez_pade_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(tanh_remez_pade_fma_ec_T8_8_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_ec_T8_8_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float", "scalar",  };
entry.subName = "tanh_fma_ec_T8_8<float>";
entry.accuracy_test<float>(tanh_fma_ec_T8_8<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_ec_T8_8<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float2x4", "simd",  };
entry.subName = "tanh_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_fma_ec_T8_8<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_fma_ec_T8_8<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float", "simd",  };
entry.subName = "tanh_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(tanh_fma_ec_T8_8_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_ec_T8_8_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float", "scalar",  };
entry.subName = "tanh_remez_fma_T8_0<float>";
entry.accuracy_test<float>(tanh_remez_fma_T8_0<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_T8_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float2x4", "simd",  };
entry.subName = "tanh_remez_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_fma_T8_0<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_fma_T8_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float", "simd",  };
entry.subName = "tanh_remez_fma_T8_0_float_simd";
entry.accuracy_test<float>(tanh_remez_fma_T8_0_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_T8_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float", "scalar",  };
entry.subName = "tanh_remez_pade_fma_T8_8<float>";
entry.accuracy_test<float>(tanh_remez_pade_fma_T8_8<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_T8_8<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float2x4", "simd",  };
entry.subName = "tanh_remez_pade_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_pade_fma_T8_8<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_pade_fma_T8_8<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float", "simd",  };
entry.subName = "tanh_remez_pade_fma_T8_8_float_simd";
entry.accuracy_test<float>(tanh_remez_pade_fma_T8_8_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_T8_8_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float", "scalar",  };
entry.subName = "tanh_fma_T8_8<float>";
entry.accuracy_test<float>(tanh_fma_T8_8<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_T8_8<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float2x4", "simd",  };
entry.subName = "tanh_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_fma_T8_8<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_fma_T8_8<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float", "simd",  };
entry.subName = "tanh_fma_T8_8_float_simd";
entry.accuracy_test<float>(tanh_fma_T8_8_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_T8_8_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float", "scalar",  };
entry.subName = "tanh_remez_fma_ec_T9_0<float>";
entry.accuracy_test<float>(tanh_remez_fma_ec_T9_0<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_ec_T9_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float2x4", "simd",  };
entry.subName = "tanh_remez_fma_ec_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_fma_ec_T9_0<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_fma_ec_T9_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez", "float", "simd",  };
entry.subName = "tanh_remez_fma_ec_T9_0_float_simd";
entry.accuracy_test<float>(tanh_remez_fma_ec_T9_0_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_ec_T9_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float", "scalar",  };
entry.subName = "tanh_remez_pade_fma_ec_T9_9<float>";
entry.accuracy_test<float>(tanh_remez_pade_fma_ec_T9_9<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_ec_T9_9<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float2x4", "simd",  };
entry.subName = "tanh_remez_pade_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_pade_fma_ec_T9_9<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_pade_fma_ec_T9_9<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "remez_pade", "float", "simd",  };
entry.subName = "tanh_remez_pade_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(tanh_remez_pade_fma_ec_T9_9_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_ec_T9_9_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float", "scalar",  };
entry.subName = "tanh_fma_ec_T9_9<float>";
entry.accuracy_test<float>(tanh_fma_ec_T9_9<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_ec_T9_9<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float2x4", "simd",  };
entry.subName = "tanh_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_fma_ec_T9_9<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_fma_ec_T9_9<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tanh", "float", "simd",  };
entry.subName = "tanh_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(tanh_fma_ec_T9_9_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_ec_T9_9_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float", "scalar",  };
entry.subName = "tanh_remez_fma_T9_0<float>";
entry.accuracy_test<float>(tanh_remez_fma_T9_0<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_T9_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float2x4", "simd",  };
entry.subName = "tanh_remez_fma_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_fma_T9_0<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_fma_T9_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez", "float", "simd",  };
entry.subName = "tanh_remez_fma_T9_0_float_simd";
entry.accuracy_test<float>(tanh_remez_fma_T9_0_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_fma_T9_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float", "scalar",  };
entry.subName = "tanh_remez_pade_fma_T9_9<float>";
entry.accuracy_test<float>(tanh_remez_pade_fma_T9_9<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_T9_9<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float2x4", "simd",  };
entry.subName = "tanh_remez_pade_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_remez_pade_fma_T9_9<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_remez_pade_fma_T9_9<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "remez_pade", "float", "simd",  };
entry.subName = "tanh_remez_pade_fma_T9_9_float_simd";
entry.accuracy_test<float>(tanh_remez_pade_fma_T9_9_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_remez_pade_fma_T9_9_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float", "scalar",  };
entry.subName = "tanh_fma_T9_9<float>";
entry.accuracy_test<float>(tanh_fma_T9_9<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_T9_9<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float2x4", "simd",  };
entry.subName = "tanh_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tanh_fma_T9_9<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tanh_fma_T9_9<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tanh", "float", "simd",  };
entry.subName = "tanh_fma_T9_9_float_simd";
entry.accuracy_test<float>(tanh_fma_T9_9_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return tanh_fma_T9_9_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float", "scalar",  };
entry.subName = "exp_fma_T3_3<float>";
entry.accuracy_test<float>(exp_fma_T3_3<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_fma_T3_3<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float2x4", "simd",  };
entry.subName = "exp_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_fma_T3_3<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_fma_T3_3<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float", "simd",  };
entry.subName = "exp_fma_T3_3_float_simd";
entry.accuracy_test<float>(exp_fma_T3_3_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_fma_T3_3_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float", "scalar",  };
entry.subName = "exp_remez_fma_T3_0<float>";
entry.accuracy_test<float>(exp_remez_fma_T3_0<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_fma_T3_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float2x4", "simd",  };
entry.subName = "exp_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_remez_fma_T3_0<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_remez_fma_T3_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float", "simd",  };
entry.subName = "exp_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(exp_remez_fma_T3_0_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_fma_T3_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float", "scalar",  };
entry.subName = "exp_remez_pade_fma_T3_0<float>";
entry.accuracy_test<float>(exp_remez_pade_fma_T3_0<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_pade_fma_T3_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_remez_pade_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_remez_pade_fma_T3_0<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_remez_pade_fma_T3_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float", "simd",  };
entry.subName = "exp_remez_pade_fma_T3_0_float_simd";
entry.accuracy_test<float>(exp_remez_pade_fma_T3_0_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_pade_fma_T3_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float", "scalar",  };
entry.subName = "exp_fma_T4_4<float>";
entry.accuracy_test<float>(exp_fma_T4_4<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_fma_T4_4<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float2x4", "simd",  };
entry.subName = "exp_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_fma_T4_4<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_fma_T4_4<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float", "simd",  };
entry.subName = "exp_fma_T4_4_float_simd";
entry.accuracy_test<float>(exp_fma_T4_4_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_fma_T4_4_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float", "scalar",  };
entry.subName = "exp_remez_fma_T4_0<float>";
entry.accuracy_test<float>(exp_remez_fma_T4_0<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_fma_T4_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float2x4", "simd",  };
entry.subName = "exp_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_remez_fma_T4_0<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_remez_fma_T4_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float", "simd",  };
entry.subName = "exp_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(exp_remez_fma_T4_0_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_fma_T4_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float", "scalar",  };
entry.subName = "exp_remez_pade_fma_T4_0<float>";
entry.accuracy_test<float>(exp_remez_pade_fma_T4_0<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_pade_fma_T4_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_remez_pade_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_remez_pade_fma_T4_0<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_remez_pade_fma_T4_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float", "simd",  };
entry.subName = "exp_remez_pade_fma_T4_0_float_simd";
entry.accuracy_test<float>(exp_remez_pade_fma_T4_0_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_pade_fma_T4_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float", "scalar",  };
entry.subName = "exp_fma_T5_5<float>";
entry.accuracy_test<float>(exp_fma_T5_5<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_fma_T5_5<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float2x4", "simd",  };
entry.subName = "exp_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_fma_T5_5<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_fma_T5_5<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float", "simd",  };
entry.subName = "exp_fma_T5_5_float_simd";
entry.accuracy_test<float>(exp_fma_T5_5_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_fma_T5_5_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float", "scalar",  };
entry.subName = "exp_remez_fma_T5_0<float>";
entry.accuracy_test<float>(exp_remez_fma_T5_0<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_fma_T5_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float2x4", "simd",  };
entry.subName = "exp_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_remez_fma_T5_0<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_remez_fma_T5_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float", "simd",  };
entry.subName = "exp_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(exp_remez_fma_T5_0_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_fma_T5_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float", "scalar",  };
entry.subName = "exp_remez_pade_fma_T5_0<float>";
entry.accuracy_test<float>(exp_remez_pade_fma_T5_0<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_pade_fma_T5_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_remez_pade_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_remez_pade_fma_T5_0<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_remez_pade_fma_T5_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float", "simd",  };
entry.subName = "exp_remez_pade_fma_T5_0_float_simd";
entry.accuracy_test<float>(exp_remez_pade_fma_T5_0_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_pade_fma_T5_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float", "scalar",  };
entry.subName = "exp_fma_T6_6<float>";
entry.accuracy_test<float>(exp_fma_T6_6<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_fma_T6_6<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float2x4", "simd",  };
entry.subName = "exp_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_fma_T6_6<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_fma_T6_6<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float", "simd",  };
entry.subName = "exp_fma_T6_6_float_simd";
entry.accuracy_test<float>(exp_fma_T6_6_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_fma_T6_6_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float", "scalar",  };
entry.subName = "exp_remez_fma_T6_0<float>";
entry.accuracy_test<float>(exp_remez_fma_T6_0<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_fma_T6_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float2x4", "simd",  };
entry.subName = "exp_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_remez_fma_T6_0<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_remez_fma_T6_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float", "simd",  };
entry.subName = "exp_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(exp_remez_fma_T6_0_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_fma_T6_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float", "scalar",  };
entry.subName = "exp_remez_pade_fma_T6_0<float>";
entry.accuracy_test<float>(exp_remez_pade_fma_T6_0<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_pade_fma_T6_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_remez_pade_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_remez_pade_fma_T6_0<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_remez_pade_fma_T6_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float", "simd",  };
entry.subName = "exp_remez_pade_fma_T6_0_float_simd";
entry.accuracy_test<float>(exp_remez_pade_fma_T6_0_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_pade_fma_T6_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float", "scalar",  };
entry.subName = "exp_fma_T7_7<float>";
entry.accuracy_test<float>(exp_fma_T7_7<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_fma_T7_7<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float2x4", "simd",  };
entry.subName = "exp_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_fma_T7_7<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_fma_T7_7<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float", "simd",  };
entry.subName = "exp_fma_T7_7_float_simd";
entry.accuracy_test<float>(exp_fma_T7_7_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_fma_T7_7_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float", "scalar",  };
entry.subName = "exp_remez_fma_T7_0<float>";
entry.accuracy_test<float>(exp_remez_fma_T7_0<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_fma_T7_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float2x4", "simd",  };
entry.subName = "exp_remez_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_remez_fma_T7_0<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_remez_fma_T7_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float", "simd",  };
entry.subName = "exp_remez_fma_T7_0_float_simd";
entry.accuracy_test<float>(exp_remez_fma_T7_0_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_fma_T7_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float", "scalar",  };
entry.subName = "exp_remez_pade_fma_T7_0<float>";
entry.accuracy_test<float>(exp_remez_pade_fma_T7_0<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_pade_fma_T7_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_remez_pade_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_remez_pade_fma_T7_0<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_remez_pade_fma_T7_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float", "simd",  };
entry.subName = "exp_remez_pade_fma_T7_0_float_simd";
entry.accuracy_test<float>(exp_remez_pade_fma_T7_0_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_pade_fma_T7_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float", "scalar",  };
entry.subName = "exp_fma_T8_8<float>";
entry.accuracy_test<float>(exp_fma_T8_8<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_fma_T8_8<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float2x4", "simd",  };
entry.subName = "exp_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_fma_T8_8<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_fma_T8_8<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float", "simd",  };
entry.subName = "exp_fma_T8_8_float_simd";
entry.accuracy_test<float>(exp_fma_T8_8_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_fma_T8_8_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float", "scalar",  };
entry.subName = "exp_remez_fma_T8_0<float>";
entry.accuracy_test<float>(exp_remez_fma_T8_0<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_fma_T8_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float2x4", "simd",  };
entry.subName = "exp_remez_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_remez_fma_T8_0<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_remez_fma_T8_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float", "simd",  };
entry.subName = "exp_remez_fma_T8_0_float_simd";
entry.accuracy_test<float>(exp_remez_fma_T8_0_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_fma_T8_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float", "scalar",  };
entry.subName = "exp_remez_pade_fma_T8_0<float>";
entry.accuracy_test<float>(exp_remez_pade_fma_T8_0<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_pade_fma_T8_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_remez_pade_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_remez_pade_fma_T8_0<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_remez_pade_fma_T8_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float", "simd",  };
entry.subName = "exp_remez_pade_fma_T8_0_float_simd";
entry.accuracy_test<float>(exp_remez_pade_fma_T8_0_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_pade_fma_T8_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float", "scalar",  };
entry.subName = "exp_fma_T9_9<float>";
entry.accuracy_test<float>(exp_fma_T9_9<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_fma_T9_9<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float2x4", "simd",  };
entry.subName = "exp_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_fma_T9_9<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_fma_T9_9<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "float", "simd",  };
entry.subName = "exp_fma_T9_9_float_simd";
entry.accuracy_test<float>(exp_fma_T9_9_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_fma_T9_9_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float", "scalar",  };
entry.subName = "exp_remez_fma_T9_0<float>";
entry.accuracy_test<float>(exp_remez_fma_T9_0<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_fma_T9_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float2x4", "simd",  };
entry.subName = "exp_remez_fma_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_remez_fma_T9_0<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_remez_fma_T9_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez", "float", "simd",  };
entry.subName = "exp_remez_fma_T9_0_float_simd";
entry.accuracy_test<float>(exp_remez_fma_T9_0_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_fma_T9_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float", "scalar",  };
entry.subName = "exp_remez_pade_fma_T9_0<float>";
entry.accuracy_test<float>(exp_remez_pade_fma_T9_0<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_pade_fma_T9_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_remez_pade_fma_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_remez_pade_fma_T9_0<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_remez_pade_fma_T9_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp", "remez_pade", "float", "simd",  };
entry.subName = "exp_remez_pade_fma_T9_0_float_simd";
entry.accuracy_test<float>(exp_remez_pade_fma_T9_0_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return exp_remez_pade_fma_T9_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float", "scalar",  };
entry.subName = "atan_fma_ec_T3_3<float>";
entry.accuracy_test<float>(atan_fma_ec_T3_3<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_ec_T3_3<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float2x4", "simd",  };
entry.subName = "atan_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_fma_ec_T3_3<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_fma_ec_T3_3<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float", "simd",  };
entry.subName = "atan_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(atan_fma_ec_T3_3_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_ec_T3_3_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float", "scalar",  };
entry.subName = "atan_remez_fma_ec_T3_0<float>";
entry.accuracy_test<float>(atan_remez_fma_ec_T3_0<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_ec_T3_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float2x4", "simd",  };
entry.subName = "atan_remez_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_fma_ec_T3_0<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_fma_ec_T3_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float", "simd",  };
entry.subName = "atan_remez_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(atan_remez_fma_ec_T3_0_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_ec_T3_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float", "scalar",  };
entry.subName = "atan_remez_pade_fma_ec_T3_3<float>";
entry.accuracy_test<float>(atan_remez_pade_fma_ec_T3_3<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_ec_T3_3<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float2x4", "simd",  };
entry.subName = "atan_remez_pade_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_pade_fma_ec_T3_3<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_pade_fma_ec_T3_3<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float", "simd",  };
entry.subName = "atan_remez_pade_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(atan_remez_pade_fma_ec_T3_3_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_ec_T3_3_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float", "scalar",  };
entry.subName = "atan_fma_T3_3<float>";
entry.accuracy_test<float>(atan_fma_T3_3<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_T3_3<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float2x4", "simd",  };
entry.subName = "atan_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_fma_T3_3<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_fma_T3_3<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float", "simd",  };
entry.subName = "atan_fma_T3_3_float_simd";
entry.accuracy_test<float>(atan_fma_T3_3_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_T3_3_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float", "scalar",  };
entry.subName = "atan_remez_fma_T3_0<float>";
entry.accuracy_test<float>(atan_remez_fma_T3_0<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_T3_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float2x4", "simd",  };
entry.subName = "atan_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_fma_T3_0<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_fma_T3_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float", "simd",  };
entry.subName = "atan_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(atan_remez_fma_T3_0_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_T3_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float", "scalar",  };
entry.subName = "atan_remez_pade_fma_T3_3<float>";
entry.accuracy_test<float>(atan_remez_pade_fma_T3_3<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_T3_3<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float2x4", "simd",  };
entry.subName = "atan_remez_pade_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_pade_fma_T3_3<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_pade_fma_T3_3<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float", "simd",  };
entry.subName = "atan_remez_pade_fma_T3_3_float_simd";
entry.accuracy_test<float>(atan_remez_pade_fma_T3_3_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_T3_3_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float", "scalar",  };
entry.subName = "atan_fma_ec_T4_4<float>";
entry.accuracy_test<float>(atan_fma_ec_T4_4<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_ec_T4_4<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float2x4", "simd",  };
entry.subName = "atan_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_fma_ec_T4_4<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_fma_ec_T4_4<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float", "simd",  };
entry.subName = "atan_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(atan_fma_ec_T4_4_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_ec_T4_4_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float", "scalar",  };
entry.subName = "atan_remez_fma_ec_T4_0<float>";
entry.accuracy_test<float>(atan_remez_fma_ec_T4_0<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_ec_T4_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float2x4", "simd",  };
entry.subName = "atan_remez_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_fma_ec_T4_0<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_fma_ec_T4_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float", "simd",  };
entry.subName = "atan_remez_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(atan_remez_fma_ec_T4_0_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_ec_T4_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float", "scalar",  };
entry.subName = "atan_remez_pade_fma_ec_T4_4<float>";
entry.accuracy_test<float>(atan_remez_pade_fma_ec_T4_4<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_ec_T4_4<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float2x4", "simd",  };
entry.subName = "atan_remez_pade_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_pade_fma_ec_T4_4<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_pade_fma_ec_T4_4<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float", "simd",  };
entry.subName = "atan_remez_pade_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(atan_remez_pade_fma_ec_T4_4_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_ec_T4_4_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float", "scalar",  };
entry.subName = "atan_fma_T4_4<float>";
entry.accuracy_test<float>(atan_fma_T4_4<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_T4_4<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float2x4", "simd",  };
entry.subName = "atan_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_fma_T4_4<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_fma_T4_4<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float", "simd",  };
entry.subName = "atan_fma_T4_4_float_simd";
entry.accuracy_test<float>(atan_fma_T4_4_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_T4_4_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float", "scalar",  };
entry.subName = "atan_remez_fma_T4_0<float>";
entry.accuracy_test<float>(atan_remez_fma_T4_0<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_T4_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float2x4", "simd",  };
entry.subName = "atan_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_fma_T4_0<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_fma_T4_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float", "simd",  };
entry.subName = "atan_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(atan_remez_fma_T4_0_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_T4_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float", "scalar",  };
entry.subName = "atan_remez_pade_fma_T4_4<float>";
entry.accuracy_test<float>(atan_remez_pade_fma_T4_4<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_T4_4<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float2x4", "simd",  };
entry.subName = "atan_remez_pade_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_pade_fma_T4_4<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_pade_fma_T4_4<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float", "simd",  };
entry.subName = "atan_remez_pade_fma_T4_4_float_simd";
entry.accuracy_test<float>(atan_remez_pade_fma_T4_4_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_T4_4_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float", "scalar",  };
entry.subName = "atan_fma_ec_T5_5<float>";
entry.accuracy_test<float>(atan_fma_ec_T5_5<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_ec_T5_5<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float2x4", "simd",  };
entry.subName = "atan_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_fma_ec_T5_5<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_fma_ec_T5_5<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float", "simd",  };
entry.subName = "atan_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(atan_fma_ec_T5_5_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_ec_T5_5_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float", "scalar",  };
entry.subName = "atan_remez_fma_ec_T5_0<float>";
entry.accuracy_test<float>(atan_remez_fma_ec_T5_0<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_ec_T5_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float2x4", "simd",  };
entry.subName = "atan_remez_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_fma_ec_T5_0<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_fma_ec_T5_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float", "simd",  };
entry.subName = "atan_remez_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(atan_remez_fma_ec_T5_0_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_ec_T5_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float", "scalar",  };
entry.subName = "atan_remez_pade_fma_ec_T5_5<float>";
entry.accuracy_test<float>(atan_remez_pade_fma_ec_T5_5<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_ec_T5_5<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float2x4", "simd",  };
entry.subName = "atan_remez_pade_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_pade_fma_ec_T5_5<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_pade_fma_ec_T5_5<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float", "simd",  };
entry.subName = "atan_remez_pade_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(atan_remez_pade_fma_ec_T5_5_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_ec_T5_5_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float", "scalar",  };
entry.subName = "atan_fma_T5_5<float>";
entry.accuracy_test<float>(atan_fma_T5_5<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_T5_5<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float2x4", "simd",  };
entry.subName = "atan_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_fma_T5_5<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_fma_T5_5<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float", "simd",  };
entry.subName = "atan_fma_T5_5_float_simd";
entry.accuracy_test<float>(atan_fma_T5_5_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_T5_5_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float", "scalar",  };
entry.subName = "atan_remez_fma_T5_0<float>";
entry.accuracy_test<float>(atan_remez_fma_T5_0<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_T5_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float2x4", "simd",  };
entry.subName = "atan_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_fma_T5_0<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_fma_T5_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float", "simd",  };
entry.subName = "atan_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(atan_remez_fma_T5_0_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_T5_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float", "scalar",  };
entry.subName = "atan_remez_pade_fma_T5_5<float>";
entry.accuracy_test<float>(atan_remez_pade_fma_T5_5<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_T5_5<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float2x4", "simd",  };
entry.subName = "atan_remez_pade_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_pade_fma_T5_5<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_pade_fma_T5_5<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float", "simd",  };
entry.subName = "atan_remez_pade_fma_T5_5_float_simd";
entry.accuracy_test<float>(atan_remez_pade_fma_T5_5_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_T5_5_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float", "scalar",  };
entry.subName = "atan_fma_ec_T6_6<float>";
entry.accuracy_test<float>(atan_fma_ec_T6_6<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_ec_T6_6<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float2x4", "simd",  };
entry.subName = "atan_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_fma_ec_T6_6<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_fma_ec_T6_6<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float", "simd",  };
entry.subName = "atan_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(atan_fma_ec_T6_6_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_ec_T6_6_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float", "scalar",  };
entry.subName = "atan_remez_fma_ec_T6_0<float>";
entry.accuracy_test<float>(atan_remez_fma_ec_T6_0<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_ec_T6_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float2x4", "simd",  };
entry.subName = "atan_remez_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_fma_ec_T6_0<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_fma_ec_T6_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float", "simd",  };
entry.subName = "atan_remez_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(atan_remez_fma_ec_T6_0_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_ec_T6_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float", "scalar",  };
entry.subName = "atan_remez_pade_fma_ec_T6_6<float>";
entry.accuracy_test<float>(atan_remez_pade_fma_ec_T6_6<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_ec_T6_6<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float2x4", "simd",  };
entry.subName = "atan_remez_pade_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_pade_fma_ec_T6_6<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_pade_fma_ec_T6_6<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float", "simd",  };
entry.subName = "atan_remez_pade_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(atan_remez_pade_fma_ec_T6_6_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_ec_T6_6_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float", "scalar",  };
entry.subName = "atan_fma_T6_6<float>";
entry.accuracy_test<float>(atan_fma_T6_6<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_T6_6<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float2x4", "simd",  };
entry.subName = "atan_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_fma_T6_6<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_fma_T6_6<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float", "simd",  };
entry.subName = "atan_fma_T6_6_float_simd";
entry.accuracy_test<float>(atan_fma_T6_6_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_T6_6_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float", "scalar",  };
entry.subName = "atan_remez_fma_T6_0<float>";
entry.accuracy_test<float>(atan_remez_fma_T6_0<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_T6_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float2x4", "simd",  };
entry.subName = "atan_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_fma_T6_0<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_fma_T6_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float", "simd",  };
entry.subName = "atan_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(atan_remez_fma_T6_0_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_T6_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float", "scalar",  };
entry.subName = "atan_remez_pade_fma_T6_6<float>";
entry.accuracy_test<float>(atan_remez_pade_fma_T6_6<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_T6_6<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float2x4", "simd",  };
entry.subName = "atan_remez_pade_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_pade_fma_T6_6<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_pade_fma_T6_6<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float", "simd",  };
entry.subName = "atan_remez_pade_fma_T6_6_float_simd";
entry.accuracy_test<float>(atan_remez_pade_fma_T6_6_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_T6_6_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float", "scalar",  };
entry.subName = "atan_fma_ec_T7_7<float>";
entry.accuracy_test<float>(atan_fma_ec_T7_7<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_ec_T7_7<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float2x4", "simd",  };
entry.subName = "atan_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_fma_ec_T7_7<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_fma_ec_T7_7<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float", "simd",  };
entry.subName = "atan_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(atan_fma_ec_T7_7_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_ec_T7_7_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float", "scalar",  };
entry.subName = "atan_remez_fma_ec_T7_0<float>";
entry.accuracy_test<float>(atan_remez_fma_ec_T7_0<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_ec_T7_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float2x4", "simd",  };
entry.subName = "atan_remez_fma_ec_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_fma_ec_T7_0<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_fma_ec_T7_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float", "simd",  };
entry.subName = "atan_remez_fma_ec_T7_0_float_simd";
entry.accuracy_test<float>(atan_remez_fma_ec_T7_0_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_ec_T7_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float", "scalar",  };
entry.subName = "atan_remez_pade_fma_ec_T7_7<float>";
entry.accuracy_test<float>(atan_remez_pade_fma_ec_T7_7<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_ec_T7_7<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float2x4", "simd",  };
entry.subName = "atan_remez_pade_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_pade_fma_ec_T7_7<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_pade_fma_ec_T7_7<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float", "simd",  };
entry.subName = "atan_remez_pade_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(atan_remez_pade_fma_ec_T7_7_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_ec_T7_7_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float", "scalar",  };
entry.subName = "atan_fma_T7_7<float>";
entry.accuracy_test<float>(atan_fma_T7_7<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_T7_7<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float2x4", "simd",  };
entry.subName = "atan_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_fma_T7_7<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_fma_T7_7<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float", "simd",  };
entry.subName = "atan_fma_T7_7_float_simd";
entry.accuracy_test<float>(atan_fma_T7_7_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_T7_7_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float", "scalar",  };
entry.subName = "atan_remez_fma_T7_0<float>";
entry.accuracy_test<float>(atan_remez_fma_T7_0<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_T7_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float2x4", "simd",  };
entry.subName = "atan_remez_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_fma_T7_0<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_fma_T7_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float", "simd",  };
entry.subName = "atan_remez_fma_T7_0_float_simd";
entry.accuracy_test<float>(atan_remez_fma_T7_0_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_T7_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float", "scalar",  };
entry.subName = "atan_remez_pade_fma_T7_7<float>";
entry.accuracy_test<float>(atan_remez_pade_fma_T7_7<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_T7_7<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float2x4", "simd",  };
entry.subName = "atan_remez_pade_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_pade_fma_T7_7<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_pade_fma_T7_7<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float", "simd",  };
entry.subName = "atan_remez_pade_fma_T7_7_float_simd";
entry.accuracy_test<float>(atan_remez_pade_fma_T7_7_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_T7_7_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float", "scalar",  };
entry.subName = "atan_fma_ec_T8_8<float>";
entry.accuracy_test<float>(atan_fma_ec_T8_8<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_ec_T8_8<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float2x4", "simd",  };
entry.subName = "atan_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_fma_ec_T8_8<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_fma_ec_T8_8<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float", "simd",  };
entry.subName = "atan_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(atan_fma_ec_T8_8_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_ec_T8_8_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float", "scalar",  };
entry.subName = "atan_remez_fma_ec_T8_0<float>";
entry.accuracy_test<float>(atan_remez_fma_ec_T8_0<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_ec_T8_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float2x4", "simd",  };
entry.subName = "atan_remez_fma_ec_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_fma_ec_T8_0<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_fma_ec_T8_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float", "simd",  };
entry.subName = "atan_remez_fma_ec_T8_0_float_simd";
entry.accuracy_test<float>(atan_remez_fma_ec_T8_0_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_ec_T8_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float", "scalar",  };
entry.subName = "atan_remez_pade_fma_ec_T8_8<float>";
entry.accuracy_test<float>(atan_remez_pade_fma_ec_T8_8<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_ec_T8_8<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float2x4", "simd",  };
entry.subName = "atan_remez_pade_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_pade_fma_ec_T8_8<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_pade_fma_ec_T8_8<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float", "simd",  };
entry.subName = "atan_remez_pade_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(atan_remez_pade_fma_ec_T8_8_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_ec_T8_8_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float", "scalar",  };
entry.subName = "atan_fma_T8_8<float>";
entry.accuracy_test<float>(atan_fma_T8_8<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_T8_8<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float2x4", "simd",  };
entry.subName = "atan_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_fma_T8_8<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_fma_T8_8<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float", "simd",  };
entry.subName = "atan_fma_T8_8_float_simd";
entry.accuracy_test<float>(atan_fma_T8_8_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_T8_8_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float", "scalar",  };
entry.subName = "atan_remez_fma_T8_0<float>";
entry.accuracy_test<float>(atan_remez_fma_T8_0<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_T8_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float2x4", "simd",  };
entry.subName = "atan_remez_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_fma_T8_0<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_fma_T8_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float", "simd",  };
entry.subName = "atan_remez_fma_T8_0_float_simd";
entry.accuracy_test<float>(atan_remez_fma_T8_0_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_T8_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float", "scalar",  };
entry.subName = "atan_remez_pade_fma_T8_8<float>";
entry.accuracy_test<float>(atan_remez_pade_fma_T8_8<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_T8_8<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float2x4", "simd",  };
entry.subName = "atan_remez_pade_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_pade_fma_T8_8<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_pade_fma_T8_8<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float", "simd",  };
entry.subName = "atan_remez_pade_fma_T8_8_float_simd";
entry.accuracy_test<float>(atan_remez_pade_fma_T8_8_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_T8_8_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float", "scalar",  };
entry.subName = "atan_fma_ec_T9_9<float>";
entry.accuracy_test<float>(atan_fma_ec_T9_9<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_ec_T9_9<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float2x4", "simd",  };
entry.subName = "atan_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_fma_ec_T9_9<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_fma_ec_T9_9<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "float", "simd",  };
entry.subName = "atan_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(atan_fma_ec_T9_9_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_ec_T9_9_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float", "scalar",  };
entry.subName = "atan_remez_fma_ec_T9_0<float>";
entry.accuracy_test<float>(atan_remez_fma_ec_T9_0<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_ec_T9_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float2x4", "simd",  };
entry.subName = "atan_remez_fma_ec_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_fma_ec_T9_0<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_fma_ec_T9_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez", "float", "simd",  };
entry.subName = "atan_remez_fma_ec_T9_0_float_simd";
entry.accuracy_test<float>(atan_remez_fma_ec_T9_0_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_ec_T9_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float", "scalar",  };
entry.subName = "atan_remez_pade_fma_ec_T9_9<float>";
entry.accuracy_test<float>(atan_remez_pade_fma_ec_T9_9<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_ec_T9_9<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float2x4", "simd",  };
entry.subName = "atan_remez_pade_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_pade_fma_ec_T9_9<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_pade_fma_ec_T9_9<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "atan", "remez_pade", "float", "simd",  };
entry.subName = "atan_remez_pade_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(atan_remez_pade_fma_ec_T9_9_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_ec_T9_9_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float", "scalar",  };
entry.subName = "atan_fma_T9_9<float>";
entry.accuracy_test<float>(atan_fma_T9_9<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_T9_9<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float2x4", "simd",  };
entry.subName = "atan_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_fma_T9_9<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_fma_T9_9<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "float", "simd",  };
entry.subName = "atan_fma_T9_9_float_simd";
entry.accuracy_test<float>(atan_fma_T9_9_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_fma_T9_9_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float", "scalar",  };
entry.subName = "atan_remez_fma_T9_0<float>";
entry.accuracy_test<float>(atan_remez_fma_T9_0<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_T9_0<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float2x4", "simd",  };
entry.subName = "atan_remez_fma_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_fma_T9_0<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_fma_T9_0<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez", "float", "simd",  };
entry.subName = "atan_remez_fma_T9_0_float_simd";
entry.accuracy_test<float>(atan_remez_fma_T9_0_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_fma_T9_0_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float", "scalar",  };
entry.subName = "atan_remez_pade_fma_T9_9<float>";
entry.accuracy_test<float>(atan_remez_pade_fma_T9_9<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_T9_9<float>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float2x4", "simd",  };
entry.subName = "atan_remez_pade_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_pade_fma_T9_9<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>([](auto&& x){ return atan_remez_pade_fma_T9_9<cr::simd::float2x4>(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "atan", "remez_pade", "float", "simd",  };
entry.subName = "atan_remez_pade_fma_T9_9_float_simd";
entry.accuracy_test<float>(atan_remez_pade_fma_T9_9_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>([](auto&& x){ return atan_remez_pade_fma_T9_9_float_simd(x); }, -10.0f, 10.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_ec_T3_0<float>";
entry.accuracy_test<float>(log_remez_fma_ec_T3_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_ec_T3_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_ec_T3_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_fma_ec_T3_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_ec_T3_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_ec_T3_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_ec_T3_3<float>";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T3_3<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_ec_T3_3<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_ec_T3_3<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_fma_ec_T3_3<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T3_3_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_ec_T3_3_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_recip_fma_ec_T3_0<float>";
entry.accuracy_test<float>(log_remez_recip_fma_ec_T3_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_ec_T3_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_recip_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_recip_fma_ec_T3_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_recip_fma_ec_T3_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_recip_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(log_remez_recip_fma_ec_T3_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_ec_T3_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_recip_fma_ec_T3_3<float>";
entry.accuracy_test<float>(log_remez_pade_recip_fma_ec_T3_3<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_ec_T3_3<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_recip_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_recip_fma_ec_T3_3<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_recip_fma_ec_T3_3<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_recip_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(log_remez_pade_recip_fma_ec_T3_3_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_ec_T3_3_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_T3_0<float>";
entry.accuracy_test<float>(log_remez_fma_T3_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_T3_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_T3_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_fma_T3_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_T3_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_T3_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_T3_3<float>";
entry.accuracy_test<float>(log_remez_pade_fma_T3_3<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_T3_3<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_T3_3<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_fma_T3_3<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_T3_3_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_T3_3_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_T3_3_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_recip_fma_T3_0<float>";
entry.accuracy_test<float>(log_remez_recip_fma_T3_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_T3_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_recip_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_recip_fma_T3_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_recip_fma_T3_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_recip_fma_T3_0_float_simd";
entry.accuracy_test<float>(log_remez_recip_fma_T3_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_T3_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_recip_fma_T3_3<float>";
entry.accuracy_test<float>(log_remez_pade_recip_fma_T3_3<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_T3_3<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_recip_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_recip_fma_T3_3<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_recip_fma_T3_3<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_recip_fma_T3_3_float_simd";
entry.accuracy_test<float>(log_remez_pade_recip_fma_T3_3_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_T3_3_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_fma_ec_T3_3<float>";
entry.accuracy_test<float>(log_fma_ec_T3_3<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_ec_T3_3<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_ec_T3_3<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_fma_ec_T3_3<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "simd",  };
entry.subName = "log_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(log_fma_ec_T3_3_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_ec_T3_3_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "scalar",  };
entry.subName = "log_fma_T3_3<float>";
entry.accuracy_test<float>(log_fma_T3_3<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_T3_3<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float2x4", "simd",  };
entry.subName = "log_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_T3_3<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_fma_T3_3<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "simd",  };
entry.subName = "log_fma_T3_3_float_simd";
entry.accuracy_test<float>(log_fma_T3_3_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_T3_3_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_ec_T4_0<float>";
entry.accuracy_test<float>(log_remez_fma_ec_T4_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_ec_T4_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_ec_T4_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_fma_ec_T4_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_ec_T4_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_ec_T4_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_ec_T4_4<float>";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T4_4<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_ec_T4_4<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_ec_T4_4<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_fma_ec_T4_4<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T4_4_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_ec_T4_4_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_recip_fma_ec_T4_0<float>";
entry.accuracy_test<float>(log_remez_recip_fma_ec_T4_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_ec_T4_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_recip_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_recip_fma_ec_T4_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_recip_fma_ec_T4_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_recip_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(log_remez_recip_fma_ec_T4_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_ec_T4_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_recip_fma_ec_T4_4<float>";
entry.accuracy_test<float>(log_remez_pade_recip_fma_ec_T4_4<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_ec_T4_4<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_recip_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_recip_fma_ec_T4_4<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_recip_fma_ec_T4_4<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_recip_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(log_remez_pade_recip_fma_ec_T4_4_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_ec_T4_4_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_T4_0<float>";
entry.accuracy_test<float>(log_remez_fma_T4_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_T4_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_T4_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_fma_T4_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_T4_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_T4_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_T4_4<float>";
entry.accuracy_test<float>(log_remez_pade_fma_T4_4<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_T4_4<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_T4_4<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_fma_T4_4<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_T4_4_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_T4_4_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_T4_4_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_recip_fma_T4_0<float>";
entry.accuracy_test<float>(log_remez_recip_fma_T4_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_T4_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_recip_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_recip_fma_T4_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_recip_fma_T4_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_recip_fma_T4_0_float_simd";
entry.accuracy_test<float>(log_remez_recip_fma_T4_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_T4_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_recip_fma_T4_4<float>";
entry.accuracy_test<float>(log_remez_pade_recip_fma_T4_4<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_T4_4<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_recip_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_recip_fma_T4_4<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_recip_fma_T4_4<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_recip_fma_T4_4_float_simd";
entry.accuracy_test<float>(log_remez_pade_recip_fma_T4_4_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_T4_4_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_fma_ec_T4_4<float>";
entry.accuracy_test<float>(log_fma_ec_T4_4<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_ec_T4_4<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_ec_T4_4<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_fma_ec_T4_4<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "simd",  };
entry.subName = "log_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(log_fma_ec_T4_4_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_ec_T4_4_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "scalar",  };
entry.subName = "log_fma_T4_4<float>";
entry.accuracy_test<float>(log_fma_T4_4<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_T4_4<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float2x4", "simd",  };
entry.subName = "log_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_T4_4<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_fma_T4_4<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "simd",  };
entry.subName = "log_fma_T4_4_float_simd";
entry.accuracy_test<float>(log_fma_T4_4_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_T4_4_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_ec_T5_0<float>";
entry.accuracy_test<float>(log_remez_fma_ec_T5_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_ec_T5_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_ec_T5_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_fma_ec_T5_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_ec_T5_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_ec_T5_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_ec_T5_5<float>";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T5_5<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_ec_T5_5<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_ec_T5_5<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_fma_ec_T5_5<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T5_5_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_ec_T5_5_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_recip_fma_ec_T5_0<float>";
entry.accuracy_test<float>(log_remez_recip_fma_ec_T5_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_ec_T5_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_recip_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_recip_fma_ec_T5_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_recip_fma_ec_T5_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_recip_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(log_remez_recip_fma_ec_T5_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_ec_T5_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_recip_fma_ec_T5_5<float>";
entry.accuracy_test<float>(log_remez_pade_recip_fma_ec_T5_5<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_ec_T5_5<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_recip_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_recip_fma_ec_T5_5<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_recip_fma_ec_T5_5<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_recip_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(log_remez_pade_recip_fma_ec_T5_5_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_ec_T5_5_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_T5_0<float>";
entry.accuracy_test<float>(log_remez_fma_T5_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_T5_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_T5_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_fma_T5_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_T5_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_T5_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_T5_5<float>";
entry.accuracy_test<float>(log_remez_pade_fma_T5_5<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_T5_5<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_T5_5<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_fma_T5_5<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_T5_5_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_T5_5_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_T5_5_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_recip_fma_T5_0<float>";
entry.accuracy_test<float>(log_remez_recip_fma_T5_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_T5_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_recip_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_recip_fma_T5_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_recip_fma_T5_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_recip_fma_T5_0_float_simd";
entry.accuracy_test<float>(log_remez_recip_fma_T5_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_T5_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_recip_fma_T5_5<float>";
entry.accuracy_test<float>(log_remez_pade_recip_fma_T5_5<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_T5_5<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_recip_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_recip_fma_T5_5<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_recip_fma_T5_5<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_recip_fma_T5_5_float_simd";
entry.accuracy_test<float>(log_remez_pade_recip_fma_T5_5_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_T5_5_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_fma_ec_T5_5<float>";
entry.accuracy_test<float>(log_fma_ec_T5_5<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_ec_T5_5<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_ec_T5_5<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_fma_ec_T5_5<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "simd",  };
entry.subName = "log_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(log_fma_ec_T5_5_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_ec_T5_5_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "scalar",  };
entry.subName = "log_fma_T5_5<float>";
entry.accuracy_test<float>(log_fma_T5_5<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_T5_5<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float2x4", "simd",  };
entry.subName = "log_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_T5_5<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_fma_T5_5<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "simd",  };
entry.subName = "log_fma_T5_5_float_simd";
entry.accuracy_test<float>(log_fma_T5_5_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_T5_5_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_ec_T6_0<float>";
entry.accuracy_test<float>(log_remez_fma_ec_T6_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_ec_T6_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_ec_T6_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_fma_ec_T6_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_ec_T6_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_ec_T6_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_ec_T6_6<float>";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T6_6<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_ec_T6_6<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_ec_T6_6<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_fma_ec_T6_6<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T6_6_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_ec_T6_6_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_recip_fma_ec_T6_0<float>";
entry.accuracy_test<float>(log_remez_recip_fma_ec_T6_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_ec_T6_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_recip_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_recip_fma_ec_T6_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_recip_fma_ec_T6_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_recip_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(log_remez_recip_fma_ec_T6_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_ec_T6_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_recip_fma_ec_T6_6<float>";
entry.accuracy_test<float>(log_remez_pade_recip_fma_ec_T6_6<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_ec_T6_6<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_recip_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_recip_fma_ec_T6_6<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_recip_fma_ec_T6_6<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_recip_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(log_remez_pade_recip_fma_ec_T6_6_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_ec_T6_6_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_T6_0<float>";
entry.accuracy_test<float>(log_remez_fma_T6_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_T6_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_T6_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_fma_T6_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_T6_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_T6_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_T6_6<float>";
entry.accuracy_test<float>(log_remez_pade_fma_T6_6<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_T6_6<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_T6_6<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_fma_T6_6<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_T6_6_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_T6_6_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_T6_6_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_recip_fma_T6_0<float>";
entry.accuracy_test<float>(log_remez_recip_fma_T6_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_T6_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_recip_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_recip_fma_T6_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_recip_fma_T6_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_recip_fma_T6_0_float_simd";
entry.accuracy_test<float>(log_remez_recip_fma_T6_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_T6_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_recip_fma_T6_6<float>";
entry.accuracy_test<float>(log_remez_pade_recip_fma_T6_6<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_T6_6<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_recip_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_recip_fma_T6_6<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_recip_fma_T6_6<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_recip_fma_T6_6_float_simd";
entry.accuracy_test<float>(log_remez_pade_recip_fma_T6_6_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_T6_6_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_fma_ec_T6_6<float>";
entry.accuracy_test<float>(log_fma_ec_T6_6<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_ec_T6_6<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_ec_T6_6<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_fma_ec_T6_6<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "simd",  };
entry.subName = "log_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(log_fma_ec_T6_6_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_ec_T6_6_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "scalar",  };
entry.subName = "log_fma_T6_6<float>";
entry.accuracy_test<float>(log_fma_T6_6<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_T6_6<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float2x4", "simd",  };
entry.subName = "log_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_T6_6<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_fma_T6_6<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "simd",  };
entry.subName = "log_fma_T6_6_float_simd";
entry.accuracy_test<float>(log_fma_T6_6_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_T6_6_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_ec_T7_0<float>";
entry.accuracy_test<float>(log_remez_fma_ec_T7_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_ec_T7_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_ec_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_ec_T7_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_fma_ec_T7_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_ec_T7_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_ec_T7_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_ec_T7_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_ec_T7_7<float>";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T7_7<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_ec_T7_7<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_ec_T7_7<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_fma_ec_T7_7<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T7_7_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_ec_T7_7_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_recip_fma_ec_T7_0<float>";
entry.accuracy_test<float>(log_remez_recip_fma_ec_T7_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_ec_T7_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_recip_fma_ec_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_recip_fma_ec_T7_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_recip_fma_ec_T7_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_recip_fma_ec_T7_0_float_simd";
entry.accuracy_test<float>(log_remez_recip_fma_ec_T7_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_ec_T7_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_recip_fma_ec_T7_7<float>";
entry.accuracy_test<float>(log_remez_pade_recip_fma_ec_T7_7<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_ec_T7_7<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_recip_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_recip_fma_ec_T7_7<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_recip_fma_ec_T7_7<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_recip_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(log_remez_pade_recip_fma_ec_T7_7_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_ec_T7_7_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_T7_0<float>";
entry.accuracy_test<float>(log_remez_fma_T7_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_T7_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_T7_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_fma_T7_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_T7_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_T7_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_T7_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_T7_7<float>";
entry.accuracy_test<float>(log_remez_pade_fma_T7_7<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_T7_7<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_T7_7<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_fma_T7_7<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_T7_7_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_T7_7_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_T7_7_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_recip_fma_T7_0<float>";
entry.accuracy_test<float>(log_remez_recip_fma_T7_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_T7_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_recip_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_recip_fma_T7_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_recip_fma_T7_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_recip_fma_T7_0_float_simd";
entry.accuracy_test<float>(log_remez_recip_fma_T7_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_T7_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_recip_fma_T7_7<float>";
entry.accuracy_test<float>(log_remez_pade_recip_fma_T7_7<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_T7_7<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_recip_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_recip_fma_T7_7<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_recip_fma_T7_7<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_recip_fma_T7_7_float_simd";
entry.accuracy_test<float>(log_remez_pade_recip_fma_T7_7_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_T7_7_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_fma_ec_T7_7<float>";
entry.accuracy_test<float>(log_fma_ec_T7_7<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_ec_T7_7<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_ec_T7_7<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_fma_ec_T7_7<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "simd",  };
entry.subName = "log_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(log_fma_ec_T7_7_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_ec_T7_7_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "scalar",  };
entry.subName = "log_fma_T7_7<float>";
entry.accuracy_test<float>(log_fma_T7_7<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_T7_7<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float2x4", "simd",  };
entry.subName = "log_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_T7_7<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_fma_T7_7<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "simd",  };
entry.subName = "log_fma_T7_7_float_simd";
entry.accuracy_test<float>(log_fma_T7_7_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_T7_7_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_ec_T8_0<float>";
entry.accuracy_test<float>(log_remez_fma_ec_T8_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_ec_T8_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_ec_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_ec_T8_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_fma_ec_T8_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_ec_T8_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_ec_T8_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_ec_T8_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_ec_T8_8<float>";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T8_8<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_ec_T8_8<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_ec_T8_8<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_fma_ec_T8_8<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T8_8_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_ec_T8_8_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_recip_fma_ec_T8_0<float>";
entry.accuracy_test<float>(log_remez_recip_fma_ec_T8_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_ec_T8_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_recip_fma_ec_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_recip_fma_ec_T8_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_recip_fma_ec_T8_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_recip_fma_ec_T8_0_float_simd";
entry.accuracy_test<float>(log_remez_recip_fma_ec_T8_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_ec_T8_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_recip_fma_ec_T8_8<float>";
entry.accuracy_test<float>(log_remez_pade_recip_fma_ec_T8_8<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_ec_T8_8<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_recip_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_recip_fma_ec_T8_8<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_recip_fma_ec_T8_8<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_recip_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(log_remez_pade_recip_fma_ec_T8_8_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_ec_T8_8_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_T8_0<float>";
entry.accuracy_test<float>(log_remez_fma_T8_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_T8_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_T8_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_fma_T8_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_T8_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_T8_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_T8_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_T8_8<float>";
entry.accuracy_test<float>(log_remez_pade_fma_T8_8<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_T8_8<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_T8_8<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_fma_T8_8<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_T8_8_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_T8_8_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_T8_8_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_recip_fma_T8_0<float>";
entry.accuracy_test<float>(log_remez_recip_fma_T8_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_T8_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_recip_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_recip_fma_T8_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_recip_fma_T8_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_recip_fma_T8_0_float_simd";
entry.accuracy_test<float>(log_remez_recip_fma_T8_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_T8_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_recip_fma_T8_8<float>";
entry.accuracy_test<float>(log_remez_pade_recip_fma_T8_8<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_T8_8<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_recip_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_recip_fma_T8_8<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_recip_fma_T8_8<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_recip_fma_T8_8_float_simd";
entry.accuracy_test<float>(log_remez_pade_recip_fma_T8_8_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_T8_8_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_fma_ec_T8_8<float>";
entry.accuracy_test<float>(log_fma_ec_T8_8<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_ec_T8_8<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_ec_T8_8<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_fma_ec_T8_8<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "simd",  };
entry.subName = "log_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(log_fma_ec_T8_8_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_ec_T8_8_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "scalar",  };
entry.subName = "log_fma_T8_8<float>";
entry.accuracy_test<float>(log_fma_T8_8<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_T8_8<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float2x4", "simd",  };
entry.subName = "log_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_T8_8<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_fma_T8_8<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "simd",  };
entry.subName = "log_fma_T8_8_float_simd";
entry.accuracy_test<float>(log_fma_T8_8_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_T8_8_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_ec_T9_0<float>";
entry.accuracy_test<float>(log_remez_fma_ec_T9_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_ec_T9_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_ec_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_ec_T9_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_fma_ec_T9_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_ec_T9_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_ec_T9_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_ec_T9_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_ec_T9_9<float>";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T9_9<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_ec_T9_9<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_ec_T9_9<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_fma_ec_T9_9<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T9_9_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_ec_T9_9_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_recip_fma_ec_T9_0<float>";
entry.accuracy_test<float>(log_remez_recip_fma_ec_T9_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_ec_T9_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_recip_fma_ec_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_recip_fma_ec_T9_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_recip_fma_ec_T9_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_recip_fma_ec_T9_0_float_simd";
entry.accuracy_test<float>(log_remez_recip_fma_ec_T9_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_ec_T9_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_recip_fma_ec_T9_9<float>";
entry.accuracy_test<float>(log_remez_pade_recip_fma_ec_T9_9<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_ec_T9_9<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_recip_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_recip_fma_ec_T9_9<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_recip_fma_ec_T9_9<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_recip_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(log_remez_pade_recip_fma_ec_T9_9_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_ec_T9_9_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_T9_0<float>";
entry.accuracy_test<float>(log_remez_fma_T9_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_T9_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_T9_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_fma_T9_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_T9_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_T9_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_fma_T9_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_T9_9<float>";
entry.accuracy_test<float>(log_remez_pade_fma_T9_9<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_T9_9<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_T9_9<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_fma_T9_9<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_T9_9_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_T9_9_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_fma_T9_9_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_recip_fma_T9_0<float>";
entry.accuracy_test<float>(log_remez_recip_fma_T9_0<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_T9_0<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_recip_fma_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_recip_fma_T9_0<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_recip_fma_T9_0<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_recip_fma_T9_0_float_simd";
entry.accuracy_test<float>(log_remez_recip_fma_T9_0_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_recip_fma_T9_0_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_recip_fma_T9_9<float>";
entry.accuracy_test<float>(log_remez_pade_recip_fma_T9_9<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_T9_9<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_recip_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_recip_fma_T9_9<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_remez_pade_recip_fma_T9_9<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_recip_fma_T9_9_float_simd";
entry.accuracy_test<float>(log_remez_pade_recip_fma_T9_9_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_remez_pade_recip_fma_T9_9_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_fma_ec_T9_9<float>";
entry.accuracy_test<float>(log_fma_ec_T9_9<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_ec_T9_9<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_ec_T9_9<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_fma_ec_T9_9<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "simd",  };
entry.subName = "log_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(log_fma_ec_T9_9_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_ec_T9_9_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "scalar",  };
entry.subName = "log_fma_T9_9<float>";
entry.accuracy_test<float>(log_fma_T9_9<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_T9_9<float>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float2x4", "simd",  };
entry.subName = "log_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_T9_9<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return log_fma_T9_9<cr::simd::float2x4>(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "simd",  };
entry.subName = "log_fma_T9_9_float_simd";
entry.accuracy_test<float>(log_fma_T9_9_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>([](auto&& x){ return log_fma_T9_9_float_simd(x); }, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float", "scalar",  };
entry.subName = "exp_special_fma_ec_T3_3<float>";
entry.accuracy_test<float>(exp_special_fma_ec_T3_3<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_ec_T3_3<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float2x4", "simd",  };
entry.subName = "exp_special_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_fma_ec_T3_3<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_fma_ec_T3_3<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float", "simd",  };
entry.subName = "exp_special_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(exp_special_fma_ec_T3_3_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_ec_T3_3_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float", "scalar",  };
entry.subName = "exp_special_remez_fma_ec_T3_0<float>";
entry.accuracy_test<float>(exp_special_remez_fma_ec_T3_0<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_ec_T3_0<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float2x4", "simd",  };
entry.subName = "exp_special_remez_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_fma_ec_T3_0<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_fma_ec_T3_0<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float", "simd",  };
entry.subName = "exp_special_remez_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(exp_special_remez_fma_ec_T3_0_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_ec_T3_0_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float", "scalar",  };
entry.subName = "exp_special_remez_pade_fma_ec_T3_3<float>";
entry.accuracy_test<float>(exp_special_remez_pade_fma_ec_T3_3<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_ec_T3_3<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_special_remez_pade_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_pade_fma_ec_T3_3<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_pade_fma_ec_T3_3<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float", "simd",  };
entry.subName = "exp_special_remez_pade_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(exp_special_remez_pade_fma_ec_T3_3_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_ec_T3_3_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float", "scalar",  };
entry.subName = "exp_special_fma_T3_3<float>";
entry.accuracy_test<float>(exp_special_fma_T3_3<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_T3_3<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float2x4", "simd",  };
entry.subName = "exp_special_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_fma_T3_3<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_fma_T3_3<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float", "simd",  };
entry.subName = "exp_special_fma_T3_3_float_simd";
entry.accuracy_test<float>(exp_special_fma_T3_3_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_T3_3_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float", "scalar",  };
entry.subName = "exp_special_remez_fma_T3_0<float>";
entry.accuracy_test<float>(exp_special_remez_fma_T3_0<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_T3_0<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float2x4", "simd",  };
entry.subName = "exp_special_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_fma_T3_0<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_fma_T3_0<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float", "simd",  };
entry.subName = "exp_special_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(exp_special_remez_fma_T3_0_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_T3_0_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float", "scalar",  };
entry.subName = "exp_special_remez_pade_fma_T3_3<float>";
entry.accuracy_test<float>(exp_special_remez_pade_fma_T3_3<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_T3_3<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_special_remez_pade_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_pade_fma_T3_3<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_pade_fma_T3_3<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float", "simd",  };
entry.subName = "exp_special_remez_pade_fma_T3_3_float_simd";
entry.accuracy_test<float>(exp_special_remez_pade_fma_T3_3_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_T3_3_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float", "scalar",  };
entry.subName = "exp_special_fma_ec_T4_4<float>";
entry.accuracy_test<float>(exp_special_fma_ec_T4_4<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_ec_T4_4<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float2x4", "simd",  };
entry.subName = "exp_special_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_fma_ec_T4_4<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_fma_ec_T4_4<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float", "simd",  };
entry.subName = "exp_special_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(exp_special_fma_ec_T4_4_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_ec_T4_4_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float", "scalar",  };
entry.subName = "exp_special_remez_fma_ec_T4_0<float>";
entry.accuracy_test<float>(exp_special_remez_fma_ec_T4_0<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_ec_T4_0<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float2x4", "simd",  };
entry.subName = "exp_special_remez_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_fma_ec_T4_0<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_fma_ec_T4_0<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float", "simd",  };
entry.subName = "exp_special_remez_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(exp_special_remez_fma_ec_T4_0_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_ec_T4_0_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float", "scalar",  };
entry.subName = "exp_special_remez_pade_fma_ec_T4_4<float>";
entry.accuracy_test<float>(exp_special_remez_pade_fma_ec_T4_4<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_ec_T4_4<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_special_remez_pade_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_pade_fma_ec_T4_4<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_pade_fma_ec_T4_4<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float", "simd",  };
entry.subName = "exp_special_remez_pade_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(exp_special_remez_pade_fma_ec_T4_4_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_ec_T4_4_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float", "scalar",  };
entry.subName = "exp_special_fma_T4_4<float>";
entry.accuracy_test<float>(exp_special_fma_T4_4<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_T4_4<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float2x4", "simd",  };
entry.subName = "exp_special_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_fma_T4_4<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_fma_T4_4<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float", "simd",  };
entry.subName = "exp_special_fma_T4_4_float_simd";
entry.accuracy_test<float>(exp_special_fma_T4_4_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_T4_4_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float", "scalar",  };
entry.subName = "exp_special_remez_fma_T4_0<float>";
entry.accuracy_test<float>(exp_special_remez_fma_T4_0<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_T4_0<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float2x4", "simd",  };
entry.subName = "exp_special_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_fma_T4_0<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_fma_T4_0<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float", "simd",  };
entry.subName = "exp_special_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(exp_special_remez_fma_T4_0_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_T4_0_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float", "scalar",  };
entry.subName = "exp_special_remez_pade_fma_T4_4<float>";
entry.accuracy_test<float>(exp_special_remez_pade_fma_T4_4<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_T4_4<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_special_remez_pade_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_pade_fma_T4_4<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_pade_fma_T4_4<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float", "simd",  };
entry.subName = "exp_special_remez_pade_fma_T4_4_float_simd";
entry.accuracy_test<float>(exp_special_remez_pade_fma_T4_4_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_T4_4_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float", "scalar",  };
entry.subName = "exp_special_fma_ec_T5_5<float>";
entry.accuracy_test<float>(exp_special_fma_ec_T5_5<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_ec_T5_5<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float2x4", "simd",  };
entry.subName = "exp_special_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_fma_ec_T5_5<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_fma_ec_T5_5<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float", "simd",  };
entry.subName = "exp_special_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(exp_special_fma_ec_T5_5_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_ec_T5_5_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float", "scalar",  };
entry.subName = "exp_special_remez_fma_ec_T5_0<float>";
entry.accuracy_test<float>(exp_special_remez_fma_ec_T5_0<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_ec_T5_0<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float2x4", "simd",  };
entry.subName = "exp_special_remez_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_fma_ec_T5_0<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_fma_ec_T5_0<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float", "simd",  };
entry.subName = "exp_special_remez_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(exp_special_remez_fma_ec_T5_0_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_ec_T5_0_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float", "scalar",  };
entry.subName = "exp_special_remez_pade_fma_ec_T5_5<float>";
entry.accuracy_test<float>(exp_special_remez_pade_fma_ec_T5_5<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_ec_T5_5<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_special_remez_pade_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_pade_fma_ec_T5_5<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_pade_fma_ec_T5_5<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float", "simd",  };
entry.subName = "exp_special_remez_pade_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(exp_special_remez_pade_fma_ec_T5_5_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_ec_T5_5_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float", "scalar",  };
entry.subName = "exp_special_fma_T5_5<float>";
entry.accuracy_test<float>(exp_special_fma_T5_5<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_T5_5<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float2x4", "simd",  };
entry.subName = "exp_special_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_fma_T5_5<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_fma_T5_5<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float", "simd",  };
entry.subName = "exp_special_fma_T5_5_float_simd";
entry.accuracy_test<float>(exp_special_fma_T5_5_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_T5_5_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float", "scalar",  };
entry.subName = "exp_special_remez_fma_T5_0<float>";
entry.accuracy_test<float>(exp_special_remez_fma_T5_0<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_T5_0<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float2x4", "simd",  };
entry.subName = "exp_special_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_fma_T5_0<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_fma_T5_0<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float", "simd",  };
entry.subName = "exp_special_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(exp_special_remez_fma_T5_0_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_T5_0_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float", "scalar",  };
entry.subName = "exp_special_remez_pade_fma_T5_5<float>";
entry.accuracy_test<float>(exp_special_remez_pade_fma_T5_5<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_T5_5<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_special_remez_pade_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_pade_fma_T5_5<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_pade_fma_T5_5<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float", "simd",  };
entry.subName = "exp_special_remez_pade_fma_T5_5_float_simd";
entry.accuracy_test<float>(exp_special_remez_pade_fma_T5_5_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_T5_5_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float", "scalar",  };
entry.subName = "exp_special_fma_ec_T6_6<float>";
entry.accuracy_test<float>(exp_special_fma_ec_T6_6<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_ec_T6_6<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float2x4", "simd",  };
entry.subName = "exp_special_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_fma_ec_T6_6<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_fma_ec_T6_6<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float", "simd",  };
entry.subName = "exp_special_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(exp_special_fma_ec_T6_6_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_ec_T6_6_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float", "scalar",  };
entry.subName = "exp_special_remez_fma_ec_T6_0<float>";
entry.accuracy_test<float>(exp_special_remez_fma_ec_T6_0<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_ec_T6_0<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float2x4", "simd",  };
entry.subName = "exp_special_remez_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_fma_ec_T6_0<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_fma_ec_T6_0<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float", "simd",  };
entry.subName = "exp_special_remez_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(exp_special_remez_fma_ec_T6_0_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_ec_T6_0_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float", "scalar",  };
entry.subName = "exp_special_remez_pade_fma_ec_T6_6<float>";
entry.accuracy_test<float>(exp_special_remez_pade_fma_ec_T6_6<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_ec_T6_6<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_special_remez_pade_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_pade_fma_ec_T6_6<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_pade_fma_ec_T6_6<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float", "simd",  };
entry.subName = "exp_special_remez_pade_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(exp_special_remez_pade_fma_ec_T6_6_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_ec_T6_6_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float", "scalar",  };
entry.subName = "exp_special_fma_T6_6<float>";
entry.accuracy_test<float>(exp_special_fma_T6_6<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_T6_6<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float2x4", "simd",  };
entry.subName = "exp_special_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_fma_T6_6<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_fma_T6_6<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float", "simd",  };
entry.subName = "exp_special_fma_T6_6_float_simd";
entry.accuracy_test<float>(exp_special_fma_T6_6_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_T6_6_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float", "scalar",  };
entry.subName = "exp_special_remez_fma_T6_0<float>";
entry.accuracy_test<float>(exp_special_remez_fma_T6_0<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_T6_0<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float2x4", "simd",  };
entry.subName = "exp_special_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_fma_T6_0<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_fma_T6_0<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float", "simd",  };
entry.subName = "exp_special_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(exp_special_remez_fma_T6_0_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_T6_0_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float", "scalar",  };
entry.subName = "exp_special_remez_pade_fma_T6_6<float>";
entry.accuracy_test<float>(exp_special_remez_pade_fma_T6_6<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_T6_6<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_special_remez_pade_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_pade_fma_T6_6<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_pade_fma_T6_6<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float", "simd",  };
entry.subName = "exp_special_remez_pade_fma_T6_6_float_simd";
entry.accuracy_test<float>(exp_special_remez_pade_fma_T6_6_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_T6_6_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float", "scalar",  };
entry.subName = "exp_special_fma_ec_T7_7<float>";
entry.accuracy_test<float>(exp_special_fma_ec_T7_7<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_ec_T7_7<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float2x4", "simd",  };
entry.subName = "exp_special_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_fma_ec_T7_7<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_fma_ec_T7_7<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float", "simd",  };
entry.subName = "exp_special_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(exp_special_fma_ec_T7_7_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_ec_T7_7_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float", "scalar",  };
entry.subName = "exp_special_remez_fma_ec_T7_0<float>";
entry.accuracy_test<float>(exp_special_remez_fma_ec_T7_0<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_ec_T7_0<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float2x4", "simd",  };
entry.subName = "exp_special_remez_fma_ec_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_fma_ec_T7_0<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_fma_ec_T7_0<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float", "simd",  };
entry.subName = "exp_special_remez_fma_ec_T7_0_float_simd";
entry.accuracy_test<float>(exp_special_remez_fma_ec_T7_0_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_ec_T7_0_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float", "scalar",  };
entry.subName = "exp_special_remez_pade_fma_ec_T7_7<float>";
entry.accuracy_test<float>(exp_special_remez_pade_fma_ec_T7_7<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_ec_T7_7<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_special_remez_pade_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_pade_fma_ec_T7_7<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_pade_fma_ec_T7_7<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float", "simd",  };
entry.subName = "exp_special_remez_pade_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(exp_special_remez_pade_fma_ec_T7_7_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_ec_T7_7_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float", "scalar",  };
entry.subName = "exp_special_fma_T7_7<float>";
entry.accuracy_test<float>(exp_special_fma_T7_7<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_T7_7<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float2x4", "simd",  };
entry.subName = "exp_special_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_fma_T7_7<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_fma_T7_7<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float", "simd",  };
entry.subName = "exp_special_fma_T7_7_float_simd";
entry.accuracy_test<float>(exp_special_fma_T7_7_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_T7_7_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float", "scalar",  };
entry.subName = "exp_special_remez_fma_T7_0<float>";
entry.accuracy_test<float>(exp_special_remez_fma_T7_0<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_T7_0<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float2x4", "simd",  };
entry.subName = "exp_special_remez_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_fma_T7_0<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_fma_T7_0<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float", "simd",  };
entry.subName = "exp_special_remez_fma_T7_0_float_simd";
entry.accuracy_test<float>(exp_special_remez_fma_T7_0_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_T7_0_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float", "scalar",  };
entry.subName = "exp_special_remez_pade_fma_T7_7<float>";
entry.accuracy_test<float>(exp_special_remez_pade_fma_T7_7<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_T7_7<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_special_remez_pade_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_pade_fma_T7_7<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_pade_fma_T7_7<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float", "simd",  };
entry.subName = "exp_special_remez_pade_fma_T7_7_float_simd";
entry.accuracy_test<float>(exp_special_remez_pade_fma_T7_7_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_T7_7_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float", "scalar",  };
entry.subName = "exp_special_fma_ec_T8_8<float>";
entry.accuracy_test<float>(exp_special_fma_ec_T8_8<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_ec_T8_8<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float2x4", "simd",  };
entry.subName = "exp_special_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_fma_ec_T8_8<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_fma_ec_T8_8<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float", "simd",  };
entry.subName = "exp_special_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(exp_special_fma_ec_T8_8_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_ec_T8_8_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float", "scalar",  };
entry.subName = "exp_special_remez_fma_ec_T8_0<float>";
entry.accuracy_test<float>(exp_special_remez_fma_ec_T8_0<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_ec_T8_0<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float2x4", "simd",  };
entry.subName = "exp_special_remez_fma_ec_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_fma_ec_T8_0<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_fma_ec_T8_0<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float", "simd",  };
entry.subName = "exp_special_remez_fma_ec_T8_0_float_simd";
entry.accuracy_test<float>(exp_special_remez_fma_ec_T8_0_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_ec_T8_0_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float", "scalar",  };
entry.subName = "exp_special_remez_pade_fma_ec_T8_8<float>";
entry.accuracy_test<float>(exp_special_remez_pade_fma_ec_T8_8<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_ec_T8_8<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_special_remez_pade_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_pade_fma_ec_T8_8<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_pade_fma_ec_T8_8<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float", "simd",  };
entry.subName = "exp_special_remez_pade_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(exp_special_remez_pade_fma_ec_T8_8_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_ec_T8_8_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float", "scalar",  };
entry.subName = "exp_special_fma_T8_8<float>";
entry.accuracy_test<float>(exp_special_fma_T8_8<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_T8_8<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float2x4", "simd",  };
entry.subName = "exp_special_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_fma_T8_8<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_fma_T8_8<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float", "simd",  };
entry.subName = "exp_special_fma_T8_8_float_simd";
entry.accuracy_test<float>(exp_special_fma_T8_8_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_T8_8_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float", "scalar",  };
entry.subName = "exp_special_remez_fma_T8_0<float>";
entry.accuracy_test<float>(exp_special_remez_fma_T8_0<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_T8_0<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float2x4", "simd",  };
entry.subName = "exp_special_remez_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_fma_T8_0<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_fma_T8_0<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float", "simd",  };
entry.subName = "exp_special_remez_fma_T8_0_float_simd";
entry.accuracy_test<float>(exp_special_remez_fma_T8_0_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_T8_0_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float", "scalar",  };
entry.subName = "exp_special_remez_pade_fma_T8_8<float>";
entry.accuracy_test<float>(exp_special_remez_pade_fma_T8_8<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_T8_8<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_special_remez_pade_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_pade_fma_T8_8<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_pade_fma_T8_8<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float", "simd",  };
entry.subName = "exp_special_remez_pade_fma_T8_8_float_simd";
entry.accuracy_test<float>(exp_special_remez_pade_fma_T8_8_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_T8_8_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float", "scalar",  };
entry.subName = "exp_special_fma_ec_T9_9<float>";
entry.accuracy_test<float>(exp_special_fma_ec_T9_9<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_ec_T9_9<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float2x4", "simd",  };
entry.subName = "exp_special_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_fma_ec_T9_9<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_fma_ec_T9_9<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "float", "simd",  };
entry.subName = "exp_special_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(exp_special_fma_ec_T9_9_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_ec_T9_9_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float", "scalar",  };
entry.subName = "exp_special_remez_fma_ec_T9_0<float>";
entry.accuracy_test<float>(exp_special_remez_fma_ec_T9_0<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_ec_T9_0<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float2x4", "simd",  };
entry.subName = "exp_special_remez_fma_ec_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_fma_ec_T9_0<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_fma_ec_T9_0<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez", "float", "simd",  };
entry.subName = "exp_special_remez_fma_ec_T9_0_float_simd";
entry.accuracy_test<float>(exp_special_remez_fma_ec_T9_0_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_ec_T9_0_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float", "scalar",  };
entry.subName = "exp_special_remez_pade_fma_ec_T9_9<float>";
entry.accuracy_test<float>(exp_special_remez_pade_fma_ec_T9_9<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_ec_T9_9<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_special_remez_pade_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_pade_fma_ec_T9_9<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_pade_fma_ec_T9_9<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "exp_special", "remez_pade", "float", "simd",  };
entry.subName = "exp_special_remez_pade_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(exp_special_remez_pade_fma_ec_T9_9_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_ec_T9_9_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float", "scalar",  };
entry.subName = "exp_special_fma_T9_9<float>";
entry.accuracy_test<float>(exp_special_fma_T9_9<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_T9_9<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float2x4", "simd",  };
entry.subName = "exp_special_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_fma_T9_9<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_fma_T9_9<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "float", "simd",  };
entry.subName = "exp_special_fma_T9_9_float_simd";
entry.accuracy_test<float>(exp_special_fma_T9_9_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_fma_T9_9_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float", "scalar",  };
entry.subName = "exp_special_remez_fma_T9_0<float>";
entry.accuracy_test<float>(exp_special_remez_fma_T9_0<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_T9_0<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float2x4", "simd",  };
entry.subName = "exp_special_remez_fma_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_fma_T9_0<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_fma_T9_0<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez", "float", "simd",  };
entry.subName = "exp_special_remez_fma_T9_0_float_simd";
entry.accuracy_test<float>(exp_special_remez_fma_T9_0_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_fma_T9_0_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float", "scalar",  };
entry.subName = "exp_special_remez_pade_fma_T9_9<float>";
entry.accuracy_test<float>(exp_special_remez_pade_fma_T9_9<float>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_T9_9<float>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float2x4", "simd",  };
entry.subName = "exp_special_remez_pade_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(exp_special_remez_pade_fma_T9_9<cr::simd::float2x4>, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<cr::simd::float2x4>([](auto&& x){ return exp_special_remez_pade_fma_T9_9<cr::simd::float2x4>(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "exp_special", "remez_pade", "float", "simd",  };
entry.subName = "exp_special_remez_pade_fma_T9_9_float_simd";
entry.accuracy_test<float>(exp_special_remez_pade_fma_T9_9_float_simd, [](float x) { return 8.175798915643707f * std::powf(1.0594630943592953f, x * 127.0f); }, -1.0f, 1.2f, -1.0f, 1.2f);
entry.time<float>([](auto&& x){ return exp_special_remez_pade_fma_T9_9_float_simd(x); }, -1.0f, 1.2f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float", "scalar",  };
entry.subName = "tan_fma_ec_T3_3<float>";
entry.accuracy_test<float>(tan_fma_ec_T3_3<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_ec_T3_3<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float2x4", "simd",  };
entry.subName = "tan_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_ec_T3_3<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_fma_ec_T3_3<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float", "simd",  };
entry.subName = "tan_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(tan_fma_ec_T3_3_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_ec_T3_3_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T3_0<float>";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_ec_T3_0<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T3_0<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_remez_abs_fma_ec_T3_0<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T3_0<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_ec_T3_0_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T3_0_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T3_3<float>";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_ec_T3_3<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T3_3<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_pade_abs_fma_ec_T3_3<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T3_3<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_ec_T3_3_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T3_3_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float", "scalar",  };
entry.subName = "tan_fma_T3_3<float>";
entry.accuracy_test<float>(tan_fma_T3_3<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_T3_3<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float2x4", "simd",  };
entry.subName = "tan_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_T3_3<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_fma_T3_3<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float", "simd",  };
entry.subName = "tan_fma_T3_3_float_simd";
entry.accuracy_test<float>(tan_fma_T3_3_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_T3_3_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_remez_abs_fma_T3_0<float>";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_T3_0<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_T3_0<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_remez_abs_fma_T3_0<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_remez_abs_fma_T3_0<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_T3_0_float_simd";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_T3_0_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_T3_0_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_pade_abs_fma_T3_3<float>";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_T3_3<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_T3_3<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_pade_abs_fma_T3_3<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_pade_abs_fma_T3_3<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_T3_3_float_simd";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_T3_3_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_T3_3_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float", "scalar",  };
entry.subName = "tan_fma_ec_T4_4<float>";
entry.accuracy_test<float>(tan_fma_ec_T4_4<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_ec_T4_4<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float2x4", "simd",  };
entry.subName = "tan_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_ec_T4_4<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_fma_ec_T4_4<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float", "simd",  };
entry.subName = "tan_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(tan_fma_ec_T4_4_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_ec_T4_4_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T4_0<float>";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_ec_T4_0<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T4_0<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_remez_abs_fma_ec_T4_0<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T4_0<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_ec_T4_0_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T4_0_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T4_4<float>";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_ec_T4_4<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T4_4<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_pade_abs_fma_ec_T4_4<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T4_4<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_ec_T4_4_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T4_4_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float", "scalar",  };
entry.subName = "tan_fma_T4_4<float>";
entry.accuracy_test<float>(tan_fma_T4_4<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_T4_4<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float2x4", "simd",  };
entry.subName = "tan_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_T4_4<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_fma_T4_4<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float", "simd",  };
entry.subName = "tan_fma_T4_4_float_simd";
entry.accuracy_test<float>(tan_fma_T4_4_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_T4_4_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_remez_abs_fma_T4_0<float>";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_T4_0<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_T4_0<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_remez_abs_fma_T4_0<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_remez_abs_fma_T4_0<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_T4_0_float_simd";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_T4_0_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_T4_0_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_pade_abs_fma_T4_4<float>";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_T4_4<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_T4_4<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_pade_abs_fma_T4_4<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_pade_abs_fma_T4_4<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_T4_4_float_simd";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_T4_4_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_T4_4_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float", "scalar",  };
entry.subName = "tan_fma_ec_T5_5<float>";
entry.accuracy_test<float>(tan_fma_ec_T5_5<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_ec_T5_5<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float2x4", "simd",  };
entry.subName = "tan_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_ec_T5_5<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_fma_ec_T5_5<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float", "simd",  };
entry.subName = "tan_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(tan_fma_ec_T5_5_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_ec_T5_5_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T5_0<float>";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_ec_T5_0<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T5_0<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_remez_abs_fma_ec_T5_0<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T5_0<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_ec_T5_0_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T5_0_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T5_5<float>";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_ec_T5_5<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T5_5<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_pade_abs_fma_ec_T5_5<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T5_5<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_ec_T5_5_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T5_5_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float", "scalar",  };
entry.subName = "tan_fma_T5_5<float>";
entry.accuracy_test<float>(tan_fma_T5_5<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_T5_5<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float2x4", "simd",  };
entry.subName = "tan_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_T5_5<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_fma_T5_5<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float", "simd",  };
entry.subName = "tan_fma_T5_5_float_simd";
entry.accuracy_test<float>(tan_fma_T5_5_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_T5_5_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_remez_abs_fma_T5_0<float>";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_T5_0<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_T5_0<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_remez_abs_fma_T5_0<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_remez_abs_fma_T5_0<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_T5_0_float_simd";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_T5_0_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_T5_0_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_pade_abs_fma_T5_5<float>";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_T5_5<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_T5_5<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_pade_abs_fma_T5_5<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_pade_abs_fma_T5_5<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_T5_5_float_simd";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_T5_5_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_T5_5_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float", "scalar",  };
entry.subName = "tan_fma_ec_T6_6<float>";
entry.accuracy_test<float>(tan_fma_ec_T6_6<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_ec_T6_6<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float2x4", "simd",  };
entry.subName = "tan_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_ec_T6_6<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_fma_ec_T6_6<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float", "simd",  };
entry.subName = "tan_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(tan_fma_ec_T6_6_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_ec_T6_6_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T6_0<float>";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_ec_T6_0<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T6_0<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_remez_abs_fma_ec_T6_0<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T6_0<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_ec_T6_0_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T6_0_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T6_6<float>";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_ec_T6_6<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T6_6<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_pade_abs_fma_ec_T6_6<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T6_6<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_ec_T6_6_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T6_6_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float", "scalar",  };
entry.subName = "tan_fma_T6_6<float>";
entry.accuracy_test<float>(tan_fma_T6_6<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_T6_6<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float2x4", "simd",  };
entry.subName = "tan_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_T6_6<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_fma_T6_6<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float", "simd",  };
entry.subName = "tan_fma_T6_6_float_simd";
entry.accuracy_test<float>(tan_fma_T6_6_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_T6_6_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_remez_abs_fma_T6_0<float>";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_T6_0<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_T6_0<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_remez_abs_fma_T6_0<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_remez_abs_fma_T6_0<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_T6_0_float_simd";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_T6_0_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_T6_0_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_pade_abs_fma_T6_6<float>";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_T6_6<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_T6_6<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_pade_abs_fma_T6_6<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_pade_abs_fma_T6_6<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_T6_6_float_simd";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_T6_6_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_T6_6_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float", "scalar",  };
entry.subName = "tan_fma_ec_T7_7<float>";
entry.accuracy_test<float>(tan_fma_ec_T7_7<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_ec_T7_7<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float2x4", "simd",  };
entry.subName = "tan_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_ec_T7_7<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_fma_ec_T7_7<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float", "simd",  };
entry.subName = "tan_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(tan_fma_ec_T7_7_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_ec_T7_7_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T7_0<float>";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_ec_T7_0<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T7_0<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_remez_abs_fma_ec_T7_0<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T7_0<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T7_0_float_simd";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_ec_T7_0_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T7_0_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T7_7<float>";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_ec_T7_7<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T7_7<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_pade_abs_fma_ec_T7_7<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T7_7<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_ec_T7_7_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T7_7_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float", "scalar",  };
entry.subName = "tan_fma_T7_7<float>";
entry.accuracy_test<float>(tan_fma_T7_7<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_T7_7<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float2x4", "simd",  };
entry.subName = "tan_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_T7_7<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_fma_T7_7<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float", "simd",  };
entry.subName = "tan_fma_T7_7_float_simd";
entry.accuracy_test<float>(tan_fma_T7_7_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_T7_7_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_remez_abs_fma_T7_0<float>";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_T7_0<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_T7_0<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_remez_abs_fma_T7_0<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_remez_abs_fma_T7_0<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_T7_0_float_simd";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_T7_0_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_T7_0_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_pade_abs_fma_T7_7<float>";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_T7_7<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_T7_7<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_pade_abs_fma_T7_7<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_pade_abs_fma_T7_7<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_T7_7_float_simd";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_T7_7_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_T7_7_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float", "scalar",  };
entry.subName = "tan_fma_ec_T8_8<float>";
entry.accuracy_test<float>(tan_fma_ec_T8_8<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_ec_T8_8<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float2x4", "simd",  };
entry.subName = "tan_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_ec_T8_8<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_fma_ec_T8_8<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float", "simd",  };
entry.subName = "tan_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(tan_fma_ec_T8_8_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_ec_T8_8_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T8_0<float>";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_ec_T8_0<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T8_0<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_remez_abs_fma_ec_T8_0<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T8_0<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T8_0_float_simd";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_ec_T8_0_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T8_0_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T8_8<float>";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_ec_T8_8<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T8_8<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_pade_abs_fma_ec_T8_8<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T8_8<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_ec_T8_8_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T8_8_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float", "scalar",  };
entry.subName = "tan_fma_T8_8<float>";
entry.accuracy_test<float>(tan_fma_T8_8<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_T8_8<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float2x4", "simd",  };
entry.subName = "tan_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_T8_8<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_fma_T8_8<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float", "simd",  };
entry.subName = "tan_fma_T8_8_float_simd";
entry.accuracy_test<float>(tan_fma_T8_8_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_T8_8_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_remez_abs_fma_T8_0<float>";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_T8_0<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_T8_0<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_remez_abs_fma_T8_0<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_remez_abs_fma_T8_0<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_T8_0_float_simd";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_T8_0_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_T8_0_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_pade_abs_fma_T8_8<float>";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_T8_8<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_T8_8<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_pade_abs_fma_T8_8<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_pade_abs_fma_T8_8<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_T8_8_float_simd";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_T8_8_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_T8_8_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float", "scalar",  };
entry.subName = "tan_fma_ec_T9_9<float>";
entry.accuracy_test<float>(tan_fma_ec_T9_9<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_ec_T9_9<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float2x4", "simd",  };
entry.subName = "tan_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_ec_T9_9<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_fma_ec_T9_9<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "float", "simd",  };
entry.subName = "tan_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(tan_fma_ec_T9_9_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_ec_T9_9_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T9_0<float>";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_ec_T9_0<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T9_0<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_remez_abs_fma_ec_T9_0<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T9_0<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_ec_T9_0_float_simd";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_ec_T9_0_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_ec_T9_0_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T9_9<float>";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_ec_T9_9<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T9_9<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_pade_abs_fma_ec_T9_9<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T9_9<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_ec_T9_9_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_ec_T9_9_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float", "scalar",  };
entry.subName = "tan_fma_T9_9<float>";
entry.accuracy_test<float>(tan_fma_T9_9<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_T9_9<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float2x4", "simd",  };
entry.subName = "tan_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_T9_9<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_fma_T9_9<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "float", "simd",  };
entry.subName = "tan_fma_T9_9_float_simd";
entry.accuracy_test<float>(tan_fma_T9_9_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_fma_T9_9_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_remez_abs_fma_T9_0<float>";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_T9_0<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_T9_0<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_remez_abs_fma_T9_0<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_remez_abs_fma_T9_0<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_remez_abs_fma_T9_0_float_simd";
entry.accuracy_test<float>(tan_remez_remez_abs_fma_T9_0_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_remez_abs_fma_T9_0_float_simd(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "scalar",  };
entry.subName = "tan_remez_pade_abs_fma_T9_9<float>";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_T9_9<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_T9_9<float>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float2x4", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_remez_pade_abs_fma_T9_9<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>([](auto&& x){ return tan_remez_pade_abs_fma_T9_9<cr::simd::float2x4>(x); }, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "remez_pade", "float", "simd",  };
entry.subName = "tan_remez_pade_abs_fma_T9_9_float_simd";
entry.accuracy_test<float>(tan_remez_pade_abs_fma_T9_9_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>([](auto&& x){ return tan_remez_pade_abs_fma_T9_9_float_simd(x); }, -1.5f, 1.5f);
}
