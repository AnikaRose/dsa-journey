
#include <stdio.h>

int main() {
    int n, i, largest, smallest;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    largest = a[0];
    smallest = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }

        if (a[i] < smallest) {
            smallest = a[i];
        }
    }

    printf("Numbers: ");

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nLargest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}

