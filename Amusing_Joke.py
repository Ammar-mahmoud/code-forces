str1 = input()
str2 = input()
all_letters = list(input())

for i in (str1):
    if i in all_letters:
        all_letters.remove(i)
    else:
        print("NO")
        quit()

for i in (str2):
    if i in all_letters:
        all_letters.remove(i)
    else:
        print("NO")
        quit()

if len(all_letters) == 0 :
    print("YES")

else :
    print("NO")