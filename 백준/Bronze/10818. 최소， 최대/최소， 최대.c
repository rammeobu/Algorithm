#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int N,temp;
	int high=0,low=0;
	scanf("%d",&N);
	int* arry = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arry[i]);
		if (high == 0) {
			high = arry[i];
			low = arry[i];
		}
		if (arry[i] > high) {
			high = arry[i];
		}
		if (arry[i] < low) {
			low = arry[i];
		}
	}
	printf("%d %d", low, high);
	free(arry);
}