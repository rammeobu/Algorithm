#include <stdio.h>
int main() {
	int H, M;
	int totla;
	scanf("%d %d", &H, &M);
	if (H == 0&&M<45) {
		H = 24;
	}
	totla = ((H * 60) + M) - 45;
	printf("%d %d", totla / 60, totla % 60);


}