while True:
    x = input().split()

    n = int(x[0])
    m = int(x[-1])


    heads = []
    knights = []

    for i in range (n):
        heads.append(int(input()))

    for i in range (m):
        knights.append(int(input()))

    heads.sort()
    knights.sort()

    if n == 0:
        break
    
    cost = 0
    count = 0
    possible = True

    for i in range (n):
        while count < m and knights[count] < heads[i]:
            count += 1

        if count >= m:
            possible = False
            break
        cost += knights[count]
        count += 1


    if possible is False:
        print("Loowater is doomed!")
    else:
        print(cost)
        

