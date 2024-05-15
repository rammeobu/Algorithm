#include <stdio.h>=
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int N;
    unsigned long long result = 1;

    scanf("%d", &N);

    result = factorial(N);

    printf("%llu\n", result);

    return 0;
}
