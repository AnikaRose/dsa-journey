
#include <stdio.h>

int main() {
    int n, m, i;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &m);

    int b[m];
    int c[n + m];

    for (i = 0; i < m; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++) {
        c[i] = a[i];
    }

    for (i = 0; i < m; i++) {
        c[n + i] = b[i];
    }

    printf("First array: ");

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nSecond array: ");

    for (i = 0; i < m; i++) {
        printf("%d ", b[i]);
    }

    printf("\nMerged array: ");

    for (i = 0; i < n + m; i++) {
        printf("%d ", c[i]);
    }

    printf("\n");

    return 0;
}

