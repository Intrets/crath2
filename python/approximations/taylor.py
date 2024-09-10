from math import factorial

import sympy as sp
from scipy.interpolate import approximate_taylor_polynomial


def sin(scale=1):
    tay = [0]
    for n in range(0, 30):
        tay.append(scale ** (2 * n + 1) * sp.Rational((-1) ** n, factorial(2 * n + 1)))
        tay.append(0)
    return tay


def cos(scale=1, flip=False):
    s = 1 if not flip else -1
    tay = [s, 0]
    for n in range(1, 30):
        tay.append(s * scale ** (2 * n) * sp.Rational((-1) ** n, factorial(2 * n)))
        tay.append(0)
    return tay


def tanh(scale=1, multiplier=1):
    tay = [0]
    for n in range(1, 30):
        tay.append(multiplier * sp.Rational(scale ** (2 * n - 1) * sp.bernoulli(2 * n) * 4 ** n * (4 ** n - 1), factorial(2 * n)))
        tay.append(0)
    return tay


def atan(scale=1):
    tay = [0]
    for n in range(0, 30):
        tay.append(sp.Rational(scale ** (2 * n + 1) * (-1) ** n, 2 * n + 1))
        tay.append(0)
    return tay


def atan_nq(a, scale=1):
    x = sp.symbols('x')
    f = sp.atan(x)

    tay = sp.atan(a)

    N = 60
    der = f
    for n in range(1, N):
        c = sp.diff(f, x, n).subs(x, a)
        tay += c * (x - a) ** n / sp.factorial(n)

    tay = sp.simplify(tay)

    coefficients = []
    for _ in range(N):
        c = tay.subs(x, 0)
        coefficients.append(c)

        tay = sp.simplify((tay - c) / x)

    return coefficients


def log(scale=1):
    tay = [0]
    for n in range(1, 30):
        tay.append(scale ** n * sp.Rational((-1) ** (n + 1), n))
    return tay


def tan(scale=1):
    tay = [0]
    for n in range(1, 30):
        tay.append(sp.Rational(scale ** (2 * n - 1) * sp.bernoulli(2 * n) * (-4) ** n * (1 - 4 ** n), factorial(2 * n)))
        tay.append(0)
    return tay
