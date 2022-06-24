num1, num2 = input().split(' ')
num1 = int(num1)
num2 = int(num2)

while num2 > 0:
    if num1 % 10 == 0:
        num1 /= 10

    elif num1 == 1:
        break

    else :
        num1 -= 1
    
    num2 -= 1

print (int(num1))