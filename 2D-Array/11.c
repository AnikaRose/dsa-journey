
#include <stdio.h>

int main() {
    int a[3][4], i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Original matrix:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    printf("Transpose matrix:\n");

    for (j = 0; j < 4; j++) {
        for (i = 0; i < 3; i++) {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}

