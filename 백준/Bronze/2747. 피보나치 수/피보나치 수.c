#include <stdio.h>
int main() {
	int N;
	int temp = 0;
	int iarray[45] = { 0,1 };
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		temp = iarray[i] + iarray[i + 1];
		if (i + 2 <= 45) {
			iarray[i + 2] = temp;
		}
	}
	printf("%d", iarray[N]);
}
