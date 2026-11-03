
#include <stdio.h>

int main() {
    int n, m, i, j, k;

    printf("Enter size of first sorted array: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &m);

    int b[m];
    int c[n + m];

    for (i = 0; i < m; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }

        k++;
    }

    while (i < n) {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < m) {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged sorted array: ");

    for (i = 0; i < n + m; i++) {
        printf("%d ", c[i]);
    }

    printf("\n");

    return 0;
}

