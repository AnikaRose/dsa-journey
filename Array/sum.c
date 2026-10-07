#include<stdio.h>

int main(){

    int a[10];
    int sum = 0;
    float avg;

    printf("Enter 10 integers: ");
    for(int i = 0; i<10; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }
     avg = (float)sum/10;
     printf("\nSum = %d", sum);
     printf("\nAverage = %.2f", avg);

     printf("\nArray elements: ");
     for(int i = 0; i<10; i++){
        printf(" %d,", a[i]);

    }



return 0;
}
