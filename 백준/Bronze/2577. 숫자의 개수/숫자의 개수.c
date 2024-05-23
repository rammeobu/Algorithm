#include <stdio.h>
int main(void) {
	int iarray[10] = {0};
	int a, b, c,total,temp;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	total = a * b * c;
	while (total!=0)
	{
		temp = total % 10;
		iarray[temp]++;
		total = total / 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", iarray[i]);
	}

}  