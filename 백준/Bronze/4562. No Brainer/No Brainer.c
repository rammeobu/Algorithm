#include <stdio.h>

int main() {
	int n;
	int y, a;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &y, &a);
		if (a > y) {
			printf("NO BRAINS\n");
		}
		else
		{
			printf("MMM BRAINS\n");
		}
	}
}