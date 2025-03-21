#include <stdio.h>

int main() {
    int n;
    scanf("%c", &n);
    for(char i = 1; i <= n; i++) {
        int a = 1;  
        for(char j = 1; j <= n; j++) {
            int d = a+64;
            char ch = (char)d;  
            printf("%c ", ch);
            a++
        }
        printf("\n");
    }
    return 0;
}
