counter = int(input())
exit1 , enter1 = input().split(' ')
enter1 = int(enter1)
exit1 = int(exit1)
max = enter1
pas = enter1

for i in range(counter - 1):
    exit1 , enter1 = input().split(' ')
    enter1 = int(enter1)
    exit1 = int(exit1)
    pas += enter1
    pas -= exit1
    if max < pas :
        max = pas
        
print (max)