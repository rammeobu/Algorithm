from collections import deque
def bfs(start,target):
    MAX=100000
    dx=[-1,1,2]
    queue=deque([start])
    dist=[-1]*(MAX+1)
    dist[start]=0
    while queue:
        x=queue.popleft()
        if x==target:
            return dist[x]
        for i in dx:
            if i==2:
                nx=x*i
            else :nx=x+i
            if nx<0 or nx>MAX:
                continue
            if dist[nx]==-1:
                dist[nx]=dist[x]+1
                queue.append(nx)
start, target = map(int, input().split())
print(bfs(start, target))