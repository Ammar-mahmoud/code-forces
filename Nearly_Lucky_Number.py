x = int(input())
xs = str(x)
counter = 0 
is_diff = False

for i in xs :
    if i == '7' or i == '4':
       counter = counter + 1

for i in range(len(xs)-1):
    if (xs[i] == '7' and xs[i+1] == '4') or (xs[i] == '4' and xs[i+1] == '7'):
        is_diff = True
        break

if counter == 4 or counter == 7:
    print("YES")
    quit()

for i in xs:
    if ((i == '7' or i != '4') and (i != '7' or i == '4' )) or len(xs) <= 1:
        print("NO")
        quit()

if is_diff and ((len(xs) % 7 == 0) or (len(xs) % 4 == 0)) :
    print ("YES")
else :
    print("NO")
