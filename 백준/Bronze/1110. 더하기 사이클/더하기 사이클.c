#include <stdio.h>
int main() {
	int iarray[2] = {0};
	int num,num2,count=0;
		scanf("%d", &num);
		if (num < 10) {
			iarray[0] = 0;
			iarray[1] = num;
		}
		else
		{
			iarray[0] = num / 10;
			iarray[1] = num % 10;
		}
		while (1)
		{
			count++;
			num2=iarray[0] + iarray[1];
			if (num2 < 10) {
				iarray[0] = iarray[1];
				iarray[1] = num2;
			}
			else
			{
				iarray[0] = iarray[1];
				iarray[1] = num2 % 10;
			}
			num2 = (iarray[0]*10)+iarray[1];
			if (num == num2) {
				printf("%d", count);
				break;
			}
		}
}