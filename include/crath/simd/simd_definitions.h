#pragma once

#ifdef COMPILER_MSVC
#define CR_INLINE __forceinline
#define CR_HAS_SIMD_TYPES
#elif defined(COMPILER_CLANG)
#define CR_INLINE inline __attribute__((always_inline))
#define CR_HAS_SIMD_TYPES
#elif defined(COMPILER_CLANGCL)
#define CR_INLINE inline __attribute__((always_inline))
#define CR_HAS_SIMD_TYPES
#else
#error force inline not defined for compiler
#endif

#define ID(X) X
#define in_t(X) X

#define DO1(X, ONE, I) X(ONE ACCESSOR(I)),
#define DO2(X, ONE, TWO, I) X(ONE ACCESSOR(I), TWO ACCESSOR(I)),
#define DO3(X, ONE, TWO, THREE, I) X(ONE ACCESSOR(I), TWO ACCESSOR(I), THREE ACCESSOR(I)),

#define DO1_T(X, ONE, R_T, ONE_T, I) R_T(X(ONE_T(ONE ACCESSOR(I)))),
#define DO2_T(X, ONE, TWO, R_T, ONE_T, TWO_T, I) R_T(X(ONE_T(ONE ACCESSOR(I)), TWO_T(TWO ACCESSOR(I)))),

#define DO_1_CONSTANT(X, ONE, CONSTANT, I) X(ONE ACCESSOR(I), CONSTANT),

#define DO_2_CONSTANT(X, ONE, TWO, CONSTANT, I) X(ONE ACCESSOR(I), TWO ACCESSOR(I), CONSTANT),

#define DO_1_2(X, Y, ONE, TWO, THREE, I) X(Y(ONE ACCESSOR(I), TWO ACCESSOR(I)), THREE ACCESSOR(I)),

#define DO_COMPOUND(X, ONE, TWO, I) ONE ACCESSOR(I) = X(ONE ACCESSOR(I), TWO ACCESSOR(I));
#define DO_COMPOUND_T(X, ONE, TWO, R_T, ONE_T, TWO_T, I) ONE ACCESSOR(I) = R_T(X(ONE_T(ONE ACCESSOR(I)), TWO_T(TWO ACCESSOR(I))));

#define B_DEFINE0_T(name, op, return_transform, argument_transform) \
	CR_INLINE CR_MACRO_DATA_TYPE name() const { \
		return { \
			APPLY3(DO1_T, op, this->, return_transform, argument_transform) \
		}; \
	}

#define DEFINE0_T(name, op, return_transform, argument_transform) B_DEFINE0_T(name, SURROUND(op), return_transform, argument_transform)
#define DEFINE0(name, op) DEFINE0_T(name, op, ID, ID)
#define DEFINE0S(name) DEFINE0(name, name)

#define DEFINE1(name, op) \
	CR_INLINE CR_MACRO_DATA_TYPE name(in_t(CR_MACRO_DATA_TYPE) a) const { \
		return { \
			APPLY2(DO2, SURROUND(op), this->, a.) \
		}; \
	}
#define DEFINE1S(name) DEFINE1(name, name)

#define DEFINE1_T(name, op, return_transform, argument_transform) B_DEFINE1_T(name, SURROUND(op), return_transform, argument_transform)

#define B_DEFINE1_T(name, op, return_transform, argument_transform) \
	CR_INLINE CR_MACRO_DATA_TYPE name(in_t(CR_MACRO_DATA_TYPE) a) const { \
		return { \
			APPLY5(DO2_T, op, this->, a., return_transform, argument_transform, argument_transform) \
		}; \
	}

#define DEFINE1_CONSTANT(name, op, constant) \
	CR_INLINE CR_MACRO_DATA_TYPE name(in_t(CR_MACRO_DATA_TYPE) a) const { \
		return { \
			APPLY3(DO_2_CONSTANT, SURROUND(op), this->, a., constant) \
		}; \
	}

#define DEFINE2_D(do, name, op) \
	CR_INLINE CR_MACRO_DATA_TYPE name(in_t(CR_MACRO_DATA_TYPE) a, in_t(CR_MACRO_DATA_TYPE) b) const { \
		return { \
			APPLY3(do, SURROUND(op), this->, a., b.) \
		}; \
	}

#define DEFINE2(name, op) DEFINE2_D(DO3, name, op)

#define DEFINE2S(name) DEFINE2(name, name)

#define B_DEFINE_COMPOUND(name, op) \
	CR_INLINE CR_MACRO_DATA_TYPE& name(in_t(CR_MACRO_DATA_TYPE) a) { \
		APPLY2(DO_COMPOUND, op, this->, a.) \
		return *this; \
	}

#define DEFINE_COMPOUND(name, op) B_DEFINE_COMPOUND(name, SURROUND(op))

#define B_DEFINE_COMPOUND_T(name, op, return_transform, argument_transform) \
	CR_INLINE CR_MACRO_DATA_TYPE& name(in_t(CR_MACRO_DATA_TYPE) a) { \
		APPLY5(DO_COMPOUND_T, op, this->, a., return_transform, argument_transform, argument_transform) \
		return *this; \
	}

#define DEFINE_COMPOUND_T(name, op, return_transform, argument_transform) B_DEFINE_COMPOUND_T(name, SURROUND(op), return_transform, argument_transform)

#define DEFINE_CLAMP() \
	CR_INLINE CR_MACRO_DATA_TYPE clamp(in_t(CR_MACRO_DATA_TYPE) a, in_t(CR_MACRO_DATA_TYPE) b) const { \
		return { \
			APPLY4(DO_1_2, SURROUND(min), SURROUND(max), this->, a., b.) \
		}; \
	}

#define DEFINE_ARITHMETIC(name, op) DEFINE1(operator##name, op) DEFINE_COMPOUND(operator##name##=, op)

#define DEFINE_ARITHMETIC2(name, op) DEFINE1(name, op) DEFINE_COMPOUND(name## =, op)
#define B_DEFINE_ARITHMETIC2_T(name, op, return_transform, argument_transform) B_DEFINE1_T(name, op, return_transform, argument_transform) B_DEFINE_COMPOUND_T(name## =, op, return_transform, argument_transform)

#define DEFINE_NEGATION(X) \
	CR_INLINE CR_MACRO_DATA_TYPE operator-() const { \
		return CR_MACRO_DATA_TYPE(X) - *this; \
	}

#define DEFINE_COMPARISONS() \
	CR_INLINE CR_MACRO_DATA_TYPE operator<(in_t(CR_MACRO_DATA_TYPE) a) const { \
		return a > *this; \
	} \
	CR_INLINE CR_MACRO_DATA_TYPE operator<=(in_t(CR_MACRO_DATA_TYPE) a) const { \
		return !(*this > a); \
	} \
	CR_INLINE CR_MACRO_DATA_TYPE operator>=(in_t(CR_MACRO_DATA_TYPE) a) const { \
		return !(*this < a); \
	} \
	CR_INLINE CR_MACRO_DATA_TYPE operator!=(in_t(CR_MACRO_DATA_TYPE) a) const { \
		return !(*this == a); \
	}

#define DEFINE_NEGATION_LOGIC(X) \
	CR_INLINE CR_MACRO_DATA_TYPE operator!() const { \
		return CR_MACRO_DATA_TYPE(X) == *this; \
	}

#define DEFINE_SIGN_BIT(X) \
	CR_INLINE CR_MACRO_DATA_TYPE signbit() const { \
		constexpr X mask = std::bit_cast<X>(1U << 31); \
		return *this & mask; \
	}

#define DEFINE_SIGN(X) \
	CR_INLINE CR_MACRO_DATA_TYPE sign() const { \
		constexpr X mask = std::bit_cast<X>(1U << 31); \
		return (*this & mask) | CR_MACRO_DATA_TYPE(X(1)); \
	}

#define DEFINE_ABS(X) \
	CR_INLINE CR_MACRO_DATA_TYPE abs() const { \
		constexpr X mask = std::bit_cast<X>(~(1U << 31)); \
		return *this & mask; \
	}

#define DEFINE_ROUND() \
	CR_INLINE CR_MACRO_DATA_TYPE round() const { \
		return { \
			APPLY2(DO_1_CONSTANT, SURROUND(round), this->, _MM_ROUND_NEAREST | _MM_FROUND_NO_EXC) \
		}; \
	}

#define DEFINE_FMAC() \
	static CR_INLINE CR_MACRO_DATA_TYPE& fmac(in_t(CR_MACRO_DATA_TYPE) a, in_t(CR_MACRO_DATA_TYPE) b, in_t(CR_MACRO_DATA_TYPE) c) { \
		return { \
			APPLY3(DO3, SURROUND(fmadd), a., b., c.) \
		}; \
	}

#define CR_ALL_INT_DEFINITIONS \
	DEFINE1S(max) \
	DEFINE1S(min) \
	DEFINE_CLAMP() \
	DEFINE1(operator==, cmpeq) \
	DEFINE1(operator>, cmpgt) \
	DEFINE_NEGATION_LOGIC(0) \
	DEFINE_COMPARISONS() \
	DEFINE1(and_not, andnot) \
	DEFINE1(operator&&, and) \
	DEFINE1(operator||, or) \
	DEFINE_ARITHMETIC(+, add) \
	DEFINE_ARITHMETIC(-, sub) \
	DEFINE_ARITHMETIC(/, div) \
	DEFINE_ARITHMETIC(*, mul) \
	DEFINE_NEGATION(0) \
	DEFINE_ARITHMETIC(^, xor) \
	DEFINE_ARITHMETIC(|, or) \
	DEFINE_ARITHMETIC(&, and) \
	DEFINE_SIGN_BIT(int) \
	DEFINE_SIGN(int) \
	DEFINE_ABS(int)

#ifdef COMPILER_MSVC
#define TRIG_FUNCTIONS \
	DEFINE0S(sin) \
	DEFINE0S(cos) \
	DEFINE0S(tan) \
	DEFINE0S(tanh) \
	DEFINE0S(log) \
	DEFINE0S(exp) \
	DEFINE0S(atanh)
#else
#define TRIG_FUNCTIONS
#endif

#define CR_ALL_DEFINITIONS \
	DEFINE1S(max) \
	DEFINE1S(min) \
	DEFINE_CLAMP() \
	DEFINE2(blend, blendv) \
	DEFINE2(fma, fmadd) \
	DEFINE1_CONSTANT(operator!=, cmp, _CMP_NEQ_OQ) \
	DEFINE1_CONSTANT(operator==, cmp, _CMP_EQ_OQ) \
	DEFINE1_CONSTANT(operator>, cmp, _CMP_GT_OQ) \
	DEFINE1_CONSTANT(operator>=, cmp, _CMP_GE_OQ) \
	DEFINE1_CONSTANT(operator<, cmp, _CMP_LT_OQ) \
	DEFINE1_CONSTANT(operator<=, cmp, _CMP_LE_OQ) \
	DEFINE1(and_not, andnot) \
	DEFINE1(operator&&, and) \
	DEFINE1(operator||, or) \
	DEFINE_ARITHMETIC(+, add) \
	DEFINE_ARITHMETIC(-, sub) \
	DEFINE_ARITHMETIC(/, div) \
	DEFINE_ARITHMETIC(*, mul) \
	DEFINE_NEGATION(0.0f) \
	DEFINE_ARITHMETIC(^, xor) \
	DEFINE_ARITHMETIC(|, or) \
	DEFINE_ARITHMETIC(&, and) \
	DEFINE_NEGATION_LOGIC(0.0f) \
	DEFINE_SIGN_BIT(float) \
	DEFINE_SIGN(float) \
	DEFINE_ABS(float) \
	DEFINE0S(floor) \
	DEFINE0S(ceil) \
	DEFINE_ROUND() \
	DEFINE0S(sqrt) \
	TRIG_FUNCTIONS

#define ARM_FMA_TYPE mla

#define DEFINE_FIF(name, op) \
	CR_INLINE CR_MACRO_DATA_TYPE name(in_t(CR_MACRO_DATA_TYPE) a) const { \
		return { \
			APPLY2(DO2, SURROUND(op), this->, a.) \
		}; \
	}

#define CR_ALL_ARM_DEFINITIONS \
	DEFINE1S(max) \
	DEFINE1S(min) \
	DEFINE_CLAMP() \
	DEFINE2(fma, ARM_FMA_TYPE) \
	DEFINE1(operator==, ceq) \
	DEFINE1(operator>, cgt) \
	DEFINE1(operator>=, cge) \
	DEFINE1(operator<, clt) \
	DEFINE1(operator<=, cle) \
	DEFINE_ARITHMETIC(+, add) \
	DEFINE_ARITHMETIC(-, sub) \
	DEFINE_ARITHMETIC(*, mul) \
	DEFINE_NEGATION(0.0f) \
	DEFINE_NEGATION_LOGIC(0.0f) \
	DEFINE_SIGN_BIT(float) \
	DEFINE_SIGN(float) \
	DEFINE1S(abs)

namespace detail
{
	template<class T>
	struct CRTP_ARM_simd
	{
		template<class Self>
		CR_INLINE auto badfloor(this Self&& self) {
			return (self + static_cast<float>(1 << 15)).trunc() - static_cast<float>(1 << 15);
		}

		template<class Self>
		CR_INLINE auto floor(this Self&& self) {
			auto f = self.trunc();
			auto good = (self == f) | (self > 0.0f);
			return (f - 1.0f).blend(f, good);
		}

		template<class Self>
		CR_INLINE auto round(this Self&& self) {
			return (self + 0.5f).floor();
		}

		template<class Self>
		CR_INLINE auto ceil(this Self&& self) {
			auto f = self.trunc();
			auto good = (self == f) | (self < 0.0f);
			return (f + 1.0f).blend(f, good);
		}

		//		template<class Self>
		//		CR_INLINE auto operator!=(this Self&& self, in_t(T) other) {
		//			return !(*self == other);
		//		}
	};

}
