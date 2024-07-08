#include <stdio.h>

int main() {
	int hour, min, sec, hour1, min2, sec3;
	int temp;
    int time[3][2];
	for (int i = 0; i < 3; i++) {
		scanf("%d %d %d %d %d %d", &hour, &min, &sec, &hour1, &min2, &sec3);
		time[i][0] = (hour * 3600) + (min * 60) + sec;
		time[i][1] = (hour1 * 3600) + (min2 * 60) + sec3;
	}
	for (int i = 0; i < 3; i++) {
		temp = time[i][1] - time[i][0];
		hour = temp / 3600;
		min = (temp / 60)-(hour*60);
		sec = temp - (min * 60) - (hour * 3600);
		printf("%d %d %d\n", hour, min, sec);
	}
}