#include <stdio.h>
#include <stdlib.h>
int main() {
	int total,hap=0;
	int a;
	int item, cash;
	scanf("%d", &total);
	scanf("%d", &a);
	for (int i = 0; i < a;i++) {
		scanf("%d %d", &cash, &item);
		hap += cash * item;
	}
	if (total == hap) {
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}