{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_ec_T3_0<float>";
entry.accuracy_test<float>(log_remez_fma_ec_T3_0<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_ec_T3_0<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_ec_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_ec_T3_0<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_fma_ec_T3_0<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_ec_T3_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_ec_T3_0_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_ec_T3_0_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_ec_T3_3<float>";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T3_3<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_ec_T3_3<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_ec_T3_3<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_pade_fma_ec_T3_3<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T3_3_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_ec_T3_3_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_T3_0<float>";
entry.accuracy_test<float>(log_remez_fma_T3_0<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_T3_0<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_T3_0<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_fma_T3_0<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_T3_0_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_T3_0_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_T3_3<float>";
entry.accuracy_test<float>(log_remez_pade_fma_T3_3<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_T3_3<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_T3_3<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_pade_fma_T3_3<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_T3_3_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_T3_3_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_T3_3_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_fma_ec_T3_3<float>";
entry.accuracy_test<float>(log_fma_ec_T3_3<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_ec_T3_3<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_ec_T3_3<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_fma_ec_T3_3<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float", "simd",  };
entry.subName = "log_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(log_fma_ec_T3_3_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_ec_T3_3_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float", "scalar",  };
entry.subName = "log_fma_T3_3<float>";
entry.accuracy_test<float>(log_fma_T3_3<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_T3_3<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float2x4", "simd",  };
entry.subName = "log_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_T3_3<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_fma_T3_3<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float", "simd",  };
entry.subName = "log_fma_T3_3_float_simd";
entry.accuracy_test<float>(log_fma_T3_3_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_T3_3_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_ec_T4_0<float>";
entry.accuracy_test<float>(log_remez_fma_ec_T4_0<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_ec_T4_0<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_ec_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_ec_T4_0<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_fma_ec_T4_0<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_ec_T4_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_ec_T4_0_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_ec_T4_0_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_ec_T4_4<float>";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T4_4<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_ec_T4_4<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_ec_T4_4<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_pade_fma_ec_T4_4<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T4_4_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_ec_T4_4_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_T4_0<float>";
entry.accuracy_test<float>(log_remez_fma_T4_0<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_T4_0<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_T4_0<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_fma_T4_0<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_T4_0_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_T4_0_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_T4_4<float>";
entry.accuracy_test<float>(log_remez_pade_fma_T4_4<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_T4_4<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_T4_4<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_pade_fma_T4_4<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_T4_4_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_T4_4_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_T4_4_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_fma_ec_T4_4<float>";
entry.accuracy_test<float>(log_fma_ec_T4_4<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_ec_T4_4<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_ec_T4_4<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_fma_ec_T4_4<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float", "simd",  };
entry.subName = "log_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(log_fma_ec_T4_4_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_ec_T4_4_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float", "scalar",  };
entry.subName = "log_fma_T4_4<float>";
entry.accuracy_test<float>(log_fma_T4_4<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_T4_4<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float2x4", "simd",  };
entry.subName = "log_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_T4_4<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_fma_T4_4<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float", "simd",  };
entry.subName = "log_fma_T4_4_float_simd";
entry.accuracy_test<float>(log_fma_T4_4_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_T4_4_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_ec_T5_0<float>";
entry.accuracy_test<float>(log_remez_fma_ec_T5_0<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_ec_T5_0<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_ec_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_ec_T5_0<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_fma_ec_T5_0<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_ec_T5_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_ec_T5_0_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_ec_T5_0_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_ec_T5_5<float>";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T5_5<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_ec_T5_5<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_ec_T5_5<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_pade_fma_ec_T5_5<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T5_5_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_ec_T5_5_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_T5_0<float>";
entry.accuracy_test<float>(log_remez_fma_T5_0<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_T5_0<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_T5_0<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_fma_T5_0<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_T5_0_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_T5_0_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_T5_5<float>";
entry.accuracy_test<float>(log_remez_pade_fma_T5_5<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_T5_5<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_T5_5<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_pade_fma_T5_5<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_T5_5_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_T5_5_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_T5_5_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_fma_ec_T5_5<float>";
entry.accuracy_test<float>(log_fma_ec_T5_5<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_ec_T5_5<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_ec_T5_5<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_fma_ec_T5_5<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float", "simd",  };
entry.subName = "log_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(log_fma_ec_T5_5_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_ec_T5_5_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float", "scalar",  };
entry.subName = "log_fma_T5_5<float>";
entry.accuracy_test<float>(log_fma_T5_5<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_T5_5<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float2x4", "simd",  };
entry.subName = "log_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_T5_5<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_fma_T5_5<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float", "simd",  };
entry.subName = "log_fma_T5_5_float_simd";
entry.accuracy_test<float>(log_fma_T5_5_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_T5_5_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_ec_T6_0<float>";
entry.accuracy_test<float>(log_remez_fma_ec_T6_0<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_ec_T6_0<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_ec_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_ec_T6_0<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_fma_ec_T6_0<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_ec_T6_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_ec_T6_0_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_ec_T6_0_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_ec_T6_6<float>";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T6_6<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_ec_T6_6<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_ec_T6_6<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_pade_fma_ec_T6_6<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T6_6_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_ec_T6_6_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_T6_0<float>";
entry.accuracy_test<float>(log_remez_fma_T6_0<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_T6_0<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_T6_0<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_fma_T6_0<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_T6_0_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_T6_0_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_T6_6<float>";
entry.accuracy_test<float>(log_remez_pade_fma_T6_6<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_T6_6<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_T6_6<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_pade_fma_T6_6<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_T6_6_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_T6_6_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_T6_6_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_fma_ec_T6_6<float>";
entry.accuracy_test<float>(log_fma_ec_T6_6<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_ec_T6_6<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_ec_T6_6<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_fma_ec_T6_6<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float", "simd",  };
entry.subName = "log_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(log_fma_ec_T6_6_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_ec_T6_6_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float", "scalar",  };
entry.subName = "log_fma_T6_6<float>";
entry.accuracy_test<float>(log_fma_T6_6<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_T6_6<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float2x4", "simd",  };
entry.subName = "log_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_T6_6<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_fma_T6_6<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float", "simd",  };
entry.subName = "log_fma_T6_6_float_simd";
entry.accuracy_test<float>(log_fma_T6_6_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_T6_6_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_ec_T7_0<float>";
entry.accuracy_test<float>(log_remez_fma_ec_T7_0<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_ec_T7_0<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_ec_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_ec_T7_0<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_fma_ec_T7_0<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_ec_T7_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_ec_T7_0_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_ec_T7_0_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_ec_T7_7<float>";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T7_7<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_ec_T7_7<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_ec_T7_7<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_pade_fma_ec_T7_7<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T7_7_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_ec_T7_7_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_T7_0<float>";
entry.accuracy_test<float>(log_remez_fma_T7_0<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_T7_0<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_T7_0<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_fma_T7_0<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_T7_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_T7_0_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_T7_0_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_T7_7<float>";
entry.accuracy_test<float>(log_remez_pade_fma_T7_7<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_T7_7<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_T7_7<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_pade_fma_T7_7<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_T7_7_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_T7_7_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_T7_7_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_fma_ec_T7_7<float>";
entry.accuracy_test<float>(log_fma_ec_T7_7<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_ec_T7_7<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_ec_T7_7<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_fma_ec_T7_7<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float", "simd",  };
entry.subName = "log_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(log_fma_ec_T7_7_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_ec_T7_7_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float", "scalar",  };
entry.subName = "log_fma_T7_7<float>";
entry.accuracy_test<float>(log_fma_T7_7<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_T7_7<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float2x4", "simd",  };
entry.subName = "log_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_T7_7<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_fma_T7_7<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float", "simd",  };
entry.subName = "log_fma_T7_7_float_simd";
entry.accuracy_test<float>(log_fma_T7_7_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_T7_7_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_ec_T8_0<float>";
entry.accuracy_test<float>(log_remez_fma_ec_T8_0<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_ec_T8_0<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_ec_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_ec_T8_0<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_fma_ec_T8_0<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_ec_T8_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_ec_T8_0_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_ec_T8_0_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_ec_T8_8<float>";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T8_8<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_ec_T8_8<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_ec_T8_8<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_pade_fma_ec_T8_8<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T8_8_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_ec_T8_8_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_T8_0<float>";
entry.accuracy_test<float>(log_remez_fma_T8_0<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_T8_0<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_T8_0<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_fma_T8_0<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_T8_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_T8_0_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_T8_0_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_T8_8<float>";
entry.accuracy_test<float>(log_remez_pade_fma_T8_8<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_T8_8<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_T8_8<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_pade_fma_T8_8<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_T8_8_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_T8_8_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_T8_8_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_fma_ec_T8_8<float>";
entry.accuracy_test<float>(log_fma_ec_T8_8<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_ec_T8_8<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_ec_T8_8<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_fma_ec_T8_8<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float", "simd",  };
entry.subName = "log_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(log_fma_ec_T8_8_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_ec_T8_8_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float", "scalar",  };
entry.subName = "log_fma_T8_8<float>";
entry.accuracy_test<float>(log_fma_T8_8<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_T8_8<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float2x4", "simd",  };
entry.subName = "log_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_T8_8<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_fma_T8_8<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float", "simd",  };
entry.subName = "log_fma_T8_8_float_simd";
entry.accuracy_test<float>(log_fma_T8_8_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_T8_8_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_ec_T9_0<float>";
entry.accuracy_test<float>(log_remez_fma_ec_T9_0<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_ec_T9_0<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_ec_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_ec_T9_0<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_fma_ec_T9_0<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_ec_T9_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_ec_T9_0_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_ec_T9_0_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_ec_T9_9<float>";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T9_9<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_ec_T9_9<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_ec_T9_9<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_pade_fma_ec_T9_9<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_ec_T9_9_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_ec_T9_9_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float", "scalar",  };
entry.subName = "log_remez_fma_T9_0<float>";
entry.accuracy_test<float>(log_remez_fma_T9_0<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_T9_0<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float2x4", "simd",  };
entry.subName = "log_remez_fma_T9_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_fma_T9_0<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_fma_T9_0<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez", "float", "simd",  };
entry.subName = "log_remez_fma_T9_0_float_simd";
entry.accuracy_test<float>(log_remez_fma_T9_0_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_fma_T9_0_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float", "scalar",  };
entry.subName = "log_remez_pade_fma_T9_9<float>";
entry.accuracy_test<float>(log_remez_pade_fma_T9_9<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_T9_9<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float2x4", "simd",  };
entry.subName = "log_remez_pade_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_remez_pade_fma_T9_9<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_remez_pade_fma_T9_9<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "remez_pade", "float", "simd",  };
entry.subName = "log_remez_pade_fma_T9_9_float_simd";
entry.accuracy_test<float>(log_remez_pade_fma_T9_9_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_remez_pade_fma_T9_9_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_fma_ec_T9_9<float>";
entry.accuracy_test<float>(log_fma_ec_T9_9<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_ec_T9_9<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_ec_T9_9<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_fma_ec_T9_9<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "ends corrected", "log", "float", "simd",  };
entry.subName = "log_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(log_fma_ec_T9_9_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_ec_T9_9_float_simd, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float", "scalar",  };
entry.subName = "log_fma_T9_9<float>";
entry.accuracy_test<float>(log_fma_T9_9<float>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_T9_9<float>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float2x4", "simd",  };
entry.subName = "log_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_T9_9<cr::simd::float2x4>, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<cr::simd::float2x4>(log_fma_T9_9<cr::simd::float2x4>, M, 0.01f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "fma", "log", "float", "simd",  };
entry.subName = "log_fma_T9_9_float_simd";
entry.accuracy_test<float>(log_fma_T9_9_float_simd, std::logf, 0.01f, 10.0f, 0.01f, 10.0f);
entry.time<float>(log_fma_T9_9_float_simd, M, 0.01f, 10.0f);
}
