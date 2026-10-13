
#include <stdio.h>

int main() {
    int n, i, pos;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter index to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid index\n");
        return 0;
    }

    for (i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n--;

    printf("Array after deletion: ");

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}

