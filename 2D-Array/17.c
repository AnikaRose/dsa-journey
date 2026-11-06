#include <stdio.h>

int main() {
    int a[3][3];
    int i, j, k, smallest, isLargest, found = 0;

    printf("Enter the elements of a 3x3 matrix:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        smallest = a[i][0];

        for (j = 1; j < 3; j++) {
            if (a[i][j] < smallest) {
                smallest = a[i][j];
            }
        }

        for (j = 0; j < 3; j++) {
            if (a[i][j] == smallest) {
                isLargest = 1;

                for (k = 0; k < 3; k++) {
                    if (a[k][j] > a[i][j]) {
                        isLargest = 0;
                        break;
                    }
                }

                if (isLargest == 1) {
                    printf("Min-max point: <%d, %d>\n", i, j);
                    printf("Value: %d\n", a[i][j]);
                    found = 1;
                }
            }
        }
    }

    if (found == 0) {
        printf("No min-max point found.\n");
    }

    return 0;
}
