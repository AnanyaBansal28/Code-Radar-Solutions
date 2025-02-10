#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int p = 0;
    for(int i = 1; i<=a; i++){
       p = p * i;
    }
    printf("%d", p);
    return 0;
}