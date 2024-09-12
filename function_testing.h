{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_ec_T2_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T2_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_ec_T2_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T2_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_ec_T2_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_fma_ec_T2_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T2_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T2_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_ec_T2_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T2_2<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T2_2<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_ec_T2_2<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_ec_T2_2<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_pade_fma_ec_T2_2<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T2_2_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T2_2_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_ec_T2_2_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_ec_T2_2<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T2_2<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_ec_T2_2<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_ec_T2_2<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_quart_fma_ec_T2_2<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T2_2_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T2_2_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_ec_T2_2_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_T2_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_T2_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_T2_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_T2_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_T2_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_fma_T2_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_T2_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_T2_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_T2_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_T2_2<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T2_2<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_T2_2<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_T2_2<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_pade_fma_T2_2<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T2_2_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T2_2_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_T2_2_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_T2_2<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_T2_2<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_T2_2<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_T2_2<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_quart_fma_T2_2<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_T2_2_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_T2_2_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_T2_2_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_ec_T2_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T2_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_ec_T2_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T2_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_ec_T2_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_fma_ec_T2_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T2_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T2_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_ec_T2_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T2_2<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T2_2<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_ec_T2_2<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_ec_T2_2<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_pade_fma_ec_T2_2<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T2_2_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T2_2_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_ec_T2_2_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_ec_T2_2<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T2_2<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_ec_T2_2<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_ec_T2_2<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_quart_fma_ec_T2_2<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T2_2_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T2_2_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_ec_T2_2_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_T2_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_T2_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_T2_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_T2_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_T2_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_fma_T2_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_T2_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_T2_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_T2_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_T2_2<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T2_2<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_T2_2<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_T2_2<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_pade_fma_T2_2<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T2_2_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T2_2_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_T2_2_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_T2_2<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_T2_2<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_T2_2<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_T2_2<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_quart_fma_T2_2<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_T2_2_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_T2_2_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_T2_2_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_ec_T2_0<float>";
entry.accuracy_test<float>(sin_remez_fma_ec_T2_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_ec_T2_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_ec_T2_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_ec_T2_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_fma_ec_T2_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_ec_T2_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_ec_T2_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_ec_T2_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_ec_T2_2<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T2_2<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_ec_T2_2<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_ec_T2_2<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_pade_fma_ec_T2_2<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T2_2_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T2_2_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_ec_T2_2_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_ec_T2_2<float>";
entry.accuracy_test<float>(sin_quart_fma_ec_T2_2<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_ec_T2_2<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_ec_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_ec_T2_2<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_quart_fma_ec_T2_2<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_ec_T2_2_float_simd";
entry.accuracy_test<float>(sin_quart_fma_ec_T2_2_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_ec_T2_2_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_T2_0<float>";
entry.accuracy_test<float>(sin_remez_fma_T2_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T2_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_T2_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_T2_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_fma_T2_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_T2_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_T2_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T2_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_T2_2<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_T2_2<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T2_2<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_T2_2<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_pade_fma_T2_2<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_T2_2_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_T2_2_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T2_2_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_T2_2<float>";
entry.accuracy_test<float>(sin_quart_fma_T2_2<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T2_2<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T2_2<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_quart_fma_T2_2<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_T2_2_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T2_2_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T2_2_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_ec_T3_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T3_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_ec_T3_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_ec_T3_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_fma_ec_T3_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T3_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_ec_T3_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T3_3<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T3_3<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_ec_T3_3<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_ec_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_pade_fma_ec_T3_3<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T3_3_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_ec_T3_3_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_ec_T3_3<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T3_3<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_ec_T3_3<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_ec_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_quart_fma_ec_T3_3<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T3_3_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_ec_T3_3_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_T3_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_T3_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_T3_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_T3_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_fma_T3_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_T3_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_T3_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_T3_3<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T3_3<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_T3_3<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_pade_fma_T3_3<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T3_3_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T3_3_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_T3_3_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_T3_3<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_T3_3<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_T3_3<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_quart_fma_T3_3<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_T3_3_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_T3_3_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_T3_3_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_ec_T3_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T3_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_ec_T3_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_ec_T3_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_fma_ec_T3_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T3_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_ec_T3_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T3_3<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T3_3<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_ec_T3_3<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_ec_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_pade_fma_ec_T3_3<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T3_3_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_ec_T3_3_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_ec_T3_3<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T3_3<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_ec_T3_3<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_ec_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_quart_fma_ec_T3_3<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T3_3_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_ec_T3_3_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_T3_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_T3_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_T3_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_T3_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_fma_T3_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_T3_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_T3_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_T3_3<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T3_3<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_T3_3<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_pade_fma_T3_3<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T3_3_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T3_3_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_T3_3_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_T3_3<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_T3_3<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_T3_3<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_quart_fma_T3_3<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_T3_3_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_T3_3_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_T3_3_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_ec_T3_0<float>";
entry.accuracy_test<float>(sin_remez_fma_ec_T3_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_ec_T3_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_ec_T3_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_fma_ec_T3_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_ec_T3_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_ec_T3_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_ec_T3_3<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T3_3<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_ec_T3_3<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_ec_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_pade_fma_ec_T3_3<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T3_3_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_ec_T3_3_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_ec_T3_3<float>";
entry.accuracy_test<float>(sin_quart_fma_ec_T3_3<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_ec_T3_3<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_ec_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_quart_fma_ec_T3_3<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(sin_quart_fma_ec_T3_3_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_ec_T3_3_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_T3_0<float>";
entry.accuracy_test<float>(sin_remez_fma_T3_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T3_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_T3_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_fma_T3_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_T3_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T3_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_T3_3<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_T3_3<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T3_3<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_pade_fma_T3_3<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_T3_3_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_T3_3_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T3_3_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_T3_3<float>";
entry.accuracy_test<float>(sin_quart_fma_T3_3<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T3_3<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_quart_fma_T3_3<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_T3_3_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T3_3_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T3_3_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_ec_T4_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T4_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_ec_T4_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_ec_T4_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_fma_ec_T4_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T4_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_ec_T4_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T4_4<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T4_4<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_ec_T4_4<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_ec_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_pade_fma_ec_T4_4<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T4_4_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_ec_T4_4_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_ec_T4_4<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T4_4<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_ec_T4_4<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_ec_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_quart_fma_ec_T4_4<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T4_4_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_ec_T4_4_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_T4_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_T4_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_T4_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_T4_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_fma_T4_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_T4_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_T4_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_T4_4<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T4_4<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_T4_4<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_pade_fma_T4_4<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T4_4_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T4_4_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_T4_4_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_T4_4<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_T4_4<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_T4_4<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_quart_fma_T4_4<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_T4_4_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_T4_4_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_T4_4_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_ec_T4_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T4_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_ec_T4_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_ec_T4_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_fma_ec_T4_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T4_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_ec_T4_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T4_4<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T4_4<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_ec_T4_4<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_ec_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_pade_fma_ec_T4_4<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T4_4_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_ec_T4_4_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_ec_T4_4<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T4_4<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_ec_T4_4<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_ec_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_quart_fma_ec_T4_4<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T4_4_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_ec_T4_4_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_T4_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_T4_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_T4_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_T4_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_fma_T4_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_T4_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_T4_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_T4_4<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T4_4<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_T4_4<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_pade_fma_T4_4<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T4_4_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T4_4_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_T4_4_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_T4_4<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_T4_4<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_T4_4<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_quart_fma_T4_4<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_T4_4_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_T4_4_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_T4_4_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_ec_T4_0<float>";
entry.accuracy_test<float>(sin_remez_fma_ec_T4_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_ec_T4_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_ec_T4_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_fma_ec_T4_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_ec_T4_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_ec_T4_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_ec_T4_4<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T4_4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_ec_T4_4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_ec_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_pade_fma_ec_T4_4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T4_4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_ec_T4_4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_ec_T4_4<float>";
entry.accuracy_test<float>(sin_quart_fma_ec_T4_4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_ec_T4_4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_ec_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_quart_fma_ec_T4_4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(sin_quart_fma_ec_T4_4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_ec_T4_4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_T4_0<float>";
entry.accuracy_test<float>(sin_remez_fma_T4_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T4_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_T4_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_fma_T4_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_T4_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T4_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_T4_4<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_T4_4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T4_4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_pade_fma_T4_4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_T4_4_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_T4_4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T4_4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_T4_4<float>";
entry.accuracy_test<float>(sin_quart_fma_T4_4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T4_4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_quart_fma_T4_4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_T4_4_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T4_4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T4_4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_ec_T5_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T5_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_ec_T5_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_ec_T5_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_fma_ec_T5_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T5_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_ec_T5_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T5_5<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T5_5<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_ec_T5_5<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_ec_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_pade_fma_ec_T5_5<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T5_5_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_ec_T5_5_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_ec_T5_5<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T5_5<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_ec_T5_5<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_ec_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_quart_fma_ec_T5_5<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T5_5_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_ec_T5_5_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_T5_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_T5_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_T5_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_T5_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_fma_T5_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_T5_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_T5_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_T5_5<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T5_5<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_T5_5<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_pade_fma_T5_5<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T5_5_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T5_5_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_T5_5_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_T5_5<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_T5_5<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_T5_5<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_quart_fma_T5_5<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_T5_5_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_T5_5_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_T5_5_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_ec_T5_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T5_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_ec_T5_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_ec_T5_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_fma_ec_T5_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T5_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_ec_T5_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T5_5<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T5_5<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_ec_T5_5<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_ec_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_pade_fma_ec_T5_5<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T5_5_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_ec_T5_5_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_ec_T5_5<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T5_5<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_ec_T5_5<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_ec_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_quart_fma_ec_T5_5<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T5_5_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_ec_T5_5_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_T5_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_T5_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_T5_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_T5_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_fma_T5_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_T5_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_T5_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_T5_5<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T5_5<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_T5_5<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_pade_fma_T5_5<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T5_5_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T5_5_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_T5_5_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_T5_5<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_T5_5<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_T5_5<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_quart_fma_T5_5<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_T5_5_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_T5_5_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_T5_5_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_ec_T5_0<float>";
entry.accuracy_test<float>(sin_remez_fma_ec_T5_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_ec_T5_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_ec_T5_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_fma_ec_T5_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_ec_T5_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_ec_T5_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_ec_T5_5<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T5_5<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_ec_T5_5<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_ec_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_pade_fma_ec_T5_5<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T5_5_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_ec_T5_5_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_ec_T5_5<float>";
entry.accuracy_test<float>(sin_quart_fma_ec_T5_5<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_ec_T5_5<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_ec_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_quart_fma_ec_T5_5<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(sin_quart_fma_ec_T5_5_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_ec_T5_5_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_T5_0<float>";
entry.accuracy_test<float>(sin_remez_fma_T5_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T5_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_T5_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_fma_T5_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_T5_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T5_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_T5_5<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_T5_5<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T5_5<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_pade_fma_T5_5<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_T5_5_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_T5_5_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T5_5_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_T5_5<float>";
entry.accuracy_test<float>(sin_quart_fma_T5_5<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T5_5<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_quart_fma_T5_5<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_T5_5_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T5_5_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T5_5_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_ec_T6_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T6_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_ec_T6_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_ec_T6_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_fma_ec_T6_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_ec_T6_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_ec_T6_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T6_6<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T6_6<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_ec_T6_6<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_ec_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_pade_fma_ec_T6_6<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_ec_T6_6_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_ec_T6_6_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_ec_T6_6<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T6_6<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_ec_T6_6<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_ec_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_quart_fma_ec_T6_6<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_ec_T6_6_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_ec_T6_6_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez", "float", "scalar",  };
entry.subName = "sin_unit1_remez_fma_T6_0<float>";
entry.accuracy_test<float>(sin_unit1_remez_fma_T6_0<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_T6_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_fma_T6_0<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_fma_T6_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez", "float", "simd",  };
entry.subName = "sin_unit1_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_fma_T6_0_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_fma_T6_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit1_remez_pade_fma_T6_6<float>";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T6_6<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_T6_6<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_remez_pade_fma_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_remez_pade_fma_T6_6<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit1_remez_pade_fma_T6_6_float_simd";
entry.accuracy_test<float>(sin_unit1_remez_pade_fma_T6_6_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_remez_pade_fma_T6_6_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "float", "scalar",  };
entry.subName = "sin_unit1_quart_fma_T6_6<float>";
entry.accuracy_test<float>(sin_unit1_quart_fma_T6_6<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_T6_6<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "float2x4", "simd",  };
entry.subName = "sin_unit1_quart_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit1_quart_fma_T6_6<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit1", "float", "simd",  };
entry.subName = "sin_unit1_quart_fma_T6_6_float_simd";
entry.accuracy_test<float>(sin_unit1_quart_fma_T6_6_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit1_quart_fma_T6_6_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_ec_T6_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T6_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_ec_T6_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_ec_T6_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_fma_ec_T6_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_ec_T6_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_ec_T6_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T6_6<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T6_6<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_ec_T6_6<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_ec_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_pade_fma_ec_T6_6<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_ec_T6_6_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_ec_T6_6_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_ec_T6_6<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T6_6<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_ec_T6_6<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_ec_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_quart_fma_ec_T6_6<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_ec_T6_6_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_ec_T6_6_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez", "float", "scalar",  };
entry.subName = "sin_unit2_remez_fma_T6_0<float>";
entry.accuracy_test<float>(sin_unit2_remez_fma_T6_0<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_T6_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_fma_T6_0<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_fma_T6_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez", "float", "simd",  };
entry.subName = "sin_unit2_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_fma_T6_0_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_fma_T6_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "sin_unit2_remez_pade_fma_T6_6<float>";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T6_6<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_T6_6<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_remez_pade_fma_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_remez_pade_fma_T6_6<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "remez_pade", "float", "simd",  };
entry.subName = "sin_unit2_remez_pade_fma_T6_6_float_simd";
entry.accuracy_test<float>(sin_unit2_remez_pade_fma_T6_6_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_remez_pade_fma_T6_6_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "float", "scalar",  };
entry.subName = "sin_unit2_quart_fma_T6_6<float>";
entry.accuracy_test<float>(sin_unit2_quart_fma_T6_6<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_T6_6<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "float2x4", "simd",  };
entry.subName = "sin_unit2_quart_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_unit2_quart_fma_T6_6<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin_unit2", "float", "simd",  };
entry.subName = "sin_unit2_quart_fma_T6_6_float_simd";
entry.accuracy_test<float>(sin_unit2_quart_fma_T6_6_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_unit2_quart_fma_T6_6_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_ec_T6_0<float>";
entry.accuracy_test<float>(sin_remez_fma_ec_T6_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_ec_T6_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_ec_T6_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_fma_ec_T6_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_ec_T6_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_ec_T6_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_ec_T6_6<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T6_6<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_ec_T6_6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_ec_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_pade_fma_ec_T6_6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_ec_T6_6_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_ec_T6_6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_ec_T6_6<float>";
entry.accuracy_test<float>(sin_quart_fma_ec_T6_6<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_ec_T6_6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_ec_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_quart_fma_ec_T6_6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(sin_quart_fma_ec_T6_6_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_ec_T6_6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez", "float", "scalar",  };
entry.subName = "sin_remez_fma_T6_0<float>";
entry.accuracy_test<float>(sin_remez_fma_T6_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T6_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_T6_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_fma_T6_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez", "float", "simd",  };
entry.subName = "sin_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_T6_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T6_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez_pade", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_T6_6<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_T6_6<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T6_6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez_pade", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_pade_fma_T6_6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "remez_pade", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_T6_6_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_T6_6_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T6_6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_T6_6<float>";
entry.accuracy_test<float>(sin_quart_fma_T6_6<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T6_6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_quart_fma_T6_6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_T6_6_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T6_6_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T6_6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_ec_T2_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T2_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_ec_T2_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T2_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_ec_T2_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_fma_ec_T2_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T2_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T2_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_ec_T2_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T2_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T2_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_ec_T2_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T2_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_ec_T2_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_pade_fma_ec_T2_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T2_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T2_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_ec_T2_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_ec_T2_2<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T2_2<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_ec_T2_2<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_ec_T2_2<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_quart_fma_ec_T2_2<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T2_2_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T2_2_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_ec_T2_2_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_half_fma_ec_T2_2<float>";
entry.accuracy_test<float>(cos_unit1_half_fma_ec_T2_2<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_half_fma_ec_T2_2<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_half_fma_ec_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_half_fma_ec_T2_2<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_half_fma_ec_T2_2<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_half_fma_ec_T2_2_float_simd";
entry.accuracy_test<float>(cos_unit1_half_fma_ec_T2_2_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_half_fma_ec_T2_2_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_T2_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_T2_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_T2_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_T2_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_T2_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_fma_T2_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_T2_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_T2_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_T2_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_T2_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T2_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_T2_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T2_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_T2_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_pade_fma_T2_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T2_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T2_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_T2_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_T2_2<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_T2_2<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_T2_2<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_T2_2<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_quart_fma_T2_2<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_T2_2_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_T2_2_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_T2_2_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_half_fma_T2_2<float>";
entry.accuracy_test<float>(cos_unit1_half_fma_T2_2<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_half_fma_T2_2<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_half_fma_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_half_fma_T2_2<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_half_fma_T2_2<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_half_fma_T2_2_float_simd";
entry.accuracy_test<float>(cos_unit1_half_fma_T2_2_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_half_fma_T2_2_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_ec_T2_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T2_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_ec_T2_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T2_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_ec_T2_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_fma_ec_T2_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T2_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T2_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_ec_T2_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T2_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T2_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_ec_T2_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T2_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_ec_T2_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_pade_fma_ec_T2_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T2_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T2_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_ec_T2_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_ec_T2_2<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T2_2<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_ec_T2_2<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_ec_T2_2<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_quart_fma_ec_T2_2<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T2_2_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T2_2_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_ec_T2_2_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_half_fma_ec_T2_2<float>";
entry.accuracy_test<float>(cos_unit2_half_fma_ec_T2_2<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_half_fma_ec_T2_2<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_half_fma_ec_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_half_fma_ec_T2_2<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_half_fma_ec_T2_2<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_half_fma_ec_T2_2_float_simd";
entry.accuracy_test<float>(cos_unit2_half_fma_ec_T2_2_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_half_fma_ec_T2_2_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_T2_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_T2_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_T2_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_T2_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_T2_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_fma_T2_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_T2_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_T2_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_T2_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_T2_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T2_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_T2_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T2_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_T2_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_pade_fma_T2_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T2_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T2_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_T2_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_T2_2<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_T2_2<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_T2_2<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_T2_2<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_quart_fma_T2_2<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_T2_2_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_T2_2_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_T2_2_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_half_fma_T2_2<float>";
entry.accuracy_test<float>(cos_unit2_half_fma_T2_2<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_half_fma_T2_2<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_half_fma_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_half_fma_T2_2<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_half_fma_T2_2<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_half_fma_T2_2_float_simd";
entry.accuracy_test<float>(cos_unit2_half_fma_T2_2_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_half_fma_T2_2_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_ec_T2_0<float>";
entry.accuracy_test<float>(cos_remez_fma_ec_T2_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_ec_T2_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_ec_T2_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_ec_T2_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_fma_ec_T2_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_ec_T2_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_ec_T2_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_ec_T2_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_ec_T2_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T2_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_ec_T2_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T2_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_ec_T2_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_pade_fma_ec_T2_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T2_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T2_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_ec_T2_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_ec_T2_2<float>";
entry.accuracy_test<float>(cos_quart_fma_ec_T2_2<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_ec_T2_2<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_ec_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_ec_T2_2<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_quart_fma_ec_T2_2<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_ec_T2_2_float_simd";
entry.accuracy_test<float>(cos_quart_fma_ec_T2_2_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_ec_T2_2_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float", "scalar",  };
entry.subName = "cos_half_fma_ec_T2_2<float>";
entry.accuracy_test<float>(cos_half_fma_ec_T2_2<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_half_fma_ec_T2_2<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float2x4", "simd",  };
entry.subName = "cos_half_fma_ec_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_half_fma_ec_T2_2<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_half_fma_ec_T2_2<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float", "simd",  };
entry.subName = "cos_half_fma_ec_T2_2_float_simd";
entry.accuracy_test<float>(cos_half_fma_ec_T2_2_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_half_fma_ec_T2_2_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_T2_0<float>";
entry.accuracy_test<float>(cos_remez_fma_T2_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_T2_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_T2_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_T2_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_fma_T2_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_T2_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_T2_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_T2_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_T2_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_T2_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_T2_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_T2_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_T2_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_pade_fma_T2_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_T2_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_T2_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_T2_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_T2_2<float>";
entry.accuracy_test<float>(cos_quart_fma_T2_2<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_T2_2<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_T2_2<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_quart_fma_T2_2<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_T2_2_float_simd";
entry.accuracy_test<float>(cos_quart_fma_T2_2_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_T2_2_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float", "scalar",  };
entry.subName = "cos_half_fma_T2_2<float>";
entry.accuracy_test<float>(cos_half_fma_T2_2<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_half_fma_T2_2<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float2x4", "simd",  };
entry.subName = "cos_half_fma_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_half_fma_T2_2<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_half_fma_T2_2<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float", "simd",  };
entry.subName = "cos_half_fma_T2_2_float_simd";
entry.accuracy_test<float>(cos_half_fma_T2_2_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_half_fma_T2_2_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_ec_T3_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T3_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_ec_T3_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_ec_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_fma_ec_T3_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T3_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_ec_T3_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T3_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T3_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_ec_T3_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_ec_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_pade_fma_ec_T3_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T3_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_ec_T3_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_ec_T3_3<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T3_3<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_ec_T3_3<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_ec_T3_3<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_quart_fma_ec_T3_3<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T3_3_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_ec_T3_3_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_T3_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_T3_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_T3_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_fma_T3_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_T3_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_T3_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_T3_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T3_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_T3_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_pade_fma_T3_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T3_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T3_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_T3_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_T3_3<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_T3_3<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_T3_3<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_T3_3<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_quart_fma_T3_3<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_T3_3_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_T3_3_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_T3_3_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_ec_T3_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T3_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_ec_T3_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_ec_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_fma_ec_T3_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T3_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_ec_T3_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T3_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T3_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_ec_T3_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_ec_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_pade_fma_ec_T3_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T3_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_ec_T3_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_ec_T3_3<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T3_3<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_ec_T3_3<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_ec_T3_3<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_quart_fma_ec_T3_3<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T3_3_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_ec_T3_3_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_T3_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_T3_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_T3_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_fma_T3_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_T3_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_T3_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_T3_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T3_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_T3_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_pade_fma_T3_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T3_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T3_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_T3_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_T3_3<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_T3_3<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_T3_3<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_T3_3<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_quart_fma_T3_3<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_T3_3_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_T3_3_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_T3_3_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_ec_T3_0<float>";
entry.accuracy_test<float>(cos_remez_fma_ec_T3_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_ec_T3_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_ec_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_fma_ec_T3_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_ec_T3_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_ec_T3_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_ec_T3_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T3_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_ec_T3_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_ec_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_pade_fma_ec_T3_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T3_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_ec_T3_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_ec_T3_3<float>";
entry.accuracy_test<float>(cos_quart_fma_ec_T3_3<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_ec_T3_3<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_ec_T3_3<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_quart_fma_ec_T3_3<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(cos_quart_fma_ec_T3_3_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_ec_T3_3_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_T3_0<float>";
entry.accuracy_test<float>(cos_remez_fma_T3_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_T3_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_fma_T3_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_T3_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_T3_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_T3_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_T3_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_T3_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_T3_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_pade_fma_T3_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_T3_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_T3_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_T3_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_T3_3<float>";
entry.accuracy_test<float>(cos_quart_fma_T3_3<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_T3_3<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_T3_3<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_quart_fma_T3_3<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_T3_3_float_simd";
entry.accuracy_test<float>(cos_quart_fma_T3_3_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_T3_3_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_ec_T4_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T4_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_ec_T4_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_ec_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_fma_ec_T4_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T4_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_ec_T4_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T4_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T4_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_ec_T4_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_ec_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_pade_fma_ec_T4_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T4_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_ec_T4_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_ec_T4_4<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T4_4<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_ec_T4_4<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_ec_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_quart_fma_ec_T4_4<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T4_4_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_ec_T4_4_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_half_fma_ec_T4_4<float>";
entry.accuracy_test<float>(cos_unit1_half_fma_ec_T4_4<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_half_fma_ec_T4_4<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_half_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_half_fma_ec_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_half_fma_ec_T4_4<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_half_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(cos_unit1_half_fma_ec_T4_4_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_half_fma_ec_T4_4_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_T4_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_T4_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_T4_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_fma_T4_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_T4_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_T4_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_T4_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T4_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_T4_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_pade_fma_T4_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T4_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T4_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_T4_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_T4_4<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_T4_4<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_T4_4<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_quart_fma_T4_4<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_T4_4_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_T4_4_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_T4_4_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_half_fma_T4_4<float>";
entry.accuracy_test<float>(cos_unit1_half_fma_T4_4<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_half_fma_T4_4<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_half_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_half_fma_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_half_fma_T4_4<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_half_fma_T4_4_float_simd";
entry.accuracy_test<float>(cos_unit1_half_fma_T4_4_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_half_fma_T4_4_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_ec_T4_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T4_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_ec_T4_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_ec_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_fma_ec_T4_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T4_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_ec_T4_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T4_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T4_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_ec_T4_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_ec_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_pade_fma_ec_T4_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T4_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_ec_T4_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_ec_T4_4<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T4_4<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_ec_T4_4<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_ec_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_quart_fma_ec_T4_4<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T4_4_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_ec_T4_4_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_half_fma_ec_T4_4<float>";
entry.accuracy_test<float>(cos_unit2_half_fma_ec_T4_4<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_half_fma_ec_T4_4<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_half_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_half_fma_ec_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_half_fma_ec_T4_4<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_half_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(cos_unit2_half_fma_ec_T4_4_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_half_fma_ec_T4_4_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_T4_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_T4_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_T4_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_fma_T4_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_T4_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_T4_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_T4_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T4_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_T4_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_pade_fma_T4_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T4_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T4_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_T4_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_T4_4<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_T4_4<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_T4_4<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_quart_fma_T4_4<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_T4_4_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_T4_4_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_T4_4_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_half_fma_T4_4<float>";
entry.accuracy_test<float>(cos_unit2_half_fma_T4_4<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_half_fma_T4_4<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_half_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_half_fma_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_half_fma_T4_4<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_half_fma_T4_4_float_simd";
entry.accuracy_test<float>(cos_unit2_half_fma_T4_4_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_half_fma_T4_4_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_ec_T4_0<float>";
entry.accuracy_test<float>(cos_remez_fma_ec_T4_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_ec_T4_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_ec_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_fma_ec_T4_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_ec_T4_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_ec_T4_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_ec_T4_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T4_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_ec_T4_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_ec_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_pade_fma_ec_T4_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T4_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_ec_T4_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_ec_T4_4<float>";
entry.accuracy_test<float>(cos_quart_fma_ec_T4_4<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_ec_T4_4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_ec_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_quart_fma_ec_T4_4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(cos_quart_fma_ec_T4_4_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_ec_T4_4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float", "scalar",  };
entry.subName = "cos_half_fma_ec_T4_4<float>";
entry.accuracy_test<float>(cos_half_fma_ec_T4_4<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_half_fma_ec_T4_4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float2x4", "simd",  };
entry.subName = "cos_half_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_half_fma_ec_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_half_fma_ec_T4_4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float", "simd",  };
entry.subName = "cos_half_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(cos_half_fma_ec_T4_4_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_half_fma_ec_T4_4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_T4_0<float>";
entry.accuracy_test<float>(cos_remez_fma_T4_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_T4_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_fma_T4_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_T4_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_T4_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_T4_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_T4_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_T4_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_T4_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_pade_fma_T4_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_T4_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_T4_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_T4_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_T4_4<float>";
entry.accuracy_test<float>(cos_quart_fma_T4_4<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_T4_4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_quart_fma_T4_4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_T4_4_float_simd";
entry.accuracy_test<float>(cos_quart_fma_T4_4_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_T4_4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float", "scalar",  };
entry.subName = "cos_half_fma_T4_4<float>";
entry.accuracy_test<float>(cos_half_fma_T4_4<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_half_fma_T4_4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float2x4", "simd",  };
entry.subName = "cos_half_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_half_fma_T4_4<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_half_fma_T4_4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float", "simd",  };
entry.subName = "cos_half_fma_T4_4_float_simd";
entry.accuracy_test<float>(cos_half_fma_T4_4_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_half_fma_T4_4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_ec_T5_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T5_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_ec_T5_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_ec_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_fma_ec_T5_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T5_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_ec_T5_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T5_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T5_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_ec_T5_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_ec_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_pade_fma_ec_T5_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T5_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_ec_T5_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_ec_T5_5<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T5_5<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_ec_T5_5<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_ec_T5_5<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_quart_fma_ec_T5_5<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T5_5_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_ec_T5_5_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_T5_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_T5_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_T5_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_fma_T5_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_T5_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_T5_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_T5_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T5_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_T5_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_pade_fma_T5_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T5_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T5_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_T5_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_T5_5<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_T5_5<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_T5_5<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_T5_5<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_quart_fma_T5_5<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_T5_5_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_T5_5_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_T5_5_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_ec_T5_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T5_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_ec_T5_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_ec_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_fma_ec_T5_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T5_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_ec_T5_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T5_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T5_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_ec_T5_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_ec_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_pade_fma_ec_T5_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T5_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_ec_T5_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_ec_T5_5<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T5_5<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_ec_T5_5<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_ec_T5_5<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_quart_fma_ec_T5_5<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T5_5_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_ec_T5_5_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_T5_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_T5_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_T5_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_fma_T5_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_T5_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_T5_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_T5_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T5_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_T5_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_pade_fma_T5_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T5_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T5_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_T5_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_T5_5<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_T5_5<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_T5_5<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_T5_5<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_quart_fma_T5_5<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_T5_5_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_T5_5_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_T5_5_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_ec_T5_0<float>";
entry.accuracy_test<float>(cos_remez_fma_ec_T5_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_ec_T5_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_ec_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_fma_ec_T5_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_ec_T5_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_ec_T5_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_ec_T5_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T5_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_ec_T5_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_ec_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_pade_fma_ec_T5_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T5_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_ec_T5_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_ec_T5_5<float>";
entry.accuracy_test<float>(cos_quart_fma_ec_T5_5<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_ec_T5_5<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_ec_T5_5<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_quart_fma_ec_T5_5<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(cos_quart_fma_ec_T5_5_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_ec_T5_5_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_T5_0<float>";
entry.accuracy_test<float>(cos_remez_fma_T5_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_T5_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_fma_T5_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_T5_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_T5_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_T5_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_T5_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_T5_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_T5_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_pade_fma_T5_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_T5_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_T5_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_T5_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_T5_5<float>";
entry.accuracy_test<float>(cos_quart_fma_T5_5<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_T5_5<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_T5_5<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_quart_fma_T5_5<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_T5_5_float_simd";
entry.accuracy_test<float>(cos_quart_fma_T5_5_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_T5_5_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_ec_T6_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T6_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_ec_T6_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_ec_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_fma_ec_T6_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_ec_T6_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_ec_T6_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T6_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T6_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_ec_T6_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_ec_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_pade_fma_ec_T6_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_ec_T6_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_ec_T6_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_ec_T6_6<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T6_6<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_ec_T6_6<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_ec_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_quart_fma_ec_T6_6<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_ec_T6_6_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_ec_T6_6_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_half_fma_ec_T6_6<float>";
entry.accuracy_test<float>(cos_unit1_half_fma_ec_T6_6<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_half_fma_ec_T6_6<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_half_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_half_fma_ec_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_half_fma_ec_T6_6<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_half_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(cos_unit1_half_fma_ec_T6_6_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_half_fma_ec_T6_6_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez", "float", "scalar",  };
entry.subName = "cos_unit1_remez_fma_T6_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_fma_T6_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_T6_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_fma_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_fma_T6_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez", "float", "simd",  };
entry.subName = "cos_unit1_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_fma_T6_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_fma_T6_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit1_remez_pade_fma_T6_0<float>";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T6_0<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_T6_0<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_remez_pade_fma_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_remez_pade_fma_T6_0<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit1_remez_pade_fma_T6_0_float_simd";
entry.accuracy_test<float>(cos_unit1_remez_pade_fma_T6_0_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_remez_pade_fma_T6_0_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_quart_fma_T6_6<float>";
entry.accuracy_test<float>(cos_unit1_quart_fma_T6_6<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_T6_6<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_quart_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_quart_fma_T6_6<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_quart_fma_T6_6_float_simd";
entry.accuracy_test<float>(cos_unit1_quart_fma_T6_6_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_quart_fma_T6_6_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float", "scalar",  };
entry.subName = "cos_unit1_half_fma_T6_6<float>";
entry.accuracy_test<float>(cos_unit1_half_fma_T6_6<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_half_fma_T6_6<float>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float2x4", "simd",  };
entry.subName = "cos_unit1_half_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit1_half_fma_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit1_half_fma_T6_6<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit1", "float", "simd",  };
entry.subName = "cos_unit1_half_fma_T6_6_float_simd";
entry.accuracy_test<float>(cos_unit1_half_fma_T6_6_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit1_half_fma_T6_6_float_simd, M, 0.0f, 1.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_ec_T6_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T6_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_ec_T6_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_ec_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_fma_ec_T6_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_ec_T6_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_ec_T6_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T6_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T6_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_ec_T6_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_ec_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_pade_fma_ec_T6_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_ec_T6_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_ec_T6_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_ec_T6_6<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T6_6<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_ec_T6_6<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_ec_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_quart_fma_ec_T6_6<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_ec_T6_6_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_ec_T6_6_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_half_fma_ec_T6_6<float>";
entry.accuracy_test<float>(cos_unit2_half_fma_ec_T6_6<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_half_fma_ec_T6_6<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_half_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_half_fma_ec_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_half_fma_ec_T6_6<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_half_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(cos_unit2_half_fma_ec_T6_6_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_half_fma_ec_T6_6_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez", "float", "scalar",  };
entry.subName = "cos_unit2_remez_fma_T6_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_fma_T6_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_T6_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_fma_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_fma_T6_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez", "float", "simd",  };
entry.subName = "cos_unit2_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_fma_T6_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_fma_T6_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "scalar",  };
entry.subName = "cos_unit2_remez_pade_fma_T6_0<float>";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T6_0<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_T6_0<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_remez_pade_fma_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_remez_pade_fma_T6_0<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "remez_pade", "float", "simd",  };
entry.subName = "cos_unit2_remez_pade_fma_T6_0_float_simd";
entry.accuracy_test<float>(cos_unit2_remez_pade_fma_T6_0_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_remez_pade_fma_T6_0_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_quart_fma_T6_6<float>";
entry.accuracy_test<float>(cos_unit2_quart_fma_T6_6<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_T6_6<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_quart_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_quart_fma_T6_6<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_quart_fma_T6_6_float_simd";
entry.accuracy_test<float>(cos_unit2_quart_fma_T6_6_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_quart_fma_T6_6_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float", "scalar",  };
entry.subName = "cos_unit2_half_fma_T6_6<float>";
entry.accuracy_test<float>(cos_unit2_half_fma_T6_6<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_half_fma_T6_6<float>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float2x4", "simd",  };
entry.subName = "cos_unit2_half_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_unit2_half_fma_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_unit2_half_fma_T6_6<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos_unit2", "float", "simd",  };
entry.subName = "cos_unit2_half_fma_T6_6_float_simd";
entry.accuracy_test<float>(cos_unit2_half_fma_T6_6_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_unit2_half_fma_T6_6_float_simd, M, 0.0f, 2.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_ec_T6_0<float>";
entry.accuracy_test<float>(cos_remez_fma_ec_T6_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_ec_T6_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_ec_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_fma_ec_T6_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_ec_T6_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_ec_T6_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_ec_T6_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T6_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_ec_T6_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_ec_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_pade_fma_ec_T6_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_ec_T6_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_ec_T6_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_ec_T6_6<float>";
entry.accuracy_test<float>(cos_quart_fma_ec_T6_6<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_ec_T6_6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_ec_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_quart_fma_ec_T6_6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(cos_quart_fma_ec_T6_6_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_ec_T6_6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float", "scalar",  };
entry.subName = "cos_half_fma_ec_T6_6<float>";
entry.accuracy_test<float>(cos_half_fma_ec_T6_6<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_half_fma_ec_T6_6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float2x4", "simd",  };
entry.subName = "cos_half_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_half_fma_ec_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_half_fma_ec_T6_6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "cos", "float", "simd",  };
entry.subName = "cos_half_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(cos_half_fma_ec_T6_6_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_half_fma_ec_T6_6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez", "float", "scalar",  };
entry.subName = "cos_remez_fma_T6_0<float>";
entry.accuracy_test<float>(cos_remez_fma_T6_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_T6_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez", "float2x4", "simd",  };
entry.subName = "cos_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_fma_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_fma_T6_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez", "float", "simd",  };
entry.subName = "cos_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(cos_remez_fma_T6_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_fma_T6_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez_pade", "float", "scalar",  };
entry.subName = "cos_remez_pade_fma_T6_0<float>";
entry.accuracy_test<float>(cos_remez_pade_fma_T6_0<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_T6_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez_pade", "float2x4", "simd",  };
entry.subName = "cos_remez_pade_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_remez_pade_fma_T6_0<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_remez_pade_fma_T6_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "remez_pade", "float", "simd",  };
entry.subName = "cos_remez_pade_fma_T6_0_float_simd";
entry.accuracy_test<float>(cos_remez_pade_fma_T6_0_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_remez_pade_fma_T6_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float", "scalar",  };
entry.subName = "cos_quart_fma_T6_6<float>";
entry.accuracy_test<float>(cos_quart_fma_T6_6<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_T6_6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float2x4", "simd",  };
entry.subName = "cos_quart_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_quart_fma_T6_6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float", "simd",  };
entry.subName = "cos_quart_fma_T6_6_float_simd";
entry.accuracy_test<float>(cos_quart_fma_T6_6_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_quart_fma_T6_6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float", "scalar",  };
entry.subName = "cos_half_fma_T6_6<float>";
entry.accuracy_test<float>(cos_half_fma_T6_6<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_half_fma_T6_6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float2x4", "simd",  };
entry.subName = "cos_half_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(cos_half_fma_T6_6<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(cos_half_fma_T6_6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "cos", "float", "simd",  };
entry.subName = "cos_half_fma_T6_6_float_simd";
entry.accuracy_test<float>(cos_half_fma_T6_6_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(cos_half_fma_T6_6_float_simd, M, 0.0f, 6.283185307179586f);
}
