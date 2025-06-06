#pragma once

#include <concepts>

#include <tepp/integers.h>

namespace cr::simd
{
	namespace detail
	{
		template<class F>
		struct int_type;

		template<std::floating_point F>
		struct int_type<F>
		{
			using type = integer_t;
		};

		template<class F>
		struct int_type
		{
			using type = decltype(std::declval<F>().convertInt());
		};
	}

	template<class F>
	using int_type = detail::int_type<F>::type;
}
