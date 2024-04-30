#include <stdio.h>
#include<string.h>
int main() {
	int T,R;
	char S[21];
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %s", &R, S, 21);
		getchar();
		for (int j = 0; j<strlen(S); j++) {
			for (int w = 0; w < R; w++) {
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}
	
}