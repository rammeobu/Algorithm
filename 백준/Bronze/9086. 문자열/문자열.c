#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 1000
int main() {
	int len,n;
	int cap = size;
	int temp;
	scanf("%d", &n);
	char** array = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		array[i] = (char*)malloc(sizeof(char) * (size+1));
		scanf("%s", array[i]);
	}
	for (int i = 0; i < n; i++) {
		temp = strlen(array[i]);
		printf("%c%c\n", array[i][0],array[i][temp-1]);

	}
	for (int i = 0; i < n-1; i++) {
		free(array[i]);
	}
	free(array);
}