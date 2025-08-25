min=list(map(int,input().split()))
man=list(map(int,input().split()))
if sum(man)>sum(min):
    print(sum(man))
else:
    print(sum(min))