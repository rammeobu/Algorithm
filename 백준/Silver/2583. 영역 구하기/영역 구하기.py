from collections import deque
def bfs (board,sy,sx,M,N,dist):
    q=deque()
    dx=[1,-1,0,0]
    dy=[0,0,1,-1]
    q.append((sy,sx))
    dist[sy][sx]=1
    area=1
    while q:
        cy, cx = q.popleft()
        for i in range(4):
            nx=cx+dx[i]
            ny=cy+dy[i]
            if  0<=ny<M and 0<=nx<N:
                if board[ny][nx]==0 and dist[ny][nx]==-1:
                    dist[ny][nx]=1
                    q.append((ny,nx))
                    area+=1
    return area


M,N,K=map(int,input().split())
board=[[0]*N for _ in range(M)]
for _ in range(K):
    x1,y1,x2,y2=map(int,input().split())
    for y in range(y1,y2):
        for x in range(x1,x2):
            board[M-1-y][x]=-1
dist=[[-1]*N for _ in range(M)]
area=[]
for y in range(M):
    for x in range(N):
        if board[y][x]==0 and dist[y][x]==-1:
            size = bfs(board,y,x,M,N,dist)
            area.append(size)
area.sort()
print(len(area))
print(*area)