nums = input().split('+')
nums.sort()

for i in range(len(nums)-1):
    print(f"{nums[i]}+" ,end="")
    
print(nums[len(nums)-1])