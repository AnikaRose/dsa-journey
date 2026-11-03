
#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1) {
                sum += a[i][j];
            }
        }
    }

    printf("Sum of boundary elements: %d\n", sum);

    return 0;
}

