#include <stdio.h>
#include <stdlib.h>
int main() {
	int N, M;
	int i, j, k;
	scanf("%d %d", &N, &M);
	int* array = (int*)malloc(sizeof(int) * N);
	for (int n = 0; n < N; n++) {
		array[n] = 0;
	}
	for (int m = 0; m < M; m++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int I = i-1; I <= j-1; I++) {
			array[I] = k;
		}
	}
	for (int m = 0; m < N; m++) {
		printf("%d ", array[m]);
	}

}