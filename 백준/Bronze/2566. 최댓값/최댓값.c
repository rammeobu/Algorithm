#include <stdio.h>
#include <string.h>
int main() {
	int array[9][9];
	int top = 0,hight,wieht;

	for (int i = 0; i < 9; i++) {
		scanf("%d %d %d %d %d %d %d %d %d", &array[i][0], &array[i][1], &array[i][2], &array[i][3], &array[i][4], &array[i][5], &array[i][6], &array[i][7], &array[i][8]);
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (array[i][j] >= top) {
				top = array[i][j];
				hight = i+1;
				wieht = j+1;
			}
		}
	}
	printf("%d\n", top);
	printf("%d %d", hight, wieht);
}