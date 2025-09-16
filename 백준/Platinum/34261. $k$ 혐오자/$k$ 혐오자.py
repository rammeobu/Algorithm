N=input().strip()
X=int(input())
total=0
for i in range(1,X+1):
    test= "".join([ch for ch in str(i) if ch!=N])
    if test=="":
        result=0
    else:
        result=int(test)
    total+=result
print(total%1000000007)