#include <stdio.h>
#include<string.h>
int main() {
	char array1[100];
	scanf("%s", array1, 100);
	for (int i = 0; i < strlen(array1); i++) {
		if (array1[i]>=65&&array1[i]<=90) {
			array1[i] = array1[i] + 32;
		}
		else
		{
			array1[i] = array1[i] - 32;
		}
	}
	printf("%s", array1, strlen(array1));
}