
#include <stdio.h>

int main() {
    int a[4][3], b[3][4], c[4][4];
    int i, j, k, count = 0;

    printf("Enter elements of matrix A (4x3):\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of matrix B (3x4):\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            c[i][j] = 0;

            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
                count++;
            }
        }
    }

    printf("Result matrix:\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", c[i][j]);
        }

        printf("\n");
    }

    printf("Number of multiplications: %d\n", count);

    return 0;
}

