#include <stdio.h>
int main() {
    float a, b, c;
    scanf("%f %f", &a, &b );
    printf("%f %f\n", a, b);
    c = a * b;
    printf("product: %.2f\n", c);
    return 0;
}