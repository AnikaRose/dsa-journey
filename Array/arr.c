#include<stdio.h>

int main()
{

    int a[10];
    printf("Enter 10 integers: ");
    for(int i = 0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nArray elements: ");
    for(int i = 0; i<10; i++)
    {
        printf(" %d,", a[i]);
    }
    return 0;
}

