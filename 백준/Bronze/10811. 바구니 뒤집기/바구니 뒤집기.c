#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,M;
	int i, j;
	int temp;
	scanf("%d %d", &N,&M);
	int* arrary= (int*)malloc(sizeof(int) * N);
	for (int k = 0; k < N; k++) {
		arrary[k] = k+1;
	}

	for (int k = 0; k < M; k++) {
		scanf("%d %d", &i, &j);
		for (i-1; i < j;) {
			temp = arrary[i-1];
			arrary[i-1] = arrary[j-1];
			arrary[j-1] = temp;
			i++; 
			j--;
		}
	}
	for (int L = 0; L < N; L++) {
		printf("%d ", arrary[L]);
	}
}