num = int(input())
for i in range(num):
    arr = []
    counter = 0 
    n_inputs , letters = input().split(" ")
    n_inputs = int(n_inputs)
    letters = int(letters)

    for j in range(n_inputs):
        arr.append(input())

    for j in range(len(arr[0])):
        counter = counter + abs(ord(arr[0][j])-ord(arr[1][j]))

    if n_inputs > 2 :
        for a in range(n_inputs):
            for b in range (a+1 , n_inputs):
                temp = 0
                for c in range(letters):
                    temp = temp + abs(ord(arr[a][c])-ord(arr[b][c]))

                counter = min(temp , counter)

    print (counter)
