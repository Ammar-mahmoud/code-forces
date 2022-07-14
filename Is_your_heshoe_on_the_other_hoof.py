arr = list(input().split(" "))
frequency = {}

for item in arr:
   if item in frequency:
      frequency[item] += 1
   else:
      frequency[item] = 1

print(4 - len(frequency.keys()))