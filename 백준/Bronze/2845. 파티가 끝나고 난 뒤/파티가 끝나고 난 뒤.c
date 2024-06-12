#include <stdio.h>

int main() {
    int  n, m,total;
    int iarray[5] = { 0 };
    scanf("%d %d", &n, &m);
    scanf("%d %d %d %d %d", &iarray[0], &iarray[1], &iarray[2], &iarray[3], &iarray[4]);
    total = n * m;
    

    for (int i = 0; i < 5; i++) {
        iarray[i] = iarray[i] - total;

    }
    printf("%d %d %d %d %d",iarray[0], iarray[1], iarray[2],iarray[3],iarray[4]);

}
