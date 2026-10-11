
#include <stdio.h>

int main() {
    int n, i, j, k, found = 0, alreadyPrinted;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Duplicate elements: ");

    for (i = 0; i < n; i++) {
        alreadyPrinted = 0;

        for (k = 0; k < i; k++) {
            if (a[i] == a[k]) {
                alreadyPrinted = 1;
                break;
            }
        }

        if (alreadyPrinted == 1) {
            continue;
        }

        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                printf("%d ", a[i]);
                found = 1;
                break;
            }
        }
    }

    if (found == 0) {
        printf("No duplicates");
    }

    printf("\n");

    return 0;
}

