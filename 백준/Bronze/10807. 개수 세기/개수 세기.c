#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int N, v,count=0;
	scanf("%d", &N);
	int* arry = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arry[i]);
	}
	scanf("%d", &v);
	for (int i = 0; i < N; i++) {
		if (arry[i] == v) {
			count++;
		}
	}
	printf("%d", count);
	free(arry);
}