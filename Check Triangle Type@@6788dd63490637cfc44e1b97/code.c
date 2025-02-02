#include <stdio.h>
int main() {
    int a,b,c;
    printf("%d %d %d", &a, &b, &c);
    if(a==b && b==c && a==c){
        printf("Equilateral");
    }
    else if((a!=b && b!=c && C!=a)){
        printf("Scalene");
    }
    else{
        printf("Isosceles");
    }
    return 0;
}