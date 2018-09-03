P = int(input())

data = []
islands = 0

for i in range (P):
    data.append(input())

for a in range (P):
    for b in range (12):
        if data[b] < data[b+1]:
            islands += 1


for i in range (P):
    print(i + 1, islands)

print(data)



