str1 = list(input())
str2 = list(input())
str3 = list(''.join(reversed(str2)))

if (len(str1) != len (str2)) or (str1 == str2 and str2 != str3) or str1 != str3 :
    print("NO")
    quit()

print("YES")