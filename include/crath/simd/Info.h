#pragma once

#include <tepp/integers.h>

namespace cr
{
#ifdef ARCH_x86_64
	constexpr integer_t unit_size = 4;
#else
	constexpr integer_t unit_size = 1;
#endif
}

#ifdef ANDROID
#define CR_CACHE_LINE 64
#define CR_ALIGN_UNIT
#define CR_ALIGN_CACHE_LINE alignas(CR_CACHE_LINE)
#else
#define CR_CACHE_LINE std::hardware_destructive_interference_size
#define CR_ALIGN_UNIT alignas(cr::unit_size * sizeof(float))
#define CR_ALIGN_CACHE_LINE alignas(CR_CACHE_LINE)
#define CR_HAS_SIMD_TYPES
#endif
