{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan", "float", "scalar",  };
entry.subName = "atan_T3_3<float>";
entry.accuracy_test<float>(atan_T3_3<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>(atan_T3_3<float>, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan", "float2x4", "simd",  };
entry.subName = "atan_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_T3_3<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>(atan_T3_3<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan", "float", "simd",  };
entry.subName = "atan_T3_3_float_simd";
entry.accuracy_test<float>(atan_T3_3_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>(atan_T3_3_float_simd, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan", "float", "scalar",  };
entry.subName = "atan_T12_0<float>";
entry.accuracy_test<float>(atan_T12_0<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>(atan_T12_0<float>, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan", "float2x4", "simd",  };
entry.subName = "atan_T12_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_T12_0<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>(atan_T12_0<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan", "float", "simd",  };
entry.subName = "atan_T12_0_float_simd";
entry.accuracy_test<float>(atan_T12_0_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>(atan_T12_0_float_simd, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan_remez", "float", "scalar",  };
entry.subName = "atan_remez_T3_0<float>";
entry.accuracy_test<float>(atan_remez_T3_0<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>(atan_remez_T3_0<float>, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan_remez", "float2x4", "simd",  };
entry.subName = "atan_remez_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_T3_0<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>(atan_remez_T3_0<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan_remez", "float", "simd",  };
entry.subName = "atan_remez_T3_0_float_simd";
entry.accuracy_test<float>(atan_remez_T3_0_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>(atan_remez_T3_0_float_simd, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan_remez_pade", "float", "scalar",  };
entry.subName = "atan_remez_pade_T3_3<float>";
entry.accuracy_test<float>(atan_remez_pade_T3_3<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>(atan_remez_pade_T3_3<float>, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan_remez_pade", "float2x4", "simd",  };
entry.subName = "atan_remez_pade_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_pade_T3_3<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>(atan_remez_pade_T3_3<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan_remez_pade", "float", "simd",  };
entry.subName = "atan_remez_pade_T3_3_float_simd";
entry.accuracy_test<float>(atan_remez_pade_T3_3_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>(atan_remez_pade_T3_3_float_simd, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan", "fma", "float", "scalar",  };
entry.subName = "atan_fma_T3_3<float>";
entry.accuracy_test<float>(atan_fma_T3_3<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>(atan_fma_T3_3<float>, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan", "fma", "float2x4", "simd",  };
entry.subName = "atan_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_fma_T3_3<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>(atan_fma_T3_3<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan", "fma", "float", "simd",  };
entry.subName = "atan_fma_T3_3_float_simd";
entry.accuracy_test<float>(atan_fma_T3_3_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>(atan_fma_T3_3_float_simd, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan", "fma", "float", "scalar",  };
entry.subName = "atan_fma_T12_0<float>";
entry.accuracy_test<float>(atan_fma_T12_0<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>(atan_fma_T12_0<float>, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan", "fma", "float2x4", "simd",  };
entry.subName = "atan_fma_T12_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_fma_T12_0<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>(atan_fma_T12_0<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan", "fma", "float", "simd",  };
entry.subName = "atan_fma_T12_0_float_simd";
entry.accuracy_test<float>(atan_fma_T12_0_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>(atan_fma_T12_0_float_simd, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan_remez", "fma", "float", "scalar",  };
entry.subName = "atan_remez_fma_T3_0<float>";
entry.accuracy_test<float>(atan_remez_fma_T3_0<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>(atan_remez_fma_T3_0<float>, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan_remez", "fma", "float2x4", "simd",  };
entry.subName = "atan_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_fma_T3_0<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>(atan_remez_fma_T3_0<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan_remez", "fma", "float", "simd",  };
entry.subName = "atan_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(atan_remez_fma_T3_0_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>(atan_remez_fma_T3_0_float_simd, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan_remez_pade", "fma", "float", "scalar",  };
entry.subName = "atan_remez_pade_fma_T3_3<float>";
entry.accuracy_test<float>(atan_remez_pade_fma_T3_3<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>(atan_remez_pade_fma_T3_3<float>, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan_remez_pade", "fma", "float2x4", "simd",  };
entry.subName = "atan_remez_pade_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(atan_remez_pade_fma_T3_3<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<cr::simd::float2x4>(atan_remez_pade_fma_T3_3<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "atan_remez_pade", "fma", "float", "simd",  };
entry.subName = "atan_remez_pade_fma_T3_3_float_simd";
entry.accuracy_test<float>(atan_remez_pade_fma_T3_3_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
entry.time<float>(atan_remez_pade_fma_T3_3_float_simd, M, -10.0f, 10.0f);
}
