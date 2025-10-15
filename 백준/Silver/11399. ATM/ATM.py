N =int(input())
bord=list(map(int,input().split()))
bord.sort()
point=0
test=[]
for i in range(N):
    point=bord[i]+point
    test.append(point)
print(sum(test))
