#include "crath/simd/Info.h"

#include <cstdlib>
#include <new>

namespace cr
{
	void free_aligned(void* data) {
#ifdef WIN32
#ifdef CR_HAS_SIMD_TYPES
		_aligned_free(data);
#else
		std::free(data);
#endif
#else
#ifdef CR_HAS_SIMD_TYPES
		free(data);
#else
		std::free(data);
#endif
#endif
	}

	float* allocate_aligned(integer_t alignment, integer_t size) {
#ifdef WIN32
#ifdef CR_HAS_SIMD_TYPES
		return std::launder(reinterpret_cast<float*>(_aligned_malloc(size * sizeof(float), cr::align_unit_size)));
#else
		return std::launder(reinterpret_cast<float*>(std::malloc(size * sizeof(float))));
#endif
#else
#ifdef CR_HAS_SIMD_TYPES
		void* ptr;
		posix_memalign(&ptr, alignment, size * sizeof(float));
		return std::launder(reinterpret_cast<float*>(ptr));
#else
		return std::launder(reinterpret_cast<float*>(std::malloc(size * sizeof(float))));
#endif
#endif
	}
}
