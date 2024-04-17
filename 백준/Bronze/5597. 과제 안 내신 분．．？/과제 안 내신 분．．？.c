#include <stdio.h>

int main() {
    int array[30] = { 0 };
    int array1[30] = { 0 };

    for (int i = 0; i < 28; i++) {
        scanf("%d", &array[i]);
        array1[array[i] - 1] = array[i];
    }

    for (int i = 0; i < 30; i++) {
        if(array1[i]==0)
        printf("%d\n", i+1);
    }

    return 0;
}
