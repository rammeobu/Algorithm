#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
typedef struct {
	int x, y;
}Node;
typedef struct {
	Node queue[MAX*MAX];
	int rear, front;
}Queue;
Queue q;
void iniqueu(Queue* q) {
	q->front = 0;
	q->rear = 0;
}
int isEmpty(Queue* q) {
	return q->front == q->rear;
}
void enqueu(Queue* q, int x, int y) {
	q->queue[q->rear].x = x;
	q->queue[q->rear].y = y;
	q->rear++;
}
Node dequeu(Queue* q) {
	return q->queue[q->front++];
}
int tomato[MAX][MAX];
int vist[MAX][MAX];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int N, M;
int max = 0;
void bfs(Queue* q) {
	while (!isEmpty(q)) {
		Node node = dequeu(q);
		for (int i = 0;i < 4;i++) {
			int nx = node.x + dx[i];
			int ny = node.y + dy[i];
			if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
				if (vist[nx][ny] == -1 && tomato[nx][ny] == 0) {
					vist[nx][ny] = vist[node.x][node.y] + 1;
					if (vist[nx][ny] > max) max = vist[nx][ny];
					enqueu(q, nx, ny);
				}

			}
		}
	}

};
int main() {
	iniqueu(&q);
	scanf("%d %d", &M, &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &tomato[i][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			vist[i][j] = -1;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (tomato[i][j] == 1) {
				enqueu(&q,i, j);
				vist[i][j] = 0;
			}
		}
	}
	bfs(&q);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (tomato[i][j] ==0&&vist[i][j]==-1) {
				printf("-1");
				return 0;
			}
			
		}
	}
	printf("%d", max);
	return 0;
}