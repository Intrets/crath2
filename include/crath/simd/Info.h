#pragma once

#include <tepp/integers.h>

namespace cr
{
#ifdef SIMD_8
#define CR_HAS_SIMD_TYPES
	constexpr integer_t unit_size = 8;
	constexpr integer_t unit_size_2 = unit_size * 2;
#elifdef SIMD_4
#define CR_HAS_SIMD_TYPES
	constexpr integer_t unit_size = 4;
	constexpr integer_t unit_size_2 = unit_size * 2;
#else
#undef CR_HAS_SIMD_TYPES
	constexpr integer_t unit_size = 1;
#endif
	constexpr integer_t align_unit_size = unit_size * sizeof(float);

	constexpr inline integer_t simd_unit_count(integer_t size) {
		if constexpr (unit_size == 1) {
			return size;
		}
		else {
			return (size + unit_size - 1) / unit_size;
		}
	}

	constexpr inline integer_t simd_count(integer_t size) {
		return simd_unit_count(size) * unit_size;
	}

	constexpr inline integer_t simd_size(integer_t size) {
		return simd_count(size) * sizeof(float);
	}
}

#ifdef ANDROID
#define CR_CACHE_LINE 64
#define CR_ALIGN_UNIT
#define CR_ALIGN_CACHE_LINE alignas(CR_CACHE_LINE)
#define CR_HAS_SIMD_TYPES
#else
#define CR_CACHE_LINE std::hardware_destructive_interference_size
#define CR_ALIGN_UNIT alignas(cr::align_unit_size)
#define CR_ALIGN_CACHE_LINE alignas(CR_CACHE_LINE)
#endif
