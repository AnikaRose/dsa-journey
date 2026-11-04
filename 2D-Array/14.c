
#include <stdio.h>

void multiply(int r1, int c1, int a[r1][c1],
              int r2, int c2, int b[r2][c2],
              int result[r1][c2], int *count) {
    int i, j, k;

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;

            for (k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
                (*count)++;
            }
        }
    }
}

int main() {
    int a[5][4], b[4][3], c[3][6];
    int ab[5][3], bc[4][6];
    int result1[5][6], result2[5][6];
    int i, j, count1 = 0, count2 = 0;

    printf("Enter matrix A (5x4):\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter matrix B (4x3):\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Enter matrix C (3x6):\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            scanf("%d", &c[i][j]);
        }
    }

    multiply(5, 4, a, 4, 3, b, ab, &count1);
    multiply(5, 3, ab, 3, 6, c, result1, &count1);

    multiply(4, 3, b, 3, 6, c, bc, &count2);
    multiply(5, 4, a, 4, 6, bc, result2, &count2);

    printf("Multiplications for (A*B)*C: %d\n", count1);
    printf("Multiplications for A*(B*C): %d\n", count2);

    if (count1 < count2) {
        printf("(A*B)*C needs fewer multiplications.\n");
    } else {
        printf("A*(B*C) needs fewer multiplications.\n");
    }

    return 0;
}

