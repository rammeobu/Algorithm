#include <stdio.h>
#include <math.h>
int main() {
	int n, t, c, p;
	int sum = 0, count = 1;
	scanf("%d %d %d %d", &n, &t, &c, &p);
	for (int i = 1; i <= n; i++) {
		if (i == (count * t) + 1) {
			sum += c * p;
			count++;

		}
	}
	printf("%d", sum);
}