import sys
input=sys.stdin.readline
sys.setrecursionlimit(10000)
def dfs(graph,start,visited):
    visited[start]=True
    for i in graph[start]:
        if not visited[i]:
            dfs(graph,i,visited)
N,M=map(int,input().split())
graph=[[] for _ in range(N+1)]
visited=[False] *(N+1)
for _ in  range(M):
    u,v = map(int,input().split())
    graph[u].append(v)
    graph[v].append(u)
count=0
for i in range(1,N+1):
    if not visited[i]:
        dfs(graph,i,visited)
        count+=1
print(count)
