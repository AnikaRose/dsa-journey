

#include <stdio.h>

int main() {
    int n, i, evenSum = 0, oddSum = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            evenSum += a[i];
        } else {
            oddSum += a[i];
        }
    }

    printf("Sum at even indices: %d\n", evenSum);
    printf("Sum at odd indices: %d\n", oddSum);

    return 0;
}
