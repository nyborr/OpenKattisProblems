import itertools

arr = input()
L = [int(x) for x in arr.split()]


height1 = L[-2]
height2 = L[-1]

s = []
x =[]

for i in range (0,4):
    for j in range (i+1,5):
        for k in range (j+1,6):
            if ((L[i] + L[j] + L[k]) ==  height1):
                s.append(L[i])
                s.append(L[j])
                s.append(L[k])
            if ((L[i] + L[j] + L[k]) == height2):
                x.append(L[i])
                x.append(L[j])
                x.append(L[k])



s.sort()
x.sort()
x.reverse()
s.reverse()

print(s[0],s[1],s[2], x[0],x[1],x[2])
    


            
    
