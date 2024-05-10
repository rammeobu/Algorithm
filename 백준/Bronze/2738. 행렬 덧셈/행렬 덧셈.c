#include <stdio.h>

int main() {
    int N, M;


    scanf("%d %d", &N, &M);


    int A[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }


    int B[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d", A[i][j] + B[i][j]);
            if (j != M - 1) 
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
