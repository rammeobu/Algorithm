#include <stdio.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a == b) {
		printf("==");
	}
	else (a > b) ? printf(">") : printf("<");
}