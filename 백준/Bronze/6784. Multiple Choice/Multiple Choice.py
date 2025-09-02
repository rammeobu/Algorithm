N=int(input())
c_a=[input() for _ in range(N)]
s_a=[input() for _ in range(N)]
cnt=0
for i in range(N):
    if c_a[i]==s_a[i]:
        cnt+=1
print(cnt)    
