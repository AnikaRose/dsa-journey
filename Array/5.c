#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    int largest = a[0];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++){
        if(largest < a[i]){
            largest = a[i];
        }
    }
    printf("The largest element is: %d", largest);


return 0;
}


