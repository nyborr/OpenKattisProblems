x = input().split()

numCards = 4 * int(x[0])
y = []

for i in range(numCards):
    y.append(input())


sum = 0
for i in range(numCards):
    if(y[i][1] == x[1]):
        if y[i][0] == "A":
            sum = sum + 11
        if y[i][0] == "K":
            sum = sum + 4
        if y[i][0] == "Q":
            sum = sum + 3
        if y[i][0] == "J":
            sum = sum + 20
        if y[i][0] == "T":
            sum = sum + 10
        if y[i][0] == "9":
            sum = sum + 14
        if y[i][0] == "0":
            sum = sum + 0
        if y[i][0] == "0":
            sum = sum + 0
    else:
        if y[i][0] == "A":
            sum = sum + 11
        if y[i][0] == "K":
            sum = sum + 4
        if y[i][0] == "Q":
            sum = sum + 3
        if y[i][0] == "J":
            sum = sum + 2
        if y[i][0] == "T":
            sum = sum + 10
        if y[i][0] == "9":
            sum = sum + 0
        if y[i][0] == "0":
            sum = sum + 0
        if y[i][0] == "0":
            sum = sum + 0
print(sum)
      
