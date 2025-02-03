#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if( c = (a > b) & 1){
     printf("%d", c);
    }
    else{
        printf("0");
    }
    return 0;
}