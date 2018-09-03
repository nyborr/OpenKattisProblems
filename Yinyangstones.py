stones = input()
b = 0
w = 0

for i in range (len(stones)):
    if stones[i] == 'B':
        b += 1

    if stones[i] == 'W':
        w += 1

difference = b - w
if difference >= 1 or difference <= -1:
    print(0)
else:
    print(1)
