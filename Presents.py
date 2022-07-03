n = int(input())
arr_input_str = input().split(' ')
arr_input_int = []
arr_output = []

for i in range(n):
    arr_input_int.append(int(arr_input_str[i]))

for j in range (1,n+1) :
    for i in range(1,n+1):
        if j == arr_input_int[i-1]:
            arr_output.append(i)

print(*arr_output)