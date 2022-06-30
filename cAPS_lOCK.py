str = input()
change = True

if str.isupper():
    print(str.lower())
    quit()
    
if str[0].isupper():
    print(str)
    quit()

else:
    for i in range(1 , len(str)):
        if str[i].islower():
            change = False
            break

if change == True:
    print(str.capitalize())

else:
    print(str)