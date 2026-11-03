#include <stdio.h>

int main() {
    int a[10][4];
    int i, j, lowest, sum;
    float average;

    for (i = 0; i < 10; i++) {
        printf("Enter 4 quiz marks for student %d: ", i + 1);

        for (j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 10; i++) {
        lowest = a[i][0];
        sum = 0;

        for (j = 0; j < 4; j++) {
            sum += a[i][j];

            if (a[i][j] < lowest) {
                lowest = a[i][j];
            }
        }

        average = (float)(sum - lowest) / 3;

        printf("Student %d best-three average: %.2f\n",
               i + 1, average);
    }

    return 0;
}
