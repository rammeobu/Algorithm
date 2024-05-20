#include <stdio.h>
int main(void) {
	int squed[100][100] = {0};
	int count = 0;
	int N;
	int a, b;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		for (int j = 100-b; j > 100-(b + 10); j--) {
			for (int k = a; k < a+10; k++) {
				if (squed[j][k] == 1) {
					continue;
				}
				squed[j][k]++;
			}
		}
	}
	for (int i = 0; i <100; i++) {
		for(int j=0;j<100;j++){
			if (squed[i][j] == 1) {
				count++;
			}
		}
	}
	printf("%d", count);


}
