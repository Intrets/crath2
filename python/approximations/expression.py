class base:
    def explode(self, base, i):
        return self


class x(base):
    def __init__(self, n=1):
        self.n = n
        pass

    def show(self):
        if self.n == 1:
            return 'x'
        else:
            return f'x{self.n}'

    def simplify(self):
        return self


class value(base):
    def __init__(self, a):
        self.a = a

    def show(self):
        if type(self.a) == str:
            return self.a
        else:
            return f'F({float(self.a)}f)'

    def simplify(self):
        return self

    def explode(self, base, i):
        return assignment(f'{base}{i}', self)


class multiply(base):
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def show(self):
        return f'({self.a.show()} * {self.b.show()})'

    def explode(self, base, i):
        return line(
            self.b.explode(base, i + 1),
            assignment(f'{base}{i}', multiply(value(f'{base}{i + 1}'), self.a))
        )
        return


class assignment(base):
    def __init__(self, name, a):
        self.name = name
        self.a = a

    def show(self):
        return f'auto const {self.name} = {self.a.show()}'


class line(base):
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def show(self):
        return f'{self.a.show()};\n{self.b.show()}'


class fma_normal:
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c

    def show(self, normal=False):
        return f'{self.a.show()} * {self.b.show()} + {self.c.show()}'

    def explode(self, label, i):
        return line(
            self.a.explode(label, i + 1),
            assignment(f'{label}{i}', fma_normal(value(f'{label}{i + 1}'), self.b, self.c))
        )


class fma:
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c

    def show(self, normal=False):
        return f'math::fma({self.a.show()}, {self.b.show()}, {self.c.show()})'

    def explode(self, label, i):
        return line(
            self.a.explode(label, i + 1),
            assignment(f'{label}{i}', fma(value(f'{label}{i + 1}'), self.b, self.c))
        )