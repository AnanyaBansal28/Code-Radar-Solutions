#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int p = a;
    for(int i = 1; i<=10; i++){
       p = a * i;
    }
    printf("%d", p);
    return 0;
}