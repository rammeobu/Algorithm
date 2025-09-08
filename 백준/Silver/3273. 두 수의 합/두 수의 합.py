Count=int(input())
x=list(map(int,input().split()))
chack=int(input())
x.sort()
total=0
left,right=0,Count-1
while left<right:
    y=x[left]+x[right]
    if y==chack:
        total+=1
        left+=1
        right-=1
    elif y<chack:
        left+=1
    else:
        right-=1
print(total)                

