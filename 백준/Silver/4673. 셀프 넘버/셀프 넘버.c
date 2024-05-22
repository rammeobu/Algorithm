#include <stdio.h>
int main(void) {
	int iarray[10000] = {0};
	int iarray1[10000] = { 0 };
	int temp,count=0;
	
	for (int i = 0; i < 10000; i++) {
		if (i < 9) {
			temp = (i+1) + (i+1);
			iarray[i] = temp;
			continue;
		}
		temp = i+1;
		while (temp != 0)
		{
			iarray[i] += temp % 10;
			temp=temp / 10;
		}
		iarray[i] += i+1;

	}
	for (int i = 0; i < 10000; i++) {
		for (int j = 0; j < 10000; j++) {
			if (iarray[i] == j + 1) {
				iarray1[j]++;
			}
		}
	}

	for (int i = 0; i < 10000; i++) {
		if (iarray1[i] == 0) {
			printf("%d\n", i + 1);
		}
	}
}