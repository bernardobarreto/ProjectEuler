def fatorial(n):
    if n == 1:
        return n
    return fatorial(n-1) * n

number = 100
fat = fatorial(number)
print reduce(lambda x, y: x + y, map(lambda x: int(x), list(str(fat))))
