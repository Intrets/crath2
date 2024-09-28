#pragma once

#define DO1(X, ONE, I) X(ONE f##I),
#define DO2(X, ONE, TWO, I) X(ONE f##1, TWO f##I),
#define DO3(X, ONE, TWO, THREE, I) X(ONE f##I, TWO f##I, THREE f##I),

#define DO_1_CONSTANT(X, ONE, CONSTANT, I) X(ONE f##I, CONSTANT),

#define DO_1_2(X, Y, ONE, TWO, THREE, I) X(Y(ONE f##I, TWO f##I), THREE f##I),

#define DO_COMPOUND(X, ONE, TWO, I) ONE f##I = X(ONE f##I, TWO f##I);

#define DEFINE0(name, op) \
	CR_INLINE CR_MACRO_DATA_TYPE name() const { \
		return { \
			APPLY1(DO1, SUFFIX(_mm_##op), this->) \
		}; \
	}
#define DEFINE0S(name) DEFINE0(name, name)

#define DEFINE1(name, op) \
	CR_INLINE CR_MACRO_DATA_TYPE name(in_t(CR_MACRO_DATA_TYPE) a) const { \
		return { \
			APPLY2(DO2, SUFFIX(_mm_##op), this->, a.) \
		}; \
	}
#define DEFINE1S(name) DEFINE1(name, name)

#define DEFINE2(name, op) \
	CR_INLINE CR_MACRO_DATA_TYPE name(in_t(CR_MACRO_DATA_TYPE) a, in_t(CR_MACRO_DATA_TYPE) b) const { \
		return { \
			APPLY3(DO3, SUFFIX(_mm_##op), this->, a., b.) \
		}; \
	}

#define DEFINE2S(name) DEFINE2(name, name)

#define DEFINE_COMPOUND(name, op) \
	CR_INLINE CR_MACRO_DATA_TYPE& name(in_t(CR_MACRO_DATA_TYPE) a) { \
		APPLY2(DO_COMPOUND, SUFFIX(_mm_##op), this->, a.) \
		return *this; \
	}

#define DEFINE_CLAMP() \
	CR_INLINE CR_MACRO_DATA_TYPE clamp(in_t(CR_MACRO_DATA_TYPE) a, in_t(CR_MACRO_DATA_TYPE) b) const { \
		return { \
			APPLY4(DO_1_2, SUFFIX(_mm_min), SUFFIX(_mm_max), this->, a., b.) \
		}; \
	}

#define DEFINE_ARITHMETIC(name, op) DEFINE1(operator##name, op) DEFINE_COMPOUND(operator##name##=, op)

#define DEFINE_NEGATION() \
	CR_INLINE CR_MACRO_DATA_TYPE operator-() const { \
		return CR_MACRO_DATA_TYPE(0.0f) - *this; \
	}

#define DEFINE_NEGATION_LOGIC() \
	CR_INLINE CR_MACRO_DATA_TYPE operator!() const { \
		return CR_MACRO_DATA_TYPE(0.0f) == *this; \
	}

#define DEFINE_SIGN_BIT() \
	CR_INLINE CR_MACRO_DATA_TYPE signbit() const { \
		constexpr float mask = std::bit_cast<float>(1U << 31); \
		return *this & mask; \
	}

#define DEFINE_SIGN() \
	CR_INLINE CR_MACRO_DATA_TYPE sign() const { \
		constexpr float mask = std::bit_cast<float>(1U << 31); \
		return *this & mask; \
	}

#define DEFINE_ABS() \
	CR_INLINE CR_MACRO_DATA_TYPE abs() const { \
		constexpr float mask = std::bit_cast<float>(~(1U << 31)); \
		return *this & mask; \
	}

#define DEFINE_ROUND() \
	CR_INLINE CR_MACRO_DATA_TYPE round() const { \
		return { \
			APPLY2(DO_1_CONSTANT, SUFFIX(_mm_round), this->, _MM_ROUND_NEAREST | _MM_FROUND_NO_EXC) \
		}; \
	}

#define DEFINE_FMAC() \
	static CR_INLINE CR_MACRO_DATA_TYPE& fmac(in_t(CR_MACRO_DATA_TYPE) a, in_t(CR_MACRO_DATA_TYPE) b, in_t(CR_MACRO_DATA_TYPE) c) { \
		return { \
			APPLY3(DO3, SUFFIX(_mm_fmadd), a., b., c.) \
		}; \
	}

#define CR_ALL_DEFINITIONS \
	DEFINE1S(max) \
	DEFINE1S(min) \
	DEFINE_CLAMP() \
	DEFINE2(blend, blendv) \
	DEFINE2(fma, fmadd) \
	DEFINE1(operator!=, cmpneq) \
	DEFINE1(operator==, cmpeq) \
	DEFINE1(operator>, cmpgt) \
	DEFINE1(operator>=, cmpnlt) \
	DEFINE1(operator<, cmplt) \
	DEFINE1(operator<=, cmpngt) \
	DEFINE1(and_not, andnot) \
	DEFINE1(operator&&, and) \
	DEFINE1(operator||, or) \
	DEFINE_ARITHMETIC(+, add) \
	DEFINE_ARITHMETIC(-, sub) \
	DEFINE_ARITHMETIC(/, div) \
	DEFINE_ARITHMETIC(*, mul) \
	DEFINE_NEGATION() \
	DEFINE_ARITHMETIC(^, xor) \
	DEFINE_ARITHMETIC(|, or) \
	DEFINE_ARITHMETIC(&, and) \
	DEFINE_NEGATION_LOGIC() \
	DEFINE_SIGN_BIT() \
	DEFINE_SIGN() \
	DEFINE_ABS() \
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
