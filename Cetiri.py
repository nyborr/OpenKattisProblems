x = list(map(int, input().split()))
n = sorted(x)

if n[1] - n[0] < n[2] - n[1]:
    print(n[1] + abs(n[1] - n[0]))
elif n[1] - n[0] == n[2] - n[1]:
    print(n[2] + abs(n[2] - n[1]))
else:
    print(n[0] + abs(n[2] - n[1]))
