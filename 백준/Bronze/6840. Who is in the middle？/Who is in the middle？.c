#include <stdio.h>

int main() {
    int weight1, weight2, weight3;
    int mamaWeight;
    scanf("%d %d %d", &weight1, &weight2, &weight3);

    if ((weight1 > weight2 && weight1 < weight3) || (weight1 < weight2 && weight1 > weight3)) {
        mamaWeight = weight1;
    } else if ((weight2 > weight1 && weight2 < weight3) || (weight2 < weight1 && weight2 > weight3)) {
        mamaWeight = weight2;
    } else {
        mamaWeight = weight3;
    }

    printf("%d", mamaWeight);

    return 0;
}