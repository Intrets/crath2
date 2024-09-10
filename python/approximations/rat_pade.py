import sympy as sp
import numpy as np


def rat_pade(an_, m, n):
    an = an_
    N = m + n
    if N > len(an) - 1:
        raise ValueError("Order of q+p <m+n> must be smaller than len(an).")
    an = an[:N + 1]
    Akj = sp.eye(N + 1, n + 1, dtype=sp.Rational)
    Bkj = sp.zeros(N + 1, m, dtype=sp.Rational)
    for row in range(1, m + 1):
        Bkj[row, :row] = -sp.Matrix(an[:row][::-1]).T
    for row in range(m + 1, N + 1):
        Bkj[row, :] = -sp.Matrix(an[row - m:row][::-1]).T
    C = sp.Matrix.hstack(Akj, Bkj)

    pq = C.inv() * sp.Matrix(an)
    p = pq[:n + 1]
    q = [1] + pq[n + 1:]
    return np.poly1d(p[::-1]), np.poly1d(q[::-1])


def extract_coeefficients(p, q):
    return [x for x in p.coefficients[::-1]], [x for x in q.coefficients[::-1]]
