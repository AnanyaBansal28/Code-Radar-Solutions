#include <stdio.h>

int main() {
    int a, i, j, space;
    scanf("%d", &a);

    for (i = a; i >= 1; i--) {  
        for (space = 1; space <= (a - i); space++) { 
            printf(" ");
        }
        
        for (j = 1; j <= 2 * i - 1; j++) { 
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
