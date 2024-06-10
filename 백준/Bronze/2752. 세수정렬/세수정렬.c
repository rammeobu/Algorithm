#include <stdio.h>

int main() {
    int iarray[3];
    int temp;

    
    scanf("%d %d %d", &iarray[0], &iarray[1], &iarray[2]);

    
    for (int i = 0; i < 2; i++) {
        int minIndex = i;
        for (int j = i + 1; j < 3; j++) {
            if (iarray[j] < iarray[minIndex]) {
                minIndex = j;
            }
        }
        if (i != minIndex) {
            temp = iarray[i];
            iarray[i] = iarray[minIndex];
            iarray[minIndex] = temp;
        }
    }

        printf("%d %d %d", iarray[0], iarray[1], iarray[2]);

    return 0;
}
