#pragma once

#include "float1x4.h"
#include "float2x4.h"
#include "float2x8.h"
#include "float3x4.h"

#include <cmath>
#include <iostream>

#ifdef CR_HAS_FLOAT_2x8
#define PART2x8 inline static int name##4 = [] { if constexpr (CR_HAS_FLOAT_2x8_BOOL){ simd_tests < cr::simd::float2x8> ::globalTestsContainer[#name] = simd_tests < cr::simd::float2x8> ::test{ #name, [&](){ return name##test < cr::simd::float2x8>(); } }; } return 1; }();
#else
#define PART2x8
#endif

#define DEFINE_TEST(name) \
	template<class F> \
	static bool name##test(); \
	inline static int name##1 = [] { \
		simd_tests<cr::simd::float2x4>::globalTestsContainer[#name] = simd_tests<cr::simd::float2x4>::test{ #name, [&]() { return name##test<cr::simd::float2x4>(); } }; return 1; }(); \
	inline static int name##2 = [] { \
		simd_tests<cr::simd::float1x4>::globalTestsContainer[#name] = simd_tests<cr::simd::float1x4>::test{ #name, [&]() { return name##test<cr::simd::float1x4>(); } }; return 1; }(); \
	inline static int name##3 = [] { \
		simd_tests<cr::simd::float3x4>::globalTestsContainer[#name] = simd_tests<cr::simd::float3x4>::test{ #name, [&]() { return name##test<cr::simd::float3x4>(); } }; return 1; }(); \
	PART2x8 template<class F> \
	static bool name##test()

namespace cr::simd
{
	static bool allEqual(auto f, float value, float epsilon = 0.0000001f) {
		using F = decltype(f);

		for (int i = 0; i < F::size; ++i) {
			if (std::abs(f[i] - value) > epsilon) {
				return false;
			}
		}

		return true;
	}

	static bool allBitEqual(auto f, float value) {
		using F = decltype(f);

		for (int i = 0; i < F::size; ++i) {
			if (std::bit_cast<uint32_t>(f[i]) != std::bit_cast<uint32_t>(value)) {
				return false;
			}
		}

		return true;
	}

	template<class F>
	struct simd_tests
	{
		struct test
		{
			std::string name;
			std::function<bool()> function;
		};
		inline static std::unordered_map<std::string, test> globalTestsContainer{};

		bool runtests() {
			int fail = 0;
			std::vector<std::string> failedTests{};
			for (auto&& [name, test] : globalTestsContainer) {
				if (!test.function()) {
					failedTests.push_back(name);
					fail++;
				}
			}

			std::cout << std::format("total tests {}, failed tests {}\n", globalTestsContainer.size(), fail);

			for (auto& name : failedTests) {
				std::cout << name << "\n";
			}

			return fail == 0;
		}
	};

	DEFINE_TEST(blend) {
		auto f = F(123.0f).blend(456.0f, (F(1.0f) == F(1.0f)));
		return allEqual(f, 456.0f);
	}

	DEFINE_TEST(blend2) {
		auto f = F(123.0f).blend(456.0f, (F(1.0f) == F(0.0f)));
		return allEqual(f, 123.0f);
	}

	DEFINE_TEST(div) {
		auto f = F(123.0f) / F(456.0f);
		return allEqual(f, 123.0f / 456.0f, 0.00001f);
	}

	DEFINE_TEST(div2) {
		auto f = F(1.0f) / F(1000000.0f);
		return allEqual(f, 1.0f / 1000000.0f, 0.00001f);
	}

	DEFINE_TEST(div3) {
		auto f = F(1000000.0f) / F(3.0f);
		return allEqual(f, 1000000.0f / 3.0f, 0.00001f);
	}

	DEFINE_TEST(div4) {
		auto f = F(4123.5f) / F(0.000000004123f);
		return allEqual(f, 4123.5f / 0.000000004123f, 0.00001f);
	}

	constexpr float true_float = std::bit_cast<float>(0xFFFFFFFF);
	constexpr float false_float = std::bit_cast<float>(0x0);
	float bits(uint32_t v) {
		return std::bit_cast<float>(v);
	}

	DEFINE_TEST(eq) {
		auto f = F(1.0f) == F(1.0f);
		return allBitEqual(f, true_float);
	}

	DEFINE_TEST(eq2) {
		auto f = F(1.0f) == F(0.0f);
		return allBitEqual(f, false_float);
	}

	//	DEFINE_TEST(eq3) {
	//		auto f = F(std::bit_cast<float>(0xFF)) == F(std::bit_cast<float>(0xFF));
	//		return allBitEqual(f, std::bit_cast<float>(0x0));
	//	}

	DEFINE_TEST(neq) {
		auto f = F(1.0f) != F(1.0f);
		return allBitEqual(f, false_float);
	}

	DEFINE_TEST(neq2) {
		auto f = F(1.0f) != F(0.0f);
		return allBitEqual(f, true_float);
	}

	//	DEFINE_TEST(neq3) {
	//		auto f = F(std::bit_cast<float>(0xFF)) != F(std::bit_cast<float>(0xF));
	//		return allBitEqual(f, std::bit_cast<float>(0xFFFFFFFF));
	//	}

	DEFINE_TEST(gt) {
		auto f = F(1.0f) > F(0.0f);
		return allBitEqual(f, true_float);
	}

	DEFINE_TEST(gt2) {
		auto f = F(0.0f) > F(1.0f);
		return allBitEqual(f, false_float);
	}

	DEFINE_TEST(gt3) {
		auto f = F(0.0f) > F(0.0f);
		return allBitEqual(f, false_float);
	}

	DEFINE_TEST(lt) {
		auto f = F(1.0f) < F(0.0f);
		return allBitEqual(f, false_float);
	}

	DEFINE_TEST(lt2) {
		auto f = F(0.0f) < F(1.0f);
		return allBitEqual(f, true_float);
	}

	DEFINE_TEST(lt3) {
		auto f = F(0.0f) < F(0.0f);
		return allBitEqual(f, false_float);
	}

	DEFINE_TEST(ge) {
		auto f = F(1.0f) >= F(0.0f);
		return allBitEqual(f, true_float);
	}

	DEFINE_TEST(ge2) {
		auto f = F(0.0f) >= F(1.0f);
		return allBitEqual(f, false_float);
	}

	DEFINE_TEST(ge3) {
		auto f = F(0.0f) >= F(0.0f);
		return allBitEqual(f, true_float);
	}

	DEFINE_TEST(le) {
		auto f = F(1.0f) <= F(0.0f);
		return allBitEqual(f, false_float);
	}

	DEFINE_TEST(le2) {
		auto f = F(0.0f) <= F(1.0f);
		return allBitEqual(f, true_float);
	}

	DEFINE_TEST(le3) {
		auto f = F(0.0f) <= F(0.0f);
		return allBitEqual(f, true_float);
	}

	template<class T>
	concept has_trunc = requires(T t) { t.trunc(); };

	DEFINE_TEST(trunc1) {
		if constexpr (has_trunc<F>) {
			auto f = F(123.0f).trunc();
			return allEqual(f, 123.0f, 0.0f);
		}
		else {
			return true;
		}
	}

	DEFINE_TEST(trunc2) {
		if constexpr (has_trunc<F>) {
			auto f = F(-123.0f).trunc();
			return allEqual(f, -123.0f, 0.0f);
		}
		else {
			return true;
		}
	}

	DEFINE_TEST(trunc3) {
		if constexpr (has_trunc<F>) {
			auto f = F(123.123f).trunc();
			return allEqual(f, 123.0f, 0.0f);
		}
		else {
			return true;
		}
	}

	DEFINE_TEST(trunc4) {
		if constexpr (has_trunc<F>) {
			auto f = F(-123.123f).trunc();
			return allEqual(f, -123.0f, 0.0f);
		}
		else {
			return true;
		}
	}

	DEFINE_TEST(trunc5) {
		if constexpr (has_trunc<F>) {
			auto f = F(100000.12f).trunc();
			return allEqual(f, 100000.0f, 0.0f);
		}
		else {
			return true;
		}
	}

	DEFINE_TEST(and1) {
		auto f = F(bits(0xFF)) & F(bits(0xFF));
		return allBitEqual(f, bits(0xFF));
	}

	DEFINE_TEST(and2) {
		auto f = F(bits(0xF)) & F(bits(0xFF));
		return allBitEqual(f, bits(0xF));
	}

	DEFINE_TEST(and3) {
		auto f = F(bits(0xFF)) && F(bits(0xFF));
		return allBitEqual(f, bits(0xFF));
	}

	DEFINE_TEST(and4) {
		auto f = F(bits(0xF)) && F(bits(0xFF));
		return allBitEqual(f, bits(0xF));
	}

	DEFINE_TEST(or1) {
		auto f = F(bits(0xFF)) | F(bits(0xFF));
		return allBitEqual(f, bits(0xFF));
	}

	DEFINE_TEST(or2) {
		auto f = F(bits(0xF)) | F(bits(0xFF));
		return allBitEqual(f, bits(0xFF));
	}

	DEFINE_TEST(xor1) {
		auto f = F(bits(0xFF)) ^ F(bits(0xFF));
		return allBitEqual(f, bits(0x0));
	}

	DEFINE_TEST(xor2) {
		auto f = F(bits(0xF)) ^ F(bits(0xFF));
		return allBitEqual(f, bits(0xF0));
	}

	DEFINE_TEST(max1) {
		auto f = F(0.0f).max(1.0f);
		return allEqual(f, 1.0f, 0.0f);
	}

	DEFINE_TEST(max2) {
		auto f = F(1.0f).max(0.0f);
		return allEqual(f, 1.0f, 0.0f);
	}

	DEFINE_TEST(min1) {
		auto f = F(0.1f).min(1.0f);
		return allEqual(f, 0.1f, 0.0f);
	}

	DEFINE_TEST(min2) {
		auto f = F(1.0f).min(0.1f);
		return allEqual(f, 0.1f, 0.0f);
	}

	DEFINE_TEST(clamp1) {
		auto f = F(100.0f).clamp(0.1f, 1.0f);
		return allEqual(f, 1.0f, 0.0f);
	}

	DEFINE_TEST(clamp2) {
		auto f = F(-100.0f).clamp(0.1f, 1.0f);
		return allEqual(f, 0.1f, 0.0f);
	}

	DEFINE_TEST(fma1) {
		auto f = F(123.7f).fma(345.5f, 678.3f);
		return allEqual(f, 123.7 * 345.5f + 678.3f);
	}

	DEFINE_TEST(add1) {
		auto f = F(123.0f) + F(456.123f);
		return allEqual(f, 123.0f + 456.123f);
	}

	DEFINE_TEST(add2) {
		auto f = F(123.0f);
		f += F(456.123f);
		return allEqual(f, 123.0f + 456.123f);
	}

	DEFINE_TEST(sub1) {
		auto f = F(123.0f) - F(456.123f);
		return allEqual(f, 123.0f - 456.123f);
	}

	DEFINE_TEST(sub2) {
		auto f = F(123.0f);
		f -= F(456.123f);
		return allEqual(f, 123.0f - 456.123f);
	}

	DEFINE_TEST(mult1) {
		auto f = F(123.0f) * F(456.123f);
		return allEqual(f, 123.0f * 456.123f);
	}

	DEFINE_TEST(mult2) {
		auto f = F(123.0f);
		f *= F(456.123f);
		return allEqual(f, 123.0f * 456.123f);
	}

	DEFINE_TEST(neg1) {
		auto f = -F(123.0f);
		return allBitEqual(f, -123.0f);
	}

	DEFINE_TEST(neg2) {
		auto f = !F(true_float);
		return allBitEqual(f, false_float);
	}

	DEFINE_TEST(neg3) {
		auto f = !F(false_float);
		return allBitEqual(f, true_float);
	}

	DEFINE_TEST(neg4) {
		auto f = !F(123.0f);
		return allBitEqual(f, false_float);
	}

	DEFINE_TEST(neg5) {
		auto f = !F(-0.0f);
		return allBitEqual(f, true_float);
	}

	DEFINE_TEST(sign1) {
		auto f = F(-0.0f).signbit();
		return allBitEqual(f, bits(1U << 31));
	}

	DEFINE_TEST(sign2) {
		auto f = F(-1230.0f).signbit();
		return allBitEqual(f, bits(1U << 31));
	}

	DEFINE_TEST(sign3) {
		auto f = F(0.0f).signbit();
		return allBitEqual(f, bits(0));
	}

	DEFINE_TEST(sign4) {
		auto f = F(123.0f).signbit();
		return allBitEqual(f, bits(0));
	}

	DEFINE_TEST(sign5) {
		auto f = F(123.0f).sign();
		return allEqual(f, 1.0f, 0.0f);
	}

	DEFINE_TEST(sign6) {
		auto f = F(-123.0f).sign();
		return allEqual(f, -1.0f, 0.0f);
	}

	DEFINE_TEST(sign7) {
		auto f = F(-0.0f).sign();
		return allEqual(f, -1.0f, 0.0f);
	}

	DEFINE_TEST(abs1) {
		auto f = F(-0.0f).abs();
		return allEqual(f, 0.0f, 0.0f);
	}

	DEFINE_TEST(abs2) {
		auto f = F(-1.0f).abs();
		return allEqual(f, 1.0f, 0.0f);
	}

	DEFINE_TEST(abs3) {
		auto f = F(1.0f).abs();
		return allEqual(f, 1.0f, 0.0f);
	}

	auto fmod(auto f) {
		auto a = f.floor();
		return f - a;
	}

	auto fmodf(auto f) {
		return f - std::floorf(f);
	}

	DEFINE_TEST(fmod1) {
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
				auto m02 = fmod(pf);
				auto m2 = fmodf(p);
				return false;
			}

			pf += d;
			p += d;
		}

		return true;
	}

	DEFINE_TEST(floor1) {
		auto f = F(1.1f).floor();
		return allEqual(f, 1.0f, 0.0f);
	}

	DEFINE_TEST(floor2) {
		auto f = F(-1.1f).floor();
		return allEqual(f, -2.0f, 0.0f);
	}

	DEFINE_TEST(floor3) {
		auto f = F(0.0f).floor();
		return allEqual(f, 0.0f, 0.0f);
	}

	DEFINE_TEST(floor4) {
		auto f = F(1.6f).floor();
		return allEqual(f, 1.0f, 0.0f);
	}

	DEFINE_TEST(floor5) {
		auto f = F(-1.6f).floor();
		return allEqual(f, -2.0f, 0.0f);
	}

	DEFINE_TEST(ceil1) {
		auto f = F(1.1f).ceil();
		return allEqual(f, 2.0f, 0.0f);
	}

	DEFINE_TEST(ceil2) {
		auto f = F(-1.1f).ceil();
		return allEqual(f, -1.0f, 0.0f);
	}

	DEFINE_TEST(ceil3) {
		auto f = F(0.0f).ceil();
		return allEqual(f, 0.0f, 0.0f);
	}

	DEFINE_TEST(ceil4) {
		auto f = F(1.6f).ceil();
		return allEqual(f, 2.0f, 0.0f);
	}

	DEFINE_TEST(ceil5) {
		auto f = F(-1.6f).ceil();
		return allEqual(f, -1.0f, 0.0f);
	}

	DEFINE_TEST(round1) {
		auto f = F(1.1f).round();
		return allEqual(f, 1.0f, 0.0f);
	}

	DEFINE_TEST(round2) {
		auto f = F(-1.1f).round();
		return allEqual(f, -1.0f, 0.0f);
	}

	DEFINE_TEST(round3) {
		auto f = F(0.0f).round();
		return allEqual(f, 0.0f, 0.0f);
	}

	DEFINE_TEST(round4) {
		auto f = F(1.6f).round();
		return allEqual(f, 2.0f, 0.0f);
	}

	DEFINE_TEST(round5) {
		auto f = F(-1.6f).round();
		return allEqual(f, -2.0f, 0.0f);
	}
}
