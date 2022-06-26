temp = ['h','e','l','l','o']
counter = -1
str = input()

for j in range(5) :
    for i in range(counter+1, len(str)):
        if temp[0] == str[i]:
            counter = i
            temp.pop(0)
            break
        
if len(temp) == 0 :
    print("YES")

else:
    print("NO")
