#include <stdio.h>
int main() {
    int a,b,c;
    printf("%d %d %d", &a, &b, &c);
    if(a==b && b==c && a==c){
        printf("Equilateral");
    }
    else if((a==b && b!=c) || (b==c && b!=a) || (a==c && c!=b)){
        printf("Isoceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}