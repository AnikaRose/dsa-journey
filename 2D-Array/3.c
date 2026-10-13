
#include <stdio.h>

int main() {
    int n, i, evenSum = 0, oddSum = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            evenSum += a[i];
        } else {
            oddSum += a[i];
        }
    }

    printf("Numbers: ");

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nSum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}

