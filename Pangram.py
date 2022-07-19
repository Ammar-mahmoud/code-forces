num = int(input())
str1 = input().lower()
if num < 26:
    print("NO")
    quit()

frequency = {}

for item in str1:
   if item in frequency:
      continue
   else:
      frequency[item] = 1

if len(frequency) == 26 :
    print("YES")
    
else :
    print("NO")
