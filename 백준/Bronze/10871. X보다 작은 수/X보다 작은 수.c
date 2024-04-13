#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int N, X;
	scanf("%d %d",&N,&X);
	int* arry = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arry[i]);
	}
	for (int i = 0; i < N; i++) {
		if (arry[i]<X) {
			printf("%d ", arry[i]);
		}
	}
	free(arry);
}