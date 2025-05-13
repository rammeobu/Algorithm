#include <stdio.h>
int main(void) {
	static int intarray[5];
	int x;
	int temp, center,marg=0;
	for (int i = 0;i < 5;i++) {
		scanf("%d", &intarray[i]);
	}
	for (int i = 4;i >0;i--) {
		for (int j = 0;j < i;j++) {
			if (intarray[j] > intarray[j + 1]) {
				temp = intarray[j];
				intarray[j] = intarray[j + 1];
				intarray[j + 1] = temp;

			}
		}
	}
	for (int i = 0;i < 5;i++) {
		marg += intarray[i];
	}
	printf("%d\n%d", marg / 5, intarray[2]);
}