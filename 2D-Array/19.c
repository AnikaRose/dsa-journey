
#include <stdio.h>
#include <string.h>

int main() {
    char a[21], b[21];
    int result[41] = {0};
    int i, j, n, m, start;

    printf("Enter first number (up to 20 digits): ");
    scanf("%20s", a);

    printf("Enter second number (up to 20 digits): ");
    scanf("%20s", b);

    n = strlen(a);
    m = strlen(b);

    for (i = n - 1; i >= 0; i--) {
        for (j = m - 1; j >= 0; j--) {
            result[i + j + 1] += (a[i] - '0') * (b[j] - '0');
        }
    }

    for (i = n + m - 1; i > 0; i--) {
        result[i - 1] += result[i] / 10;
        result[i] = result[i] % 10;
    }

    start = 0;

    while (start < n + m - 1 && result[start] == 0) {
        start++;
    }

    printf("First number: %s\n", a);
    printf("Second number: %s\n", b);
    printf("Product: ");

    for (i = start; i < n + m; i++) {
        printf("%d", result[i]);
    }

    printf("\n");

    return 0;
}

