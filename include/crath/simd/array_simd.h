#pragma once

#include <tepp/integers.h>
#include <tepp/misc.h>
#include <tepp/tepp.h>

#include "crath/simd/aligned_load_hint.h"

namespace cr::simd
{
	namespace detail
	{
		template<class F>
		constexpr integer_t get_simd_array_size() {
			if constexpr (std::same_as<F, float>) {
				return 1;
			}
			else {
				return F::size;
			}
		}
	}

	template<integer_t N, integer_t alignment, class F>
	struct array_simd_processing;

	namespace detail
	{
		template<class F, class T>
		concept can_construct = requires(T t) { F(t); };

		constexpr auto get_scalar_type_f = []<class F>(te::Type_t<F>) {
			if constexpr (std::same_as<F, float> || std::same_as<F, int32_t>) {
				return te::Type<F>;
			}
			else {
				return te::Type<typename F::scalar_type>;
			}
		};

		template<class F>
		using get_scalar_type = Gettype(get_scalar_type_f(te::Type<F>));
	}

	template<integer_t N, integer_t alignment, class F>
	struct array_simd
	{
		using access_type = array_simd_processing<N, alignment, F>;
		using S = detail::get_scalar_type<F>;

		alignas(alignment) S data[N];

		array_simd() = default;
		array_simd(F const& a) {
			this->write(a);
		}
		~array_simd() = default;

		operator F() const {
			return this->get();
		}

		S& operator[](integer_t i) {
			return this->data[i];
		}

		S const& operator[](integer_t i) const {
			return this->data[i];
		}

		array_simd& operator=(F const& value) {
			this->write(value);

			return *this;
		}

		S* begin() {
			return this->data;
		}

		S* end() {
			return this->data + N;
		}

		S const* begin() const {
			return this->data;
		}

		S const* end() const {
			return this->data + N;
		}

		F get() const {
			if constexpr (std::same_as<S, F>) {
				return this->data[0];
			}
			else {
				return F(this->data, aligned_hint);
			}
		}

		void write(F value) {
			if constexpr (std::same_as<S, F>) {
				this->data[0] = value;
			}
			else {
				value.write(this->data[0], aligned_hint);
			}
		}

		access_type access();
	};

	namespace detail
	{
		template<class T>
		struct is_array_simd_type;

		template<integer_t N, integer_t alignment, class F>
		struct is_array_simd_type<array_simd<N, alignment, F>> : std::true_type
		{
		};

		template<class T>
		struct is_array_simd_type : std::false_type
		{
		};
	}

	template<class T>
	concept is_array_simd_type = detail::is_array_simd_type<T>::value;

	namespace detail
	{
		template<class T>
		struct return_type_get_simd_type;

		template<class T>
		struct return_type_get_simd_type;

		constexpr auto return_type_get_simd_type = []<class T>(te::Type_t<T>) {
			if constexpr (cr::simd::is_array_simd_type<T>) {
				return te::Type<typename T::access_type>;
			}
			else {
				return te::Type<T&>;
			}
		};
	}

	template<class T>
	using return_type = Gettype(detail::return_type_get_simd_type(te::Type<T>));

	template<class T>
	return_type<T> use(T& value) {
		if constexpr (is_array_simd_type<T>) {
			return value.access();
		}
		else {
			return value;
		}
	}

	template<integer_t N, integer_t alignment, class F>
	struct array_simd_processing
	{
		array_simd<N, alignment, F>& array;
		F data;

		NO_COPY_MOVE(array_simd_processing);

		operator F&() {
			return this->data;
		}

		array_simd_processing& operator=(F const& other) {
			this->data = other;

			return *this;
		}

		array_simd_processing() = delete;
		array_simd_processing(array_simd<N, alignment, F>& array_)
		    : array(array_),
		      data(array.get()) {
		}

		~array_simd_processing() {
			this->array.write(this->data);
		}
	};

	template<integer_t N, integer_t alignment, class F>
	inline array_simd_processing<N, alignment, F> array_simd<N, alignment, F>::access() {
		return array_simd_processing<N, alignment, F>(*this);
	}

	template<class F>
	using array_simd_type = array_simd<detail::get_simd_array_size<F>(), alignof(F), F>;

	template<class F>
	auto to_array(F const& a) {
		return cr::simd::array_simd_type<F>(a);
	}
}
