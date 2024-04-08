#include <stdio.h>
int main() {
	int dice_1, dice_2, dice_3,max,total=0;
	
	scanf("%d %d %d", &dice_1, &dice_2, &dice_3);
	if (dice_1 == dice_2 &&dice_2==dice_3) {
		total = 10000 + ((dice_1) * 1000);
	}
	else if (dice_1 == dice_2 || dice_1 == dice_3) {
		total = 1000 + ((dice_1) * 100);
	}
	else if (dice_2 == dice_3) {
		total = 1000 + ((dice_2) * 100);
	}
	else
	{
		max = dice_1;
		if (max < dice_2) {
			max = dice_2;
		}
		if (max < dice_3) {
			max = dice_3;
		}
		total = max * 100;
	}
	printf("%d", total);
}