#include <stdio.h>
int main() {
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c );
    double d = (a+b+c)/3;
    printf("Average: %.2lf", d);
    return 0;
}