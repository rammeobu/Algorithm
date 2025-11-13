from collections import deque
def bfs(start,end):
    q=deque()
    q.append((start,1))
    while q:
        x,dist=q.popleft()
        if x==end:
            return dist
        nx=x*2
        if nx<=end:
            q.append((nx,dist+1))
        nx=(x*10)+1   
        if nx<=end:
            q.append((nx,dist+1))
    return -1

A,B=map(int,input().split())
print(bfs(A,B))