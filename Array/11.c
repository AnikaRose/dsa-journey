
#include <stdio.h>

int main() {
    int n, i, pos, x;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n + 1];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter index for insertion (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid index\n");
        return 0;
    }

    printf("Enter new element: ");
    scanf("%d", &x);

    for (i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = x;
    n++;

    printf("Array after insertion: ");

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
