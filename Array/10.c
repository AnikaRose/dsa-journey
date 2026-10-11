
#include <stdio.h>

int main() {
    int n, i, oddSum = 0, evenSum = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Odd numbers: ");

    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            printf("%d ", a[i]);
            oddSum = oddSum + a[i];
        }
    }

    printf("\nEven numbers: ");

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
            evenSum = evenSum + a[i];
        }
    }

    printf("\nSum of odd numbers: %d\n", oddSum);
    printf("Sum of even numbers: %d\n", evenSum);

    return 0;
}
