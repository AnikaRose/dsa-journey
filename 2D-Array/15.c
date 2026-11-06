
#include <stdio.h>

int main() {
    int a[10], i, largest, second, found = 0;

    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    largest = a[0];

    for (i = 1; i < 10; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    for (i = 0; i < 10; i++) {
        if (a[i] < largest) {
            if (found == 0 || a[i] > second) {
                second = a[i];
                found = 1;
            }
        }
    }

    printf("Largest: %d\n", largest);

    if (found == 1) {
        printf("Second largest: %d\n", second);
    } else {
        printf("No second-largest distinct number\n");
    }

    return 0;
}

