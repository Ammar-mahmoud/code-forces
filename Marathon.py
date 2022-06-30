num_test = int(input())
arr_results = []
for j in range(num_test):
    arr_dis = []
    counter = 0
    arr = input().split(' ')

    for i in range(4):
        arr_dis.append(int(arr[i]))

    Timur = arr_dis[0]
    arr_dis.sort()
    
    arr_results.append(3-arr_dis.index(Timur))
    arr.clear()

for i in range(num_test):
    print(arr_results[i])
    