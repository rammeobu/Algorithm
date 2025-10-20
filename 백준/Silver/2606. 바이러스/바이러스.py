def dfs(graph, v, visited):
    visited[v] = True
    for i in graph[v]:
        if not visited[i]:
            dfs(graph, i, visited)
M = int(input())
N = int(input())
graph = [[] for _ in range(M + 1)]
for _ in range(N):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)
visited = [False] * (M + 1)
start = 1
dfs(graph, start, visited)
count = sum(visited)-1
print(count)
