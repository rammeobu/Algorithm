
from collections import deque
def bfs (graph,start,end):
    visted=[False]*(len(graph))
    dist=[-1]*(len(graph))
    q=deque()
    q.append(start)
    visted[start]=True
    dist[start]=0
    while q:
        cur=q.popleft()
        if cur==end:
            return dist[cur]
        for i in graph[cur]:
            if not visted[i]:
                visted[i]=True
                dist[i]=dist[cur]+1
                q.append(i)
    return -1
N=int(input())
start,end=map(int,input().split())
M=int(input())
graph=[[]for _ in range(N+1)]
for _ in range(M):
    x,y=map(int,input().split())
    graph[y].append(x)
    graph[x].append(y)
print(bfs(graph,start,end))


