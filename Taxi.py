import math 
num_gr = int(input())
arr = input().split(' ')
num_arr = []
num1 = 0 
num2 = 0
num3 = 0
num4 = 0

for i in range(num_gr):
    num_arr.append(int(arr[i]))
    if num_arr[i] == 1 :
        num1 = num1 + 1
    elif num_arr[i] == 2 :
        num2 = num2 + 1
    elif num_arr[i] == 3:
        num3 = num3 + 1
    else :
        num4 = num4 + 1

if num1 < num3  :
    min_counter = num1
else :
    min_counter = num3

num1 = num1 - min_counter
num3 = num3 - min_counter
sum = num4 + (num2/2) + min_counter + num3


sum = sum + math.ceil(((num2%2)*2 + num1)/4)

print (int(sum))