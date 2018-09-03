from itertools import permutations

x = int(input())

smallest = None

for n in permutations(str(x)):
    n = int(''.join(n))
    if n > x:
        if smallest == None:
            smallest = n
        smallest = min(smallest, n)

print(smallest if smallest is not None else 0)


