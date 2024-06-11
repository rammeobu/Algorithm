#include <stdio.h>
int main() {
	int n, total=0;
	for (int i = 0; i < 5; i++ ) {
		scanf("%d", &n);
		if (n < 40) {
			total += 40;
			continue;
		}
		total += n;
	}
	printf("%d", total / 5);
}