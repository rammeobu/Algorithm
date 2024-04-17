#include <stdio.h>
int main() {
	int array[10], emp, total = 10;;
	for(int i = 0; i < 10; i++) {
		scanf("%d", &emp);
		array[i] = emp %42 ;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10 - 1; j++) {
			if (array[i] == array[j + 1]) {

			total--;
			break;
			}
		}
	}
	printf("%d", total);
	
}