import rat_pade
import taylor
from expression import *
from math import pi, log
from typing import NamedTuple, Optional


def return_normal(out, a):
    out(f'return {a};')


def make(taylor_series, N, fma_type, out=print, return_type=return_normal):
    p, q = rat_pade.rat_pade(taylor_series, N)
    make_pq(p, q, fma_type=fma_type, out=out, return_type=return_type)


def make_pq(p, q, fma_type, out=print, return_type=return_normal):
    def make0(l, c):
        def process(l):
            match l:
                case [head]:
                    return 1, value(head)
                case [0.0, *tail]:
                    power, res = process(tail)
                    return power + 1, res
                case [head, *tail]:
                    power, res = process(tail)
                    return 1, fma_type(res, x(power), value(head))

        residue, result = process(l)

        if residue != 1:
            result = multiply(x(residue - 1), result)

        string = result.explode(c, 0).show() + ';'
        lines = string.split('\n')
        return lines

    p_lines = make0(p, 'a')
    q_lines = make0(q, 'b')

    q_padding = max(0, len(p_lines) - len(q_lines))
    p_padding = max(0, len(q_lines) - len(p_lines))

    p_lines += [None] * p_padding
    q_lines += [None] * q_padding

    x2_used = False
    for a, b in zip(p_lines, q_lines):
        if 'x2' in a:
            x2_used = True
            break
        if 'x2' in b:
            x2_used = True
            break

    if x2_used:
        out('auto const x2 = x * x;')
    for a, b in zip(p_lines, q_lines):
        if a:
            out(a)
        if b:
            out(b)
    return_type(out, 'a0 / b0')


class x_offset:
    def __init__(self, offset):
        self.offset = offset

    @staticmethod
    def name():
        return ''

    def run(self, out, max_x):
        if self.offset > 0:
            out(f'x = x + F({self.offset}f);')
        else:
            out(f'x = x - F({abs(self.offset)}f);')


class x_normal:
    @staticmethod
    def name():
        return ''

    @staticmethod
    def run(out, max_x):
        pass


class x_half_offset:
    @staticmethod
    def name():
        return 'half'

    @staticmethod
    def run(out, max_x):
        out(f'x = F({max_x * 0.5}f) - x;')


class x_clamp:
    def __init__(self, min_val, max_val):
        self.min_val = min_val
        self.max_val = max_val

    def __init__(self, val):
        self.min_val = -val
        self.max_val = val

    def name(self):
        return ''

    def run(self, out, max_x):
        out(f'x = math::clamp(x, F({self.min_val}f), F({self.max_val}f));')


class x_single_abs:
    @staticmethod
    def name():
        return 'quart'

    @staticmethod
    def run(out, max_x):
        out(f'x = math::abs(x - F({max_x * 0.5}f)) - F({max_x * 0.25}f);')


class x_double_abs:
    @staticmethod
    def name():
        return 'quart'

    @staticmethod
    def run(out, max_x):
        out(f'auto const quarter = F({max_x * 0.25}f);')
        out(f'x = math::abs(math::abs(x - quarter) - F({max_x * 0.5}f)) - quarter;')


def add_function(taylor_series, out, fma_type, name, N, x_type=x_normal, return_type=return_normal):
    out('template <class F>')
    out(f'inline constexpr static F {name}_T{N}(in_t(F) x) {{')
    out('using math = ApproxContext;')

    x_type.run(out, 1.0)

    make(taylor_series, N, fma_type=fma_type, out=out, return_type=return_type)
    out('}')


class test_function_info:
    def __init__(self, name, reference_function, min_x, max_x, ref_min_x, ref_max_x):
        self.name = name
        self.reference_function = reference_function
        self.test_functions = []
        self.min_x = min_x
        self.max_x = max_x
        self.ref_min_x = ref_min_x
        self.ref_max_x = ref_max_x

    def add(self, name):
        self.test_functions.append(name)

    def show_accuracy_test(self, out=print):
        for f in self.test_functions:
            out(f'''{{
auto& sinEntry = testResult.entries.emplace_back();
sinEntry.subName = "{f}<float>";
sinEntry.accuracy_test<float>({f}<float>, {self.reference_function}, {float(self.min_x)}f, {float(self.max_x)}f, {float(self.ref_min_x)}f, {float(self.ref_max_x)}f);
sinEntry.time<float>({f}<float>, M, {float(self.min_x)}f, {float(self.max_x)}f);
}}
''')


class function_info2(NamedTuple):
    function_name: str
    value_type: str
    reference_function: Optional[str]
    tags: list[str]
    min_x: float
    max_x: float
    ref_min_x: float
    ref_max_x: float
    normalize_error: bool


function_infos2: list[function_info2] = []


def add_function2(taylor_series, out, fma_type, min_x, max_x, ref_min_x, ref_max_x, name, N, ref, x_type=x_normal, return_type=return_normal, normalize_error=False):
    name_full = name
    tags = [name]
    if x_type.name():
        name_full += f'_{x_type.name()}'
        tags.append(x_type.name())
    if fma_type == fma:
        name_full += "_fma"
        tags.append("fma")
    name_full += f"_T{N}"

    out('template <class F>')
    out(f'inline constexpr static F {name_full}(in_t(F) x) {{')
    out('using math = ApproxContext;')

    x_type.run(out, max_x)

    make(taylor_series, N, fma_type=fma_type, out=out, return_type=return_type)
    out('}')

    out(f'inline static float {name_full}_float_simd(float x) {{')
    out(f'return {name_full}<cr::simd::float1x4>(x)[0];')
    out(f'}}')

    info = function_info2(
        tags=tags + ["float", "scalar"],
        reference_function=ref,
        value_type="float",
        function_name=f'{name_full}<float>',
        min_x=min_x,
        max_x=max_x,
        ref_min_x=ref_min_x,
        ref_max_x=ref_max_x,
        normalize_error=normalize_error
    )
    function_infos2.append(info)

    info = function_info2(
        tags=tags + ["float2x4", "simd"],
        reference_function=ref,
        value_type="cr::simd::float2x4",
        function_name=f'{name_full}<{"cr::simd::float2x4"}>',
        min_x=min_x,
        max_x=max_x,
        ref_min_x=ref_min_x,
        ref_max_x=ref_max_x,
        normalize_error = normalize_error
    )
    function_infos2.append(info)

    info = function_info2(
        tags=tags + ["float", "simd"],
        reference_function=ref,
        value_type="float",
        function_name=f'{name_full}_float_simd',
        min_x=min_x,
        max_x=max_x,
        ref_min_x=ref_min_x,
        ref_max_x=ref_max_x,
        normalize_error = normalize_error
    )
    function_infos2.append(info)


def add_sin(N, out, name, scale):
    for fma_type in [fma_normal, fma]:
        add_function2(
            taylor.sin(scale),
            out=out,
            fma_type=fma_type,
            name=name,
            ref="std::sinf",
            N=N,
            x_type=x_double_abs,
            return_type=return_normal,
            min_x=0,
            max_x=2 * pi / scale,
            ref_min_x=0,
            ref_max_x=2 * pi,
        )

        add_function2(
            taylor.sin(scale),
            out=out,
            fma_type=fma_type,
            name=name,
            ref="std::sinf",
            N=N,
            x_type=x_half_offset,
            return_type=return_normal,
            min_x=0,
            max_x=2 * pi / scale,
            ref_min_x=0,
            ref_max_x=2 * pi,
        )


def add_cos(N, out, name, scale):
    for fma_type in [fma_normal, fma]:
        add_function2(
            taylor.sin(scale),
            out=out,
            fma_type=fma_type,
            name=name,
            ref="std::cosf",
            N=N,
            x_type=x_single_abs,
            return_type=return_normal,
            min_x=0,
            max_x=2 * pi / scale,
            ref_min_x=0,
            ref_max_x=2 * pi,
        )

        if N % 2 == 0:
            add_function2(
                taylor.cos(scale, True),
                out=out,
                fma_type=fma_type,
                name=name,
                ref="std::cosf",
                N=N,
                x_type=x_half_offset,
                return_type=return_normal,
                min_x=0,
                max_x=2 * pi / scale,
                ref_min_x=0,
                ref_max_x=2 * pi,
            )


def add_tanh(N, out):
    for fma_type in [fma_normal, fma]:
        add_function2(
            taylor.tanh(),
            out=out,
            fma_type=fma_type,
            name="tanh",
            ref="std::tanhf",
            N=N,
            x_type=x_clamp(4.9716),
            return_type=return_normal,
            min_x=-10,
            max_x=10,
            ref_min_x=-10,
            ref_max_x=10,
        )


def add_exp(N, out):
    def exp_return(out, a):
        out(f'auto const w = {a};')
        out('auto v = F(2.0f) / (F(1.0f) - w) - F(1.0f);')
        out('v *= v;')
        out('v *= v;')
        out('return v;')

    for fma_type in [fma_normal, fma]:
        add_function2(
            taylor.tanh(1 / 8),
            out=out,
            fma_type=fma_type,
            name="exp",
            ref="std::expf",
            N=N,
            x_type=x_normal,
            return_type=exp_return,
            min_x=-10,
            max_x=10,
            ref_min_x=-10,
            ref_max_x=10,
            normalize_error=True
        )


def add_atan(N, out):
    class x_atan:
        @staticmethod
        def name():
            return ''

        @staticmethod
        def run(out, max_x):
            out('auto x0 = x;')
            out('x = math::abs(x);')
            out('auto m = x > F(1.0f);')
            out(f'auto a = math::blend(F(0.0f), F({pi * 0.5}f), m);')
            out('x = math::blend(-x, F(1.0f) / x, m);')

    def atan_return(out, a):
        out(f'return math::setSign(a - {a}, x0);')

    for fma_type in [fma_normal, fma]:
        add_function2(
            taylor.atan(),
            out=out,
            fma_type=fma_type,
            name="atan",
            ref="std::atanf",
            N=N,
            x_type=x_atan,
            return_type=atan_return,
            min_x=-10,
            max_x=10,
            ref_min_x=-10,
            ref_max_x=10,
        )


def add_log(N, out):
    for fma_type in [fma_normal, fma]:
        add_function2(
            taylor.log(),
            out=out,
            fma_type=fma_type,
            name="log",
            ref="std::logf",
            N=N,
            x_type=x_offset(-1.0),
            return_type=return_normal,
            min_x=0.1,
            max_x=10,
            ref_min_x=0.1,
            ref_max_x=10,
        )


def add_special_exp(N, out):
    base = 8.175798915643707
    b4 = base ** (1 / 4)
    halfSteps = 127
    special = log(2) / 12 * halfSteps
    d = special / 8

    def special_exp_return(out, a):
        out(f'constexpr float c1 = {b4}f;')
        out(f'auto a = F(c1) / (F(0.5f) - ({a})) - F(c1);')
        out('a *= a;')
        out('a *= a;')
        out('return a;')

    for fma_type in [fma_normal, fma]:
        add_function2(
            taylor.tanh(d, 1 / 2),
            out=out,
            fma_type=fma_type,
            name="exp_special",
            ref=f"[](float x) {{ return {base} * std::powf({2**(1/12)}, x * 127); }}",
            N=N,
            x_type=x_normal,
            return_type=special_exp_return,
            min_x=0,
            max_x=1,
            ref_min_x=0,
            ref_max_x=1,
            normalize_error=True
        )


def main():
    function_definition_inc = open('../../function_definitions.h', 'w')
    function_testing_inc = open('../../function_testing.h', 'w')

    out = lambda x: function_definition_inc.write(x + '\n')

    for N in range(4, 9):
        add_sin(N, out, scale=2 * pi, name="sin_unit1")
        add_sin(N, out, scale=1 * pi, name="sin_unit2")
        add_sin(N, out, scale=1, name="sin")
    for N in range(4, 10):
        add_cos(N, out, scale=2 * pi, name="cos_unit1")
        add_cos(N, out, scale=1 * pi, name="cos_unit2")
        add_cos(N, out, scale=1, name="cos")

    for N in range(4, 9):
        add_tanh(N, out)

    for N in range(3, 9):
        add_exp(N, out)

    for N in range(3, 9):
        add_atan(N, out)

    for N in range(3, 10):
        add_log(N, out)

    for N in range(3, 10):
        add_special_exp(N, out)

    out = lambda x: function_testing_inc.write(x + '\n')

    for test in function_infos2:
        out('{')
        out('auto& entry = testResult.entries.emplace_back();')
        tags = ""
        for tag in test.tags:
            tags += f'"{tag}", '
        out(f'entry.tags = {{ {tags} }};')
        out(f'entry.subName = "{test.function_name}";')
        if test.reference_function:
            normalize_error = 'true' if test.normalize_error else 'false'
            out(f'entry.accuracy_test<{test.value_type}>({test.function_name}, {test.reference_function}, {float(test.min_x)}f, {float(test.max_x)}f, {float(test.ref_min_x)}f, {float(test.ref_max_x)}f, {normalize_error});')
        out(f'entry.time<{test.value_type}>({test.function_name}, M, {float(test.min_x)}f, {float(test.max_x)}f);')
        out('}')


if __name__ == '__main__':
    main()
