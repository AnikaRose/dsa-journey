

#include <stdio.h>

int main() {
    int a[10], i, sum = 0;
    float average;

    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Numbers: ");

    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    average = (float) sum / 10;

    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
