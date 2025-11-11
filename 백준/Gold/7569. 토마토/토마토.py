from collections import deque

def bfs (board,M,N,H):
    vist=[[[False]*M for _ in range(N)]for _ in range(H)]
    dist=[[[0]*M for _ in range(N)]for _ in range(H)]
    q=deque()
    for z in range(H):
        for y in range(N):
            for x in range(M):
                if board[z][y][x] == 1:
                    q.append((z, y, x))
                    vist[z][y][x] = True
                    dist[z][y][x] = 0
    dx=[1,0,0,-1,0,0]
    dy=[0,1,0,0,-1,0]
    dz=[0,0,1,0,0,-1]
    while q:
        cz, cy, cx = q.popleft()
        for i in range(6):
            nx=cx+dx[i]
            ny=cy+dy[i]
            nz=cz+dz[i]
            if 0<=nx<M and 0<=ny<N and 0<=nz<H:
                if board[nz][ny][nx]==0 and vist[nz][ny][nx]==False:
                    vist[nz][ny][nx]=True
                    board[nz][ny][nx]=1
                    dist[nz][ny][nx]=dist[cz][cy][cx]+1
                    q.append((nz,ny,nx))
    max_d=0
    for z in range(H):
        for y in range(N):
            for x in range(M):
                if board[z][y][x]==0:
                    return -1
                max_d=max(max_d,dist[z][y][x])
    return max_d
M,N,H=map(int,input().split())
board=[[[0]*M for _ in range(N)] for _ in range(H)]
for z in range(H):
    for n in range(N):
        row=list(map(int,input().split()))
        board[z][n]=row
print(bfs(board,M,N,H))