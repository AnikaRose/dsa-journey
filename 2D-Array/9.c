
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter matrix size: ");
    scanf("%d", &n);

    int a[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("Sum of main diagonal: %d\n", sum);

    return 0;
}

