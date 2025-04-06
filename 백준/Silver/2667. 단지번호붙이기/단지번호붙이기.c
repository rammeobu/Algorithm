#include <stdio.h>
#include <stdlib.h>

#define MAX 625
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
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

int N;
int map[MAX][MAX];
int visited[MAX][MAX];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int count = 1;
int bfs(int startX, int startY) {
    Queue q;
    initQueue(&q);
      int count = 1;
    enqueue(&q, startX, startY);
    visited[startX][startY] = 1;
    while (!isEmpty(&q)) {
        Point current = dequeue(&q);
        for (int i = 0; i < 4; i++) {
            int nx = current.x + dx[i];
            int ny = current.y + dy[i];
            if (nx >= 0 && nx < N && ny >= 0 && ny < N &&
                map[nx][ny] == 1 && visited[nx][ny] == 0) {
                visited[nx][ny] = 1;
                enqueue(&q, nx, ny);
                count++;
            }
        }
    }
    return count;
}

int main() {
    scanf("%d", &N);
    char line[MAX];
    for (int i = 0; i < N; i++) {
        scanf("%s", line);
        for (int j = 0; j < N; j++) {
            map[i][j] = line[j] - '0';
        }
    }
    int groupCount = 0;
    int houseCounts[MAX * MAX];
    for (int i = 0;i < N;i++) {
        for (int j = 0;j < N;j++) {
            if (map[i][j] == 1 && visited[i][j] == 0) {
                houseCounts[groupCount++] = bfs(i, j);
            }
        }
    }
    qsort(houseCounts, groupCount, sizeof(int), compare);

    printf("%d\n", groupCount);
    for (int i = 0; i < groupCount; i++) {
        printf("%d\n", houseCounts[i]);
    }

    return 0;
}