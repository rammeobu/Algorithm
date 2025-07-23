x=int(input())

for _ in range(x):
    count=0
    for _ in range(9):
        Y,K=list(map(int,input().split()))
        count+=(Y-K)
    if count==0:
        print("Draw")
    elif count>0:
        print("Yonsei")
    else:
        print("Korea")




