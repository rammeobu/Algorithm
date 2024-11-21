#include <stdio.h>
int main() {
	int a=0, b=0;
	int temp = 0;
	int temp2 = 0;
	for(int n=0;n<10;n++){
		scanf("%d %d", &a, &b);
		temp += b;
		temp -= a;
		if (temp > temp2) {
			temp2 = temp;
		}
	}
	printf("%d", temp2);
}