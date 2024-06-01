#include <stdio.h>
#include <math.h>
int main() {
	int N, M;
	int ch;
	scanf("%d %d", &N, &M);
	scanf("%d", &ch);
	if (N + M >= ch * 2) {
		printf("%d", (N + M) -(ch * 2) );
	}
	else
	{
		printf("%d", N+M);
	}

}