#pragma once

#include "crath/StdContext.h"
#include "float1x4.h"
#include "float2x4.h"
#include "float2x8.h"
#include "float3x4.h"

#include <cmath>
#include <iostream>

#ifdef CR_HAS_FLOAT_2x8
#define PART2x8(name) inline static int name##4 = [] { simd_tests < cr::simd::float2x8> ::testContainer[#name] = simd_tests < cr::simd::float2x8> ::test{ #name, [&](){ return name##test < cr::simd::float2x8>(); } }; return 1; }();
#else
#define PART2x8(name)
#endif

namespace cr::simd
{

	template<class T>
	concept has_trunc = requires(T t) {
		t.trunc();
	};

	static bool allEqual(auto f, float value, float epsilon = 0.0000001f) {
		using F = decltype(f);

		for (int i = 0; i < F::size; ++i) {
			if (std::abs(cr::StdContext::get(f, i) - value) > epsilon) {
				return false;
			}
		}

		return true;
	}

	static bool allBitEqual(auto f, float value) {
		using F = decltype(f);

		for (int i = 0; i < F::size; ++i) {
			if (std::bit_cast<uint32_t>(cr::StdContext::get(f, i)) != std::bit_cast<uint32_t>(value)) {
				return false;
			}
		}

		return true;
	}

	float bits(uint32_t v) {
		return std::bit_cast<float>(v);
	}

	auto fmod(auto f) {
		auto a = f.floor();
		return f - a;
	}

	auto fmodf(auto f) {
		return f - std::floorf(f);
	}

	template<class F>
	struct simd_tests
	{
		struct test
		{
			std::string name;
			std::function<bool()> function;
		};

		static bool runtests() {
			int fail = 0;
			int total = 0;
			std::vector<std::string> failedTests{};

#define BEGIN_TEST(name) \
	{ \
		total++; \
		auto nameString = #name; \
		bool result = false;

#define END_TEST \
	if (!result) { \
		fail++; \
		failedTests.push_back(nameString); \
	} \
	}

			BEGIN_TEST(blend)
			auto f = F(123.0f).blend(456.0f, (F(1.0f) == F(1.0f)));
			result = allEqual(f, 456.0f);
			END_TEST

			BEGIN_TEST(blend2)
			auto f = F(123.0f).blend(456.0f, (F(1.0f) == F(0.0f)));
			result = allEqual(f, 123.0f);
			END_TEST

			BEGIN_TEST(div)
			auto f = F(123.0f) / F(456.0f);
			result = allEqual(f, 123.0f / 456.0f, 0.00001f);
			END_TEST

			BEGIN_TEST(div2)
			auto f = F(1.0f) / F(1000000.0f);
			result = allEqual(f, 1.0f / 1000000.0f, 0.00001f);
			END_TEST

			BEGIN_TEST(div3)
			auto f = F(1000000.0f) / F(3.0f);
			result = allEqual(f, 1000000.0f / 3.0f, 0.00001f);
			END_TEST

			BEGIN_TEST(div4)
			auto f = F(4123.5f) / F(0.000000004123f);
			result = allEqual(f, 4123.5f / 0.000000004123f, 0.00001f);
			END_TEST

			constexpr float true_float = std::bit_cast<float>(0xFFFFFFFF);
			constexpr float false_float = std::bit_cast<float>(0x0);

			BEGIN_TEST(eq)
			auto f = F(1.0f) == F(1.0f);
			result = allBitEqual(f, true_float);
			END_TEST

			BEGIN_TEST(eq2)
			auto f = F(1.0f) == F(0.0f);
			result = allBitEqual(f, false_float);
			END_TEST

			//	BEGIN_TEST(eq3)
			//		auto f = F(std::bit_cast<float>(0xFF)) == F(std::bit_cast<float>(0xFF));
			//		result = allBitEqual(f, std::bit_cast<float>(0x0));
			//	END_TEST

			BEGIN_TEST(neq)
			auto f = F(1.0f) != F(1.0f);
			result = allBitEqual(f, false_float);
			END_TEST

			BEGIN_TEST(neq2)
			auto f = F(1.0f) != F(0.0f);
			result = allBitEqual(f, true_float);
			END_TEST

			//	BEGIN_TEST(neq3)
			//		auto f = F(std::bit_cast<float>(0xFF)) != F(std::bit_cast<float>(0xF));
			//		result = allBitEqual(f, std::bit_cast<float>(0xFFFFFFFF));
			//	END_TEST

			BEGIN_TEST(gt)
			auto f = F(1.0f) > F(0.0f);
			result = allBitEqual(f, true_float);
			END_TEST

			BEGIN_TEST(gt2)
			auto f = F(0.0f) > F(1.0f);
			result = allBitEqual(f, false_float);
			END_TEST

			BEGIN_TEST(gt3)
			auto f = F(0.0f) > F(0.0f);
			result = allBitEqual(f, false_float);
			END_TEST

			BEGIN_TEST(lt)
			auto f = F(1.0f) < F(0.0f);
			result = allBitEqual(f, false_float);
			END_TEST

			BEGIN_TEST(lt2)
			auto f = F(0.0f) < F(1.0f);
			result = allBitEqual(f, true_float);
			END_TEST

			BEGIN_TEST(lt3)
			auto f = F(0.0f) < F(0.0f);
			result = allBitEqual(f, false_float);
			END_TEST

			BEGIN_TEST(ge)
			auto f = F(1.0f) >= F(0.0f);
			result = allBitEqual(f, true_float);
			END_TEST

			BEGIN_TEST(ge2)
			auto f = F(0.0f) >= F(1.0f);
			result = allBitEqual(f, false_float);
			END_TEST

			BEGIN_TEST(ge3)
			auto f = F(0.0f) >= F(0.0f);
			result = allBitEqual(f, true_float);
			END_TEST

			BEGIN_TEST(le)
			auto f = F(1.0f) <= F(0.0f);
			result = allBitEqual(f, false_float);
			END_TEST

			BEGIN_TEST(le2)
			auto f = F(0.0f) <= F(1.0f);
			result = allBitEqual(f, true_float);
			END_TEST

			BEGIN_TEST(le3)
			auto f = F(0.0f) <= F(0.0f);
			result = allBitEqual(f, true_float);
			END_TEST

			BEGIN_TEST(trunc1)
			if constexpr (has_trunc<F>) {
				auto f = F(123.0f).trunc();
				result = allEqual(f, 123.0f, 0.0f);
			}
			else {
				result = true;
			}
			END_TEST

			BEGIN_TEST(trunc2)
			if constexpr (has_trunc<F>) {
				auto f = F(-123.0f).trunc();
				result = allEqual(f, -123.0f, 0.0f);
			}
			else {
				result = true;
			}
			END_TEST

			BEGIN_TEST(trunc3)
			if constexpr (has_trunc<F>) {
				auto f = F(123.123f).trunc();
				result = allEqual(f, 123.0f, 0.0f);
			}
			else {
				result = true;
			}
			END_TEST

			BEGIN_TEST(trunc4)
			if constexpr (has_trunc<F>) {
				auto f = F(-123.123f).trunc();
				result = allEqual(f, -123.0f, 0.0f);
			}
			else {
				result = true;
			}
			END_TEST

			BEGIN_TEST(trunc5)
			if constexpr (has_trunc<F>) {
				auto f = F(100000.12f).trunc();
				result = allEqual(f, 100000.0f, 0.0f);
			}
			else {
				result = true;
			}
			END_TEST

			BEGIN_TEST(and1)
			auto f = F(bits(0xFF)) & F(bits(0xFF));
			result = allBitEqual(f, bits(0xFF));
			END_TEST

			BEGIN_TEST(and2)
			auto f = F(bits(0xF)) & F(bits(0xFF));
			result = allBitEqual(f, bits(0xF));
			END_TEST

			BEGIN_TEST(and3)
			auto f = F(bits(0xFF)) && F(bits(0xFF));
			result = allBitEqual(f, bits(0xFF));
			END_TEST

			BEGIN_TEST(and4)
			auto f = F(bits(0xF)) && F(bits(0xFF));
			result = allBitEqual(f, bits(0xF));
			END_TEST

			BEGIN_TEST(or1)
			auto f = F(bits(0xFF)) | F(bits(0xFF));
			result = allBitEqual(f, bits(0xFF));
			END_TEST

			BEGIN_TEST(or2)
			auto f = F(bits(0xF)) | F(bits(0xFF));
			result = allBitEqual(f, bits(0xFF));
			END_TEST

			BEGIN_TEST(xor1)
			auto f = F(bits(0xFF)) ^ F(bits(0xFF));
			result = allBitEqual(f, bits(0x0));
			END_TEST

			BEGIN_TEST(xor2)
			auto f = F(bits(0xF)) ^ F(bits(0xFF));
			result = allBitEqual(f, bits(0xF0));
			END_TEST

			BEGIN_TEST(max1)
			auto f = F(0.0f).max(1.0f);
			result = allEqual(f, 1.0f, 0.0f);
			END_TEST

			BEGIN_TEST(max2)
			auto f = F(1.0f).max(0.0f);
			result = allEqual(f, 1.0f, 0.0f);
			END_TEST

			BEGIN_TEST(min1)
			auto f = F(0.1f).min(1.0f);
			result = allEqual(f, 0.1f, 0.0f);
			END_TEST

			BEGIN_TEST(min2)
			auto f = F(1.0f).min(0.1f);
			result = allEqual(f, 0.1f, 0.0f);
			END_TEST

			BEGIN_TEST(clamp1)
			auto f = F(100.0f).clamp(0.1f, 1.0f);
			result = allEqual(f, 1.0f, 0.0f);
			END_TEST

			BEGIN_TEST(clamp2)
			auto f = F(-100.0f).clamp(0.1f, 1.0f);
			result = allEqual(f, 0.1f, 0.0f);
			END_TEST

			BEGIN_TEST(fma1)
			auto f = F(123.7f).fma(345.5f, 678.3f);
			result = allEqual(f, 123.7 * 345.5f + 678.3f);
			END_TEST

			BEGIN_TEST(add1)
			auto f = F(123.0f) + F(456.123f);
			result = allEqual(f, 123.0f + 456.123f);
			END_TEST

			BEGIN_TEST(add2)
			auto f = F(123.0f);
			f += F(456.123f);
			result = allEqual(f, 123.0f + 456.123f);
			END_TEST

			BEGIN_TEST(sub1)
			auto f = F(123.0f) - F(456.123f);
			result = allEqual(f, 123.0f - 456.123f);
			END_TEST

			BEGIN_TEST(sub2)
			auto f = F(123.0f);
			f -= F(456.123f);
			result = allEqual(f, 123.0f - 456.123f);
			END_TEST

			BEGIN_TEST(mult1)
			auto f = F(123.0f) * F(456.123f);
			result = allEqual(f, 123.0f * 456.123f);
			END_TEST

			BEGIN_TEST(mult2)
			auto f = F(123.0f);
			f *= F(456.123f);
			result = allEqual(f, 123.0f * 456.123f);
			END_TEST

			BEGIN_TEST(neg1)
			auto f = -F(123.0f);
			result = allBitEqual(f, -123.0f);
			END_TEST

			BEGIN_TEST(neg2)
			auto f = !F(true_float);
			result = allBitEqual(f, false_float);
			END_TEST

			BEGIN_TEST(neg3)
			auto f = !F(false_float);
			result = allBitEqual(f, true_float);
			END_TEST

			BEGIN_TEST(neg4)
			auto f = !F(123.0f);
			result = allBitEqual(f, false_float);
			END_TEST

			BEGIN_TEST(neg5)
			auto f = !F(-0.0f);
			result = allBitEqual(f, true_float);
			END_TEST

			BEGIN_TEST(sign1)
			auto f = F(-0.0f).signbit();
			result = allBitEqual(f, bits(1U << 31));
			END_TEST

			BEGIN_TEST(sign2)
			auto f = F(-1230.0f).signbit();
			result = allBitEqual(f, bits(1U << 31));
			END_TEST

			BEGIN_TEST(sign3)
			auto f = F(0.0f).signbit();
			result = allBitEqual(f, bits(0));
			END_TEST

			BEGIN_TEST(sign4)
			auto f = F(123.0f).signbit();
			result = allBitEqual(f, bits(0));
			END_TEST

			BEGIN_TEST(sign5)
			auto f = F(123.0f).sign();
			result = allEqual(f, 1.0f, 0.0f);
			END_TEST

			BEGIN_TEST(sign6)
			auto f = F(-123.0f).sign();
			result = allEqual(f, -1.0f, 0.0f);
			END_TEST

			BEGIN_TEST(sign7)
			auto f = F(-0.0f).sign();
			result = allEqual(f, -1.0f, 0.0f);
			END_TEST

			BEGIN_TEST(abs1)
			auto f = F(-0.0f).abs();
			result = allEqual(f, 0.0f, 0.0f);
			END_TEST

			BEGIN_TEST(abs2)
			auto f = F(-1.0f).abs();
			result = allEqual(f, 1.0f, 0.0f);
			END_TEST

			BEGIN_TEST(abs3)
			auto f = F(1.0f).abs();
			result = allEqual(f, 1.0f, 0.0f);
			END_TEST

			BEGIN_TEST(fmod1)
			auto p0 = -10.0f;
			auto p1 = 10.0f;
			auto N = 3000;
			auto d = (p1 - p0) / N;

			auto pf = F(p0);
			auto p = p0;

			for (int i = 0; i < N; ++i) {
				auto m0 = fmod(pf);
				auto m = fmodf(p);
				if (!allEqual(m0, m)) {
					result = false;
				}

				pf += d;
				p += d;
			}

			result = true;
			END_TEST

			BEGIN_TEST(floor1)
			auto f = F(1.1f).floor();
			result = allEqual(f, 1.0f, 0.0f);
			END_TEST

			BEGIN_TEST(floor2)
			auto f = F(-1.1f).floor();
			result = allEqual(f, -2.0f, 0.0f);
			END_TEST

			BEGIN_TEST(floor3)
			auto f = F(0.0f).floor();
			result = allEqual(f, 0.0f, 0.0f);
			END_TEST

			BEGIN_TEST(floor4)
			auto f = F(1.6f).floor();
			result = allEqual(f, 1.0f, 0.0f);
			END_TEST

			BEGIN_TEST(floor5)
			auto f = F(-1.6f).floor();
			result = allEqual(f, -2.0f, 0.0f);
			END_TEST

			BEGIN_TEST(ceil1)
			auto f = F(1.1f).ceil();
			result = allEqual(f, 2.0f, 0.0f);
			END_TEST

			BEGIN_TEST(ceil2)
			auto f = F(-1.1f).ceil();
			result = allEqual(f, -1.0f, 0.0f);
			END_TEST

			BEGIN_TEST(ceil3)
			auto f = F(0.0f).ceil();
			result = allEqual(f, 0.0f, 0.0f);
			END_TEST

			BEGIN_TEST(ceil4)
			auto f = F(1.6f).ceil();
			result = allEqual(f, 2.0f, 0.0f);
			END_TEST

			BEGIN_TEST(ceil5)
			auto f = F(-1.6f).ceil();
			result = allEqual(f, -1.0f, 0.0f);
			END_TEST

			BEGIN_TEST(round1)
			auto f = F(1.1f).round();
			result = allEqual(f, 1.0f, 0.0f);
			END_TEST

			BEGIN_TEST(round2)
			auto f = F(-1.1f).round();
			result = allEqual(f, -1.0f, 0.0f);
			END_TEST

			BEGIN_TEST(round3)
			auto f = F(0.0f).round();
			result = allEqual(f, 0.0f, 0.0f);
			END_TEST

			BEGIN_TEST(round4)
			auto f = F(1.6f).round();
			result = allEqual(f, 2.0f, 0.0f);
			END_TEST

			BEGIN_TEST(round5)
			auto f = F(-1.6f).round();
			result = allEqual(f, -2.0f, 0.0f);
			END_TEST

			std::cout << std::format("total tests {}, failed tests {}\n", total, fail);

			for (auto& name : failedTests) {
				std::cout << name << "\n";
			}

			return fail == 0;
		}
	};
}
