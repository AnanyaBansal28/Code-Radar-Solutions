#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);  // Read input number

    for(int i = 1; i <= 10; i++) {  // Loop from 1 to 10
        printf("%d x %d = %d\n", a, i, a * i);  // Print multiplication table
    }

    return 0;
}
