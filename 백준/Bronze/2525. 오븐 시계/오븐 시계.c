#include <stdio.h>
int main() {
	int our, min, needtime,total,temp;
	
	scanf("%d %d", &our, & min);
	scanf("%d", &needtime);
	if (our == 0)our = 24;
	total = (our * 60) + min + needtime;
	our = total / 60;
	min = total % 60;
	if (total / 60 > 24) {
		temp = (total / 60);
		while (temp > 24)
		{
			temp = (total / 60)-24;
		}
		our = temp;

	}
	if (our == 24) {
		our = 0;
	}
	printf("%d %d", our,min);

}