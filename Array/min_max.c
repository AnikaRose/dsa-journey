#include<stdio.h>

int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter array elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int min= a[0];
    int max= a[0];
    for(int i=0; i<n; i++){
        if(a[i]< min){
            min = a[i];
        }
        if(a[i]> max){
            max = a[i];
        }
    }
    printf("\nArray: ");
    for(int i=0; i<n; i++){
        printf(" %d", a[i]);
    }
    printf("\nSmallest Number = %d", min);
    printf("\nLargest Number = %d", max);
return 0;
}
