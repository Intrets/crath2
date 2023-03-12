{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "float", "scalar",  };
sinEntry.subName = "sin_unit1_quart_T4<float>";
sinEntry.accuracy_test<float>(sin_unit1_quart_T4<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_T4<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_quart_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_T4<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_quart_T4<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "float", "simd",  };
sinEntry.subName = "sin_unit1_quart_T4_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_quart_T4_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_T4_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "float", "scalar",  };
sinEntry.subName = "sin_unit1_half_T4<float>";
sinEntry.accuracy_test<float>(sin_unit1_half_T4<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_T4<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_half_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_half_T4<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_half_T4<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "float", "simd",  };
sinEntry.subName = "sin_unit1_half_T4_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_half_T4_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_T4_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit1_quart_fma_T4<float>";
sinEntry.accuracy_test<float>(sin_unit1_quart_fma_T4<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_fma_T4<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_quart_fma_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_T4<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_quart_fma_T4<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit1_quart_fma_T4_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_quart_fma_T4_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_fma_T4_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit1_half_fma_T4<float>";
sinEntry.accuracy_test<float>(sin_unit1_half_fma_T4<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_fma_T4<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_half_fma_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_half_fma_T4<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_half_fma_T4<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit1_half_fma_T4_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_half_fma_T4_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_fma_T4_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "float", "scalar",  };
sinEntry.subName = "sin_unit2_quart_T4<float>";
sinEntry.accuracy_test<float>(sin_unit2_quart_T4<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_T4<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_quart_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_T4<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_quart_T4<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "float", "simd",  };
sinEntry.subName = "sin_unit2_quart_T4_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_quart_T4_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_T4_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "float", "scalar",  };
sinEntry.subName = "sin_unit2_half_T4<float>";
sinEntry.accuracy_test<float>(sin_unit2_half_T4<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_T4<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_half_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_half_T4<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_half_T4<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "float", "simd",  };
sinEntry.subName = "sin_unit2_half_T4_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_half_T4_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_T4_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit2_quart_fma_T4<float>";
sinEntry.accuracy_test<float>(sin_unit2_quart_fma_T4<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_fma_T4<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_quart_fma_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_T4<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_quart_fma_T4<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit2_quart_fma_T4_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_quart_fma_T4_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_fma_T4_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit2_half_fma_T4<float>";
sinEntry.accuracy_test<float>(sin_unit2_half_fma_T4<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_fma_T4<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_half_fma_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_half_fma_T4<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_half_fma_T4<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit2_half_fma_T4_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_half_fma_T4_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_fma_T4_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "float", "scalar",  };
sinEntry.subName = "sin_quart_T4<float>";
sinEntry.accuracy_test<float>(sin_quart_T4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_T4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "float2x4", "simd",  };
sinEntry.subName = "sin_quart_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_quart_T4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_quart_T4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "float", "simd",  };
sinEntry.subName = "sin_quart_T4_float_simd";
sinEntry.accuracy_test<float>(sin_quart_T4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_T4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "float", "scalar",  };
sinEntry.subName = "sin_half_T4<float>";
sinEntry.accuracy_test<float>(sin_half_T4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_T4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "float2x4", "simd",  };
sinEntry.subName = "sin_half_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_half_T4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_half_T4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "float", "simd",  };
sinEntry.subName = "sin_half_T4_float_simd";
sinEntry.accuracy_test<float>(sin_half_T4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_T4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "sin_quart_fma_T4<float>";
sinEntry.accuracy_test<float>(sin_quart_fma_T4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_fma_T4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_quart_fma_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_quart_fma_T4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "fma", "float", "simd",  };
sinEntry.subName = "sin_quart_fma_T4_float_simd";
sinEntry.accuracy_test<float>(sin_quart_fma_T4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_fma_T4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "fma", "float", "scalar",  };
sinEntry.subName = "sin_half_fma_T4<float>";
sinEntry.accuracy_test<float>(sin_half_fma_T4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_fma_T4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_half_fma_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_half_fma_T4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_half_fma_T4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "fma", "float", "simd",  };
sinEntry.subName = "sin_half_fma_T4_float_simd";
sinEntry.accuracy_test<float>(sin_half_fma_T4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_fma_T4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "float", "scalar",  };
sinEntry.subName = "sin_unit1_quart_T5<float>";
sinEntry.accuracy_test<float>(sin_unit1_quart_T5<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_T5<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_quart_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_T5<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_quart_T5<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "float", "simd",  };
sinEntry.subName = "sin_unit1_quart_T5_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_quart_T5_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_T5_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "float", "scalar",  };
sinEntry.subName = "sin_unit1_half_T5<float>";
sinEntry.accuracy_test<float>(sin_unit1_half_T5<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_T5<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_half_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_half_T5<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_half_T5<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "float", "simd",  };
sinEntry.subName = "sin_unit1_half_T5_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_half_T5_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_T5_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit1_quart_fma_T5<float>";
sinEntry.accuracy_test<float>(sin_unit1_quart_fma_T5<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_fma_T5<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_quart_fma_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_T5<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_quart_fma_T5<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit1_quart_fma_T5_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_quart_fma_T5_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_fma_T5_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit1_half_fma_T5<float>";
sinEntry.accuracy_test<float>(sin_unit1_half_fma_T5<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_fma_T5<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_half_fma_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_half_fma_T5<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_half_fma_T5<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit1_half_fma_T5_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_half_fma_T5_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_fma_T5_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "float", "scalar",  };
sinEntry.subName = "sin_unit2_quart_T5<float>";
sinEntry.accuracy_test<float>(sin_unit2_quart_T5<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_T5<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_quart_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_T5<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_quart_T5<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "float", "simd",  };
sinEntry.subName = "sin_unit2_quart_T5_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_quart_T5_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_T5_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "float", "scalar",  };
sinEntry.subName = "sin_unit2_half_T5<float>";
sinEntry.accuracy_test<float>(sin_unit2_half_T5<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_T5<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_half_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_half_T5<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_half_T5<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "float", "simd",  };
sinEntry.subName = "sin_unit2_half_T5_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_half_T5_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_T5_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit2_quart_fma_T5<float>";
sinEntry.accuracy_test<float>(sin_unit2_quart_fma_T5<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_fma_T5<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_quart_fma_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_T5<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_quart_fma_T5<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit2_quart_fma_T5_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_quart_fma_T5_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_fma_T5_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit2_half_fma_T5<float>";
sinEntry.accuracy_test<float>(sin_unit2_half_fma_T5<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_fma_T5<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_half_fma_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_half_fma_T5<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_half_fma_T5<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit2_half_fma_T5_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_half_fma_T5_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_fma_T5_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "float", "scalar",  };
sinEntry.subName = "sin_quart_T5<float>";
sinEntry.accuracy_test<float>(sin_quart_T5<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_T5<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "float2x4", "simd",  };
sinEntry.subName = "sin_quart_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_quart_T5<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_quart_T5<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "float", "simd",  };
sinEntry.subName = "sin_quart_T5_float_simd";
sinEntry.accuracy_test<float>(sin_quart_T5_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_T5_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "float", "scalar",  };
sinEntry.subName = "sin_half_T5<float>";
sinEntry.accuracy_test<float>(sin_half_T5<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_T5<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "float2x4", "simd",  };
sinEntry.subName = "sin_half_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_half_T5<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_half_T5<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "float", "simd",  };
sinEntry.subName = "sin_half_T5_float_simd";
sinEntry.accuracy_test<float>(sin_half_T5_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_T5_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "sin_quart_fma_T5<float>";
sinEntry.accuracy_test<float>(sin_quart_fma_T5<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_fma_T5<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_quart_fma_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T5<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_quart_fma_T5<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "fma", "float", "simd",  };
sinEntry.subName = "sin_quart_fma_T5_float_simd";
sinEntry.accuracy_test<float>(sin_quart_fma_T5_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_fma_T5_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "fma", "float", "scalar",  };
sinEntry.subName = "sin_half_fma_T5<float>";
sinEntry.accuracy_test<float>(sin_half_fma_T5<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_fma_T5<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_half_fma_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_half_fma_T5<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_half_fma_T5<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "fma", "float", "simd",  };
sinEntry.subName = "sin_half_fma_T5_float_simd";
sinEntry.accuracy_test<float>(sin_half_fma_T5_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_fma_T5_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "float", "scalar",  };
sinEntry.subName = "sin_unit1_quart_T6<float>";
sinEntry.accuracy_test<float>(sin_unit1_quart_T6<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_T6<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_quart_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_T6<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_quart_T6<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "float", "simd",  };
sinEntry.subName = "sin_unit1_quart_T6_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_quart_T6_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_T6_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "float", "scalar",  };
sinEntry.subName = "sin_unit1_half_T6<float>";
sinEntry.accuracy_test<float>(sin_unit1_half_T6<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_T6<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_half_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_half_T6<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_half_T6<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "float", "simd",  };
sinEntry.subName = "sin_unit1_half_T6_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_half_T6_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_T6_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit1_quart_fma_T6<float>";
sinEntry.accuracy_test<float>(sin_unit1_quart_fma_T6<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_fma_T6<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_quart_fma_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_T6<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_quart_fma_T6<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit1_quart_fma_T6_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_quart_fma_T6_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_fma_T6_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit1_half_fma_T6<float>";
sinEntry.accuracy_test<float>(sin_unit1_half_fma_T6<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_fma_T6<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_half_fma_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_half_fma_T6<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_half_fma_T6<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit1_half_fma_T6_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_half_fma_T6_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_fma_T6_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "float", "scalar",  };
sinEntry.subName = "sin_unit2_quart_T6<float>";
sinEntry.accuracy_test<float>(sin_unit2_quart_T6<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_T6<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_quart_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_T6<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_quart_T6<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "float", "simd",  };
sinEntry.subName = "sin_unit2_quart_T6_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_quart_T6_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_T6_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "float", "scalar",  };
sinEntry.subName = "sin_unit2_half_T6<float>";
sinEntry.accuracy_test<float>(sin_unit2_half_T6<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_T6<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_half_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_half_T6<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_half_T6<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "float", "simd",  };
sinEntry.subName = "sin_unit2_half_T6_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_half_T6_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_T6_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit2_quart_fma_T6<float>";
sinEntry.accuracy_test<float>(sin_unit2_quart_fma_T6<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_fma_T6<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_quart_fma_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_T6<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_quart_fma_T6<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit2_quart_fma_T6_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_quart_fma_T6_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_fma_T6_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit2_half_fma_T6<float>";
sinEntry.accuracy_test<float>(sin_unit2_half_fma_T6<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_fma_T6<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_half_fma_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_half_fma_T6<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_half_fma_T6<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit2_half_fma_T6_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_half_fma_T6_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_fma_T6_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "float", "scalar",  };
sinEntry.subName = "sin_quart_T6<float>";
sinEntry.accuracy_test<float>(sin_quart_T6<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_T6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "float2x4", "simd",  };
sinEntry.subName = "sin_quart_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_quart_T6<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_quart_T6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "float", "simd",  };
sinEntry.subName = "sin_quart_T6_float_simd";
sinEntry.accuracy_test<float>(sin_quart_T6_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_T6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "float", "scalar",  };
sinEntry.subName = "sin_half_T6<float>";
sinEntry.accuracy_test<float>(sin_half_T6<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_T6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "float2x4", "simd",  };
sinEntry.subName = "sin_half_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_half_T6<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_half_T6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "float", "simd",  };
sinEntry.subName = "sin_half_T6_float_simd";
sinEntry.accuracy_test<float>(sin_half_T6_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_T6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "sin_quart_fma_T6<float>";
sinEntry.accuracy_test<float>(sin_quart_fma_T6<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_fma_T6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_quart_fma_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T6<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_quart_fma_T6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "fma", "float", "simd",  };
sinEntry.subName = "sin_quart_fma_T6_float_simd";
sinEntry.accuracy_test<float>(sin_quart_fma_T6_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_fma_T6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "fma", "float", "scalar",  };
sinEntry.subName = "sin_half_fma_T6<float>";
sinEntry.accuracy_test<float>(sin_half_fma_T6<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_fma_T6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_half_fma_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_half_fma_T6<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_half_fma_T6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "fma", "float", "simd",  };
sinEntry.subName = "sin_half_fma_T6_float_simd";
sinEntry.accuracy_test<float>(sin_half_fma_T6_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_fma_T6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "float", "scalar",  };
sinEntry.subName = "sin_unit1_quart_T7<float>";
sinEntry.accuracy_test<float>(sin_unit1_quart_T7<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_T7<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_quart_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_T7<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_quart_T7<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "float", "simd",  };
sinEntry.subName = "sin_unit1_quart_T7_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_quart_T7_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_T7_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "float", "scalar",  };
sinEntry.subName = "sin_unit1_half_T7<float>";
sinEntry.accuracy_test<float>(sin_unit1_half_T7<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_T7<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_half_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_half_T7<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_half_T7<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "float", "simd",  };
sinEntry.subName = "sin_unit1_half_T7_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_half_T7_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_T7_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit1_quart_fma_T7<float>";
sinEntry.accuracy_test<float>(sin_unit1_quart_fma_T7<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_fma_T7<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_quart_fma_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_T7<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_quart_fma_T7<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit1_quart_fma_T7_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_quart_fma_T7_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_fma_T7_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit1_half_fma_T7<float>";
sinEntry.accuracy_test<float>(sin_unit1_half_fma_T7<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_fma_T7<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_half_fma_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_half_fma_T7<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_half_fma_T7<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit1_half_fma_T7_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_half_fma_T7_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_fma_T7_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "float", "scalar",  };
sinEntry.subName = "sin_unit2_quart_T7<float>";
sinEntry.accuracy_test<float>(sin_unit2_quart_T7<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_T7<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_quart_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_T7<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_quart_T7<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "float", "simd",  };
sinEntry.subName = "sin_unit2_quart_T7_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_quart_T7_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_T7_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "float", "scalar",  };
sinEntry.subName = "sin_unit2_half_T7<float>";
sinEntry.accuracy_test<float>(sin_unit2_half_T7<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_T7<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_half_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_half_T7<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_half_T7<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "float", "simd",  };
sinEntry.subName = "sin_unit2_half_T7_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_half_T7_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_T7_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit2_quart_fma_T7<float>";
sinEntry.accuracy_test<float>(sin_unit2_quart_fma_T7<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_fma_T7<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_quart_fma_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_T7<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_quart_fma_T7<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit2_quart_fma_T7_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_quart_fma_T7_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_fma_T7_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit2_half_fma_T7<float>";
sinEntry.accuracy_test<float>(sin_unit2_half_fma_T7<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_fma_T7<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_half_fma_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_half_fma_T7<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_half_fma_T7<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit2_half_fma_T7_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_half_fma_T7_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_fma_T7_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "float", "scalar",  };
sinEntry.subName = "sin_quart_T7<float>";
sinEntry.accuracy_test<float>(sin_quart_T7<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_T7<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "float2x4", "simd",  };
sinEntry.subName = "sin_quart_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_quart_T7<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_quart_T7<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "float", "simd",  };
sinEntry.subName = "sin_quart_T7_float_simd";
sinEntry.accuracy_test<float>(sin_quart_T7_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_T7_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "float", "scalar",  };
sinEntry.subName = "sin_half_T7<float>";
sinEntry.accuracy_test<float>(sin_half_T7<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_T7<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "float2x4", "simd",  };
sinEntry.subName = "sin_half_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_half_T7<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_half_T7<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "float", "simd",  };
sinEntry.subName = "sin_half_T7_float_simd";
sinEntry.accuracy_test<float>(sin_half_T7_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_T7_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "sin_quart_fma_T7<float>";
sinEntry.accuracy_test<float>(sin_quart_fma_T7<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_fma_T7<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_quart_fma_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T7<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_quart_fma_T7<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "fma", "float", "simd",  };
sinEntry.subName = "sin_quart_fma_T7_float_simd";
sinEntry.accuracy_test<float>(sin_quart_fma_T7_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_fma_T7_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "fma", "float", "scalar",  };
sinEntry.subName = "sin_half_fma_T7<float>";
sinEntry.accuracy_test<float>(sin_half_fma_T7<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_fma_T7<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_half_fma_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_half_fma_T7<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_half_fma_T7<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "fma", "float", "simd",  };
sinEntry.subName = "sin_half_fma_T7_float_simd";
sinEntry.accuracy_test<float>(sin_half_fma_T7_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_fma_T7_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "float", "scalar",  };
sinEntry.subName = "sin_unit1_quart_T8<float>";
sinEntry.accuracy_test<float>(sin_unit1_quart_T8<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_T8<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_quart_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_T8<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_quart_T8<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "float", "simd",  };
sinEntry.subName = "sin_unit1_quart_T8_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_quart_T8_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_T8_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "float", "scalar",  };
sinEntry.subName = "sin_unit1_half_T8<float>";
sinEntry.accuracy_test<float>(sin_unit1_half_T8<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_T8<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_half_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_half_T8<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_half_T8<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "float", "simd",  };
sinEntry.subName = "sin_unit1_half_T8_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_half_T8_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_T8_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit1_quart_fma_T8<float>";
sinEntry.accuracy_test<float>(sin_unit1_quart_fma_T8<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_fma_T8<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_quart_fma_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_quart_fma_T8<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_quart_fma_T8<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "quart", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit1_quart_fma_T8_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_quart_fma_T8_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_quart_fma_T8_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit1_half_fma_T8<float>";
sinEntry.accuracy_test<float>(sin_unit1_half_fma_T8<float>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_fma_T8<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit1_half_fma_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit1_half_fma_T8<cr::simd::float2x4>, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit1_half_fma_T8<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit1", "half", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit1_half_fma_T8_float_simd";
sinEntry.accuracy_test<float>(sin_unit1_half_fma_T8_float_simd, std::sinf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit1_half_fma_T8_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "float", "scalar",  };
sinEntry.subName = "sin_unit2_quart_T8<float>";
sinEntry.accuracy_test<float>(sin_unit2_quart_T8<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_T8<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_quart_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_T8<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_quart_T8<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "float", "simd",  };
sinEntry.subName = "sin_unit2_quart_T8_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_quart_T8_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_T8_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "float", "scalar",  };
sinEntry.subName = "sin_unit2_half_T8<float>";
sinEntry.accuracy_test<float>(sin_unit2_half_T8<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_T8<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_half_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_half_T8<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_half_T8<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "float", "simd",  };
sinEntry.subName = "sin_unit2_half_T8_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_half_T8_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_T8_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit2_quart_fma_T8<float>";
sinEntry.accuracy_test<float>(sin_unit2_quart_fma_T8<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_fma_T8<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_quart_fma_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_quart_fma_T8<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_quart_fma_T8<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "quart", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit2_quart_fma_T8_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_quart_fma_T8_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_quart_fma_T8_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "fma", "float", "scalar",  };
sinEntry.subName = "sin_unit2_half_fma_T8<float>";
sinEntry.accuracy_test<float>(sin_unit2_half_fma_T8<float>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_fma_T8<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_unit2_half_fma_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_unit2_half_fma_T8<cr::simd::float2x4>, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_unit2_half_fma_T8<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin_unit2", "half", "fma", "float", "simd",  };
sinEntry.subName = "sin_unit2_half_fma_T8_float_simd";
sinEntry.accuracy_test<float>(sin_unit2_half_fma_T8_float_simd, std::sinf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_unit2_half_fma_T8_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "float", "scalar",  };
sinEntry.subName = "sin_quart_T8<float>";
sinEntry.accuracy_test<float>(sin_quart_T8<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_T8<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "float2x4", "simd",  };
sinEntry.subName = "sin_quart_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_quart_T8<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_quart_T8<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "float", "simd",  };
sinEntry.subName = "sin_quart_T8_float_simd";
sinEntry.accuracy_test<float>(sin_quart_T8_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_T8_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "float", "scalar",  };
sinEntry.subName = "sin_half_T8<float>";
sinEntry.accuracy_test<float>(sin_half_T8<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_T8<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "float2x4", "simd",  };
sinEntry.subName = "sin_half_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_half_T8<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_half_T8<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "float", "simd",  };
sinEntry.subName = "sin_half_T8_float_simd";
sinEntry.accuracy_test<float>(sin_half_T8_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_T8_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "sin_quart_fma_T8<float>";
sinEntry.accuracy_test<float>(sin_quart_fma_T8<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_fma_T8<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_quart_fma_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T8<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_quart_fma_T8<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "quart", "fma", "float", "simd",  };
sinEntry.subName = "sin_quart_fma_T8_float_simd";
sinEntry.accuracy_test<float>(sin_quart_fma_T8_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_quart_fma_T8_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "fma", "float", "scalar",  };
sinEntry.subName = "sin_half_fma_T8<float>";
sinEntry.accuracy_test<float>(sin_half_fma_T8<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_fma_T8<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "sin_half_fma_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(sin_half_fma_T8<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(sin_half_fma_T8<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "sin", "half", "fma", "float", "simd",  };
sinEntry.subName = "sin_half_fma_T8_float_simd";
sinEntry.accuracy_test<float>(sin_half_fma_T8_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(sin_half_fma_T8_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "float", "scalar",  };
sinEntry.subName = "cos_unit1_quart_T4<float>";
sinEntry.accuracy_test<float>(cos_unit1_quart_T4<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_T4<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "float2x4", "simd",  };
sinEntry.subName = "cos_unit1_quart_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_T4<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit1_quart_T4<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "float", "simd",  };
sinEntry.subName = "cos_unit1_quart_T4_float_simd";
sinEntry.accuracy_test<float>(cos_unit1_quart_T4_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_T4_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "half", "float", "scalar",  };
sinEntry.subName = "cos_unit1_half_T4<float>";
sinEntry.accuracy_test<float>(cos_unit1_half_T4<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_half_T4<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "half", "float2x4", "simd",  };
sinEntry.subName = "cos_unit1_half_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit1_half_T4<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit1_half_T4<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "half", "float", "simd",  };
sinEntry.subName = "cos_unit1_half_T4_float_simd";
sinEntry.accuracy_test<float>(cos_unit1_half_T4_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_half_T4_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "cos_unit1_quart_fma_T4<float>";
sinEntry.accuracy_test<float>(cos_unit1_quart_fma_T4<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_fma_T4<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_unit1_quart_fma_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_T4<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit1_quart_fma_T4<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "fma", "float", "simd",  };
sinEntry.subName = "cos_unit1_quart_fma_T4_float_simd";
sinEntry.accuracy_test<float>(cos_unit1_quart_fma_T4_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_fma_T4_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "half", "fma", "float", "scalar",  };
sinEntry.subName = "cos_unit1_half_fma_T4<float>";
sinEntry.accuracy_test<float>(cos_unit1_half_fma_T4<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_half_fma_T4<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_unit1_half_fma_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit1_half_fma_T4<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit1_half_fma_T4<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "half", "fma", "float", "simd",  };
sinEntry.subName = "cos_unit1_half_fma_T4_float_simd";
sinEntry.accuracy_test<float>(cos_unit1_half_fma_T4_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_half_fma_T4_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "float", "scalar",  };
sinEntry.subName = "cos_unit2_quart_T4<float>";
sinEntry.accuracy_test<float>(cos_unit2_quart_T4<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_T4<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "float2x4", "simd",  };
sinEntry.subName = "cos_unit2_quart_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_T4<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit2_quart_T4<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "float", "simd",  };
sinEntry.subName = "cos_unit2_quart_T4_float_simd";
sinEntry.accuracy_test<float>(cos_unit2_quart_T4_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_T4_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "half", "float", "scalar",  };
sinEntry.subName = "cos_unit2_half_T4<float>";
sinEntry.accuracy_test<float>(cos_unit2_half_T4<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_half_T4<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "half", "float2x4", "simd",  };
sinEntry.subName = "cos_unit2_half_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit2_half_T4<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit2_half_T4<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "half", "float", "simd",  };
sinEntry.subName = "cos_unit2_half_T4_float_simd";
sinEntry.accuracy_test<float>(cos_unit2_half_T4_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_half_T4_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "cos_unit2_quart_fma_T4<float>";
sinEntry.accuracy_test<float>(cos_unit2_quart_fma_T4<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_fma_T4<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_unit2_quart_fma_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_T4<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit2_quart_fma_T4<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "fma", "float", "simd",  };
sinEntry.subName = "cos_unit2_quart_fma_T4_float_simd";
sinEntry.accuracy_test<float>(cos_unit2_quart_fma_T4_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_fma_T4_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "half", "fma", "float", "scalar",  };
sinEntry.subName = "cos_unit2_half_fma_T4<float>";
sinEntry.accuracy_test<float>(cos_unit2_half_fma_T4<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_half_fma_T4<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_unit2_half_fma_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit2_half_fma_T4<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit2_half_fma_T4<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "half", "fma", "float", "simd",  };
sinEntry.subName = "cos_unit2_half_fma_T4_float_simd";
sinEntry.accuracy_test<float>(cos_unit2_half_fma_T4_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_half_fma_T4_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "float", "scalar",  };
sinEntry.subName = "cos_quart_T4<float>";
sinEntry.accuracy_test<float>(cos_quart_T4<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_T4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "float2x4", "simd",  };
sinEntry.subName = "cos_quart_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_quart_T4<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_quart_T4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "float", "simd",  };
sinEntry.subName = "cos_quart_T4_float_simd";
sinEntry.accuracy_test<float>(cos_quart_T4_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_T4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "half", "float", "scalar",  };
sinEntry.subName = "cos_half_T4<float>";
sinEntry.accuracy_test<float>(cos_half_T4<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_half_T4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "half", "float2x4", "simd",  };
sinEntry.subName = "cos_half_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_half_T4<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_half_T4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "half", "float", "simd",  };
sinEntry.subName = "cos_half_T4_float_simd";
sinEntry.accuracy_test<float>(cos_half_T4_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_half_T4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "cos_quart_fma_T4<float>";
sinEntry.accuracy_test<float>(cos_quart_fma_T4<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_fma_T4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_quart_fma_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_T4<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_quart_fma_T4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "fma", "float", "simd",  };
sinEntry.subName = "cos_quart_fma_T4_float_simd";
sinEntry.accuracy_test<float>(cos_quart_fma_T4_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_fma_T4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "half", "fma", "float", "scalar",  };
sinEntry.subName = "cos_half_fma_T4<float>";
sinEntry.accuracy_test<float>(cos_half_fma_T4<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_half_fma_T4<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_half_fma_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_half_fma_T4<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_half_fma_T4<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "half", "fma", "float", "simd",  };
sinEntry.subName = "cos_half_fma_T4_float_simd";
sinEntry.accuracy_test<float>(cos_half_fma_T4_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_half_fma_T4_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "float", "scalar",  };
sinEntry.subName = "cos_unit1_quart_T5<float>";
sinEntry.accuracy_test<float>(cos_unit1_quart_T5<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_T5<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "float2x4", "simd",  };
sinEntry.subName = "cos_unit1_quart_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_T5<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit1_quart_T5<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "float", "simd",  };
sinEntry.subName = "cos_unit1_quart_T5_float_simd";
sinEntry.accuracy_test<float>(cos_unit1_quart_T5_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_T5_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "cos_unit1_quart_fma_T5<float>";
sinEntry.accuracy_test<float>(cos_unit1_quart_fma_T5<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_fma_T5<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_unit1_quart_fma_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_T5<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit1_quart_fma_T5<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "fma", "float", "simd",  };
sinEntry.subName = "cos_unit1_quart_fma_T5_float_simd";
sinEntry.accuracy_test<float>(cos_unit1_quart_fma_T5_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_fma_T5_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "float", "scalar",  };
sinEntry.subName = "cos_unit2_quart_T5<float>";
sinEntry.accuracy_test<float>(cos_unit2_quart_T5<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_T5<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "float2x4", "simd",  };
sinEntry.subName = "cos_unit2_quart_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_T5<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit2_quart_T5<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "float", "simd",  };
sinEntry.subName = "cos_unit2_quart_T5_float_simd";
sinEntry.accuracy_test<float>(cos_unit2_quart_T5_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_T5_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "cos_unit2_quart_fma_T5<float>";
sinEntry.accuracy_test<float>(cos_unit2_quart_fma_T5<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_fma_T5<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_unit2_quart_fma_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_T5<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit2_quart_fma_T5<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "fma", "float", "simd",  };
sinEntry.subName = "cos_unit2_quart_fma_T5_float_simd";
sinEntry.accuracy_test<float>(cos_unit2_quart_fma_T5_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_fma_T5_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "float", "scalar",  };
sinEntry.subName = "cos_quart_T5<float>";
sinEntry.accuracy_test<float>(cos_quart_T5<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_T5<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "float2x4", "simd",  };
sinEntry.subName = "cos_quart_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_quart_T5<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_quart_T5<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "float", "simd",  };
sinEntry.subName = "cos_quart_T5_float_simd";
sinEntry.accuracy_test<float>(cos_quart_T5_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_T5_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "cos_quart_fma_T5<float>";
sinEntry.accuracy_test<float>(cos_quart_fma_T5<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_fma_T5<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_quart_fma_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_T5<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_quart_fma_T5<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "fma", "float", "simd",  };
sinEntry.subName = "cos_quart_fma_T5_float_simd";
sinEntry.accuracy_test<float>(cos_quart_fma_T5_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_fma_T5_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "float", "scalar",  };
sinEntry.subName = "cos_unit1_quart_T6<float>";
sinEntry.accuracy_test<float>(cos_unit1_quart_T6<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_T6<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "float2x4", "simd",  };
sinEntry.subName = "cos_unit1_quart_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_T6<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit1_quart_T6<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "float", "simd",  };
sinEntry.subName = "cos_unit1_quart_T6_float_simd";
sinEntry.accuracy_test<float>(cos_unit1_quart_T6_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_T6_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "half", "float", "scalar",  };
sinEntry.subName = "cos_unit1_half_T6<float>";
sinEntry.accuracy_test<float>(cos_unit1_half_T6<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_half_T6<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "half", "float2x4", "simd",  };
sinEntry.subName = "cos_unit1_half_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit1_half_T6<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit1_half_T6<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "half", "float", "simd",  };
sinEntry.subName = "cos_unit1_half_T6_float_simd";
sinEntry.accuracy_test<float>(cos_unit1_half_T6_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_half_T6_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "cos_unit1_quart_fma_T6<float>";
sinEntry.accuracy_test<float>(cos_unit1_quart_fma_T6<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_fma_T6<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_unit1_quart_fma_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_T6<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit1_quart_fma_T6<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "fma", "float", "simd",  };
sinEntry.subName = "cos_unit1_quart_fma_T6_float_simd";
sinEntry.accuracy_test<float>(cos_unit1_quart_fma_T6_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_fma_T6_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "half", "fma", "float", "scalar",  };
sinEntry.subName = "cos_unit1_half_fma_T6<float>";
sinEntry.accuracy_test<float>(cos_unit1_half_fma_T6<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_half_fma_T6<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_unit1_half_fma_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit1_half_fma_T6<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit1_half_fma_T6<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "half", "fma", "float", "simd",  };
sinEntry.subName = "cos_unit1_half_fma_T6_float_simd";
sinEntry.accuracy_test<float>(cos_unit1_half_fma_T6_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_half_fma_T6_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "float", "scalar",  };
sinEntry.subName = "cos_unit2_quart_T6<float>";
sinEntry.accuracy_test<float>(cos_unit2_quart_T6<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_T6<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "float2x4", "simd",  };
sinEntry.subName = "cos_unit2_quart_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_T6<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit2_quart_T6<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "float", "simd",  };
sinEntry.subName = "cos_unit2_quart_T6_float_simd";
sinEntry.accuracy_test<float>(cos_unit2_quart_T6_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_T6_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "half", "float", "scalar",  };
sinEntry.subName = "cos_unit2_half_T6<float>";
sinEntry.accuracy_test<float>(cos_unit2_half_T6<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_half_T6<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "half", "float2x4", "simd",  };
sinEntry.subName = "cos_unit2_half_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit2_half_T6<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit2_half_T6<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "half", "float", "simd",  };
sinEntry.subName = "cos_unit2_half_T6_float_simd";
sinEntry.accuracy_test<float>(cos_unit2_half_T6_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_half_T6_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "cos_unit2_quart_fma_T6<float>";
sinEntry.accuracy_test<float>(cos_unit2_quart_fma_T6<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_fma_T6<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_unit2_quart_fma_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_T6<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit2_quart_fma_T6<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "fma", "float", "simd",  };
sinEntry.subName = "cos_unit2_quart_fma_T6_float_simd";
sinEntry.accuracy_test<float>(cos_unit2_quart_fma_T6_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_fma_T6_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "half", "fma", "float", "scalar",  };
sinEntry.subName = "cos_unit2_half_fma_T6<float>";
sinEntry.accuracy_test<float>(cos_unit2_half_fma_T6<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_half_fma_T6<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_unit2_half_fma_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit2_half_fma_T6<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit2_half_fma_T6<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "half", "fma", "float", "simd",  };
sinEntry.subName = "cos_unit2_half_fma_T6_float_simd";
sinEntry.accuracy_test<float>(cos_unit2_half_fma_T6_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_half_fma_T6_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "float", "scalar",  };
sinEntry.subName = "cos_quart_T6<float>";
sinEntry.accuracy_test<float>(cos_quart_T6<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_T6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "float2x4", "simd",  };
sinEntry.subName = "cos_quart_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_quart_T6<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_quart_T6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "float", "simd",  };
sinEntry.subName = "cos_quart_T6_float_simd";
sinEntry.accuracy_test<float>(cos_quart_T6_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_T6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "half", "float", "scalar",  };
sinEntry.subName = "cos_half_T6<float>";
sinEntry.accuracy_test<float>(cos_half_T6<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_half_T6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "half", "float2x4", "simd",  };
sinEntry.subName = "cos_half_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_half_T6<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_half_T6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "half", "float", "simd",  };
sinEntry.subName = "cos_half_T6_float_simd";
sinEntry.accuracy_test<float>(cos_half_T6_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_half_T6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "cos_quart_fma_T6<float>";
sinEntry.accuracy_test<float>(cos_quart_fma_T6<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_fma_T6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_quart_fma_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_T6<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_quart_fma_T6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "fma", "float", "simd",  };
sinEntry.subName = "cos_quart_fma_T6_float_simd";
sinEntry.accuracy_test<float>(cos_quart_fma_T6_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_fma_T6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "half", "fma", "float", "scalar",  };
sinEntry.subName = "cos_half_fma_T6<float>";
sinEntry.accuracy_test<float>(cos_half_fma_T6<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_half_fma_T6<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_half_fma_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_half_fma_T6<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_half_fma_T6<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "half", "fma", "float", "simd",  };
sinEntry.subName = "cos_half_fma_T6_float_simd";
sinEntry.accuracy_test<float>(cos_half_fma_T6_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_half_fma_T6_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "float", "scalar",  };
sinEntry.subName = "cos_unit1_quart_T7<float>";
sinEntry.accuracy_test<float>(cos_unit1_quart_T7<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_T7<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "float2x4", "simd",  };
sinEntry.subName = "cos_unit1_quart_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_T7<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit1_quart_T7<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "float", "simd",  };
sinEntry.subName = "cos_unit1_quart_T7_float_simd";
sinEntry.accuracy_test<float>(cos_unit1_quart_T7_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_T7_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "cos_unit1_quart_fma_T7<float>";
sinEntry.accuracy_test<float>(cos_unit1_quart_fma_T7<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_fma_T7<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_unit1_quart_fma_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_T7<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit1_quart_fma_T7<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "fma", "float", "simd",  };
sinEntry.subName = "cos_unit1_quart_fma_T7_float_simd";
sinEntry.accuracy_test<float>(cos_unit1_quart_fma_T7_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_fma_T7_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "float", "scalar",  };
sinEntry.subName = "cos_unit2_quart_T7<float>";
sinEntry.accuracy_test<float>(cos_unit2_quart_T7<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_T7<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "float2x4", "simd",  };
sinEntry.subName = "cos_unit2_quart_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_T7<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit2_quart_T7<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "float", "simd",  };
sinEntry.subName = "cos_unit2_quart_T7_float_simd";
sinEntry.accuracy_test<float>(cos_unit2_quart_T7_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_T7_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "cos_unit2_quart_fma_T7<float>";
sinEntry.accuracy_test<float>(cos_unit2_quart_fma_T7<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_fma_T7<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_unit2_quart_fma_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_T7<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit2_quart_fma_T7<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "fma", "float", "simd",  };
sinEntry.subName = "cos_unit2_quart_fma_T7_float_simd";
sinEntry.accuracy_test<float>(cos_unit2_quart_fma_T7_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_fma_T7_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "float", "scalar",  };
sinEntry.subName = "cos_quart_T7<float>";
sinEntry.accuracy_test<float>(cos_quart_T7<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_T7<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "float2x4", "simd",  };
sinEntry.subName = "cos_quart_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_quart_T7<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_quart_T7<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "float", "simd",  };
sinEntry.subName = "cos_quart_T7_float_simd";
sinEntry.accuracy_test<float>(cos_quart_T7_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_T7_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "cos_quart_fma_T7<float>";
sinEntry.accuracy_test<float>(cos_quart_fma_T7<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_fma_T7<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_quart_fma_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_T7<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_quart_fma_T7<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "fma", "float", "simd",  };
sinEntry.subName = "cos_quart_fma_T7_float_simd";
sinEntry.accuracy_test<float>(cos_quart_fma_T7_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_fma_T7_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "float", "scalar",  };
sinEntry.subName = "cos_unit1_quart_T8<float>";
sinEntry.accuracy_test<float>(cos_unit1_quart_T8<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_T8<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "float2x4", "simd",  };
sinEntry.subName = "cos_unit1_quart_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_T8<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit1_quart_T8<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "float", "simd",  };
sinEntry.subName = "cos_unit1_quart_T8_float_simd";
sinEntry.accuracy_test<float>(cos_unit1_quart_T8_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_T8_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "half", "float", "scalar",  };
sinEntry.subName = "cos_unit1_half_T8<float>";
sinEntry.accuracy_test<float>(cos_unit1_half_T8<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_half_T8<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "half", "float2x4", "simd",  };
sinEntry.subName = "cos_unit1_half_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit1_half_T8<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit1_half_T8<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "half", "float", "simd",  };
sinEntry.subName = "cos_unit1_half_T8_float_simd";
sinEntry.accuracy_test<float>(cos_unit1_half_T8_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_half_T8_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "cos_unit1_quart_fma_T8<float>";
sinEntry.accuracy_test<float>(cos_unit1_quart_fma_T8<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_fma_T8<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_unit1_quart_fma_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_T8<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit1_quart_fma_T8<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "fma", "float", "simd",  };
sinEntry.subName = "cos_unit1_quart_fma_T8_float_simd";
sinEntry.accuracy_test<float>(cos_unit1_quart_fma_T8_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_fma_T8_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "half", "fma", "float", "scalar",  };
sinEntry.subName = "cos_unit1_half_fma_T8<float>";
sinEntry.accuracy_test<float>(cos_unit1_half_fma_T8<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_half_fma_T8<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_unit1_half_fma_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit1_half_fma_T8<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit1_half_fma_T8<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "half", "fma", "float", "simd",  };
sinEntry.subName = "cos_unit1_half_fma_T8_float_simd";
sinEntry.accuracy_test<float>(cos_unit1_half_fma_T8_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_half_fma_T8_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "float", "scalar",  };
sinEntry.subName = "cos_unit2_quart_T8<float>";
sinEntry.accuracy_test<float>(cos_unit2_quart_T8<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_T8<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "float2x4", "simd",  };
sinEntry.subName = "cos_unit2_quart_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_T8<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit2_quart_T8<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "float", "simd",  };
sinEntry.subName = "cos_unit2_quart_T8_float_simd";
sinEntry.accuracy_test<float>(cos_unit2_quart_T8_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_T8_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "half", "float", "scalar",  };
sinEntry.subName = "cos_unit2_half_T8<float>";
sinEntry.accuracy_test<float>(cos_unit2_half_T8<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_half_T8<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "half", "float2x4", "simd",  };
sinEntry.subName = "cos_unit2_half_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit2_half_T8<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit2_half_T8<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "half", "float", "simd",  };
sinEntry.subName = "cos_unit2_half_T8_float_simd";
sinEntry.accuracy_test<float>(cos_unit2_half_T8_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_half_T8_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "cos_unit2_quart_fma_T8<float>";
sinEntry.accuracy_test<float>(cos_unit2_quart_fma_T8<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_fma_T8<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_unit2_quart_fma_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_T8<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit2_quart_fma_T8<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "fma", "float", "simd",  };
sinEntry.subName = "cos_unit2_quart_fma_T8_float_simd";
sinEntry.accuracy_test<float>(cos_unit2_quart_fma_T8_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_fma_T8_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "half", "fma", "float", "scalar",  };
sinEntry.subName = "cos_unit2_half_fma_T8<float>";
sinEntry.accuracy_test<float>(cos_unit2_half_fma_T8<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_half_fma_T8<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_unit2_half_fma_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit2_half_fma_T8<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit2_half_fma_T8<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "half", "fma", "float", "simd",  };
sinEntry.subName = "cos_unit2_half_fma_T8_float_simd";
sinEntry.accuracy_test<float>(cos_unit2_half_fma_T8_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_half_fma_T8_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "float", "scalar",  };
sinEntry.subName = "cos_quart_T8<float>";
sinEntry.accuracy_test<float>(cos_quart_T8<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_T8<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "float2x4", "simd",  };
sinEntry.subName = "cos_quart_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_quart_T8<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_quart_T8<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "float", "simd",  };
sinEntry.subName = "cos_quart_T8_float_simd";
sinEntry.accuracy_test<float>(cos_quart_T8_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_T8_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "half", "float", "scalar",  };
sinEntry.subName = "cos_half_T8<float>";
sinEntry.accuracy_test<float>(cos_half_T8<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_half_T8<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "half", "float2x4", "simd",  };
sinEntry.subName = "cos_half_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_half_T8<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_half_T8<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "half", "float", "simd",  };
sinEntry.subName = "cos_half_T8_float_simd";
sinEntry.accuracy_test<float>(cos_half_T8_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_half_T8_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "cos_quart_fma_T8<float>";
sinEntry.accuracy_test<float>(cos_quart_fma_T8<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_fma_T8<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_quart_fma_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_T8<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_quart_fma_T8<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "fma", "float", "simd",  };
sinEntry.subName = "cos_quart_fma_T8_float_simd";
sinEntry.accuracy_test<float>(cos_quart_fma_T8_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_fma_T8_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "half", "fma", "float", "scalar",  };
sinEntry.subName = "cos_half_fma_T8<float>";
sinEntry.accuracy_test<float>(cos_half_fma_T8<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_half_fma_T8<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "half", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_half_fma_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_half_fma_T8<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_half_fma_T8<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "half", "fma", "float", "simd",  };
sinEntry.subName = "cos_half_fma_T8_float_simd";
sinEntry.accuracy_test<float>(cos_half_fma_T8_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_half_fma_T8_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "float", "scalar",  };
sinEntry.subName = "cos_unit1_quart_T9<float>";
sinEntry.accuracy_test<float>(cos_unit1_quart_T9<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_T9<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "float2x4", "simd",  };
sinEntry.subName = "cos_unit1_quart_T9<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_T9<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit1_quart_T9<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "float", "simd",  };
sinEntry.subName = "cos_unit1_quart_T9_float_simd";
sinEntry.accuracy_test<float>(cos_unit1_quart_T9_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_T9_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "cos_unit1_quart_fma_T9<float>";
sinEntry.accuracy_test<float>(cos_unit1_quart_fma_T9<float>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_fma_T9<float>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_unit1_quart_fma_T9<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit1_quart_fma_T9<cr::simd::float2x4>, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit1_quart_fma_T9<cr::simd::float2x4>, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit1", "quart", "fma", "float", "simd",  };
sinEntry.subName = "cos_unit1_quart_fma_T9_float_simd";
sinEntry.accuracy_test<float>(cos_unit1_quart_fma_T9_float_simd, std::cosf, 0.0f, 1.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit1_quart_fma_T9_float_simd, M, 0.0f, 1.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "float", "scalar",  };
sinEntry.subName = "cos_unit2_quart_T9<float>";
sinEntry.accuracy_test<float>(cos_unit2_quart_T9<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_T9<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "float2x4", "simd",  };
sinEntry.subName = "cos_unit2_quart_T9<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_T9<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit2_quart_T9<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "float", "simd",  };
sinEntry.subName = "cos_unit2_quart_T9_float_simd";
sinEntry.accuracy_test<float>(cos_unit2_quart_T9_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_T9_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "cos_unit2_quart_fma_T9<float>";
sinEntry.accuracy_test<float>(cos_unit2_quart_fma_T9<float>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_fma_T9<float>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_unit2_quart_fma_T9<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_unit2_quart_fma_T9<cr::simd::float2x4>, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_unit2_quart_fma_T9<cr::simd::float2x4>, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos_unit2", "quart", "fma", "float", "simd",  };
sinEntry.subName = "cos_unit2_quart_fma_T9_float_simd";
sinEntry.accuracy_test<float>(cos_unit2_quart_fma_T9_float_simd, std::cosf, 0.0f, 2.0f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_unit2_quart_fma_T9_float_simd, M, 0.0f, 2.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "float", "scalar",  };
sinEntry.subName = "cos_quart_T9<float>";
sinEntry.accuracy_test<float>(cos_quart_T9<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_T9<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "float2x4", "simd",  };
sinEntry.subName = "cos_quart_T9<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_quart_T9<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_quart_T9<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "float", "simd",  };
sinEntry.subName = "cos_quart_T9_float_simd";
sinEntry.accuracy_test<float>(cos_quart_T9_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_T9_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "fma", "float", "scalar",  };
sinEntry.subName = "cos_quart_fma_T9<float>";
sinEntry.accuracy_test<float>(cos_quart_fma_T9<float>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_fma_T9<float>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "fma", "float2x4", "simd",  };
sinEntry.subName = "cos_quart_fma_T9<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(cos_quart_fma_T9<cr::simd::float2x4>, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<cr::simd::float2x4>(cos_quart_fma_T9<cr::simd::float2x4>, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "cos", "quart", "fma", "float", "simd",  };
sinEntry.subName = "cos_quart_fma_T9_float_simd";
sinEntry.accuracy_test<float>(cos_quart_fma_T9_float_simd, std::cosf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
sinEntry.time<float>(cos_quart_fma_T9_float_simd, M, 0.0f, 6.283185307179586f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "float", "scalar",  };
sinEntry.subName = "tanh_T4<float>";
sinEntry.accuracy_test<float>(tanh_T4<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_T4<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "float2x4", "simd",  };
sinEntry.subName = "tanh_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(tanh_T4<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(tanh_T4<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "float", "simd",  };
sinEntry.subName = "tanh_T4_float_simd";
sinEntry.accuracy_test<float>(tanh_T4_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_T4_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "fma", "float", "scalar",  };
sinEntry.subName = "tanh_fma_T4<float>";
sinEntry.accuracy_test<float>(tanh_fma_T4<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_fma_T4<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "fma", "float2x4", "simd",  };
sinEntry.subName = "tanh_fma_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(tanh_fma_T4<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(tanh_fma_T4<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "fma", "float", "simd",  };
sinEntry.subName = "tanh_fma_T4_float_simd";
sinEntry.accuracy_test<float>(tanh_fma_T4_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_fma_T4_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "float", "scalar",  };
sinEntry.subName = "tanh_T5<float>";
sinEntry.accuracy_test<float>(tanh_T5<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_T5<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "float2x4", "simd",  };
sinEntry.subName = "tanh_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(tanh_T5<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(tanh_T5<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "float", "simd",  };
sinEntry.subName = "tanh_T5_float_simd";
sinEntry.accuracy_test<float>(tanh_T5_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_T5_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "fma", "float", "scalar",  };
sinEntry.subName = "tanh_fma_T5<float>";
sinEntry.accuracy_test<float>(tanh_fma_T5<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_fma_T5<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "fma", "float2x4", "simd",  };
sinEntry.subName = "tanh_fma_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(tanh_fma_T5<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(tanh_fma_T5<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "fma", "float", "simd",  };
sinEntry.subName = "tanh_fma_T5_float_simd";
sinEntry.accuracy_test<float>(tanh_fma_T5_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_fma_T5_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "float", "scalar",  };
sinEntry.subName = "tanh_T6<float>";
sinEntry.accuracy_test<float>(tanh_T6<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_T6<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "float2x4", "simd",  };
sinEntry.subName = "tanh_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(tanh_T6<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(tanh_T6<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "float", "simd",  };
sinEntry.subName = "tanh_T6_float_simd";
sinEntry.accuracy_test<float>(tanh_T6_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_T6_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "fma", "float", "scalar",  };
sinEntry.subName = "tanh_fma_T6<float>";
sinEntry.accuracy_test<float>(tanh_fma_T6<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_fma_T6<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "fma", "float2x4", "simd",  };
sinEntry.subName = "tanh_fma_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(tanh_fma_T6<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(tanh_fma_T6<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "fma", "float", "simd",  };
sinEntry.subName = "tanh_fma_T6_float_simd";
sinEntry.accuracy_test<float>(tanh_fma_T6_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_fma_T6_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "float", "scalar",  };
sinEntry.subName = "tanh_T7<float>";
sinEntry.accuracy_test<float>(tanh_T7<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_T7<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "float2x4", "simd",  };
sinEntry.subName = "tanh_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(tanh_T7<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(tanh_T7<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "float", "simd",  };
sinEntry.subName = "tanh_T7_float_simd";
sinEntry.accuracy_test<float>(tanh_T7_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_T7_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "fma", "float", "scalar",  };
sinEntry.subName = "tanh_fma_T7<float>";
sinEntry.accuracy_test<float>(tanh_fma_T7<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_fma_T7<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "fma", "float2x4", "simd",  };
sinEntry.subName = "tanh_fma_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(tanh_fma_T7<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(tanh_fma_T7<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "fma", "float", "simd",  };
sinEntry.subName = "tanh_fma_T7_float_simd";
sinEntry.accuracy_test<float>(tanh_fma_T7_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_fma_T7_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "float", "scalar",  };
sinEntry.subName = "tanh_T8<float>";
sinEntry.accuracy_test<float>(tanh_T8<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_T8<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "float2x4", "simd",  };
sinEntry.subName = "tanh_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(tanh_T8<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(tanh_T8<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "float", "simd",  };
sinEntry.subName = "tanh_T8_float_simd";
sinEntry.accuracy_test<float>(tanh_T8_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_T8_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "fma", "float", "scalar",  };
sinEntry.subName = "tanh_fma_T8<float>";
sinEntry.accuracy_test<float>(tanh_fma_T8<float>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_fma_T8<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "fma", "float2x4", "simd",  };
sinEntry.subName = "tanh_fma_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(tanh_fma_T8<cr::simd::float2x4>, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(tanh_fma_T8<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "tanh", "fma", "float", "simd",  };
sinEntry.subName = "tanh_fma_T8_float_simd";
sinEntry.accuracy_test<float>(tanh_fma_T8_float_simd, std::tanhf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(tanh_fma_T8_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "float", "scalar",  };
sinEntry.subName = "exp_T3<float>";
sinEntry.accuracy_test<float>(exp_T3<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_T3<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "float2x4", "simd",  };
sinEntry.subName = "exp_T3<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_T3<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_T3<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "float", "simd",  };
sinEntry.subName = "exp_T3_float_simd";
sinEntry.accuracy_test<float>(exp_T3_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_T3_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "fma", "float", "scalar",  };
sinEntry.subName = "exp_fma_T3<float>";
sinEntry.accuracy_test<float>(exp_fma_T3<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_fma_T3<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "fma", "float2x4", "simd",  };
sinEntry.subName = "exp_fma_T3<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_fma_T3<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_fma_T3<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "fma", "float", "simd",  };
sinEntry.subName = "exp_fma_T3_float_simd";
sinEntry.accuracy_test<float>(exp_fma_T3_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_fma_T3_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "float", "scalar",  };
sinEntry.subName = "exp_T4<float>";
sinEntry.accuracy_test<float>(exp_T4<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_T4<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "float2x4", "simd",  };
sinEntry.subName = "exp_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_T4<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_T4<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "float", "simd",  };
sinEntry.subName = "exp_T4_float_simd";
sinEntry.accuracy_test<float>(exp_T4_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_T4_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "fma", "float", "scalar",  };
sinEntry.subName = "exp_fma_T4<float>";
sinEntry.accuracy_test<float>(exp_fma_T4<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_fma_T4<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "fma", "float2x4", "simd",  };
sinEntry.subName = "exp_fma_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_fma_T4<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_fma_T4<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "fma", "float", "simd",  };
sinEntry.subName = "exp_fma_T4_float_simd";
sinEntry.accuracy_test<float>(exp_fma_T4_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_fma_T4_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "float", "scalar",  };
sinEntry.subName = "exp_T5<float>";
sinEntry.accuracy_test<float>(exp_T5<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_T5<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "float2x4", "simd",  };
sinEntry.subName = "exp_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_T5<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_T5<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "float", "simd",  };
sinEntry.subName = "exp_T5_float_simd";
sinEntry.accuracy_test<float>(exp_T5_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_T5_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "fma", "float", "scalar",  };
sinEntry.subName = "exp_fma_T5<float>";
sinEntry.accuracy_test<float>(exp_fma_T5<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_fma_T5<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "fma", "float2x4", "simd",  };
sinEntry.subName = "exp_fma_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_fma_T5<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_fma_T5<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "fma", "float", "simd",  };
sinEntry.subName = "exp_fma_T5_float_simd";
sinEntry.accuracy_test<float>(exp_fma_T5_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_fma_T5_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "float", "scalar",  };
sinEntry.subName = "exp_T6<float>";
sinEntry.accuracy_test<float>(exp_T6<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_T6<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "float2x4", "simd",  };
sinEntry.subName = "exp_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_T6<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_T6<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "float", "simd",  };
sinEntry.subName = "exp_T6_float_simd";
sinEntry.accuracy_test<float>(exp_T6_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_T6_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "fma", "float", "scalar",  };
sinEntry.subName = "exp_fma_T6<float>";
sinEntry.accuracy_test<float>(exp_fma_T6<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_fma_T6<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "fma", "float2x4", "simd",  };
sinEntry.subName = "exp_fma_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_fma_T6<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_fma_T6<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "fma", "float", "simd",  };
sinEntry.subName = "exp_fma_T6_float_simd";
sinEntry.accuracy_test<float>(exp_fma_T6_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_fma_T6_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "float", "scalar",  };
sinEntry.subName = "exp_T7<float>";
sinEntry.accuracy_test<float>(exp_T7<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_T7<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "float2x4", "simd",  };
sinEntry.subName = "exp_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_T7<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_T7<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "float", "simd",  };
sinEntry.subName = "exp_T7_float_simd";
sinEntry.accuracy_test<float>(exp_T7_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_T7_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "fma", "float", "scalar",  };
sinEntry.subName = "exp_fma_T7<float>";
sinEntry.accuracy_test<float>(exp_fma_T7<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_fma_T7<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "fma", "float2x4", "simd",  };
sinEntry.subName = "exp_fma_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_fma_T7<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_fma_T7<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "fma", "float", "simd",  };
sinEntry.subName = "exp_fma_T7_float_simd";
sinEntry.accuracy_test<float>(exp_fma_T7_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_fma_T7_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "float", "scalar",  };
sinEntry.subName = "exp_T8<float>";
sinEntry.accuracy_test<float>(exp_T8<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_T8<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "float2x4", "simd",  };
sinEntry.subName = "exp_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_T8<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_T8<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "float", "simd",  };
sinEntry.subName = "exp_T8_float_simd";
sinEntry.accuracy_test<float>(exp_T8_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_T8_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "fma", "float", "scalar",  };
sinEntry.subName = "exp_fma_T8<float>";
sinEntry.accuracy_test<float>(exp_fma_T8<float>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_fma_T8<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "fma", "float2x4", "simd",  };
sinEntry.subName = "exp_fma_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_fma_T8<cr::simd::float2x4>, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_fma_T8<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp", "fma", "float", "simd",  };
sinEntry.subName = "exp_fma_T8_float_simd";
sinEntry.accuracy_test<float>(exp_fma_T8_float_simd, std::expf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(exp_fma_T8_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "float", "scalar",  };
sinEntry.subName = "atan_T3<float>";
sinEntry.accuracy_test<float>(atan_T3<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_T3<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "float2x4", "simd",  };
sinEntry.subName = "atan_T3<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(atan_T3<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(atan_T3<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "float", "simd",  };
sinEntry.subName = "atan_T3_float_simd";
sinEntry.accuracy_test<float>(atan_T3_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_T3_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "fma", "float", "scalar",  };
sinEntry.subName = "atan_fma_T3<float>";
sinEntry.accuracy_test<float>(atan_fma_T3<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_fma_T3<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "fma", "float2x4", "simd",  };
sinEntry.subName = "atan_fma_T3<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(atan_fma_T3<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(atan_fma_T3<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "fma", "float", "simd",  };
sinEntry.subName = "atan_fma_T3_float_simd";
sinEntry.accuracy_test<float>(atan_fma_T3_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_fma_T3_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "float", "scalar",  };
sinEntry.subName = "atan_T4<float>";
sinEntry.accuracy_test<float>(atan_T4<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_T4<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "float2x4", "simd",  };
sinEntry.subName = "atan_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(atan_T4<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(atan_T4<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "float", "simd",  };
sinEntry.subName = "atan_T4_float_simd";
sinEntry.accuracy_test<float>(atan_T4_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_T4_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "fma", "float", "scalar",  };
sinEntry.subName = "atan_fma_T4<float>";
sinEntry.accuracy_test<float>(atan_fma_T4<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_fma_T4<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "fma", "float2x4", "simd",  };
sinEntry.subName = "atan_fma_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(atan_fma_T4<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(atan_fma_T4<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "fma", "float", "simd",  };
sinEntry.subName = "atan_fma_T4_float_simd";
sinEntry.accuracy_test<float>(atan_fma_T4_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_fma_T4_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "float", "scalar",  };
sinEntry.subName = "atan_T5<float>";
sinEntry.accuracy_test<float>(atan_T5<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_T5<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "float2x4", "simd",  };
sinEntry.subName = "atan_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(atan_T5<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(atan_T5<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "float", "simd",  };
sinEntry.subName = "atan_T5_float_simd";
sinEntry.accuracy_test<float>(atan_T5_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_T5_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "fma", "float", "scalar",  };
sinEntry.subName = "atan_fma_T5<float>";
sinEntry.accuracy_test<float>(atan_fma_T5<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_fma_T5<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "fma", "float2x4", "simd",  };
sinEntry.subName = "atan_fma_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(atan_fma_T5<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(atan_fma_T5<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "fma", "float", "simd",  };
sinEntry.subName = "atan_fma_T5_float_simd";
sinEntry.accuracy_test<float>(atan_fma_T5_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_fma_T5_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "float", "scalar",  };
sinEntry.subName = "atan_T6<float>";
sinEntry.accuracy_test<float>(atan_T6<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_T6<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "float2x4", "simd",  };
sinEntry.subName = "atan_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(atan_T6<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(atan_T6<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "float", "simd",  };
sinEntry.subName = "atan_T6_float_simd";
sinEntry.accuracy_test<float>(atan_T6_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_T6_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "fma", "float", "scalar",  };
sinEntry.subName = "atan_fma_T6<float>";
sinEntry.accuracy_test<float>(atan_fma_T6<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_fma_T6<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "fma", "float2x4", "simd",  };
sinEntry.subName = "atan_fma_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(atan_fma_T6<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(atan_fma_T6<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "fma", "float", "simd",  };
sinEntry.subName = "atan_fma_T6_float_simd";
sinEntry.accuracy_test<float>(atan_fma_T6_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_fma_T6_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "float", "scalar",  };
sinEntry.subName = "atan_T7<float>";
sinEntry.accuracy_test<float>(atan_T7<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_T7<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "float2x4", "simd",  };
sinEntry.subName = "atan_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(atan_T7<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(atan_T7<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "float", "simd",  };
sinEntry.subName = "atan_T7_float_simd";
sinEntry.accuracy_test<float>(atan_T7_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_T7_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "fma", "float", "scalar",  };
sinEntry.subName = "atan_fma_T7<float>";
sinEntry.accuracy_test<float>(atan_fma_T7<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_fma_T7<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "fma", "float2x4", "simd",  };
sinEntry.subName = "atan_fma_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(atan_fma_T7<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(atan_fma_T7<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "fma", "float", "simd",  };
sinEntry.subName = "atan_fma_T7_float_simd";
sinEntry.accuracy_test<float>(atan_fma_T7_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_fma_T7_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "float", "scalar",  };
sinEntry.subName = "atan_T8<float>";
sinEntry.accuracy_test<float>(atan_T8<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_T8<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "float2x4", "simd",  };
sinEntry.subName = "atan_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(atan_T8<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(atan_T8<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "float", "simd",  };
sinEntry.subName = "atan_T8_float_simd";
sinEntry.accuracy_test<float>(atan_T8_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_T8_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "fma", "float", "scalar",  };
sinEntry.subName = "atan_fma_T8<float>";
sinEntry.accuracy_test<float>(atan_fma_T8<float>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_fma_T8<float>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "fma", "float2x4", "simd",  };
sinEntry.subName = "atan_fma_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(atan_fma_T8<cr::simd::float2x4>, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<cr::simd::float2x4>(atan_fma_T8<cr::simd::float2x4>, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "atan", "fma", "float", "simd",  };
sinEntry.subName = "atan_fma_T8_float_simd";
sinEntry.accuracy_test<float>(atan_fma_T8_float_simd, std::atanf, -10.0f, 10.0f, -10.0f, 10.0f);
sinEntry.time<float>(atan_fma_T8_float_simd, M, -10.0f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float", "scalar",  };
sinEntry.subName = "log_T3<float>";
sinEntry.accuracy_test<float>(log_T3<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_T3<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float2x4", "simd",  };
sinEntry.subName = "log_T3<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(log_T3<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(log_T3<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float", "simd",  };
sinEntry.subName = "log_T3_float_simd";
sinEntry.accuracy_test<float>(log_T3_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_T3_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float", "scalar",  };
sinEntry.subName = "log_fma_T3<float>";
sinEntry.accuracy_test<float>(log_fma_T3<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_fma_T3<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float2x4", "simd",  };
sinEntry.subName = "log_fma_T3<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(log_fma_T3<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(log_fma_T3<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float", "simd",  };
sinEntry.subName = "log_fma_T3_float_simd";
sinEntry.accuracy_test<float>(log_fma_T3_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_fma_T3_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float", "scalar",  };
sinEntry.subName = "log_T4<float>";
sinEntry.accuracy_test<float>(log_T4<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_T4<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float2x4", "simd",  };
sinEntry.subName = "log_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(log_T4<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(log_T4<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float", "simd",  };
sinEntry.subName = "log_T4_float_simd";
sinEntry.accuracy_test<float>(log_T4_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_T4_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float", "scalar",  };
sinEntry.subName = "log_fma_T4<float>";
sinEntry.accuracy_test<float>(log_fma_T4<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_fma_T4<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float2x4", "simd",  };
sinEntry.subName = "log_fma_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(log_fma_T4<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(log_fma_T4<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float", "simd",  };
sinEntry.subName = "log_fma_T4_float_simd";
sinEntry.accuracy_test<float>(log_fma_T4_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_fma_T4_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float", "scalar",  };
sinEntry.subName = "log_T5<float>";
sinEntry.accuracy_test<float>(log_T5<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_T5<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float2x4", "simd",  };
sinEntry.subName = "log_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(log_T5<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(log_T5<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float", "simd",  };
sinEntry.subName = "log_T5_float_simd";
sinEntry.accuracy_test<float>(log_T5_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_T5_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float", "scalar",  };
sinEntry.subName = "log_fma_T5<float>";
sinEntry.accuracy_test<float>(log_fma_T5<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_fma_T5<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float2x4", "simd",  };
sinEntry.subName = "log_fma_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(log_fma_T5<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(log_fma_T5<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float", "simd",  };
sinEntry.subName = "log_fma_T5_float_simd";
sinEntry.accuracy_test<float>(log_fma_T5_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_fma_T5_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float", "scalar",  };
sinEntry.subName = "log_T6<float>";
sinEntry.accuracy_test<float>(log_T6<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_T6<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float2x4", "simd",  };
sinEntry.subName = "log_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(log_T6<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(log_T6<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float", "simd",  };
sinEntry.subName = "log_T6_float_simd";
sinEntry.accuracy_test<float>(log_T6_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_T6_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float", "scalar",  };
sinEntry.subName = "log_fma_T6<float>";
sinEntry.accuracy_test<float>(log_fma_T6<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_fma_T6<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float2x4", "simd",  };
sinEntry.subName = "log_fma_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(log_fma_T6<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(log_fma_T6<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float", "simd",  };
sinEntry.subName = "log_fma_T6_float_simd";
sinEntry.accuracy_test<float>(log_fma_T6_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_fma_T6_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float", "scalar",  };
sinEntry.subName = "log_T7<float>";
sinEntry.accuracy_test<float>(log_T7<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_T7<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float2x4", "simd",  };
sinEntry.subName = "log_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(log_T7<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(log_T7<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float", "simd",  };
sinEntry.subName = "log_T7_float_simd";
sinEntry.accuracy_test<float>(log_T7_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_T7_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float", "scalar",  };
sinEntry.subName = "log_fma_T7<float>";
sinEntry.accuracy_test<float>(log_fma_T7<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_fma_T7<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float2x4", "simd",  };
sinEntry.subName = "log_fma_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(log_fma_T7<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(log_fma_T7<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float", "simd",  };
sinEntry.subName = "log_fma_T7_float_simd";
sinEntry.accuracy_test<float>(log_fma_T7_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_fma_T7_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float", "scalar",  };
sinEntry.subName = "log_T8<float>";
sinEntry.accuracy_test<float>(log_T8<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_T8<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float2x4", "simd",  };
sinEntry.subName = "log_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(log_T8<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(log_T8<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float", "simd",  };
sinEntry.subName = "log_T8_float_simd";
sinEntry.accuracy_test<float>(log_T8_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_T8_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float", "scalar",  };
sinEntry.subName = "log_fma_T8<float>";
sinEntry.accuracy_test<float>(log_fma_T8<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_fma_T8<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float2x4", "simd",  };
sinEntry.subName = "log_fma_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(log_fma_T8<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(log_fma_T8<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float", "simd",  };
sinEntry.subName = "log_fma_T8_float_simd";
sinEntry.accuracy_test<float>(log_fma_T8_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_fma_T8_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float", "scalar",  };
sinEntry.subName = "log_T9<float>";
sinEntry.accuracy_test<float>(log_T9<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_T9<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float2x4", "simd",  };
sinEntry.subName = "log_T9<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(log_T9<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(log_T9<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "float", "simd",  };
sinEntry.subName = "log_T9_float_simd";
sinEntry.accuracy_test<float>(log_T9_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_T9_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float", "scalar",  };
sinEntry.subName = "log_fma_T9<float>";
sinEntry.accuracy_test<float>(log_fma_T9<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_fma_T9<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float2x4", "simd",  };
sinEntry.subName = "log_fma_T9<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(log_fma_T9<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(log_fma_T9<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "log", "fma", "float", "simd",  };
sinEntry.subName = "log_fma_T9_float_simd";
sinEntry.accuracy_test<float>(log_fma_T9_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(log_fma_T9_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float", "scalar",  };
sinEntry.subName = "exp_special_T3<float>";
sinEntry.accuracy_test<float>(exp_special_T3<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_T3<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float2x4", "simd",  };
sinEntry.subName = "exp_special_T3<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_special_T3<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_special_T3<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float", "simd",  };
sinEntry.subName = "exp_special_T3_float_simd";
sinEntry.accuracy_test<float>(exp_special_T3_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_T3_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float", "scalar",  };
sinEntry.subName = "exp_special_fma_T3<float>";
sinEntry.accuracy_test<float>(exp_special_fma_T3<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_fma_T3<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float2x4", "simd",  };
sinEntry.subName = "exp_special_fma_T3<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_special_fma_T3<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_special_fma_T3<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float", "simd",  };
sinEntry.subName = "exp_special_fma_T3_float_simd";
sinEntry.accuracy_test<float>(exp_special_fma_T3_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_fma_T3_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float", "scalar",  };
sinEntry.subName = "exp_special_T4<float>";
sinEntry.accuracy_test<float>(exp_special_T4<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_T4<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float2x4", "simd",  };
sinEntry.subName = "exp_special_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_special_T4<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_special_T4<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float", "simd",  };
sinEntry.subName = "exp_special_T4_float_simd";
sinEntry.accuracy_test<float>(exp_special_T4_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_T4_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float", "scalar",  };
sinEntry.subName = "exp_special_fma_T4<float>";
sinEntry.accuracy_test<float>(exp_special_fma_T4<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_fma_T4<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float2x4", "simd",  };
sinEntry.subName = "exp_special_fma_T4<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_special_fma_T4<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_special_fma_T4<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float", "simd",  };
sinEntry.subName = "exp_special_fma_T4_float_simd";
sinEntry.accuracy_test<float>(exp_special_fma_T4_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_fma_T4_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float", "scalar",  };
sinEntry.subName = "exp_special_T5<float>";
sinEntry.accuracy_test<float>(exp_special_T5<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_T5<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float2x4", "simd",  };
sinEntry.subName = "exp_special_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_special_T5<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_special_T5<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float", "simd",  };
sinEntry.subName = "exp_special_T5_float_simd";
sinEntry.accuracy_test<float>(exp_special_T5_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_T5_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float", "scalar",  };
sinEntry.subName = "exp_special_fma_T5<float>";
sinEntry.accuracy_test<float>(exp_special_fma_T5<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_fma_T5<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float2x4", "simd",  };
sinEntry.subName = "exp_special_fma_T5<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_special_fma_T5<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_special_fma_T5<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float", "simd",  };
sinEntry.subName = "exp_special_fma_T5_float_simd";
sinEntry.accuracy_test<float>(exp_special_fma_T5_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_fma_T5_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float", "scalar",  };
sinEntry.subName = "exp_special_T6<float>";
sinEntry.accuracy_test<float>(exp_special_T6<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_T6<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float2x4", "simd",  };
sinEntry.subName = "exp_special_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_special_T6<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_special_T6<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float", "simd",  };
sinEntry.subName = "exp_special_T6_float_simd";
sinEntry.accuracy_test<float>(exp_special_T6_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_T6_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float", "scalar",  };
sinEntry.subName = "exp_special_fma_T6<float>";
sinEntry.accuracy_test<float>(exp_special_fma_T6<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_fma_T6<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float2x4", "simd",  };
sinEntry.subName = "exp_special_fma_T6<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_special_fma_T6<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_special_fma_T6<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float", "simd",  };
sinEntry.subName = "exp_special_fma_T6_float_simd";
sinEntry.accuracy_test<float>(exp_special_fma_T6_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_fma_T6_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float", "scalar",  };
sinEntry.subName = "exp_special_T7<float>";
sinEntry.accuracy_test<float>(exp_special_T7<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_T7<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float2x4", "simd",  };
sinEntry.subName = "exp_special_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_special_T7<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_special_T7<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float", "simd",  };
sinEntry.subName = "exp_special_T7_float_simd";
sinEntry.accuracy_test<float>(exp_special_T7_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_T7_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float", "scalar",  };
sinEntry.subName = "exp_special_fma_T7<float>";
sinEntry.accuracy_test<float>(exp_special_fma_T7<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_fma_T7<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float2x4", "simd",  };
sinEntry.subName = "exp_special_fma_T7<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_special_fma_T7<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_special_fma_T7<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float", "simd",  };
sinEntry.subName = "exp_special_fma_T7_float_simd";
sinEntry.accuracy_test<float>(exp_special_fma_T7_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_fma_T7_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float", "scalar",  };
sinEntry.subName = "exp_special_T8<float>";
sinEntry.accuracy_test<float>(exp_special_T8<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_T8<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float2x4", "simd",  };
sinEntry.subName = "exp_special_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_special_T8<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_special_T8<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float", "simd",  };
sinEntry.subName = "exp_special_T8_float_simd";
sinEntry.accuracy_test<float>(exp_special_T8_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_T8_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float", "scalar",  };
sinEntry.subName = "exp_special_fma_T8<float>";
sinEntry.accuracy_test<float>(exp_special_fma_T8<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_fma_T8<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float2x4", "simd",  };
sinEntry.subName = "exp_special_fma_T8<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_special_fma_T8<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_special_fma_T8<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float", "simd",  };
sinEntry.subName = "exp_special_fma_T8_float_simd";
sinEntry.accuracy_test<float>(exp_special_fma_T8_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_fma_T8_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float", "scalar",  };
sinEntry.subName = "exp_special_T9<float>";
sinEntry.accuracy_test<float>(exp_special_T9<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_T9<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float2x4", "simd",  };
sinEntry.subName = "exp_special_T9<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_special_T9<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_special_T9<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "float", "simd",  };
sinEntry.subName = "exp_special_T9_float_simd";
sinEntry.accuracy_test<float>(exp_special_T9_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_T9_float_simd, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float", "scalar",  };
sinEntry.subName = "exp_special_fma_T9<float>";
sinEntry.accuracy_test<float>(exp_special_fma_T9<float>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_fma_T9<float>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float2x4", "simd",  };
sinEntry.subName = "exp_special_fma_T9<cr::simd::float2x4>";
sinEntry.accuracy_test<cr::simd::float2x4>(exp_special_fma_T9<cr::simd::float2x4>, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<cr::simd::float2x4>(exp_special_fma_T9<cr::simd::float2x4>, M, 0.1f, 10.0f);
}
{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.tags = { "exp_special", "fma", "float", "simd",  };
sinEntry.subName = "exp_special_fma_T9_float_simd";
sinEntry.accuracy_test<float>(exp_special_fma_T9_float_simd, std::logf, 0.1f, 10.0f, 0.1f, 10.0f);
sinEntry.time<float>(exp_special_fma_T9_float_simd, M, 0.1f, 10.0f);
}
