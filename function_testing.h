float msvc_bug_workaround_1(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += [](auto const& x) { return x; }(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_2(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += [](auto const& x) { return cr::StdContext::sqrt0(x); }(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_3(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += [](auto const& x) { return cr::StdContext::sqrt1(x); }(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_4(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += [](auto const& x) { return cr::StdContext::sqrt2(x); }(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_5(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += std::sqrtf(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_6(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += [](float x) { return cr::simd::float1x4(x).sqrt()[0]; }(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_7(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += [](cr::simd::float2x4 const& x) { return x.sqrt(); }(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_8(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += std::tanf(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_9(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += [](float x) { return cr::simd::float1x4(x).tan()[0]; }(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_10(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += [](cr::simd::float2x4 const& x) { return x.tan(); }(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_11(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T1_1<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_12(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T1_1<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_13(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T1_1_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_14(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T1_1<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_15(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T1_1<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_16(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T1_1_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_17(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T1_1<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_18(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T1_1<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_19(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T1_1_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_20(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T1_1<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_21(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T1_1<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_22(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T1_1_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_23(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T2_2<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_24(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T2_2<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_25(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T2_2_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_26(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T2_2<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_27(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T2_2<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_28(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T2_2_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_29(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T2_2<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_30(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T2_2<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_31(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T2_2_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_32(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T2_2<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_33(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T2_2<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_34(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T2_2_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_35(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T3_3<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_36(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T3_3<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_37(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T3_3_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_38(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T3_3<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_39(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T3_3<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_40(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T3_3_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_41(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T3_3<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_42(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T3_3<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_43(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T3_3_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_44(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T3_3<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_45(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T3_3<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_46(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T3_3_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_47(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T4_4<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_48(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T4_4<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_49(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T4_4_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_50(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T4_4<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_51(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T4_4<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_52(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T4_4_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_53(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T4_4<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_54(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T4_4<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_55(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T4_4_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_56(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T4_4<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_57(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T4_4<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_58(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T4_4_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_59(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T5_5<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_60(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T5_5<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_61(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T5_5_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_62(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T5_5<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_63(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T5_5<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_64(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T5_5_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_65(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T5_5<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_66(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T5_5<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_67(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T5_5_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_68(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T5_5<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_69(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T5_5<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_70(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T5_5_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_71(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T6_6<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_72(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T6_6<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_73(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T6_6_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_74(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T6_6<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_75(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T6_6<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_76(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T6_6_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_77(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T6_6<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_78(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T6_6<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_79(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T6_6_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_80(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T6_6<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_81(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T6_6<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_82(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T6_6_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_83(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T7_7<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_84(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T7_7<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_85(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T7_7_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_86(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T7_7<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_87(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T7_7<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_88(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T7_7_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_89(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T7_7<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_90(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T7_7<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_91(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T7_7_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_92(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T7_7<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_93(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T7_7<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_94(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T7_7_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_95(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T8_8<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_96(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T8_8<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_97(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T8_8_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_98(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T8_8<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_99(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T8_8<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_100(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T8_8_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_101(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T8_8<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_102(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T8_8<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_103(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T8_8_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_104(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T8_8<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_105(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T8_8<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_106(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T8_8_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_107(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T9_9<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_108(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T9_9<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_109(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_ec_T9_9_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_110(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T9_9<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_111(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T9_9<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_112(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_fma_T9_9_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_113(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T9_9<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_114(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T9_9<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_115(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_ec_T9_9_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_116(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T9_9<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_117(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T9_9<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_118(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += tan_T9_9_float_simd(buffer[i]);
    }
    return value;
}

void addAll(TestResult& testResult) {
{
auto& entry = testResult.make();
entry.tags = { "noop", "reference",  };
entry.subName = "noop";
entry.accuracy_test<float>([](auto const& x) { return x; }, [](auto const& x) { return x; }, 0.0f, 1.0f, 0.0f, 1.0f);
entry.time<float>(msvc_bug_workaround_1, 0.0f, 1.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "sqrt",  };
entry.subName = "sqrt0";
entry.accuracy_test<float>([](auto const& x) { return cr::StdContext::sqrt0(x); }, std::sqrtf, 0.0f, 1000.0f, 0.0f, 1000.0f);
entry.time<float>(msvc_bug_workaround_2, 0.0f, 1000.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "sqrt",  };
entry.subName = "sqrt1";
entry.accuracy_test<float>([](auto const& x) { return cr::StdContext::sqrt1(x); }, std::sqrtf, 0.0f, 1000.0f, 0.0f, 1000.0f);
entry.time<float>(msvc_bug_workaround_3, 0.0f, 1000.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "sqrt",  };
entry.subName = "sqrt2";
entry.accuracy_test<float>([](auto const& x) { return cr::StdContext::sqrt2(x); }, std::sqrtf, 0.0f, 1000.0f, 0.0f, 1000.0f);
entry.time<float>(msvc_bug_workaround_4, 0.0f, 1000.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "sqrt", "reference", "float", "scalar",  };
entry.subName = "std::sqrtf";
entry.accuracy_test<float>(std::sqrtf, std::sqrtf, 0.0f, 1000.0f, 0.0f, 1000.0f);
entry.time<float>(msvc_bug_workaround_5, 0.0f, 1000.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "sqrt", "reference", "float_simd",  };
entry.subName = "sqrt_float_simd";
entry.accuracy_test<float>([](float x) { return cr::simd::float1x4(x).sqrt()[0]; }, std::sqrtf, 0.0f, 1000.0f, 0.0f, 1000.0f);
entry.time<float>(msvc_bug_workaround_6, 0.0f, 1000.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "sqrt", "reference", "float2x4",  };
entry.subName = "sqrt<float2x4>";
entry.accuracy_test<cr::simd::float2x4>([](cr::simd::float2x4 const& x) { return x.sqrt(); }, std::sqrtf, 0.0f, 1000.0f, 0.0f, 1000.0f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_7, 0.0f, 1000.0f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "reference", "float", "scalar",  };
entry.subName = "std::tanf";
entry.accuracy_test<float>(std::tanf, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_8, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "reference", "float_simd",  };
entry.subName = "tan_float_simd";
entry.accuracy_test<float>([](float x) { return cr::simd::float1x4(x).tan()[0]; }, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_9, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "reference", "float2x4",  };
entry.subName = "tan<float2x4>";
entry.accuracy_test<cr::simd::float2x4>([](cr::simd::float2x4 const& x) { return x.tan(); }, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_10, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float", "scalar",  };
entry.subName = "tan_fma_ec_T1_1<float>";
entry.accuracy_test<float>(tan_fma_ec_T1_1<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_11, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float2x4", "simd",  };
entry.subName = "tan_fma_ec_T1_1<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_ec_T1_1<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_12, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float", "simd",  };
entry.subName = "tan_fma_ec_T1_1_float_simd";
entry.accuracy_test<float>(tan_fma_ec_T1_1_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_13, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float", "scalar",  };
entry.subName = "tan_fma_T1_1<float>";
entry.accuracy_test<float>(tan_fma_T1_1<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_14, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float2x4", "simd",  };
entry.subName = "tan_fma_T1_1<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_T1_1<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_15, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float", "simd",  };
entry.subName = "tan_fma_T1_1_float_simd";
entry.accuracy_test<float>(tan_fma_T1_1_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_16, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float", "scalar",  };
entry.subName = "tan_ec_T1_1<float>";
entry.accuracy_test<float>(tan_ec_T1_1<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_17, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float2x4", "simd",  };
entry.subName = "tan_ec_T1_1<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_ec_T1_1<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_18, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float", "simd",  };
entry.subName = "tan_ec_T1_1_float_simd";
entry.accuracy_test<float>(tan_ec_T1_1_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_19, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float", "scalar",  };
entry.subName = "tan_T1_1<float>";
entry.accuracy_test<float>(tan_T1_1<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_20, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float2x4", "simd",  };
entry.subName = "tan_T1_1<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_T1_1<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_21, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float", "simd",  };
entry.subName = "tan_T1_1_float_simd";
entry.accuracy_test<float>(tan_T1_1_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_22, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float", "scalar",  };
entry.subName = "tan_fma_ec_T2_2<float>";
entry.accuracy_test<float>(tan_fma_ec_T2_2<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_23, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float2x4", "simd",  };
entry.subName = "tan_fma_ec_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_ec_T2_2<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_24, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float", "simd",  };
entry.subName = "tan_fma_ec_T2_2_float_simd";
entry.accuracy_test<float>(tan_fma_ec_T2_2_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_25, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float", "scalar",  };
entry.subName = "tan_fma_T2_2<float>";
entry.accuracy_test<float>(tan_fma_T2_2<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_26, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float2x4", "simd",  };
entry.subName = "tan_fma_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_T2_2<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_27, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float", "simd",  };
entry.subName = "tan_fma_T2_2_float_simd";
entry.accuracy_test<float>(tan_fma_T2_2_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_28, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float", "scalar",  };
entry.subName = "tan_ec_T2_2<float>";
entry.accuracy_test<float>(tan_ec_T2_2<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_29, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float2x4", "simd",  };
entry.subName = "tan_ec_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_ec_T2_2<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_30, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float", "simd",  };
entry.subName = "tan_ec_T2_2_float_simd";
entry.accuracy_test<float>(tan_ec_T2_2_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_31, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float", "scalar",  };
entry.subName = "tan_T2_2<float>";
entry.accuracy_test<float>(tan_T2_2<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_32, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float2x4", "simd",  };
entry.subName = "tan_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_T2_2<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_33, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float", "simd",  };
entry.subName = "tan_T2_2_float_simd";
entry.accuracy_test<float>(tan_T2_2_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_34, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float", "scalar",  };
entry.subName = "tan_fma_ec_T3_3<float>";
entry.accuracy_test<float>(tan_fma_ec_T3_3<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_35, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float2x4", "simd",  };
entry.subName = "tan_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_ec_T3_3<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_36, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float", "simd",  };
entry.subName = "tan_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(tan_fma_ec_T3_3_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_37, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float", "scalar",  };
entry.subName = "tan_fma_T3_3<float>";
entry.accuracy_test<float>(tan_fma_T3_3<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_38, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float2x4", "simd",  };
entry.subName = "tan_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_T3_3<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_39, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float", "simd",  };
entry.subName = "tan_fma_T3_3_float_simd";
entry.accuracy_test<float>(tan_fma_T3_3_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_40, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float", "scalar",  };
entry.subName = "tan_ec_T3_3<float>";
entry.accuracy_test<float>(tan_ec_T3_3<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_41, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float2x4", "simd",  };
entry.subName = "tan_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_ec_T3_3<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_42, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float", "simd",  };
entry.subName = "tan_ec_T3_3_float_simd";
entry.accuracy_test<float>(tan_ec_T3_3_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_43, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float", "scalar",  };
entry.subName = "tan_T3_3<float>";
entry.accuracy_test<float>(tan_T3_3<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_44, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float2x4", "simd",  };
entry.subName = "tan_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_T3_3<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_45, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float", "simd",  };
entry.subName = "tan_T3_3_float_simd";
entry.accuracy_test<float>(tan_T3_3_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_46, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float", "scalar",  };
entry.subName = "tan_fma_ec_T4_4<float>";
entry.accuracy_test<float>(tan_fma_ec_T4_4<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_47, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float2x4", "simd",  };
entry.subName = "tan_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_ec_T4_4<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_48, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float", "simd",  };
entry.subName = "tan_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(tan_fma_ec_T4_4_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_49, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float", "scalar",  };
entry.subName = "tan_fma_T4_4<float>";
entry.accuracy_test<float>(tan_fma_T4_4<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_50, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float2x4", "simd",  };
entry.subName = "tan_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_T4_4<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_51, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float", "simd",  };
entry.subName = "tan_fma_T4_4_float_simd";
entry.accuracy_test<float>(tan_fma_T4_4_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_52, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float", "scalar",  };
entry.subName = "tan_ec_T4_4<float>";
entry.accuracy_test<float>(tan_ec_T4_4<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_53, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float2x4", "simd",  };
entry.subName = "tan_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_ec_T4_4<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_54, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float", "simd",  };
entry.subName = "tan_ec_T4_4_float_simd";
entry.accuracy_test<float>(tan_ec_T4_4_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_55, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float", "scalar",  };
entry.subName = "tan_T4_4<float>";
entry.accuracy_test<float>(tan_T4_4<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_56, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float2x4", "simd",  };
entry.subName = "tan_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_T4_4<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_57, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float", "simd",  };
entry.subName = "tan_T4_4_float_simd";
entry.accuracy_test<float>(tan_T4_4_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_58, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float", "scalar",  };
entry.subName = "tan_fma_ec_T5_5<float>";
entry.accuracy_test<float>(tan_fma_ec_T5_5<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_59, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float2x4", "simd",  };
entry.subName = "tan_fma_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_ec_T5_5<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_60, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float", "simd",  };
entry.subName = "tan_fma_ec_T5_5_float_simd";
entry.accuracy_test<float>(tan_fma_ec_T5_5_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_61, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float", "scalar",  };
entry.subName = "tan_fma_T5_5<float>";
entry.accuracy_test<float>(tan_fma_T5_5<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_62, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float2x4", "simd",  };
entry.subName = "tan_fma_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_T5_5<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_63, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float", "simd",  };
entry.subName = "tan_fma_T5_5_float_simd";
entry.accuracy_test<float>(tan_fma_T5_5_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_64, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float", "scalar",  };
entry.subName = "tan_ec_T5_5<float>";
entry.accuracy_test<float>(tan_ec_T5_5<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_65, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float2x4", "simd",  };
entry.subName = "tan_ec_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_ec_T5_5<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_66, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float", "simd",  };
entry.subName = "tan_ec_T5_5_float_simd";
entry.accuracy_test<float>(tan_ec_T5_5_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_67, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float", "scalar",  };
entry.subName = "tan_T5_5<float>";
entry.accuracy_test<float>(tan_T5_5<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_68, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float2x4", "simd",  };
entry.subName = "tan_T5_5<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_T5_5<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_69, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float", "simd",  };
entry.subName = "tan_T5_5_float_simd";
entry.accuracy_test<float>(tan_T5_5_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_70, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float", "scalar",  };
entry.subName = "tan_fma_ec_T6_6<float>";
entry.accuracy_test<float>(tan_fma_ec_T6_6<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_71, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float2x4", "simd",  };
entry.subName = "tan_fma_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_ec_T6_6<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_72, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float", "simd",  };
entry.subName = "tan_fma_ec_T6_6_float_simd";
entry.accuracy_test<float>(tan_fma_ec_T6_6_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_73, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float", "scalar",  };
entry.subName = "tan_fma_T6_6<float>";
entry.accuracy_test<float>(tan_fma_T6_6<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_74, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float2x4", "simd",  };
entry.subName = "tan_fma_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_T6_6<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_75, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float", "simd",  };
entry.subName = "tan_fma_T6_6_float_simd";
entry.accuracy_test<float>(tan_fma_T6_6_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_76, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float", "scalar",  };
entry.subName = "tan_ec_T6_6<float>";
entry.accuracy_test<float>(tan_ec_T6_6<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_77, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float2x4", "simd",  };
entry.subName = "tan_ec_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_ec_T6_6<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_78, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float", "simd",  };
entry.subName = "tan_ec_T6_6_float_simd";
entry.accuracy_test<float>(tan_ec_T6_6_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_79, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float", "scalar",  };
entry.subName = "tan_T6_6<float>";
entry.accuracy_test<float>(tan_T6_6<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_80, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float2x4", "simd",  };
entry.subName = "tan_T6_6<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_T6_6<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_81, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float", "simd",  };
entry.subName = "tan_T6_6_float_simd";
entry.accuracy_test<float>(tan_T6_6_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_82, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float", "scalar",  };
entry.subName = "tan_fma_ec_T7_7<float>";
entry.accuracy_test<float>(tan_fma_ec_T7_7<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_83, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float2x4", "simd",  };
entry.subName = "tan_fma_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_ec_T7_7<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_84, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float", "simd",  };
entry.subName = "tan_fma_ec_T7_7_float_simd";
entry.accuracy_test<float>(tan_fma_ec_T7_7_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_85, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float", "scalar",  };
entry.subName = "tan_fma_T7_7<float>";
entry.accuracy_test<float>(tan_fma_T7_7<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_86, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float2x4", "simd",  };
entry.subName = "tan_fma_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_T7_7<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_87, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float", "simd",  };
entry.subName = "tan_fma_T7_7_float_simd";
entry.accuracy_test<float>(tan_fma_T7_7_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_88, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float", "scalar",  };
entry.subName = "tan_ec_T7_7<float>";
entry.accuracy_test<float>(tan_ec_T7_7<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_89, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float2x4", "simd",  };
entry.subName = "tan_ec_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_ec_T7_7<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_90, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float", "simd",  };
entry.subName = "tan_ec_T7_7_float_simd";
entry.accuracy_test<float>(tan_ec_T7_7_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_91, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float", "scalar",  };
entry.subName = "tan_T7_7<float>";
entry.accuracy_test<float>(tan_T7_7<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_92, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float2x4", "simd",  };
entry.subName = "tan_T7_7<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_T7_7<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_93, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float", "simd",  };
entry.subName = "tan_T7_7_float_simd";
entry.accuracy_test<float>(tan_T7_7_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_94, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float", "scalar",  };
entry.subName = "tan_fma_ec_T8_8<float>";
entry.accuracy_test<float>(tan_fma_ec_T8_8<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_95, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float2x4", "simd",  };
entry.subName = "tan_fma_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_ec_T8_8<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_96, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float", "simd",  };
entry.subName = "tan_fma_ec_T8_8_float_simd";
entry.accuracy_test<float>(tan_fma_ec_T8_8_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_97, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float", "scalar",  };
entry.subName = "tan_fma_T8_8<float>";
entry.accuracy_test<float>(tan_fma_T8_8<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_98, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float2x4", "simd",  };
entry.subName = "tan_fma_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_T8_8<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_99, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float", "simd",  };
entry.subName = "tan_fma_T8_8_float_simd";
entry.accuracy_test<float>(tan_fma_T8_8_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_100, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float", "scalar",  };
entry.subName = "tan_ec_T8_8<float>";
entry.accuracy_test<float>(tan_ec_T8_8<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_101, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float2x4", "simd",  };
entry.subName = "tan_ec_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_ec_T8_8<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_102, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float", "simd",  };
entry.subName = "tan_ec_T8_8_float_simd";
entry.accuracy_test<float>(tan_ec_T8_8_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_103, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float", "scalar",  };
entry.subName = "tan_T8_8<float>";
entry.accuracy_test<float>(tan_T8_8<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_104, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float2x4", "simd",  };
entry.subName = "tan_T8_8<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_T8_8<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_105, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float", "simd",  };
entry.subName = "tan_T8_8_float_simd";
entry.accuracy_test<float>(tan_T8_8_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_106, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float", "scalar",  };
entry.subName = "tan_fma_ec_T9_9<float>";
entry.accuracy_test<float>(tan_fma_ec_T9_9<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_107, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float2x4", "simd",  };
entry.subName = "tan_fma_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_ec_T9_9<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_108, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "tan", "float", "simd",  };
entry.subName = "tan_fma_ec_T9_9_float_simd";
entry.accuracy_test<float>(tan_fma_ec_T9_9_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_109, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float", "scalar",  };
entry.subName = "tan_fma_T9_9<float>";
entry.accuracy_test<float>(tan_fma_T9_9<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_110, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float2x4", "simd",  };
entry.subName = "tan_fma_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_fma_T9_9<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_111, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "tan", "float", "simd",  };
entry.subName = "tan_fma_T9_9_float_simd";
entry.accuracy_test<float>(tan_fma_T9_9_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_112, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float", "scalar",  };
entry.subName = "tan_ec_T9_9<float>";
entry.accuracy_test<float>(tan_ec_T9_9<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_113, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float2x4", "simd",  };
entry.subName = "tan_ec_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_ec_T9_9<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_114, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "tan", "float", "simd",  };
entry.subName = "tan_ec_T9_9_float_simd";
entry.accuracy_test<float>(tan_ec_T9_9_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_115, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float", "scalar",  };
entry.subName = "tan_T9_9<float>";
entry.accuracy_test<float>(tan_T9_9<float>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_116, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float2x4", "simd",  };
entry.subName = "tan_T9_9<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(tan_T9_9<cr::simd::float2x4>, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_117, -1.5f, 1.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "tan", "float", "simd",  };
entry.subName = "tan_T9_9_float_simd";
entry.accuracy_test<float>(tan_T9_9_float_simd, std::tanf, -1.5f, 1.5f, -1.5f, 1.5f);
entry.time<float>(msvc_bug_workaround_118, -1.5f, 1.5f);
}
}
