#pragma once

#ifdef COMPILER_MSVC
#define CR_INLINE __forceinline
#else
#error force inline not defined for compiler
#endif

#define DO1(X, ONE, I) X(ONE f##I),
#define DO2(X, ONE, TWO, I) X(ONE f##1, TWO f##I),
#define DO3(X, ONE, TWO, THREE, I) X(ONE f##I, TWO f##I, THREE f##I),

#define DO_1_CONSTANT(X, ONE, CONSTANT, I) X(ONE f##I, CONSTANT),

#define DO_2_CONSTANT(X, ONE, TWO, CONSTANT, I) X(ONE f##I, TWO f##I, CONSTANT),

#define DO_1_2(X, Y, ONE, TWO, THREE, I) X(Y(ONE f##I, TWO f##I), THREE f##I),

#define DO_COMPOUND(X, ONE, TWO, I) ONE f##I = X(ONE f##I, TWO f##I);

#define SURROUND(X) SUFFIX(PREFIX(X))

#define DEFINE0(name, op) \
	CR_INLINE CR_MACRO_DATA_TYPE name() const { \
		return { \
			APPLY1(DO1, SURROUND(op), this->) \
		}; \
	}
#define DEFINE0S(name) DEFINE0(name, name)

#define DEFINE1(name, op) \
	CR_INLINE CR_MACRO_DATA_TYPE name(in_t(CR_MACRO_DATA_TYPE) a) const { \
		return { \
			APPLY2(DO2, SURROUND(op), this->, a.) \
		}; \
	}
#define DEFINE1S(name) DEFINE1(name, name)

#define DEFINE1_CONSTANT(name, op, constant) \
	CR_INLINE CR_MACRO_DATA_TYPE name(in_t(CR_MACRO_DATA_TYPE) a) const { \
		return { \
			APPLY3(DO_2_CONSTANT, SURROUND(op), this->, a., constant) \
		}; \
	}

#define DEFINE2(name, op) \
	CR_INLINE CR_MACRO_DATA_TYPE name(in_t(CR_MACRO_DATA_TYPE) a, in_t(CR_MACRO_DATA_TYPE) b) const { \
		return { \
			APPLY3(DO3, SURROUND(op), this->, a., b.) \
		}; \
	}

#define DEFINE2S(name) DEFINE2(name, name)

#define DEFINE_COMPOUND(name, op) \
	CR_INLINE CR_MACRO_DATA_TYPE& name(in_t(CR_MACRO_DATA_TYPE) a) { \
		APPLY2(DO_COMPOUND, SURROUND(op), this->, a.) \
		return *this; \
	}

#define DEFINE_CLAMP() \
	CR_INLINE CR_MACRO_DATA_TYPE clamp(in_t(CR_MACRO_DATA_TYPE) a, in_t(CR_MACRO_DATA_TYPE) b) const { \
		return { \
			APPLY4(DO_1_2, SURROUND(min), SURROUND(max), this->, a., b.) \
		}; \
	}

#define DEFINE_ARITHMETIC(name, op) DEFINE1(operator##name, op) DEFINE_COMPOUND(operator##name##=, op)

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
		return *this & mask; \
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
	DEFINE0S(sin) \
	DEFINE0S(cos) \
	DEFINE0S(tan) \
	DEFINE0S(tanh) \
	DEFINE0S(log) \
	DEFINE0S(exp) \
	DEFINE0S(atanh)
