x = input()

policy1 = 0
policy2 = 0
policy3 = 0

for i in range (len(x)):
    if x[i] == 'D' and x[i+1] == 'U':
        policy1 += 1
        policy2 += 1
        policy3 += 1
    if x[i] == 'U' and x[i+1] == 'U':
        policy2 += 2
    if x[i] == 'U' and x[i+1] == 'D':
        policy1 += 1
        policy2 += 1
        policy3 += 1
    if x[i] == 'D' and x[i+1] == 'D':
        policy1 += 2
        


print(policy1)
print(policy2)
print(policy3)



