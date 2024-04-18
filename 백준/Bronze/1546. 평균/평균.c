#include <stdio.h>
#include <stdlib.h>
int main() {
	int N;
	float high;
	float total = 0;
	scanf("%d", &N);
	float* array = (float*)malloc(sizeof(float) * N);
	for (int i = 0; i <N; i++) {
		scanf("%f", &array[i]);
	}
	high = array[0];
	for (int i = 0; i < N; i++) {
		if (high < array[i]) {
			high = array[i];
		}
		
	}
	for (int i = 0; i < N; i++) {
		array[i] = array[i] / high*100;
		total += array[i];
	}
	total = total / N;
	printf("%f\n", total);

}