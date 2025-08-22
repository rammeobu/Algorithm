init=input()
maxacount=0
ex=0
for _ in range(int(init)):
    x=list(map(int,input().split()))
    unique_count=len(set(x))
    if unique_count == 1:
        ex=10000+x[0]*1000
    elif unique_count == 2:
        for num in x:
            if x.count(num) == 2:
                ex = 1000 + num * 100
                break
    else:
        ex=max(x)*100
    if maxacount<ex:
        maxacount=ex
print(maxacount)