first = 1
second = 2
counter = 3

while len(str(second)) < 1000:
    first, second = second, first + second
    counter += 1
print counter
