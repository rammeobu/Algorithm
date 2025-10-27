import sys
sys.setrecursionlimit(10**6)
input=sys.stdin.readline
def dfs(bord,i,j,visited):
    visited[i][j]=True
    color=bord[i][j]
    for dy,dx in [(-1,0),(0,-1),(1,0),(0,1)]:
        ny, nx = i + dy, j + dx
        if 0<=nx<N and 0<=ny<N:
            if not visited[ny][nx] and bord[ny][nx]==color:
                dfs(bord,ny,nx,visited)


N = int(input())
bord=[input().strip() for _ in range(N)]
board_rg = [row.replace('G', 'R') for row in bord]

visited=[[False]*N for _ in range(N)]
visitedRG=[[False]*N for _ in range(N)]
countRG=0
count=0
for i in range(N):
    for j in range(N):
        if not visited[i][j]:
            dfs(bord,i,j,visited)
            count+=1
        if not visitedRG[i][j]:
            dfs(board_rg, i, j, visitedRG)
            countRG+=1
print(f"{count} {countRG}")

