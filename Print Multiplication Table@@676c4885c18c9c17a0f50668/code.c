#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int p = 1;
    for(int i = 1; i<=a; i++){
       p = p * i;
    }
    printf("%d", p);
    return 0;
}