import sys
sys.setrecursionlimit(100000)
def dfs(x,y):
    visited[y][x]=True
    for dx,dy in [(-1,0),(0,-1),(1,0),(0,1)]:
        nx=x+dx
        ny=y+dy
        if 0<=nx<M and 0<=ny<N:
            if graph[ny][nx]== 1 and visited[ny][nx]==False:
                dfs(nx,ny)

T=int(input())
for i in range(T):
    M,N,K=map(int,input().split())
    visited=[[False]*M for _ in range(N)]
    graph=[[0]*M for _ in range(N)]
    for _ in range(K):
        x,y=map(int,input().split())
        graph[y][x]=1
    count=0
    for y in range(N):
        for x in range(M):
            if not visited[y][x] and graph[y][x]==1:
                dfs(x,y)
                count+=1
    print(count)