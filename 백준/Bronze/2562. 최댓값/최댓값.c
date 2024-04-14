#include <stdio.h>
#include <stdlib.h>
int main() {
	int top=0,n;
	int array[9];
	for (int i = 0; i <9; i++) {
		scanf("%d", &array[i]);
		if (array[i] > top) {
			top = array[i];
			n = i+1;
		}
	}
	printf("%d\n", top);
	printf("%d", n);
}