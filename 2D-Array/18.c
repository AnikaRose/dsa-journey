
#include <stdio.h>

int main() {
    int a[3], i, result;
    char op[2];

    printf("Enter first number: ");
    scanf("%d", &a[0]);

    printf("Enter first operator (+ or -): ");
    scanf(" %c", &op[0]);

    printf("Enter second number: ");
    scanf("%d", &a[1]);

    printf("Enter second operator (+ or -): ");
    scanf(" %c", &op[1]);

    printf("Enter third number: ");
    scanf("%d", &a[2]);

    result = a[0];

    if (op[0] == '+') {
        result += a[1];
    } else if (op[0] == '-') {
        result -= a[1];
    } else {
        printf("Invalid operator\n");
        return 0;
    }

    if (op[1] == '+') {
        result += a[2];
    } else if (op[1] == '-') {
        result -= a[2];
    } else {
        printf("Invalid operator\n");
        return 0;
    }

    printf("Numbers: %d %d %d\n", a[0], a[1], a[2]);
    printf("Operators: %c %c\n", op[0], op[1]);
    printf("Result: %d\n", result);

    return 0;
}

