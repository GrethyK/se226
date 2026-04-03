def factorial(x):
    if x == 1 or x == 0:
        return 1
    else:
        return x * factorial(x - 1)


abs_Value = lambda x, i: (x ** (2 * i)) / (factorial(2 * i))


def exp_x(x: int, n: int):
    total = 0.0
    for i in range(n):
        total += (-1) ** i * abs_Value(x, i)
    return total


x = 0
n = int(input("n gir: "))
r = int(input("r gir: "))


def Gn(n, r):
    global x
    if n < 0:
        return
    x += r ** n
    Gn(n - 1, r)


Gn(n, r)
print(x)
