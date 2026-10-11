
#include <stdio.h>

int main() {
    int n, i, x, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("Element found at index %d\n", i);
            found = 1;
        }
    }

    if (found == 0) {
        printf("Element not found\n");
    }

    return 0;
}

