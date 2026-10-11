
#include <stdio.h>

int main() {
    int n, i, largest;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    largest = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    printf("\nLargest element: %d\n", largest);

    return 0;
}
