N = int(input())

num = [int(input()) for _ in range (N)]
    
nums = [(i//10)**(i%10) for i in num]

print(sum(nums))
