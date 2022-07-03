n, l = input().split(' ')
n = int(n)
l = int(l)
nums = []


arr_input_str = input().split(' ')
arr_input_int = []

for i in range(n):
    arr_input_int.append(int(arr_input_str[i]))

arr_input_int.sort()

nums.append(arr_input_int[0])
nums.append(l - arr_input_int[len(arr_input_int)-1])

max = arr_input_int[0]

for i in range(n-1):
    if arr_input_int[i+1] - arr_input_int[i] > max:
        max = arr_input_int[i+1] - arr_input_int[i]

red = max / 2
max = red
nums.append(red)

for i in range(3):
    if nums[i] > max:
        max = nums[i]

print(float(max))