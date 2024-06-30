#include <stdio.h>

int main() {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int dTLeft = x;
    int dTRight = w - x;
    int dTBottom = y;
    int dTTp = h - y;

    int minDistance = dTLeft;
    if (dTRight < minDistance) minDistance = dTRight;
    if (dTBottom < minDistance) minDistance = dTBottom;
    if (dTTp < minDistance) minDistance = dTTp;
     printf("%d", minDistance);
    return 0;
}