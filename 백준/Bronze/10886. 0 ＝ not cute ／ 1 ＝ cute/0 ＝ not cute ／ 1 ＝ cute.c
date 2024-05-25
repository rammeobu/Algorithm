#include <stdio.h>
int main(void) {
	int nc = 0, c = 0, n;
	scanf("%d" ,&n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &c);
		if (c == 1) {
			nc--;
		}
		else
		{
			nc++;
		}
	}
	if (nc > 0) {
		printf("Junhee is not cute!");
	}
	else
	{
		printf("Junhee is cute!");
	}
	
}  