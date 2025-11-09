from collections import deque
def bfs(l,x,y,end):
    n=l
    ex,ey=end
    dx = [1, 2, 2, 1, -1, -2, -2, -1]
    dy = [2, 1, -1, -2, -2, -1, 1, 2]
    dist=[[-1]*n for _ in range(n)]
    q=deque()
    q.append((x,y))
    dist[x][y]=0
    while q:
        cx,cy=q.popleft()
        if(cx,cy)==(ex,ey):
            return  dist[cx][cy]
        for i in range(8):
            nx = cx + dx[i]
            ny = cy + dy[i]
            if 0 <= nx < n and 0 <= ny < n:
                if dist[nx][ny] == -1:
                    dist[nx][ny] = dist[cx][cy] + 1
                    q.append((nx, ny))
    return -1
case=int(input())
for _ in range(case):
    l=int(input())
    x,y=map(int,input().split())
    ex,ey=map(int,input().split())
    print(bfs(l,x,y,(ex,ey)))