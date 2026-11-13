
#include <stdio.h>

int main() {
    long long dividend, divisor, quotient, remainder;
    long long product, result;

    printf("Enter dividend: ");
    scanf("%lld", &dividend);

    printf("Enter divisor: ");
    scanf("%lld", &divisor);

    if (divisor == 0) {
        printf("Division by zero is not allowed.\n");
        return 0;
    }

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    product = divisor * quotient;
    result = product + remainder;

    printf("Quotient: %lld\n", quotient);
    printf("Remainder: %lld\n", remainder);
    printf("Divisor * Quotient: %lld\n", product);
    printf("Product + Remainder: %lld\n", result);

    if (result == dividend) {
        printf("Verification successful.\n");
    } else {
        printf("Verification failed.\n");
    }

    return 0;
}
