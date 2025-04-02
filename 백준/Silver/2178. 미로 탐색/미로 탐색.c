#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int x, y;
} Point;

typedef struct {
    Point queue[MAX * MAX];
    int front, rear;
} Queue;

void initQueue(Queue* q) {
    q->front = q->rear = 0;
}

int isEmpty(Queue* q) {
    return q->front == q->rear;
}

void enqueue(Queue* q, int x, int y) {
    q->queue[q->rear].x = x;
    q->queue[q->rear].y = y;
    q->rear++;
}

Point dequeue(Queue* q) {
    return q->queue[q->front++];
}

int N, M;
int maze[MAX][MAX];
int dist[MAX][MAX];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

void bfs(int startX, int startY) {
    Queue q;
    initQueue(&q);

    enqueue(&q, startX, startY);
    dist[startX][startY] = 1;

    while (!isEmpty(&q)) {
        Point current = dequeue(&q);

        for (int i = 0; i < 4; i++) {
            int nx = current.x + dx[i];
            int ny = current.y + dy[i];
            if (nx >= 0 && nx < N && ny >= 0 && ny < M && maze[nx][ny] == 1 && dist[nx][ny] == 0) {
                dist[nx][ny] = dist[current.x][current.y] + 1;
                enqueue(&q, nx, ny);
            }
        }
    }
}
int main() {
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%1d", &maze[i][j]);
        }
    }
    bfs(0, 0);
    printf("%d\n", dist[N - 1][M - 1]);
    return 0;
}