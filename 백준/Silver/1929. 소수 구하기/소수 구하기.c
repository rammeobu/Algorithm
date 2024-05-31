#include <stdio.h>
#include <math.h>
int main() {
	int N,M,cnt=0;
	int iarray[11] = { 0 };
	scanf("%d %d", &N,&M);
	for (int i = N; i <= M; i++) {
		int su = sqrt((float)N);
		if (N == 1) {
			N++;
			continue;
		}
		for (int i = 2; i <= su; i++) {
			if (N % i == 0) {
				cnt++;
			}

		}
		if (cnt <= 0) {
			printf("%d\n", N);
			cnt = 0;
		}
		else
		{
			cnt = 0;
		}
		N++;
	}
}