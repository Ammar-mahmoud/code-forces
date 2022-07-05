year = int(input())
arr_copy = []

while True :
    year = year + 1
    arr = list(str(year))
    arr_copy = arr.copy()
    for i in arr :
        arr_copy.remove(i)
        if i not in arr_copy :
            if (len(arr_copy) == 1 ):
                print(year)
                quit()
            else :
                continue
        else : 
            break
