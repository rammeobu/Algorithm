#include <stdio.h>
int main() {
	int byte,total;
	scanf("%d", &byte);
	total=byte / 4;
	for (int i = 0; i < total; i++) {
		printf("long ");
	}
	printf("int");

}