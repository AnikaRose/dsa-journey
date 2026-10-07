#include<stdio.h>

int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];
    int even_sum=0 , odd_sum=0;
    printf("Enter array elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        if(a[i]%2 == 0){
            even_sum += a[i];
        }
        else{
            odd_sum += a[i];
        }
    }
    printf("\nArray: ");
    for(int i=0; i<n; i++){
        printf(" %d", a[i]);
    }
    printf("\nSummation of Even Numbers: %d", even_sum);
    printf("\nSummation of Odd Numbers: %d", odd_sum);
}

