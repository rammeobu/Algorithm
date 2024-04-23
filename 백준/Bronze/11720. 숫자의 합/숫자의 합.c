#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int A,total=0;
	scanf("%d", &A);
	getchar();
	char* array = (char*)malloc(sizeof(char) * A+1);
	fgets(array, A+1, stdin);
	if (array[array[strlen(array)-1]]=='\n') {
		array[array[strlen(array) - 1]] == '\0';
	}
	for (int i = 0; i < A; i++) {
		total += array[i] - '0';

;	}
	printf("%d", total);
	free(array);
}