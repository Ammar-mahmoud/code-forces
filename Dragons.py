arr_two = input().split(' ')
st = int(arr_two[0])
lines = int(arr_two[1])
arr_str = []
arr = []
min = []
arr_bouns = []
arr_st = []

for i in range(lines):
    a, b = input().split(' ')
    arr_str.append(a)
    arr_str.append(b)

for i in range(2*lines):
    arr.append(int(arr_str[i]))

for i in range(0, 2*lines, 2):
    min.append(arr[i])

min.sort()

for i in range(len(arr)):
    if i % 2 == 0:
        arr_st.append(arr[i])
    else:
        arr_bouns.append(arr[i])

for j in range(len(min)):
    for i in range(0, len(arr_st)):
        if st > min[j]:
            st += arr_bouns[arr_st.index(min[j])]
            arr_bouns.pop(arr_st.index(min[j]))
            arr_st.remove(min[j])
            break
        else :
            print("NO")
            quit()

print("YES")