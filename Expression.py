arr = []

for i in range (3):
    a = int(input())
    arr.append(a)

if arr[0] == 1 and arr[2] == 1:
    print(2+arr[1])
    quit()


if arr[0] == 1 :
        print((1+arr[1])*arr[2])
        quit()

if arr[1] == 1 :
    if arr[0] > arr[2]:
        print((1+arr[2])*arr[0])
        quit()
    else:
        print((1+arr[0])*arr[2])
        quit()

if arr[2] == 1 :
        print((1+arr[1])*arr[0])
        quit()   
    
print(arr[0] * arr[1] * arr[2])
