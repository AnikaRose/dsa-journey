
#include <stdio.h>

int main() {
    int n, i, found = 0;
    char x;

    printf("Enter number of characters: ");
    scanf("%d", &n);

    char a[n];

    for (i = 0; i < n; i++) {
        printf("Enter character %d: ", i + 1);
        scanf(" %c", &a[i]);
    }

    printf("Enter character to search: ");
    scanf(" %c", &x);

    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("Character found at index %d\n", i);
            found = 1;
        }
    }

    if (found == 0) {
        printf("Character not found\n");
    }

    return 0;
}
