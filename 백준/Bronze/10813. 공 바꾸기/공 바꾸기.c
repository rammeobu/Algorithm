#include <stdio.h>
#include <stdlib.h>
int main() {
	int N, M;
	int i, j, k,cont=0;
	scanf("%d %d", &N, &M);
	int* array = (int*)malloc(sizeof(int) * N);
	for (int n = 0; n < N; n++) {
		array[n] = n+1;
	}
	for (int m = 0; m < M; m++) {
		scanf("%d %d", &i, &j);
		k = array[i-1];
		array[i-1] = array[j-1];
		array[j-1] = k;
	}
	for (int m = 0; m < N; m++) {
		printf("%d ", array[m]);
	}

}