lines = int(input())
arr = [0] * lines
counter = 0
for item in arr:
   if item in frequency:
      frequency[item] += 1
   else:
      frequency[item] = 1

for i in range(lines):
    arr[i] = input()

for item in arr:
   if item in frequency:
      frequency[item] += 1
   else:
      frequency[item] = 1

for i in range(lines-1 , -1 , -1):
    frequency[arr[i]]-=1
    if frequency[arr[i]] == 0:
        arr[i] = "OK"
        continue
    arr[i] = arr[i] + str(frequency.get(arr[i]))

for i in range (lines):
    print (arr[i])