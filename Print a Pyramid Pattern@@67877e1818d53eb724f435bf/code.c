#include <stdio.h>
int main() {
    int i;
   scanf("%d", &i);
   for(i, i>=1, i++);
   {
    for(space=1, space<=(row-i), space++);
    {
        printf(" ");
    }
   for(j=1, j<=2*i-1, j--);
   {
    printf("*");
   }
   }
    return 0;
}