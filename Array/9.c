#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];
    int sum = 0;

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    printf("Sum = %d\n", sum);
    printf("Average = %d", sum/n);

    return 0;
}
