t = int(input())
for i in range(t):
    no_str = int(input())
    arr = []
    for j in range(no_str):
        temp = input()
        arr.append(temp)
    for element in arr:
        br1 = False
        for e1 in arr:
            for e2 in arr:
                if e1 + e2 == element:
                    print(1,end="")
                    br1 = True
                    break
            if br1 :
                break
        if not br1 :
            print(0,end="")
    print("")