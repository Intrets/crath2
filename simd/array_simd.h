#pragma once

#include <tepp/integers.h>
#include <tepp/misc.h>
#include <tepp/tepp.h>

#include "crath/simd/aligned_load_hint.h"
#include "crath/simd/simd_definitions.h"

namespace cr::simd
{
	template<class F>
	constexpr integer_t get_simd_array_size() {
		if constexpr (std::integral<F> || std::floating_point<F>) {
			return 1;
		}
		else {
			return F::size;
		}
	}

	template<integer_t N, integer_t alignment, class F>
	struct array_simd_processing;

	namespace detail
	{
		template<class F, class T>
		concept can_construct = requires(T t) { F(t); };

		constexpr auto get_scalar_type_f = []<class F>(te::Type_t<F>) {
			if constexpr (std::integral<F> || std::floating_point<F>) {
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
		using simd_type = F;
		using value_type = F;
		using scalar_type = S;

		alignas(alignment) S data[N]{};

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

		static integer_t size() {
			return N;
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
		using value_type = F;

		array_simd<N, alignment, F>& array;
		F data;

		NO_COPY_MOVE(array_simd_processing);

		operator F&() {
			return this->data;
		}

		F& get() {
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
	using array_simd_type = array_simd<get_simd_array_size<F>(), alignof(F), F>;

	template<class T>
	concept has_value_type = requires(T t) { typename T::value_type; };

	namespace detail
	{
		template<class F>
		struct simd_value_type;

		template<>
		struct simd_value_type<float>
		{
			using type = float;
		};

		template<>
		struct simd_value_type<double>
		{
			using type = double;
		};

		template<has_value_type F>
		struct simd_value_type<F>
		{
			using type = typename F::value_type;
		};

		template<class F>
		struct simd_value_type
		{
			using type = F;
		};
	}

	template<class F>
	using simd_value_type = detail::simd_value_type<F>::type;

	template<class F>
	CR_INLINE auto to_array(F const& a) {
		return cr::simd::array_simd_type<F>(a);
	}
}
