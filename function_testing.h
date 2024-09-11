{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez", "fma", "float", "scalar",  };
entry.subName = "sin_remez_fma_T3_0<float>";
entry.accuracy_test<float>(sin_remez_fma_T3_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T3_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez", "fma", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_T3_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_T3_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_fma_T3_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez", "fma", "float", "simd",  };
entry.subName = "sin_remez_fma_T3_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_T3_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T3_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez_pade", "fma", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_T3_3<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_T3_3<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T3_3<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez_pade", "fma", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_pade_fma_T3_3<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez_pade", "fma", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_T3_3_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_T3_3_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T3_3_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "quart", "fma", "float", "scalar",  };
entry.subName = "sin_quart_fma_T3_3<float>";
entry.accuracy_test<float>(sin_quart_fma_T3_3<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T3_3<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "quart", "fma", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_quart_fma_T3_3<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "quart", "fma", "float", "simd",  };
entry.subName = "sin_quart_fma_T3_3_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T3_3_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T3_3_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_ends_corrected", "quart", "fma", "float", "scalar",  };
entry.subName = "sin_ends_corrected_quart_fma_T3_3<float>";
entry.accuracy_test<float>(sin_ends_corrected_quart_fma_T3_3<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_ends_corrected_quart_fma_T3_3<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_ends_corrected", "quart", "fma", "float2x4", "simd",  };
entry.subName = "sin_ends_corrected_quart_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_ends_corrected_quart_fma_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_ends_corrected_quart_fma_T3_3<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_ends_corrected", "quart", "fma", "float", "simd",  };
entry.subName = "sin_ends_corrected_quart_fma_T3_3_float_simd";
entry.accuracy_test<float>(sin_ends_corrected_quart_fma_T3_3_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_ends_corrected_quart_fma_T3_3_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "half", "fma", "float", "scalar",  };
entry.subName = "sin_half_fma_T3_3<float>";
entry.accuracy_test<float>(sin_half_fma_T3_3<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_half_fma_T3_3<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "half", "fma", "float2x4", "simd",  };
entry.subName = "sin_half_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_half_fma_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_half_fma_T3_3<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "half", "fma", "float", "simd",  };
entry.subName = "sin_half_fma_T3_3_float_simd";
entry.accuracy_test<float>(sin_half_fma_T3_3_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_half_fma_T3_3_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez", "fma", "float", "scalar",  };
entry.subName = "sin_remez_fma_T4_0<float>";
entry.accuracy_test<float>(sin_remez_fma_T4_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T4_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez", "fma", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_T4_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_T4_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_fma_T4_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez", "fma", "float", "simd",  };
entry.subName = "sin_remez_fma_T4_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_T4_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T4_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez_pade", "fma", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_T4_4<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_T4_4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T4_4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez_pade", "fma", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_pade_fma_T4_4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez_pade", "fma", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_T4_4_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_T4_4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T4_4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "quart", "fma", "float", "scalar",  };
entry.subName = "sin_quart_fma_T4_4<float>";
entry.accuracy_test<float>(sin_quart_fma_T4_4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T4_4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "quart", "fma", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_quart_fma_T4_4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "quart", "fma", "float", "simd",  };
entry.subName = "sin_quart_fma_T4_4_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T4_4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T4_4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_ends_corrected", "quart", "fma", "float", "scalar",  };
entry.subName = "sin_ends_corrected_quart_fma_T4_4<float>";
entry.accuracy_test<float>(sin_ends_corrected_quart_fma_T4_4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_ends_corrected_quart_fma_T4_4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_ends_corrected", "quart", "fma", "float2x4", "simd",  };
entry.subName = "sin_ends_corrected_quart_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_ends_corrected_quart_fma_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_ends_corrected_quart_fma_T4_4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_ends_corrected", "quart", "fma", "float", "simd",  };
entry.subName = "sin_ends_corrected_quart_fma_T4_4_float_simd";
entry.accuracy_test<float>(sin_ends_corrected_quart_fma_T4_4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_ends_corrected_quart_fma_T4_4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "half", "fma", "float", "scalar",  };
entry.subName = "sin_half_fma_T4_4<float>";
entry.accuracy_test<float>(sin_half_fma_T4_4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_half_fma_T4_4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "half", "fma", "float2x4", "simd",  };
entry.subName = "sin_half_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_half_fma_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_half_fma_T4_4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "half", "fma", "float", "simd",  };
entry.subName = "sin_half_fma_T4_4_float_simd";
entry.accuracy_test<float>(sin_half_fma_T4_4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_half_fma_T4_4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez", "fma", "float", "scalar",  };
entry.subName = "sin_remez_fma_T5_0<float>";
entry.accuracy_test<float>(sin_remez_fma_T5_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T5_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez", "fma", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_T5_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_T5_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_fma_T5_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez", "fma", "float", "simd",  };
entry.subName = "sin_remez_fma_T5_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_T5_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T5_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez_pade", "fma", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_T5_5<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_T5_5<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T5_5<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez_pade", "fma", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_pade_fma_T5_5<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez_pade", "fma", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_T5_5_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_T5_5_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T5_5_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "quart", "fma", "float", "scalar",  };
entry.subName = "sin_quart_fma_T5_5<float>";
entry.accuracy_test<float>(sin_quart_fma_T5_5<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T5_5<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "quart", "fma", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_quart_fma_T5_5<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "quart", "fma", "float", "simd",  };
entry.subName = "sin_quart_fma_T5_5_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T5_5_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T5_5_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_ends_corrected", "quart", "fma", "float", "scalar",  };
entry.subName = "sin_ends_corrected_quart_fma_T5_5<float>";
entry.accuracy_test<float>(sin_ends_corrected_quart_fma_T5_5<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_ends_corrected_quart_fma_T5_5<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_ends_corrected", "quart", "fma", "float2x4", "simd",  };
entry.subName = "sin_ends_corrected_quart_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_ends_corrected_quart_fma_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_ends_corrected_quart_fma_T5_5<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_ends_corrected", "quart", "fma", "float", "simd",  };
entry.subName = "sin_ends_corrected_quart_fma_T5_5_float_simd";
entry.accuracy_test<float>(sin_ends_corrected_quart_fma_T5_5_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_ends_corrected_quart_fma_T5_5_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "half", "fma", "float", "scalar",  };
entry.subName = "sin_half_fma_T5_5<float>";
entry.accuracy_test<float>(sin_half_fma_T5_5<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_half_fma_T5_5<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "half", "fma", "float2x4", "simd",  };
entry.subName = "sin_half_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_half_fma_T5_5<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_half_fma_T5_5<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "half", "fma", "float", "simd",  };
entry.subName = "sin_half_fma_T5_5_float_simd";
entry.accuracy_test<float>(sin_half_fma_T5_5_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_half_fma_T5_5_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez", "fma", "float", "scalar",  };
entry.subName = "sin_remez_fma_T6_0<float>";
entry.accuracy_test<float>(sin_remez_fma_T6_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T6_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez", "fma", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_T6_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_T6_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_fma_T6_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez", "fma", "float", "simd",  };
entry.subName = "sin_remez_fma_T6_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_T6_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T6_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez_pade", "fma", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_T6_6<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_T6_6<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T6_6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez_pade", "fma", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_pade_fma_T6_6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez_pade", "fma", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_T6_6_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_T6_6_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T6_6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "quart", "fma", "float", "scalar",  };
entry.subName = "sin_quart_fma_T6_6<float>";
entry.accuracy_test<float>(sin_quart_fma_T6_6<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T6_6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "quart", "fma", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_quart_fma_T6_6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "quart", "fma", "float", "simd",  };
entry.subName = "sin_quart_fma_T6_6_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T6_6_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T6_6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_ends_corrected", "quart", "fma", "float", "scalar",  };
entry.subName = "sin_ends_corrected_quart_fma_T6_6<float>";
entry.accuracy_test<float>(sin_ends_corrected_quart_fma_T6_6<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_ends_corrected_quart_fma_T6_6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_ends_corrected", "quart", "fma", "float2x4", "simd",  };
entry.subName = "sin_ends_corrected_quart_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_ends_corrected_quart_fma_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_ends_corrected_quart_fma_T6_6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_ends_corrected", "quart", "fma", "float", "simd",  };
entry.subName = "sin_ends_corrected_quart_fma_T6_6_float_simd";
entry.accuracy_test<float>(sin_ends_corrected_quart_fma_T6_6_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_ends_corrected_quart_fma_T6_6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "half", "fma", "float", "scalar",  };
entry.subName = "sin_half_fma_T6_6<float>";
entry.accuracy_test<float>(sin_half_fma_T6_6<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_half_fma_T6_6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "half", "fma", "float2x4", "simd",  };
entry.subName = "sin_half_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_half_fma_T6_6<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_half_fma_T6_6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "half", "fma", "float", "simd",  };
entry.subName = "sin_half_fma_T6_6_float_simd";
entry.accuracy_test<float>(sin_half_fma_T6_6_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_half_fma_T6_6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez", "fma", "float", "scalar",  };
entry.subName = "sin_remez_fma_T7_0<float>";
entry.accuracy_test<float>(sin_remez_fma_T7_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T7_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez", "fma", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_T7_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_T7_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_fma_T7_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez", "fma", "float", "simd",  };
entry.subName = "sin_remez_fma_T7_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_T7_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T7_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez_pade", "fma", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_T7_7<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_T7_7<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T7_7<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez_pade", "fma", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_T7_7<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_pade_fma_T7_7<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez_pade", "fma", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_T7_7_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_T7_7_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T7_7_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "quart", "fma", "float", "scalar",  };
entry.subName = "sin_quart_fma_T7_7<float>";
entry.accuracy_test<float>(sin_quart_fma_T7_7<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T7_7<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "quart", "fma", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T7_7<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_quart_fma_T7_7<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "quart", "fma", "float", "simd",  };
entry.subName = "sin_quart_fma_T7_7_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T7_7_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T7_7_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_ends_corrected", "quart", "fma", "float", "scalar",  };
entry.subName = "sin_ends_corrected_quart_fma_T7_7<float>";
entry.accuracy_test<float>(sin_ends_corrected_quart_fma_T7_7<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_ends_corrected_quart_fma_T7_7<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_ends_corrected", "quart", "fma", "float2x4", "simd",  };
entry.subName = "sin_ends_corrected_quart_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_ends_corrected_quart_fma_T7_7<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_ends_corrected_quart_fma_T7_7<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_ends_corrected", "quart", "fma", "float", "simd",  };
entry.subName = "sin_ends_corrected_quart_fma_T7_7_float_simd";
entry.accuracy_test<float>(sin_ends_corrected_quart_fma_T7_7_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_ends_corrected_quart_fma_T7_7_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "half", "fma", "float", "scalar",  };
entry.subName = "sin_half_fma_T7_7<float>";
entry.accuracy_test<float>(sin_half_fma_T7_7<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_half_fma_T7_7<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "half", "fma", "float2x4", "simd",  };
entry.subName = "sin_half_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_half_fma_T7_7<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_half_fma_T7_7<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "half", "fma", "float", "simd",  };
entry.subName = "sin_half_fma_T7_7_float_simd";
entry.accuracy_test<float>(sin_half_fma_T7_7_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_half_fma_T7_7_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez", "fma", "float", "scalar",  };
entry.subName = "sin_remez_fma_T8_0<float>";
entry.accuracy_test<float>(sin_remez_fma_T8_0<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T8_0<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez", "fma", "float2x4", "simd",  };
entry.subName = "sin_remez_fma_T8_0<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_fma_T8_0<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_fma_T8_0<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez", "fma", "float", "simd",  };
entry.subName = "sin_remez_fma_T8_0_float_simd";
entry.accuracy_test<float>(sin_remez_fma_T8_0_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_fma_T8_0_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez_pade", "fma", "float", "scalar",  };
entry.subName = "sin_remez_pade_fma_T8_8<float>";
entry.accuracy_test<float>(sin_remez_pade_fma_T8_8<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T8_8<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez_pade", "fma", "float2x4", "simd",  };
entry.subName = "sin_remez_pade_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_remez_pade_fma_T8_8<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_remez_pade_fma_T8_8<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_remez_pade", "fma", "float", "simd",  };
entry.subName = "sin_remez_pade_fma_T8_8_float_simd";
entry.accuracy_test<float>(sin_remez_pade_fma_T8_8_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_remez_pade_fma_T8_8_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "quart", "fma", "float", "scalar",  };
entry.subName = "sin_quart_fma_T8_8<float>";
entry.accuracy_test<float>(sin_quart_fma_T8_8<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T8_8<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "quart", "fma", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T8_8<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_quart_fma_T8_8<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "quart", "fma", "float", "simd",  };
entry.subName = "sin_quart_fma_T8_8_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T8_8_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_quart_fma_T8_8_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_ends_corrected", "quart", "fma", "float", "scalar",  };
entry.subName = "sin_ends_corrected_quart_fma_T8_8<float>";
entry.accuracy_test<float>(sin_ends_corrected_quart_fma_T8_8<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_ends_corrected_quart_fma_T8_8<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_ends_corrected", "quart", "fma", "float2x4", "simd",  };
entry.subName = "sin_ends_corrected_quart_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_ends_corrected_quart_fma_T8_8<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_ends_corrected_quart_fma_T8_8<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin_ends_corrected", "quart", "fma", "float", "simd",  };
entry.subName = "sin_ends_corrected_quart_fma_T8_8_float_simd";
entry.accuracy_test<float>(sin_ends_corrected_quart_fma_T8_8_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_ends_corrected_quart_fma_T8_8_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "half", "fma", "float", "scalar",  };
entry.subName = "sin_half_fma_T8_8<float>";
entry.accuracy_test<float>(sin_half_fma_T8_8<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_half_fma_T8_8<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "half", "fma", "float2x4", "simd",  };
entry.subName = "sin_half_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_half_fma_T8_8<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(sin_half_fma_T8_8<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.entries.emplace_back();
entry.tags = { "sin", "half", "fma", "float", "simd",  };
entry.subName = "sin_half_fma_T8_8_float_simd";
entry.accuracy_test<float>(sin_half_fma_T8_8_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(sin_half_fma_T8_8_float_simd, M, 0.0f, 6.283185307179586f);
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
