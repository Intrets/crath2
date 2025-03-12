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
        value += std::sinf(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_7(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_ec_T1_1<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_8(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_ec_T1_1<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_9(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_ec_T1_1<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_10(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_ec_T1_1<cr::simd::float1x8>(buffer[i]);
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
        value += sin_quart_fma_ec_T1_1_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_12(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_T1_1<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_13(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_T1_1<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_14(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_T1_1<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_15(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_T1_1<cr::simd::float1x8>(buffer[i]);
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
        value += sin_quart_fma_T1_1_float_simd(buffer[i]);
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
        value += sin_quart_ec_T1_1<float>(buffer[i]);
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
        value += sin_quart_ec_T1_1<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_19(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_ec_T1_1<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_20(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_ec_T1_1<cr::simd::float1x8>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_21(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_ec_T1_1_float_simd(buffer[i]);
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
        value += sin_quart_T1_1<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_23(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_T1_1<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_24(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_T1_1<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_25(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_T1_1<cr::simd::float1x8>(buffer[i]);
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
        value += sin_quart_T1_1_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_27(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_ec_T2_2<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_28(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_ec_T2_2<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_29(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_ec_T2_2<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_30(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_ec_T2_2<cr::simd::float1x8>(buffer[i]);
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
        value += sin_quart_fma_ec_T2_2_float_simd(buffer[i]);
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
        value += sin_quart_fma_T2_2<float>(buffer[i]);
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
        value += sin_quart_fma_T2_2<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_34(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_T2_2<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_35(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_T2_2<cr::simd::float1x8>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_36(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_T2_2_float_simd(buffer[i]);
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
        value += sin_quart_ec_T2_2<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_38(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_ec_T2_2<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_39(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_ec_T2_2<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_40(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_ec_T2_2<cr::simd::float1x8>(buffer[i]);
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
        value += sin_quart_ec_T2_2_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_42(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_T2_2<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_43(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_T2_2<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_44(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_T2_2<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_45(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_T2_2<cr::simd::float1x8>(buffer[i]);
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
        value += sin_quart_T2_2_float_simd(buffer[i]);
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
        value += sin_quart_fma_ec_T3_3<float>(buffer[i]);
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
        value += sin_quart_fma_ec_T3_3<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_49(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_ec_T3_3<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_50(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_ec_T3_3<cr::simd::float1x8>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_51(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_ec_T3_3_float_simd(buffer[i]);
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
        value += sin_quart_fma_T3_3<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_53(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_T3_3<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_54(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_T3_3<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_55(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_T3_3<cr::simd::float1x8>(buffer[i]);
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
        value += sin_quart_fma_T3_3_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_57(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_ec_T3_3<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_58(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_ec_T3_3<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_59(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_ec_T3_3<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_60(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_ec_T3_3<cr::simd::float1x8>(buffer[i]);
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
        value += sin_quart_ec_T3_3_float_simd(buffer[i]);
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
        value += sin_quart_T3_3<float>(buffer[i]);
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
        value += sin_quart_T3_3<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_64(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_T3_3<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_65(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_T3_3<cr::simd::float1x8>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_66(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_T3_3_float_simd(buffer[i]);
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
        value += sin_quart_fma_ec_T4_4<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_68(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_ec_T4_4<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_69(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_ec_T4_4<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_70(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_ec_T4_4<cr::simd::float1x8>(buffer[i]);
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
        value += sin_quart_fma_ec_T4_4_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_72(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_T4_4<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_73(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_T4_4<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_74(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_T4_4<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_75(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_fma_T4_4<cr::simd::float1x8>(buffer[i]);
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
        value += sin_quart_fma_T4_4_float_simd(buffer[i]);
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
        value += sin_quart_ec_T4_4<float>(buffer[i]);
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
        value += sin_quart_ec_T4_4<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_79(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_ec_T4_4<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_80(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_ec_T4_4<cr::simd::float1x8>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_81(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_ec_T4_4_float_simd(buffer[i]);
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
        value += sin_quart_T4_4<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_83(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_T4_4<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_84(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_T4_4<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_85(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += sin_quart_T4_4<cr::simd::float1x8>(buffer[i]);
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
        value += sin_quart_T4_4_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_87(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += std::logf(buffer[i]);
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
        value += log_fma_ec_T1_1<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_89(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_ec_T1_1<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_90(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_ec_T1_1<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_91(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_ec_T1_1<cr::simd::float1x8>(buffer[i]);
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
        value += log_fma_ec_T1_1_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_93(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_T1_1<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_94(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_T1_1<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_95(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_T1_1<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_96(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_T1_1<cr::simd::float1x8>(buffer[i]);
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
        value += log_fma_T1_1_float_simd(buffer[i]);
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
        value += log_ec_T1_1<float>(buffer[i]);
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
        value += log_ec_T1_1<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_100(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_ec_T1_1<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_101(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_ec_T1_1<cr::simd::float1x8>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_102(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_ec_T1_1_float_simd(buffer[i]);
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
        value += log_T1_1<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_104(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_T1_1<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_105(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_T1_1<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_106(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_T1_1<cr::simd::float1x8>(buffer[i]);
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
        value += log_T1_1_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_108(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_ec_T2_2<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_109(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_ec_T2_2<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_110(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_ec_T2_2<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_111(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_ec_T2_2<cr::simd::float1x8>(buffer[i]);
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
        value += log_fma_ec_T2_2_float_simd(buffer[i]);
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
        value += log_fma_T2_2<float>(buffer[i]);
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
        value += log_fma_T2_2<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_115(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_T2_2<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_116(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_T2_2<cr::simd::float1x8>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_117(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_T2_2_float_simd(buffer[i]);
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
        value += log_ec_T2_2<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_119(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_ec_T2_2<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_120(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_ec_T2_2<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_121(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_ec_T2_2<cr::simd::float1x8>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_122(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_ec_T2_2_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_123(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_T2_2<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_124(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_T2_2<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_125(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_T2_2<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_126(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_T2_2<cr::simd::float1x8>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_127(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_T2_2_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_128(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_ec_T3_3<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_129(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_ec_T3_3<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_130(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_ec_T3_3<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_131(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_ec_T3_3<cr::simd::float1x8>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_132(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_ec_T3_3_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_133(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_T3_3<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_134(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_T3_3<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_135(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_T3_3<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_136(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_T3_3<cr::simd::float1x8>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_137(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_T3_3_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_138(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_ec_T3_3<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_139(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_ec_T3_3<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_140(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_ec_T3_3<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_141(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_ec_T3_3<cr::simd::float1x8>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_142(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_ec_T3_3_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_143(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_T3_3<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_144(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_T3_3<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_145(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_T3_3<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_146(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_T3_3<cr::simd::float1x8>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_147(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_T3_3_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_148(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_ec_T4_4<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_149(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_ec_T4_4<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_150(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_ec_T4_4<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_151(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_ec_T4_4<cr::simd::float1x8>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_152(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_ec_T4_4_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_153(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_T4_4<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_154(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_T4_4<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_155(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_T4_4<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_156(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_T4_4<cr::simd::float1x8>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_157(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_fma_T4_4_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_158(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_ec_T4_4<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_159(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_ec_T4_4<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_160(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_ec_T4_4<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_161(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_ec_T4_4<cr::simd::float1x8>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_162(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_ec_T4_4_float_simd(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_163(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_T4_4<float>(buffer[i]);
    }
    return value;
}

cr::simd::float2x4 msvc_bug_workaround_164(std::vector<cr::simd::float2x4> const& buffer) {
    cr::simd::float2x4 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_T4_4<cr::simd::float2x4>(buffer[i]);
    }
    return value;
}

cr::simd::float2x8 msvc_bug_workaround_165(std::vector<cr::simd::float2x8> const& buffer) {
    cr::simd::float2x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_T4_4<cr::simd::float2x8>(buffer[i]);
    }
    return value;
}

cr::simd::float1x8 msvc_bug_workaround_166(std::vector<cr::simd::float1x8> const& buffer) {
    cr::simd::float1x8 value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_T4_4<cr::simd::float1x8>(buffer[i]);
    }
    return value;
}

float msvc_bug_workaround_167(std::vector<float> const& buffer) {
    float value{};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {
        value += log_T4_4_float_simd(buffer[i]);
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
entry.tags = { "sin", "reference", "float", "scalar",  };
entry.subName = "std::sinf";
entry.accuracy_test<float>(std::sinf, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_6, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_ec_T1_1<float>";
entry.accuracy_test<float>(sin_quart_fma_ec_T1_1<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_7, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_ec_T1_1<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_ec_T1_1<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_8, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float2x8", "simd",  };
entry.subName = "sin_quart_fma_ec_T1_1<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(sin_quart_fma_ec_T1_1<cr::simd::float2x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_9, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float1x8", "simd",  };
entry.subName = "sin_quart_fma_ec_T1_1<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(sin_quart_fma_ec_T1_1<cr::simd::float1x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_10, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_ec_T1_1_float_simd";
entry.accuracy_test<float>(sin_quart_fma_ec_T1_1_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_11, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_T1_1<float>";
entry.accuracy_test<float>(sin_quart_fma_T1_1<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_12, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T1_1<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T1_1<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_13, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float2x8", "simd",  };
entry.subName = "sin_quart_fma_T1_1<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(sin_quart_fma_T1_1<cr::simd::float2x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_14, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float1x8", "simd",  };
entry.subName = "sin_quart_fma_T1_1<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(sin_quart_fma_T1_1<cr::simd::float1x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_15, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_T1_1_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T1_1_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_16, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_ec_T1_1<float>";
entry.accuracy_test<float>(sin_quart_ec_T1_1<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_17, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_ec_T1_1<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_ec_T1_1<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_18, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float2x8", "simd",  };
entry.subName = "sin_quart_ec_T1_1<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(sin_quart_ec_T1_1<cr::simd::float2x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_19, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float1x8", "simd",  };
entry.subName = "sin_quart_ec_T1_1<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(sin_quart_ec_T1_1<cr::simd::float1x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_20, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_ec_T1_1_float_simd";
entry.accuracy_test<float>(sin_quart_ec_T1_1_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_21, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float", "scalar",  };
entry.subName = "sin_quart_T1_1<float>";
entry.accuracy_test<float>(sin_quart_T1_1<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_22, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_T1_1<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_T1_1<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_23, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float2x8", "simd",  };
entry.subName = "sin_quart_T1_1<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(sin_quart_T1_1<cr::simd::float2x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_24, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float1x8", "simd",  };
entry.subName = "sin_quart_T1_1<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(sin_quart_T1_1<cr::simd::float1x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_25, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float", "simd",  };
entry.subName = "sin_quart_T1_1_float_simd";
entry.accuracy_test<float>(sin_quart_T1_1_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_26, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_ec_T2_2<float>";
entry.accuracy_test<float>(sin_quart_fma_ec_T2_2<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_27, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_ec_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_ec_T2_2<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_28, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float2x8", "simd",  };
entry.subName = "sin_quart_fma_ec_T2_2<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(sin_quart_fma_ec_T2_2<cr::simd::float2x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_29, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float1x8", "simd",  };
entry.subName = "sin_quart_fma_ec_T2_2<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(sin_quart_fma_ec_T2_2<cr::simd::float1x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_30, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_ec_T2_2_float_simd";
entry.accuracy_test<float>(sin_quart_fma_ec_T2_2_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_31, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_T2_2<float>";
entry.accuracy_test<float>(sin_quart_fma_T2_2<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_32, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T2_2<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_33, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float2x8", "simd",  };
entry.subName = "sin_quart_fma_T2_2<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(sin_quart_fma_T2_2<cr::simd::float2x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_34, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float1x8", "simd",  };
entry.subName = "sin_quart_fma_T2_2<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(sin_quart_fma_T2_2<cr::simd::float1x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_35, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_T2_2_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T2_2_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_36, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_ec_T2_2<float>";
entry.accuracy_test<float>(sin_quart_ec_T2_2<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_37, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_ec_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_ec_T2_2<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_38, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float2x8", "simd",  };
entry.subName = "sin_quart_ec_T2_2<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(sin_quart_ec_T2_2<cr::simd::float2x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_39, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float1x8", "simd",  };
entry.subName = "sin_quart_ec_T2_2<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(sin_quart_ec_T2_2<cr::simd::float1x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_40, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_ec_T2_2_float_simd";
entry.accuracy_test<float>(sin_quart_ec_T2_2_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_41, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float", "scalar",  };
entry.subName = "sin_quart_T2_2<float>";
entry.accuracy_test<float>(sin_quart_T2_2<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_42, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_T2_2<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_43, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float2x8", "simd",  };
entry.subName = "sin_quart_T2_2<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(sin_quart_T2_2<cr::simd::float2x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_44, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float1x8", "simd",  };
entry.subName = "sin_quart_T2_2<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(sin_quart_T2_2<cr::simd::float1x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_45, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float", "simd",  };
entry.subName = "sin_quart_T2_2_float_simd";
entry.accuracy_test<float>(sin_quart_T2_2_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_46, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_ec_T3_3<float>";
entry.accuracy_test<float>(sin_quart_fma_ec_T3_3<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_47, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_ec_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_48, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float2x8", "simd",  };
entry.subName = "sin_quart_fma_ec_T3_3<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(sin_quart_fma_ec_T3_3<cr::simd::float2x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_49, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float1x8", "simd",  };
entry.subName = "sin_quart_fma_ec_T3_3<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(sin_quart_fma_ec_T3_3<cr::simd::float1x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_50, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(sin_quart_fma_ec_T3_3_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_51, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_T3_3<float>";
entry.accuracy_test<float>(sin_quart_fma_T3_3<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_52, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_53, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float2x8", "simd",  };
entry.subName = "sin_quart_fma_T3_3<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(sin_quart_fma_T3_3<cr::simd::float2x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_54, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float1x8", "simd",  };
entry.subName = "sin_quart_fma_T3_3<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(sin_quart_fma_T3_3<cr::simd::float1x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_55, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_T3_3_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T3_3_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_56, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_ec_T3_3<float>";
entry.accuracy_test<float>(sin_quart_ec_T3_3<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_57, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_ec_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_58, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float2x8", "simd",  };
entry.subName = "sin_quart_ec_T3_3<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(sin_quart_ec_T3_3<cr::simd::float2x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_59, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float1x8", "simd",  };
entry.subName = "sin_quart_ec_T3_3<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(sin_quart_ec_T3_3<cr::simd::float1x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_60, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_ec_T3_3_float_simd";
entry.accuracy_test<float>(sin_quart_ec_T3_3_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_61, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float", "scalar",  };
entry.subName = "sin_quart_T3_3<float>";
entry.accuracy_test<float>(sin_quart_T3_3<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_62, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_T3_3<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_63, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float2x8", "simd",  };
entry.subName = "sin_quart_T3_3<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(sin_quart_T3_3<cr::simd::float2x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_64, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float1x8", "simd",  };
entry.subName = "sin_quart_T3_3<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(sin_quart_T3_3<cr::simd::float1x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_65, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float", "simd",  };
entry.subName = "sin_quart_T3_3_float_simd";
entry.accuracy_test<float>(sin_quart_T3_3_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_66, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_ec_T4_4<float>";
entry.accuracy_test<float>(sin_quart_fma_ec_T4_4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_67, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_ec_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_68, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float2x8", "simd",  };
entry.subName = "sin_quart_fma_ec_T4_4<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(sin_quart_fma_ec_T4_4<cr::simd::float2x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_69, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float1x8", "simd",  };
entry.subName = "sin_quart_fma_ec_T4_4<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(sin_quart_fma_ec_T4_4<cr::simd::float1x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_70, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(sin_quart_fma_ec_T4_4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_71, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "scalar",  };
entry.subName = "sin_quart_fma_T4_4<float>";
entry.accuracy_test<float>(sin_quart_fma_T4_4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_72, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_fma_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_73, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float2x8", "simd",  };
entry.subName = "sin_quart_fma_T4_4<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(sin_quart_fma_T4_4<cr::simd::float2x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_74, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float1x8", "simd",  };
entry.subName = "sin_quart_fma_T4_4<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(sin_quart_fma_T4_4<cr::simd::float1x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_75, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "sin", "float", "simd",  };
entry.subName = "sin_quart_fma_T4_4_float_simd";
entry.accuracy_test<float>(sin_quart_fma_T4_4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_76, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float", "scalar",  };
entry.subName = "sin_quart_ec_T4_4<float>";
entry.accuracy_test<float>(sin_quart_ec_T4_4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_77, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_ec_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_78, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float2x8", "simd",  };
entry.subName = "sin_quart_ec_T4_4<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(sin_quart_ec_T4_4<cr::simd::float2x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_79, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float1x8", "simd",  };
entry.subName = "sin_quart_ec_T4_4<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(sin_quart_ec_T4_4<cr::simd::float1x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_80, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "sin", "float", "simd",  };
entry.subName = "sin_quart_ec_T4_4_float_simd";
entry.accuracy_test<float>(sin_quart_ec_T4_4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_81, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float", "scalar",  };
entry.subName = "sin_quart_T4_4<float>";
entry.accuracy_test<float>(sin_quart_T4_4<float>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_82, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float2x4", "simd",  };
entry.subName = "sin_quart_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(sin_quart_T4_4<cr::simd::float2x4>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_83, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float2x8", "simd",  };
entry.subName = "sin_quart_T4_4<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(sin_quart_T4_4<cr::simd::float2x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_84, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float1x8", "simd",  };
entry.subName = "sin_quart_T4_4<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(sin_quart_T4_4<cr::simd::float1x8>, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_85, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "sin", "float", "simd",  };
entry.subName = "sin_quart_T4_4_float_simd";
entry.accuracy_test<float>(sin_quart_T4_4_float_simd, std::sinf, 0.0f, 6.283185307179586f, 0.0f, 6.283185307179586f);
entry.time<float>(msvc_bug_workaround_86, 0.0f, 6.283185307179586f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "reference", "float", "scalar",  };
entry.subName = "std::logf";
entry.accuracy_test<float>(std::logf, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_87, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_fma_ec_T1_1<float>";
entry.accuracy_test<float>(log_fma_ec_T1_1<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_88, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_fma_ec_T1_1<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_ec_T1_1<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_89, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float2x8", "simd",  };
entry.subName = "log_fma_ec_T1_1<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(log_fma_ec_T1_1<cr::simd::float2x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_90, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float1x8", "simd",  };
entry.subName = "log_fma_ec_T1_1<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(log_fma_ec_T1_1<cr::simd::float1x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_91, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "simd",  };
entry.subName = "log_fma_ec_T1_1_float_simd";
entry.accuracy_test<float>(log_fma_ec_T1_1_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_92, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "scalar",  };
entry.subName = "log_fma_T1_1<float>";
entry.accuracy_test<float>(log_fma_T1_1<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_93, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float2x4", "simd",  };
entry.subName = "log_fma_T1_1<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_T1_1<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_94, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float2x8", "simd",  };
entry.subName = "log_fma_T1_1<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(log_fma_T1_1<cr::simd::float2x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_95, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float1x8", "simd",  };
entry.subName = "log_fma_T1_1<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(log_fma_T1_1<cr::simd::float1x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_96, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "simd",  };
entry.subName = "log_fma_T1_1_float_simd";
entry.accuracy_test<float>(log_fma_T1_1_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_97, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_ec_T1_1<float>";
entry.accuracy_test<float>(log_ec_T1_1<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_98, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_ec_T1_1<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_ec_T1_1<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_99, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float2x8", "simd",  };
entry.subName = "log_ec_T1_1<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(log_ec_T1_1<cr::simd::float2x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_100, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float1x8", "simd",  };
entry.subName = "log_ec_T1_1<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(log_ec_T1_1<cr::simd::float1x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_101, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float", "simd",  };
entry.subName = "log_ec_T1_1_float_simd";
entry.accuracy_test<float>(log_ec_T1_1_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_102, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float", "scalar",  };
entry.subName = "log_T1_1<float>";
entry.accuracy_test<float>(log_T1_1<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_103, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float2x4", "simd",  };
entry.subName = "log_T1_1<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_T1_1<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_104, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float2x8", "simd",  };
entry.subName = "log_T1_1<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(log_T1_1<cr::simd::float2x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_105, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float1x8", "simd",  };
entry.subName = "log_T1_1<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(log_T1_1<cr::simd::float1x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_106, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float", "simd",  };
entry.subName = "log_T1_1_float_simd";
entry.accuracy_test<float>(log_T1_1_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_107, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_fma_ec_T2_2<float>";
entry.accuracy_test<float>(log_fma_ec_T2_2<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_108, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_fma_ec_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_ec_T2_2<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_109, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float2x8", "simd",  };
entry.subName = "log_fma_ec_T2_2<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(log_fma_ec_T2_2<cr::simd::float2x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_110, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float1x8", "simd",  };
entry.subName = "log_fma_ec_T2_2<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(log_fma_ec_T2_2<cr::simd::float1x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_111, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "simd",  };
entry.subName = "log_fma_ec_T2_2_float_simd";
entry.accuracy_test<float>(log_fma_ec_T2_2_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_112, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "scalar",  };
entry.subName = "log_fma_T2_2<float>";
entry.accuracy_test<float>(log_fma_T2_2<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_113, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float2x4", "simd",  };
entry.subName = "log_fma_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_T2_2<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_114, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float2x8", "simd",  };
entry.subName = "log_fma_T2_2<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(log_fma_T2_2<cr::simd::float2x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_115, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float1x8", "simd",  };
entry.subName = "log_fma_T2_2<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(log_fma_T2_2<cr::simd::float1x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_116, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "simd",  };
entry.subName = "log_fma_T2_2_float_simd";
entry.accuracy_test<float>(log_fma_T2_2_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_117, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_ec_T2_2<float>";
entry.accuracy_test<float>(log_ec_T2_2<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_118, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_ec_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_ec_T2_2<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_119, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float2x8", "simd",  };
entry.subName = "log_ec_T2_2<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(log_ec_T2_2<cr::simd::float2x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_120, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float1x8", "simd",  };
entry.subName = "log_ec_T2_2<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(log_ec_T2_2<cr::simd::float1x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_121, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float", "simd",  };
entry.subName = "log_ec_T2_2_float_simd";
entry.accuracy_test<float>(log_ec_T2_2_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_122, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float", "scalar",  };
entry.subName = "log_T2_2<float>";
entry.accuracy_test<float>(log_T2_2<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_123, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float2x4", "simd",  };
entry.subName = "log_T2_2<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_T2_2<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_124, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float2x8", "simd",  };
entry.subName = "log_T2_2<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(log_T2_2<cr::simd::float2x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_125, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float1x8", "simd",  };
entry.subName = "log_T2_2<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(log_T2_2<cr::simd::float1x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_126, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float", "simd",  };
entry.subName = "log_T2_2_float_simd";
entry.accuracy_test<float>(log_T2_2_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_127, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_fma_ec_T3_3<float>";
entry.accuracy_test<float>(log_fma_ec_T3_3<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_128, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_fma_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_ec_T3_3<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_129, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float2x8", "simd",  };
entry.subName = "log_fma_ec_T3_3<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(log_fma_ec_T3_3<cr::simd::float2x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_130, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float1x8", "simd",  };
entry.subName = "log_fma_ec_T3_3<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(log_fma_ec_T3_3<cr::simd::float1x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_131, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "simd",  };
entry.subName = "log_fma_ec_T3_3_float_simd";
entry.accuracy_test<float>(log_fma_ec_T3_3_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_132, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "scalar",  };
entry.subName = "log_fma_T3_3<float>";
entry.accuracy_test<float>(log_fma_T3_3<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_133, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float2x4", "simd",  };
entry.subName = "log_fma_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_T3_3<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_134, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float2x8", "simd",  };
entry.subName = "log_fma_T3_3<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(log_fma_T3_3<cr::simd::float2x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_135, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float1x8", "simd",  };
entry.subName = "log_fma_T3_3<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(log_fma_T3_3<cr::simd::float1x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_136, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "simd",  };
entry.subName = "log_fma_T3_3_float_simd";
entry.accuracy_test<float>(log_fma_T3_3_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_137, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_ec_T3_3<float>";
entry.accuracy_test<float>(log_ec_T3_3<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_138, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_ec_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_ec_T3_3<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_139, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float2x8", "simd",  };
entry.subName = "log_ec_T3_3<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(log_ec_T3_3<cr::simd::float2x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_140, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float1x8", "simd",  };
entry.subName = "log_ec_T3_3<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(log_ec_T3_3<cr::simd::float1x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_141, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float", "simd",  };
entry.subName = "log_ec_T3_3_float_simd";
entry.accuracy_test<float>(log_ec_T3_3_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_142, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float", "scalar",  };
entry.subName = "log_T3_3<float>";
entry.accuracy_test<float>(log_T3_3<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_143, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float2x4", "simd",  };
entry.subName = "log_T3_3<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_T3_3<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_144, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float2x8", "simd",  };
entry.subName = "log_T3_3<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(log_T3_3<cr::simd::float2x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_145, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float1x8", "simd",  };
entry.subName = "log_T3_3<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(log_T3_3<cr::simd::float1x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_146, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float", "simd",  };
entry.subName = "log_T3_3_float_simd";
entry.accuracy_test<float>(log_T3_3_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_147, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_fma_ec_T4_4<float>";
entry.accuracy_test<float>(log_fma_ec_T4_4<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_148, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_fma_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_ec_T4_4<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_149, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float2x8", "simd",  };
entry.subName = "log_fma_ec_T4_4<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(log_fma_ec_T4_4<cr::simd::float2x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_150, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float1x8", "simd",  };
entry.subName = "log_fma_ec_T4_4<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(log_fma_ec_T4_4<cr::simd::float1x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_151, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "ends corrected", "log", "float", "simd",  };
entry.subName = "log_fma_ec_T4_4_float_simd";
entry.accuracy_test<float>(log_fma_ec_T4_4_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_152, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "scalar",  };
entry.subName = "log_fma_T4_4<float>";
entry.accuracy_test<float>(log_fma_T4_4<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_153, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float2x4", "simd",  };
entry.subName = "log_fma_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_fma_T4_4<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_154, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float2x8", "simd",  };
entry.subName = "log_fma_T4_4<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(log_fma_T4_4<cr::simd::float2x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_155, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float1x8", "simd",  };
entry.subName = "log_fma_T4_4<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(log_fma_T4_4<cr::simd::float1x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_156, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "fma", "log", "float", "simd",  };
entry.subName = "log_fma_T4_4_float_simd";
entry.accuracy_test<float>(log_fma_T4_4_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_157, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float", "scalar",  };
entry.subName = "log_ec_T4_4<float>";
entry.accuracy_test<float>(log_ec_T4_4<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_158, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float2x4", "simd",  };
entry.subName = "log_ec_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_ec_T4_4<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_159, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float2x8", "simd",  };
entry.subName = "log_ec_T4_4<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(log_ec_T4_4<cr::simd::float2x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_160, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float1x8", "simd",  };
entry.subName = "log_ec_T4_4<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(log_ec_T4_4<cr::simd::float1x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_161, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "ends corrected", "log", "float", "simd",  };
entry.subName = "log_ec_T4_4_float_simd";
entry.accuracy_test<float>(log_ec_T4_4_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_162, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float", "scalar",  };
entry.subName = "log_T4_4<float>";
entry.accuracy_test<float>(log_T4_4<float>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_163, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float2x4", "simd",  };
entry.subName = "log_T4_4<cr::simd::float2x4>";
entry.accuracy_test<cr::simd::float2x4>(log_T4_4<cr::simd::float2x4>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x4>(msvc_bug_workaround_164, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float2x8", "simd",  };
entry.subName = "log_T4_4<cr::simd::float2x8>";
entry.accuracy_test<cr::simd::float2x8>(log_T4_4<cr::simd::float2x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float2x8>(msvc_bug_workaround_165, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float1x8", "simd",  };
entry.subName = "log_T4_4<cr::simd::float1x8>";
entry.accuracy_test<cr::simd::float1x8>(log_T4_4<cr::simd::float1x8>, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<cr::simd::float1x8>(msvc_bug_workaround_166, 0.08f, 12.5f);
}
{
auto& entry = testResult.make();
entry.tags = { "log", "float", "simd",  };
entry.subName = "log_T4_4_float_simd";
entry.accuracy_test<float>(log_T4_4_float_simd, std::logf, 0.08f, 12.5f, 0.08f, 12.5f);
entry.time<float>(msvc_bug_workaround_167, 0.08f, 12.5f);
}
}
