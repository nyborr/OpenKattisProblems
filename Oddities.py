n = int(input())
x = []

for i in range (n):
    x.append(int(input()))

for i in range (n):
    if x[i] % 2 == 0:
        print(x[i], "is even")
    else:
        print(x[i], "is odd")
