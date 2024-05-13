#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char array[5][16];
    int top = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%s", array[i]);
        int len = strlen(array[i]);
        if (len > top)
            top = len;
    }

    for (int i = 0; i < 5; i++) {
        int len = strlen(array[i]);
        if (len < top) {
            for (int j = len; j < top; j++) {
                array[i][j] = '*';
            }
            array[i][top] = '\0';
        }
    }

    for (int j = 0; j < top; j++) {
        for (int i = 0; i < 5; i++) {
            if (array[i][j] != '*') {
                printf("%c", array[i][j]);
            }
        }
    }
    return 0;
}
