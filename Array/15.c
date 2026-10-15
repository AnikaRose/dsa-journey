#include <stdio.h>
int main(){
    char s[200];
    char a[200];  // single array will also work
    int i,j=0;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin); // other approach: scanf("%s", s);
    for(i=0; s[i]!='\0'; i++){
        if((s[i]>= 'A' && s[i]<= 'Z') || s[i]>= 'a' && s[i]<= 'z'){
            a[j] = s[i];
            j++;
        }
    }
     a[j] = '\0';

    printf("\nString after removing other characters: %s", a);
    return 0;
}
