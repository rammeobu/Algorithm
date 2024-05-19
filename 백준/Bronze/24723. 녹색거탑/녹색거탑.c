#include <stdio.h>
int main(void) {
	int N,count=1;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		count = count * 2;
	}
	printf("%d", count);
}