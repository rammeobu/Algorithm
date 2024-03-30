#include <stdio.h>
int main(void) {
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d\n", a * ((b % 10)));
	printf("%d\n", a * ((b % 100) / 10));
	printf("%d\n", a*((b /10)/10));
	printf("%d", a * b);


}