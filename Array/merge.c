#include<stdio.h>
int main(){
int a[2][2] = {{1,1},
               {1,1}};
int b[2][2] = {{2,2},
               {2,2}};
int c[4][2];
int i, j;

for(i=0; i<2; i++){
    for(j=0; j<2; j++){
        c[i][j] = a[i][j];
    }
}

for(i=0; i<2; i++){
    for(j=0; j<2; j++){
        c[i+2][j] = b[i][j];
    }
}
for(i=0; i<2; i++){
    for(j=0; j<2; j++){
        printf(" %d", a[i][j]);
    }
    printf("\n");
}

for(i=0; i<2; i++){
    for(j=0; j<2; j++){
        printf(" %d", b[i][j]);
    }
     printf("\n");
}
for(i=0; i<4; i++){
    for(j=0; j<2; j++){
        printf(" %d", c[i][j]);
    }
     printf("\n");
}
}




