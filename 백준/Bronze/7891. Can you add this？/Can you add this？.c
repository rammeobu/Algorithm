#include <stdio.h>
int main() {
    long n, a, b;
 
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++) {
        
        scanf("%ld %ld", &a, &b);
 
        printf("%ld\n", a + b);
    }
}
 