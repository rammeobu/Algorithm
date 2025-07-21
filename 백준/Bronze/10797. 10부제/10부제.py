x=int(input())
intlist=list(map(int,input().split()))
count=0
for i in intlist:
    if i==x :
        count+=1
print(count)