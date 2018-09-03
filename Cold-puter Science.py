n = input()

d = []
count = [0 if int(i) >= 0 else 1 for i in input().split()]
print(sum(count))

