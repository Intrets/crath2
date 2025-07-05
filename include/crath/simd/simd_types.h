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

		template<class F>
		struct double_type;

		template<std::floating_point F>
		struct double_type<F>
		{
			using type = double;
		};

		template<class F>
		struct double_type
		{
			using type = decltype(std::declval<F>().convertDouble());
		};

		template<class F>
		concept can_convert_to_float = requires(F f) {
			f.convertFloat();
		};

		template<class F>
		concept can_convert_to_double = requires(F f) {
			f.convertDouble();
		};

		template<class F>
		concept can_convert = requires(F f) {
			typename F::scalar_type;
		};

		template<class F>
		concept is_double_type = requires(F f) {
			requires std::same_as<double, typename F::scalar_type>;
		};

		template<class F>
		concept is_float_type = requires(F f) {
			requires std::same_as<float, typename F::scalar_type>;
		};
	}

	template<class F>
	using int_type = detail::int_type<F>::type;

	template<class F>
	using double_type = detail::double_type<F>::type;

	template<class To_, class From_>
	auto convert(From_&& from) {
		using To = std::remove_cvref_t<To_>;
		using From = std::remove_cvref_t<From_>;

		if constexpr (std::same_as<From, bool>) {
			return std::forward<From_>(from);
		}
		else if constexpr (std::same_as<To, From>) {
			return std::forward<From_>(from);
		}
		else if constexpr (std::floating_point<From> && std::floating_point<To>) {
			return static_cast<To>(from);
		}
		else if constexpr (std::integral<From>) {
			return To(std::forward<From_>(from));
		}
		else if constexpr (detail::is_double_type<To> && detail::can_convert_to_double<From>) {
			return from.convertDouble();
		}
		else if constexpr (detail::is_float_type<To> && detail::can_convert_to_float<From>) {
			return from.convertFloat();
		}
	}
}
