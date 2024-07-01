#include <stdio.h>

int main() {
	char chase[8][9];
	int count = 0;
	for (int i = 0; i < 8; i++)
	{
		scanf("%s", chase[i],9);
	}
	//1 3 5 7 흑 2 4 6 8 백
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
		{
			if (i % 2 != 0&& j % 2 != 0 && chase[i][j] == 'F') {
				count++;
			}
			if (i % 2 == 0 && j % 2 == 0 && chase[i][j] == 'F') {
				count++;
			}
		}
	}
	printf("%d", count);
}