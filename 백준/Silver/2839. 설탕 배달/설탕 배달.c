#include <stdio.h>
int main(void) {
	int N;
	int temp = 0;
	int count = 0;
	int fiv = 0, thee = 0;
	scanf("%d", &N);
	temp = N;
	while (temp > 0)
	{
		temp -= 3;
		thee++;
		if (temp < 0) {
			thee--;
			temp += 3;
			break;
		}
	}
	if (temp != 0) {
		switch (temp) {
			case 1: {
			thee -= 3;
			if (thee < 0) {
				break;
			}
			fiv += 2;
			temp = 0;
			break;
			}
			case 2: {
			thee--;
			if (thee < 0) {
				break;
			}
			fiv++;
			temp = 0;
			break;
			}
		}
	}
	if (thee >= 5) {
		while (1)
		{
			thee -= 5;
			fiv += 3;
			if (thee < 5) {
				break;
			}
		}
	}

	if (temp != 0 || thee < 0 || fiv < 0) {
		printf("-1");
	}
	else
	{
		printf("%d", thee + fiv);
	}
}