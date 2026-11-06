
#include <stdio.h>

int main() {
    int a[15], i, j, k, found = 0, repeated;

    for (i = 0; i < 15; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Duplicate numbers: ");

    for (i = 0; i < 15; i++) {
        repeated = 0;

        for (k = 0; k < i; k++) {
            if (a[k] == a[i]) {
                repeated = 1;
                break;
            }
        }

        if (repeated == 1) {
            continue;
        }

        for (j = i + 1; j < 15; j++) {
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

