""" ROBYN YATES """

x = int(input())

cupsList = []
for cup in range(x):
    [a, b] = input().split()
    if a[0].isdigit():
        radius = int(a) / 2
        name = b
    else:
       radius = int(b)
       name = a
    cupsList.append((radius, name))
        
for radius, name in sorted(cupsList):
    print(name)
