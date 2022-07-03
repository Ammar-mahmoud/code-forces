n = int(input())
arr_input_str = input().split(' ')
arr_input_int = []
co_even = 0
co_odd = 0

for i in range(n):
    arr_input_int.append(int(arr_input_str[i]))

    if arr_input_int[i] % 2 == 0:
        co_even +=1

    else:
        co_odd +=1

if co_even > co_odd:
    for i in range(n):
        if arr_input_int[i] % 2 == 1:
            print (i+1)
            quit()
    
else :
    for i in range(n):
        if arr_input_int[i] % 2 == 0:
            print (i+1)
            quit()
