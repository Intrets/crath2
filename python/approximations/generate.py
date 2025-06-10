from mpmath import mp

import itertools
import rat_pade
import taylor
from expression import *
from math import pi, log
from typing import NamedTuple, Optional, List
import numpy as np
import remez
import matplotlib.pyplot as plt


def return_normal(out, a):
    out(f'return {a};')


def make(taylor_series, N, fma_type, out=print, return_type=return_normal, interval=None, ref_f=None, q=None):
    if q is not None:
        p = np.poly1d(taylor_series)
        q = np.poly1d(q)
    elif N[1] == 0:
        p = np.poly1d(taylor_series)
        q = np.poly1d([1])
    else:
        p, q = rat_pade.rat_pade(taylor_series, N[0], N[1])

    if interval is not None and ref_f is not None:
        a1 = interval[0]
        a2 = interval[1]
        s = (q(a1) * ref_f(a1) - q(a2) * ref_f(a2)) / (p(a1) - p(a2))
        c = q(a1) * ref_f(a1) / s - p(a1)

        p = (p + c) * s

        print(f's: {s}, c: {c}')
        p, q = rat_pade.extract_coeefficients(p, q)

        make_pq(p, q, fma_type=fma_type, out=out, return_type=return_type)
    else:
        p, q = rat_pade.extract_coeefficients(p, q)
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

    if len(q) == 1 and q[0] == 1:
        p_lines = make0(p, 'a')

        x2_used = False
        for a in p_lines:
            if 'x2' in a:
                x2_used = True
                break

        if x2_used:
            out('auto const x2 = x * x;')
        for a in p_lines:
            if a:
                out(a)
        return_type(out, 'a0')

    else:
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


class x_abs:
    @staticmethod
    def name():
        return 'abs'

    @staticmethod
    def run(out, max_x):
        out(f'auto const x0 = x;')
        out(f'x = math::abs(x);')


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
        out(f'x = math::clamp(x, F({self.min_val:.1f}f), F({self.max_val:.1f}f));')


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


class x_triple_abs:
    @staticmethod
    def name():
        return 'quart_abs'

    @staticmethod
    def run(out, max_x):
        out(f'auto const quarter = F({max_x * 0.25}f);')
        out(f'x = math::abs(math::abs(math::abs(x - quarter) - F({max_x * 0.5}f)) - quarter);')


class function_info2(NamedTuple):
    function_name: str
    display_name: Optional[str]
    value_type: str
    reference_function: Optional[str]
    tags: list[str]
    min_x: float
    max_x: float
    ref_min_x: float
    ref_max_x: float


def make_function_info2(
        function_name: str,
        value_type: str,
        reference_function: Optional[str],
        tags: list[str],
        min_x: float,
        max_x: float,
        ref_min_x: float,
        ref_max_x: float,
        display_name: Optional[str] = None,
):
    return function_info2(
        function_name=function_name,
        value_type=value_type,
        reference_function=reference_function,
        tags=tags,
        min_x=min_x,
        max_x=max_x,
        ref_min_x=ref_min_x,
        ref_max_x=ref_max_x,
        display_name=display_name
    )


function_infos2: list[function_info2] = []


def add_function2(taylor_series, out, fma_type, min_x, max_x, ref_min_x, ref_max_x, name, N, M, ref, x_type=x_normal, return_type=return_normal, ref_f=None, interval=None, q=None, extra_tags=[], modes=[]):
    name_full = name
    tags = []
    if x_type.name():
        name_full = f'{name_full}_{x_type.name()}'
    if fma_type == fma:
        name_full = f"{name_full}_fma"
        tags.append("fma")
    if ref_f is not None:
        name_full = f"{name_full}_ec"
        tags.append("ends corrected")
    name_full = f"{name_full}_T{N}_{M}"

    tags.extend(extra_tags)

    buffer: List[str] = []

    if 'definition' in modes:
        out('template <class F>')
        out(f'inline constexpr static F {name_full}(in_t(F) x) {{')

        x_type.run(out=lambda x: buffer.append(x), max_x=max_x)

        make(taylor_series, q=q, N=(N, M), fma_type=fma_type, out=lambda x: buffer.append(x), return_type=return_type, interval=interval, ref_f=ref_f)

        for line in buffer:
            if 'math' in line:
                out('using math = cr::StdContext;')
                break

        for line in buffer:
            out(line)

        out('}')

        out(f'inline static float {name_full}_float_simd(float x) {{')
        out(f'#ifdef ARCH_x86_64')
        out(f'return {name_full}<cr::simd::float1x4>(x).first();')
        out(f'#else')
        out(f'return {name_full}<float>(x);')
        out(f'#endif')
        out(f'}}')

    info = make_function_info2(
        tags=tags + ["float", "scalar"],
        reference_function=ref,
        value_type="float",
        function_name=f'{name_full}<float>',
        min_x=min_x,
        max_x=max_x,
        ref_min_x=ref_min_x,
        ref_max_x=ref_max_x,
    )
    function_infos2.append(info)

    info = make_function_info2(
        tags=tags + ["float2x4", "simd"],
        reference_function=ref,
        value_type="cr::simd::float2x4",
        function_name=f'{name_full}<{"cr::simd::float2x4"}>',
        min_x=min_x,
        max_x=max_x,
        ref_min_x=ref_min_x,
        ref_max_x=ref_max_x,
    )
    function_infos2.append(info)

    info = make_function_info2(
        tags=tags + ["float2x8", "simd"],
        reference_function=ref,
        value_type="cr::simd::float2x8",
        function_name=f'{name_full}<{"cr::simd::float2x8"}>',
        min_x=min_x,
        max_x=max_x,
        ref_min_x=ref_min_x,
        ref_max_x=ref_max_x,
    )
    function_infos2.append(info)

    info = make_function_info2(
        tags=tags + ["float1x8", "simd"],
        reference_function=ref,
        value_type="cr::simd::float1x8",
        function_name=f'{name_full}<{"cr::simd::float1x8"}>',
        min_x=min_x,
        max_x=max_x,
        ref_min_x=ref_min_x,
        ref_max_x=ref_max_x,
    )
    function_infos2.append(info)

    info = make_function_info2(
        tags=tags + ["float", "simd"],
        reference_function=ref,
        value_type="float",
        function_name=f'{name_full}_float_simd',
        min_x=min_x,
        max_x=max_x,
        ref_min_x=ref_min_x,
        ref_max_x=ref_max_x,
    )
    function_infos2.append(info)


def add_ref_info(name, min_x, max_x, modes):
    reference_function = f'std::{name}f'

    def add(function_name, value_type, tags, display_name=None):
        if display_name is None:
            display_name = function_name
        info = make_function_info2(
            tags=[name, "reference"] + tags,
            reference_function=reference_function,
            value_type=value_type,
            function_name=function_name,
            display_name=display_name,
            min_x=min_x,
            max_x=max_x,
            ref_min_x=min_x,
            ref_max_x=max_x,
        )
        function_infos2.append(info)

    add(f'std::{name}f', value_type='float', tags=["float", "scalar"])
    add(f'[](float x) {{ return cr::simd::float1x4(x).{name}().first(); }}', display_name=f"{name}_float_simd", value_type='float', tags=["float_simd"])
    add(f'[](cr::simd::float2x4 const& x) {{ return x.{name}(); }}', display_name=f'{name}<float2x4>', value_type='cr::simd::float2x4', tags=["float2x4"])


def add_sin(N, out, name, scale, modes):
    def function(x):
        return mp.sin(x * scale)

    global small_test_mode
    if not small_test_mode:
        if 'definition' in modes:
            remez_p = remez.remez(function, n_degree=N, lower=0, upper=pi / 2 / scale)
            remez_pade_p, remez_pade_q = remez.remez_pade(function, n_degree=N, lower=0, upper=pi / 2 / scale)
        else:
            remez_p = None
            remez_pade_p, remez_pade_q = None, None

    class x_remez_sin:
        @staticmethod
        def name():
            return ''

        @staticmethod
        def run(out, max_x):
            out('auto x0 = x;')
            out(f'auto const half = F({max_x * 0.5}f);')
            out(f'auto const quarter = F({max_x * 0.25}f);')
            out(f'x = math::abs(math::abs(math::abs(x - quarter) - half) - quarter);')

    global fma_types
    for fma_type, (interval, ref_f) in itertools.product(fma_types, [((0, 2 * pi / scale / 4), function), (None, None)]):
        if not small_test_mode:
            add_function2(
                remez_p,
                out=out,
                fma_type=fma_type,
                name=f"{name}_remez",
                extra_tags=[name, "remez"],
                ref="std::sinf",
                N=N,
                M=0,
                x_type=x_remez_sin,
                return_type=lambda out, a: out(f'return math::setSign({a}, half - x0 );'),
                min_x=0,
                max_x=2 * pi / scale,
                ref_min_x=0,
                ref_max_x=2 * pi,
                interval=interval,
                ref_f=ref_f,
                modes=modes
            )

            add_function2(
                remez_pade_p,
                q=remez_pade_q,
                out=out,
                fma_type=fma_type,
                name=f"{name}_remez_pade",
                extra_tags=[name, "remez_pade"],
                ref="std::sinf",
                N=N,
                M=N,
                x_type=x_remez_sin,
                return_type=lambda out, a: out(f'return math::setSign({a}, half - x0 );'),
                min_x=0,
                max_x=2 * pi / scale,
                ref_min_x=0,
                ref_max_x=2 * pi,
                interval=interval,
                ref_f=ref_f,
                modes=modes
            )

        add_function2(
            taylor.sin(scale),
            out=out,
            fma_type=fma_type,
            name=name,
            extra_tags=[name],
            ref="std::sinf",
            N=N,
            M=N,
            x_type=x_double_abs,
            return_type=return_normal,
            min_x=0,
            max_x=2 * pi / scale,
            ref_min_x=0,
            ref_max_x=2 * pi,
            interval=interval,
            ref_f=ref_f,
            modes=modes
        )


def add_cos(N, out, name, scale, modes):
    def function_cos(x):
        return mp.cos(x * scale)

    def function_sin(x):
        return mp.sin(x * scale)

    global small_test_mode
    if not small_test_mode:
        if 'definition' in modes:
            remez_p = remez.remez(function_cos, n_degree=N, lower=0, upper=pi / 2 / scale)
            remez_pade_p, remez_pade_q = remez.remez_pade(function_cos, n_degree=N, lower=0, upper=pi / 2 / scale)
        else:
            remez_p = None
            remez_pade_p, remez_pade_q = None, None

    class x_remez_cos:
        @staticmethod
        def name():
            return ''

        @staticmethod
        def run(out, max_x):
            # out('auto x0 = x;')
            out(f'auto const half = F({max_x * 0.5}f);')
            out(f'auto const quarter = F({max_x * 0.25}f);')
            out(f'auto const x_sign = math::abs(x - half) - quarter;');
            out(f'x = quarter - math::abs(x_sign);')

    def return_remez_cos(out, a):
        out(f'return math::setSign({a}, x_sign);')

    global fma_types
    for fma_type, (interval, ref_f_cos, ref_f_sin) in itertools.product(fma_types, [((0, 2 * pi / scale / 4), function_cos, function_sin), (None, None, None)]):
        if not small_test_mode:
            add_function2(
                remez_p,
                out=out,
                fma_type=fma_type,
                name=f'{name}_remez',
                extra_tags=[name, "remez"],
                ref="std::cosf",
                N=N,
                M=0,
                x_type=x_remez_cos,
                return_type=return_remez_cos,
                min_x=0,
                max_x=2 * pi / scale,
                ref_min_x=0,
                ref_max_x=2 * pi,
                ref_f=ref_f_cos,
                interval=interval,
                modes=modes
            )

            add_function2(
                remez_pade_p,
                q=remez_pade_q,
                out=out,
                fma_type=fma_type,
                name=f'{name}_remez_pade',
                extra_tags=[name, "remez_pade"],
                ref="std::cosf",
                N=N,
                M=0,
                x_type=x_remez_cos,
                return_type=return_remez_cos,
                min_x=0,
                max_x=2 * pi / scale,
                ref_min_x=0,
                ref_max_x=2 * pi,
                ref_f=ref_f_cos,
                interval=interval,
                modes=modes
            )

        add_function2(
            taylor.sin(scale),
            out=out,
            fma_type=fma_type,
            name=name,
            extra_tags=[name],
            ref="std::cosf",
            N=N,
            M=N,
            x_type=x_single_abs,
            return_type=return_normal,
            min_x=0,
            max_x=2 * pi / scale,
            ref_min_x=0,
            ref_max_x=2 * pi,
            ref_f=ref_f_sin,
            interval=interval,
            modes=modes
        )

        if N % 2 == 0:
            add_function2(
                taylor.cos(scale, True),
                out=out,
                fma_type=fma_type,
                name=name,
                extra_tags=[name],
                ref="std::cosf",
                N=N,
                M=N,
                x_type=x_half_offset,
                return_type=return_normal,
                min_x=0,
                max_x=2 * pi / scale,
                ref_min_x=0,
                ref_max_x=2 * pi,
                ref_f=(lambda x: -mp.cos(x * scale)) if ref_f_cos is not None else None,
                interval=interval,
                modes=modes
            )


class x_tanh_remez:
    def __init__(self, val):
        self.max_val = val

    def name(self):
        return ''

    def run(self, out, max_x):
        out(f'auto const x0 = x;')
        out(f'x = math::min(math::abs(x), F({float(self.max_val)}f));')


def add_tanh(N, out, modes):
    end = 7

    def function(x):
        return mp.tanh(x)

    global small_test_mode
    if not small_test_mode:
        if 'definition' in modes:
            remez_p = remez.remez(function, n_degree=N, lower=0, upper=end)
            remez_pade_p, remez_pade_q = remez.remez_pade(function, n_degree=N, lower=0, upper=end)
        else:
            remez_p = None
            remez_pade_p, remez_pade_q = None, None

    def clamped_function(x):
        return mp.tanh(x)

    global fma_types
    for fma_type, (interval, ref_f) in itertools.product(fma_types, [((0, end), clamped_function), (None, None)]):
        if not small_test_mode:
            add_function2(
                remez_p,
                out=out,
                fma_type=fma_type,
                name="tanh_remez",
                extra_tags=["tanh", "remez"],
                ref="std::tanhf",
                N=N,
                M=0,
                x_type=x_tanh_remez(end),
                return_type=lambda out, a: out(f'return math::setSign({a}, x0);'),
                min_x=-10,
                max_x=10,
                ref_min_x=-10,
                ref_max_x=10,
                ref_f=ref_f,
                interval=interval,
                modes=modes
            )

            add_function2(
                remez_pade_p,
                q=remez_pade_q,
                out=out,
                fma_type=fma_type,
                name="tanh_remez_pade",
                extra_tags=["tanh", "remez_pade"],
                ref="std::tanhf",
                N=N,
                M=N,
                x_type=x_tanh_remez(end),
                return_type=lambda out, a: out(f'return math::setSign({a}, x0);'),
                min_x=-10,
                max_x=10,
                ref_min_x=-10,
                ref_max_x=10,
                ref_f=ref_f,
                interval=interval,
                modes=modes
            )

        add_function2(
            taylor.tanh(),
            out=out,
            fma_type=fma_type,
            name="tanh",
            extra_tags=["tanh"],
            ref="std::tanhf",
            N=N,
            M=N,
            x_type=x_clamp(end),
            return_type=return_normal,
            min_x=-10,
            max_x=10,
            ref_min_x=-10,
            ref_max_x=10,
            ref_f=ref_f,
            interval=interval,
            modes=modes
        )


def add_exp(N, out, modes):
    def exp_return(out, a):
        out(f'auto const w = {a};')
        out('auto v = F(2.0f) / (F(1.0f) - w) - F(1.0f);')
        out('v *= v;')
        out('v *= v;')
        out('return v;')

    def exp_remez_return(out, a):
        out(f'auto const w = math::setSign({a}, x0);')
        out('auto v = F(2.0f) / (F(1.0f) - w) - F(1.0f);')
        out('v *= v;')
        out('v *= v;')
        out('return v;')

    def remez_function(x):
        return mp.tanh(x / 8)

    end = 7 * 8
    global small_test_mode
    if not small_test_mode:
        if 'definition' in modes:
            remez_p = remez.remez(remez_function, n_degree=N, lower=0, upper=end)
            remez_pade_p, remez_pade_q = remez.remez_pade(remez_function, n_degree=N, lower=0, upper=end)
        else:
            remez_p = None
            remez_pade_p, remez_pade_q = None, None

    global fma_types
    for fma_type, (interval, ref_f) in itertools.product(fma_types, [(None, None)]):
        if not small_test_mode:
            add_function2(
                remez_p,
                out=out,
                fma_type=fma_type,
                name="exp_remez",
                extra_tags=["exp", "remez"],
                ref="std::expf",
                N=N,
                M=0,
                x_type=x_tanh_remez(end),
                return_type=exp_remez_return,
                min_x=-10,
                max_x=10,
                ref_min_x=-10,
                ref_max_x=10,
                ref_f=ref_f,
                interval=interval,
                modes=modes
            )

            add_function2(
                remez_pade_p,
                q=remez_pade_q,
                out=out,
                fma_type=fma_type,
                name="exp_remez_pade",
                extra_tags=["exp", "remez_pade"],
                ref="std::expf",
                N=N,
                M=0,
                x_type=x_tanh_remez(end),
                return_type=exp_remez_return,
                min_x=-10,
                max_x=10,
                ref_min_x=-10,
                ref_max_x=10,
                ref_f=ref_f,
                interval=interval,
                modes=modes
            )

        add_function2(
            taylor.tanh(1 / 8),
            out=out,
            fma_type=fma_type,
            name="exp",
            extra_tags=["exp"],
            ref="std::expf",
            N=N,
            M=N,
            x_type=x_normal,
            return_type=exp_return,
            min_x=-10,
            max_x=10,
            ref_min_x=-10,
            ref_max_x=10,
            ref_f=ref_f,
            interval=interval,
            modes=modes
        )


def add_atan(N, out, modes):
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
            out('x = math::blend(x, F(1.0f) / x, m);')

    def atan_return(out, a):
        out(f'return math::setSign(a - {a}, x0);')

    global small_test_mode
    if not small_test_mode:
        if 'definition' in modes:
            remez_p = remez.remez(mp.atan, n_degree=N, lower=0, upper=1)
            remez_pade_p, remez_pade_q = remez.remez_pade(mp.atan, n_degree=N, lower=0, upper=1)
        else:
            remez_p = None
            remez_pade_p, remez_pade_q = None, None

    global fma_types
    for fma_type, (interval, ref_f) in itertools.product(fma_types, [((0, 1), mp.atan), (None, None)]):
        if not small_test_mode:
            add_function2(
                remez_p,
                out=out,
                fma_type=fma_type,
                name="atan_remez",
                extra_tags=["atan", "remez"],
                ref="std::atanf",
                N=N,
                M=0,
                x_type=x_atan,
                return_type=atan_return,
                min_x=-10,
                max_x=10,
                ref_min_x=-10,
                ref_max_x=10,
                interval=interval,
                ref_f=ref_f,
                modes=modes
            )

            add_function2(
                remez_pade_p,
                q=remez_pade_q,
                out=out,
                fma_type=fma_type,
                name="atan_remez_pade",
                extra_tags=["atan", "remez_pade"],
                ref="std::atanf",
                N=N,
                M=N,
                x_type=x_atan,
                return_type=atan_return,
                min_x=-10,
                max_x=10,
                ref_min_x=-10,
                ref_max_x=10,
                interval=interval,
                ref_f=ref_f,
                modes=modes
            )

        add_function2(
            taylor.atan(),
            out=out,
            fma_type=fma_type,
            name="atan",
            extra_tags=["atan"],
            ref="std::atanf",
            N=N,
            M=N,
            x_type=x_atan,
            return_type=atan_return,
            min_x=-10,
            max_x=10,
            ref_min_x=-10,
            ref_max_x=10,
            interval=interval,
            ref_f=ref_f,
            modes=modes
        )


def add_log(N, out, modes):
    def function(x):
        return mp.log(x)

    start0 = 1
    start1 = 0.08
    end = 1 / start1

    global small_test_mode
    if not small_test_mode:
        if 'definition' in modes:
            remez0_p = remez.remez(function, n_degree=N, lower=start0, upper=end)
            remez0_pade_p, remez0_pade_q = remez.remez_pade(function, n_degree=N, lower=start0, upper=end)
            remez1_p = remez.remez(function, n_degree=N, lower=start1, upper=end)
            remez1_pade_p, remez1_pade_q = remez.remez_pade(function, n_degree=N, lower=start1, upper=end)
        else:
            remez0_p = None
            remez0_pade_p, remez0_pade_q = None, None
            remez1_p = None
            remez1_pade_p, remez1_pade_q = None, None

    class x_recip_log:
        @staticmethod
        def name():
            return 'recip'

        @staticmethod
        def run(out, max_x):
            out('auto m = x < F(1.0f);')
            out('x = math::blend(x,  F(1.0f) / x, m);')

    def return_recip_log(out, a):
        out(f'auto const r = {a};')
        out(f'return math::blend(r, -r, m);')

    if not small_test_mode:
        global fma_types
        for fma_type, ref_f, (x_type, return_type, start, end, remez_p, remez_pade_p, remez_pade_q) in itertools.product(
                fma_types,
                [function, None],
                [(x_normal, return_normal, start0, end, remez0_p, remez0_pade_p, remez0_pade_q),
                 (x_recip_log, return_recip_log, start1, end, remez1_p, remez1_pade_p, remez1_pade_q)]
        ):
            add_function2(
                remez_p,
                out=out,
                fma_type=fma_type,
                name="log_remez",
                extra_tags=["log", "remez"],
                ref="std::logf",
                N=N,
                M=0,
                x_type=x_type,
                return_type=return_type,
                min_x=start1,
                max_x=end,
                ref_min_x=start1,
                ref_max_x=end,
                ref_f=ref_f,
                interval=(start, end),
                modes=modes
            )

            add_function2(
                remez_pade_p,
                q=remez_pade_q,
                out=out,
                fma_type=fma_type,
                name="log_remez_pade",
                extra_tags=["log", "remez_pade"],
                ref="std::logf",
                N=N,
                M=N,
                x_type=x_type,
                return_type=return_type,
                min_x=start1,
                max_x=end,
                ref_min_x=start1,
                ref_max_x=end,
                ref_f=ref_f,
                interval=(start, end),
                modes=modes
            )

    for fma_type, (interval, ref_f) in itertools.product(fma_types, [((start1 - 1, end - 1), lambda x: mp.log(1 + x)), (None, None)]):
        add_function2(
            taylor.log(),
            out=out,
            fma_type=fma_type,
            name="log",
            extra_tags=["log"],
            ref="std::logf",
            N=N,
            M=N,
            x_type=x_offset(-1.0),
            return_type=return_normal,
            min_x=start1,
            max_x=end,
            ref_min_x=start1,
            ref_max_x=end,
            ref_f=ref_f,
            interval=interval,
            modes=modes
        )


def add_special_exp(N, out, modes):
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

    def remez_function(x):
        return 0.5 * mp.tanh(x * d)

    start = -1
    end = 1.2

    global small_test_mode
    if not small_test_mode:
        if 'definition' in modes:
            remez_p = remez.remez(remez_function, n_degree=N, lower=start, upper=end)
            remez_pade_p, remez_pade_q = remez.remez_pade(remez_function, n_degree=N, lower=start, upper=end)
        else:
            remez_p = None
            remez_pade_p, remez_pade_q = None, None

    global fma_types
    for fma_type, (interval, ref_f) in itertools.product(fma_types, [((start, end), remez_function), (None, None)]):
        if not small_test_mode:
            add_function2(
                remez_p,
                out=out,
                fma_type=fma_type,
                name="exp_special_remez",
                extra_tags=["exp_special", "remez"],
                ref=f"[](float x) {{ return {base}f * std::powf({2 ** (1 / 12)}f, x * 127.0f); }}",
                N=N,
                M=0,
                x_type=x_normal,
                return_type=special_exp_return,
                min_x=-1,
                max_x=1.2,
                ref_min_x=-1,
                ref_max_x=1.2,
                ref_f=ref_f,
                interval=interval,
                modes=modes
            )

            add_function2(
                remez_pade_p,
                q=remez_pade_q,
                out=out,
                fma_type=fma_type,
                name="exp_special_remez_pade",
                extra_tags=["exp_special", "remez_pade"],
                ref=f"[](float x) {{ return {base}f * std::powf({2 ** (1 / 12)}f, x * 127.0f); }}",
                N=N,
                M=N,
                x_type=x_normal,
                return_type=special_exp_return,
                min_x=-1,
                max_x=1.2,
                ref_min_x=-1,
                ref_max_x=1.2,
                ref_f=ref_f,
                interval=interval,
                modes=modes
            )

        add_function2(
            taylor.tanh(d, 1 / 2),
            out=out,
            fma_type=fma_type,
            name="exp_special",
            extra_tags=["exp_special"],
            ref=f"[](float x) {{ return {base}f * std::powf({2 ** (1 / 12)}f, x * 127.0f); }}",
            N=N,
            M=N,
            x_type=x_normal,
            return_type=special_exp_return,
            min_x=-1,
            max_x=1.2,
            ref_min_x=-1,
            ref_max_x=1.2,
            ref_f=ref_f,
            interval=interval,
            modes=modes
        )


def add_tan(N, out, modes):
    start = -1.5
    end = 1.5

    def remez_function(x):
        return mp.tan(x)

    global small_test_mode
    if not small_test_mode:
        if "definition" in modes:
            remez_p = remez.remez(remez_function, n_degree=N, lower=start, upper=end)
            remez_pade_p, remez_pade_q = remez.remez_pade(remez_function, n_degree=N, lower=start, upper=end)
        else:
            remez_p = None
            remez_pade_p, remez_pade_q = None, None

    def return_signed(out, a):
        out(f'return math::setSign({a}, x0);');

    global fma_types
    for fma_type, (interval, interval_abs, ref_f) in itertools.product(fma_types, [((start, end), (0, end), remez_function), (None, None, None)]):
        if not small_test_mode:
            add_function2(
                remez_p,
                out=out,
                fma_type=fma_type,
                name="tan_remez",
                extra_tags=["tan", "remez"],
                ref="std::tanf",
                N=N,
                M=0,
                x_type=x_abs,
                return_type=return_signed,
                min_x=-1.5,
                max_x=1.5,
                ref_min_x=-1.5,
                ref_max_x=1.5,
                ref_f=ref_f,
                interval=interval_abs,
                modes=modes
            )

            add_function2(
                remez_pade_p,
                q=remez_pade_q,
                out=out,
                fma_type=fma_type,
                name="tan_remez_pade",
                extra_tags=["tan", "remez_pade"],
                ref="std::tanf",
                N=N,
                M=N,
                x_type=x_abs,
                return_type=return_signed,
                min_x=-1.5,
                max_x=1.5,
                ref_min_x=-1.5,
                ref_max_x=1.5,
                ref_f=ref_f,
                interval=interval_abs,
                modes=modes
            )

        add_function2(
            taylor.tan(),
            out=out,
            fma_type=fma_type,
            name="tan",
            extra_tags=["tan"],
            ref="std::tanf",
            N=N,
            M=N,
            x_type=x_normal,
            return_type=return_normal,
            min_x=-1.5,
            max_x=1.5,
            ref_min_x=-1.5,
            ref_max_x=1.5,
            ref_f=ref_f,
            interval=interval,
            modes=modes
        )


fma_types = [fma, fma_normal]

small_test_mode = False


def main():
    modes = [
        "definition",
        "test",
    ]

    if "definition" in modes:
        function_definition_inc = open('../../function_definitions.h', 'w')
        out = lambda x: function_definition_inc.write(x + '\n')
    else:
        out = lambda x: 1

    M0 = 1
    if small_test_mode:
        M = 5
    else:
        M = 10

    info = make_function_info2(
        tags=["noop", "reference"],
        reference_function='[](auto const& x) { return x; }',
        value_type='float',
        function_name='[](auto const& x) { return x; }',
        display_name='noop',
        min_x=0,
        max_x=1,
        ref_min_x=0,
        ref_max_x=1,
    )
    function_infos2.append(info)

    info = make_function_info2(
        tags=["sqrt"],
        reference_function='std::sqrtf',
        value_type='float',
        function_name='[](auto const& x) { return cr::StdContext::sqrt0(x); }',
        display_name='sqrt0',
        min_x=0,
        max_x=1000,
        ref_min_x=0,
        ref_max_x=1000,
    )
    function_infos2.append(info)

    info = make_function_info2(
        tags=["sqrt"],
        reference_function='std::sqrtf',
        value_type='float',
        function_name='[](auto const& x) { return cr::StdContext::sqrt1(x); }',
        display_name='sqrt1',
        min_x=0,
        max_x=1000,
        ref_min_x=0,
        ref_max_x=1000,
    )
    function_infos2.append(info)

    info = make_function_info2(
        tags=["sqrt"],
        reference_function='std::sqrtf',
        value_type='float',
        function_name='[](auto const& x) { return cr::StdContext::sqrt2(x); }',
        display_name='sqrt2',
        min_x=0,
        max_x=1000,
        ref_min_x=0,
        ref_max_x=1000,
    )
    function_infos2.append(info)

    add_ref_info(name="sqrt", min_x=0, max_x=1000, modes=modes)

    add_ref_info(name="sin", min_x=0, max_x=2 * pi, modes=modes)
    for N in range(M0, M):
        add_sin(N, out, scale=1, name="sin", modes=modes)

    if not small_test_mode:
        for N in range(M0, M):
            add_sin(N, out, scale=2 * pi, name="sin_unit1", modes=modes)
            add_sin(N, out, scale=1 * pi, name="sin_unit2", modes=modes)

        add_ref_info(name="cos", min_x=0, max_x=2 * pi, modes=modes)
        for N in range(M0, M):
            add_cos(N, out, scale=2 * pi, name="cos_unit1", modes=modes)
            add_cos(N, out, scale=1 * pi, name="cos_unit2", modes=modes)
            add_cos(N, out, scale=1, name="cos", modes=modes)

        add_ref_info(name="tanh", min_x=-10, max_x=10, modes=modes)
        for N in range(M0, M):
            add_tanh(N, out, modes=modes)

        add_ref_info(name="exp", min_x=-10, max_x=10, modes=modes)
        for N in range(M0, M):
            add_exp(N, out, modes=modes)

        add_ref_info(name="atanh", min_x=-10, max_x=10, modes=modes)
        for N in range(M0, M):
            add_atan(N, out, modes=modes)

        add_ref_info(name="log", min_x=0.08, max_x=1 / 0.08, modes=modes)
        for N in range(M0, M):
            add_log(N, out, modes=modes)

        for N in range(M0, M):
            add_special_exp(N, out, modes=modes)

        add_ref_info(name="tan", min_x=-1.5, max_x=1.5, modes=modes)
        for N in range(M0, M):
            add_tan(N, out, modes=modes)

    counter = 0
    if "test" in modes:
        function_testing_inc = open('../../function_testing.h', 'w')
        out = lambda x: function_testing_inc.write(x + '\n')

        for test in function_infos2:
            counter += 1
            if test.function_name == "noop":
                reference_function = "[](auto const& x) { return x; }"
                test_function = reference_function
                function = ""
            else:
                reference_function = test.reference_function
                test_function = test.function_name
                function = test.function_name

            out(f'''{test.value_type} msvc_bug_workaround_{counter}(std::vector<{test.value_type}> const& buffer) {{
    {test.value_type} value{{}};
    #if defined(COMPILER_CLANGCL) || defined(COMPILER_CLANG)
    #pragma clang loop vectorize(disable)
    #elif defined(COMPILER_MSVC)
    #pragma loop(no_vector)
    #else
    #error "TODO: disable vectorization for loop"
    #endif
    for (size_t i = 0; i < buffer.size(); i++ ) {{
        value += {function}(buffer[i]);
    }}
    return value;
}}
''')

        out('void addAll(TestResult& testResult) {')

        counter = 0
        for test in function_infos2:
            counter += 1
            if test.function_name == "noop":
                reference_function = "[](auto const& x) { return x; }"
                test_function = reference_function
                function = ""
            else:
                reference_function = test.reference_function
                test_function = test.function_name
                function = test.function_name

            if test.display_name is not None:
                display_name = test.display_name
            else:
                display_name = test.function_name

            out('{')
            out('auto& entry = testResult.make();')
            tags = ""
            for tag in test.tags:
                tags += f'"{tag}", '
            out(f'entry.tags = {{ {tags} }};')
            out(f'entry.subName = "{display_name}";')
            out(f'entry.accuracy_test<{test.value_type}>({test_function}, {reference_function}, {float(test.min_x)}f, {float(test.max_x)}f, {float(test.ref_min_x)}f, {float(test.ref_max_x)}f);')
            out(f'''entry.time<{test.value_type}>(msvc_bug_workaround_{counter}, {float(test.min_x)}f, {float(test.max_x)}f);''')
            out('}')
        out('}')


if __name__ == '__main__':
    mp.prec = 53 * 2
    main()
