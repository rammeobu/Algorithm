#include <stdio.h>
int main() {
	int n,a,b;
	scanf("%d", &n);
    int array[n];
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a,&b);
		array[i] = a + b;
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", array[i]);
	}
    return 0;
}