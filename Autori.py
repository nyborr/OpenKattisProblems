data = input()
output = []


for i in range (len(data)):
    if i == 0:
        output.append(data[i])
    if data[i] == '-':
        output.append(data[i+1])


print(''.join(output))
