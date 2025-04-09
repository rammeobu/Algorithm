#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    int x, y;
} Node;

typedef struct {
    Node queue[MAX * MAX];
    int rear, front;
} Queue;

int land[MAX][MAX];
int visited[MAX][MAX];
int N, maxHeight = 0;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

void initQueue(Queue* q) {
    q->front = 0;
    q->rear = 0;
}

int isEmpty(Queue* q) {
    return q->front == q->rear;
}

void enqueue(Queue* q, int x, int y) {
    q->queue[q->rear].x = x;
    q->queue[q->rear].y = y;
    q->rear++;
}

Node dequeue(Queue* q) {
    return q->queue[q->front++];
}

void bfs(int startX, int startY, int rain) {
    Queue q;
    initQueue(&q);
    enqueue(&q, startX, startY);
    visited[startX][startY] = 1;

    while (!isEmpty(&q)) {
        Node node = dequeue(&q);
        for (int i = 0; i < 4; i++) {
            int nx = node.x + dx[i];
            int ny = node.y + dy[i];
            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                if (land[nx][ny] > rain && visited[nx][ny] == 0) {
                    visited[nx][ny] = 1;
                    enqueue(&q, nx, ny);
                }
            }
        }
    }
}

int main() {
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &land[i][j]);
            if (land[i][j] > maxHeight)
                maxHeight = land[i][j];
        }
    }

    int maxArea = 0;
    for (int rain = 0; rain <= maxHeight; rain++) {
        memset(visited, 0, sizeof(visited));
        int areaCount = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (!visited[i][j] && land[i][j] > rain) {
                    bfs(i, j, rain);
                    areaCount++;
                }
            }
        }

        if (areaCount > maxArea)
            maxArea = areaCount;
    }

    printf("%d\n", maxArea);
    return 0;
}
