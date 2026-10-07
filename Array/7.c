#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    int smallest = a[0];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++){
        if(smallest < a[i]){
            smallest = a[i];
        }
    }
    printf("The smallest element is: %d", smallest);


return 0;
}


