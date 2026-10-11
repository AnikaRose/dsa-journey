
#include <stdio.h>

int main() {
    int a[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("First number: %d\n", a[0]);
    printf("Last number: %d\n", a[4]);

    return 0;
}
