N,K=map(int,input().split())
bord=[int(input()) for _ in range(N)]
COUNT=0
for i in range(N-1,-1,-1):
    if K >=bord[i]:
        a=K//(bord[i])
        K=K-(a*bord[i])
        COUNT+=a
print(COUNT)        