#include <stdio.h>
int main() {
    int stick = 64;
    int n = 0;     
    int x;         
    int total = 0; 
    scanf("%d", &x);
    while (total < x) {
        stick /= 2; 
        if (x == 64) {
            n++;
            break;
        }
        if (total + stick <= x) {
            total += stick;
            n++;
        }
    }
    printf("%d", n);
}