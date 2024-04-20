#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 101
int main() {
	int len,n;
	int cap = size;
	int temp;
	char* array = (char*)malloc(sizeof(char) * (cap+1));
	fgets(array, cap + 1, stdin);
	len = strlen(array);
	printf("%d", len-1);
	free(array);
}