#include <stdio.h>
int main() {
    int a,b;
    char c[2];
   scanf("%d %d", &a, &b);
   scanf("%c", &c);
   if(c=='+'){
    printf("%d + %d", a, b);
   }
   else if(c=='-'){
    printf("%d - %d", a,b);
   }
   else if(c=='/'){
    printf("%d / %d", a, b);
   }
   else{
    printf("%d * %d", a, b);
   }
    return 0;
}