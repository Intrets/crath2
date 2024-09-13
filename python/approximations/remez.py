from mpmath import mp
import numpy


def bisection_search(f, low: float, high: float):
    """
    A root finding method that does not rely on derivatives

    :param f: a function f: X -> R
    :param low: the lower bracket
    :param high: the upper limit bracket
    :return: the location of the root, e.g. f(mid) ~ 0
    """
    # flip high and low if out of order
    if f(high) < f(low):
        low, high = high, low

    # find mid point
    mid = .5 * (low + high)

    while True:

        # bracket up
        if f(mid) < 0:
            low = mid
        # braket down
        else:
            high = mid

        # update mid point
        mid = .5 * (high + low)

        # break if condition met
        if abs(high - low) < 10 ** (-(mp.dps / 2)):
            break

    return mid


def concave_max(f, low: float, high: float):
    """
    Forms a lambda for the approximate derivative and finds the root

    :param f: a function f: X -> R
    :param low: the lower bracket
    :param high: the upper limit bracket
    :return: the location of the root f'(mid) ~ 0
    """
    # create an approximate derivative expression
    scale = high - low

    h = mp.mpf('0.' + ''.join(['0' for i in range(int(mp.dps / 1.5))]) + '1') * scale
    df = lambda x: (f(x + h) - f(x - h)) / (2.0 * h)

    return bisection_search(df, low, high)


def chev_points(n: int, lower: float = -1, upper: float = 1):
    """
    Generates a set of chebychev points spaced in the range [lower, upper]
    :param n: number of points
    :param lower: lower limit
    :param upper: upper limit
    :return: a list of multipressison chebychev points that are in the range [lower, upper]
    """
    # generate chebeshev points on a range [-1, 1]
    index = numpy.arange(1, n + 1)
    range_ = abs(upper - lower)
    return [(.5 * (mp.cos((2 * i - 1) / (2 * n) * mp.pi) + 1)) * range_ + lower for i in index]


def remez_pade(func, n_degree: int, lower: float = -1, upper: float = 1, max_iter=None):
    if max_iter is None:
        max_iter = 10
    """
    :param func: a function (or lambda) f: X -> R
    :param n_degree: the degree of the polynomial to approximate the function f
    :param lower: lower range of the approximation
    :param upper: upper range of the approximation
    :return: the polynomial coefficients, and an approximate maximum error associated with this approximation
    """
    # initialize the node points

    N = (n_degree + 1) * 2
    x_points = chev_points(N, lower, upper)

    A = mp.matrix(N)
    coeffs = numpy.zeros(N)

    # place in the E column
    mean_error = float('inf')

    for i in range(N):
        A[i, 0] = 1
        A[i, N - 1] = (-1) ** (i + 1)

    iteration_count = 0
    E = 0
    for i in range(max_iter):
        iteration_count += 1

        # build the system
        vander = numpy.polynomial.chebyshev.chebvander(x_points, n_degree)

        for i in range(N):
            f_xi = func(x_points[i])
            for j in range(0, n_degree):
                A[i, 1 + 2 * j] = vander[i, j + 1]
                A[i, 1 + 2 * j + 1] = vander[i, j + 1] * (E - f_xi)

        b = mp.matrix([func(x) for x in x_points])

        l = mp.lu_solve(A, b)
        E = l[N - 1]
        # build the residual expression

        p_coeffs = [l[0]]
        q_coeffs = [1]
        for i in range(n_degree):
            p_coeffs.append(l[1 + i * 2])
            q_coeffs.append(l[1 + i * 2 + 1])

        print(p_coeffs, q_coeffs)

        r_i = lambda x: (func(x) - numpy.polynomial.chebyshev.chebval(x, p_coeffs) / numpy.polynomial.chebyshev.chebval(x, q_coeffs))

        interval_list = list(zip(x_points, x_points[1:]))
        #         interval_list = [[x_points[i], x_points[i+1]] for i in range(len(x_points)-1)]

        intervals = [upper]
        intervals.extend([bisection_search(r_i, *i) for i in interval_list])
        intervals.append(lower)

        extermum_interval = [[intervals[i], intervals[i + 1]] for i in range(len(intervals) - 1)]

        extremums = [concave_max(r_i, *i) for i in extermum_interval]

        extremums[0] = mp.mpf(upper)
        extremums[-1] = mp.mpf(lower)

        errors = [abs(r_i(i)) for i in extremums]
        mean_error = numpy.mean(errors)

        if numpy.max([abs(error - mean_error) for error in errors]) < 0.000001 * mean_error:
            break

        x_points = extremums

    print(f'iteration count: {iteration_count}')

    return [float(i) for i in numpy.polynomial.chebyshev.cheb2poly(p_coeffs)][::-1], [float(i) for i in numpy.polynomial.chebyshev.cheb2poly(q_coeffs)][::-1]


def remez(func, n_degree: int, lower: float = -1, upper: float = 1, max_iter: int = 10):
    """
    :param func: a function (or lambda) f: X -> R
    :param n_degree: the degree of the polynomial to approximate the function f
    :param lower: lower range of the approximation
    :param upper: upper range of the approximation
    :return: the polynomial coefficients, and an approximate maximum error associated with this approximation
    """
    # initialize the node points

    x_points = chev_points(n_degree + 2, lower, upper)

    A = mp.matrix(n_degree + 2)
    coeffs = numpy.zeros(n_degree + 2)

    # place in the E column
    mean_error = float('inf')

    for i in range(n_degree + 2):
        A[i, n_degree + 1] = (-1) ** (i + 1)

    iter_count = 0
    for i in range(max_iter):
        iter_count += 1

        # build the system
        vander = numpy.polynomial.chebyshev.chebvander(x_points, n_degree)

        for i in range(n_degree + 2):
            for j in range(n_degree + 1):
                A[i, j] = vander[i, j]

        b = mp.matrix([func(x) for x in x_points])
        l = mp.lu_solve(A, b)

        coeffs = l[:-1]

        # build the residual expression
        r_i = lambda x: (func(x) - numpy.polynomial.chebyshev.chebval(x, coeffs))

        interval_list = list(zip(x_points, x_points[1:]))
        #         interval_list = [[x_points[i], x_points[i+1]] for i in range(len(x_points)-1)]

        intervals = [upper]
        intervals.extend([bisection_search(r_i, *i) for i in interval_list])
        intervals.append(lower)

        extermum_interval = [[intervals[i], intervals[i + 1]] for i in range(len(intervals) - 1)]

        extremums = [concave_max(r_i, *i) for i in extermum_interval]

        extremums[0] = mp.mpf(upper)
        extremums[-1] = mp.mpf(lower)

        errors = [abs(r_i(i)) for i in extremums]
        mean_error = numpy.mean(errors)

        if numpy.max([abs(error - mean_error) for error in errors]) < 0.000001 * mean_error:
            break

        x_points = extremums

    print(f'iteration count: {iter_count}')

    return [float(i) for i in numpy.polynomial.chebyshev.cheb2poly(coeffs)][::-1]


def c_code_gen(data_type, name, poly_coeffs, comments=None):
    method_string = f'{data_type} {name} ({data_type} x)' + '{\n'

    if comments is not None:
        method_string += '\t// ' + str(comments) + ' \n\n'

    data_type_converter = '' if data_type == 'double' else 'f'

    method_string += '\n'.join([f'\tconst {data_type} a_{i} = {str(val) + data_type_converter};' for i, val in enumerate(poly_coeffs)])

    horner = 'return a_0+'
    for i in range(len(poly_coeffs) - 2):
        horner += f'x*(a_{i + 1} +'
    horner += f'x*a_{len(poly_coeffs) - 1}' + ')' * (len(poly_coeffs) - 2) + ';\n}'

    return method_string + '\n \t' + horner


if __name__ == '__main__2':
    p, q = remez_pade(mp.atan, 3, 0, 1)
    print('wat p')
    print(p)
    print('wat q')
    print(q)

if __name__ == '__main__':
    I = 4

    function = lambda x: mp.atan(x)
    # interval = [0, numpy.pi / 2]
    interval = [0, 1]
    poly_coeffs = remez(function, 2 * I + 1, interval[0], interval[1])
    print(f'coeffs {poly_coeffs}')

    import matplotlib.pyplot as plt
    import rat_pade
    import taylor

    p, q = rat_pade.rat_pade(taylor.atan(), I, I)
    pade_function1 = lambda x: p(x) / q(x)

    x = numpy.linspace(interval[0], interval[1], 200)
    y_exact = numpy.array([function(x_i) for x_i in x])

    atan_fun_stackexchange = lambda x: x * (45 - (x - 1) * (14 + 3.83 * x)) / 360 * numpy.pi * 2
    y_stackexchange = atan_fun_stackexchange(x)


    def plot_transform(x):
        return numpy.abs(x - y_exact)
        # return x


    def do_remez_pade(n):
        c = remez(function, n, interval[0], interval[1])
        p2, q2 = rat_pade.rat_pade(c, I, I)
        pade_function2 = lambda x: p2(x) / q2(x)
        y_approx_pade2 = pade_function2(x)
        plt.plot(x, plot_transform(y_approx_pade2), '-', label=f'{n}')


    def do_remez_2(n, max_iter=None):
        p, q = remez_pade(function, n, interval[0], interval[1], max_iter=max_iter)
        print("result:")
        print(f"p: {p}")
        print(f"q: {q}")
        ops = len(p) - 1 + len(q) - 1
        evaluation_tally = f'mult: {ops}, add: {ops}, div: {1}, total: {2 * ops + 1}'
        pade_function2 = lambda x: numpy.polyval(p[::-1], x) / numpy.polyval(q[::-1], x)
        y_approx_pade2 = pade_function2(x)
        plt.plot(x, plot_transform(y_approx_pade2), '-', label=f'remez {max_iter} pq {n}, cost: {evaluation_tally}')


    # for i in range(9, 10):
    #     if i == 11: continue
    #     if i == 10: continue
    #
    #     do_remez_pade(i)

    do_remez_2(I, max_iter=20)
    do_remez_2(I, max_iter=19)

    y_approx = numpy.polyval(poly_coeffs, x)
    y_approx_pade = pade_function1(x)
    plt.plot(x, plot_transform(y_exact), label='atan')
    # plt.plot(x, plot_transform(y_stackexchange), label='atan stackexchange')
    ops = len(poly_coeffs) - 1
    evaluation_tally = f'mult: {ops}, add: {ops}, div: {0}, total: {2 * ops}'
    plt.plot(x, plot_transform(y_approx), '-', label=f'remez, cost: {evaluation_tally}')
    # plt.plot(x, plot_transform(y_approx_pade), '-', label='taylor pade')
    plt.legend()
    plt.show()
