#include <stdio.h>
#include <math.h>
int main() {
	float x=0;
	float total;
	while (1)
	{
		scanf("%f", &x);
		if (x == 0) break;
		total = pow(x, 4)+ pow(x, 3)+ pow(x, 2)+x+1;
		printf("%.2f\n", total);
	}
}