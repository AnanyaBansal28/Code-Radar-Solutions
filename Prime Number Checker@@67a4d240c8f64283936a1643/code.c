#include <stdio.h>

int isPrime(int num);

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}

int isPrime(int num) {
    if (num < 2) return 0; // Numbers less than 2 are not prime
    if (num == 2 || num == 3) return 1; // 2 and 3 are prime
    if (num % 2 == 0 || num % 3 == 0) return 0; // Eliminate multiples of 2 and 3

    // Check divisibility for numbers up to sqrt(num) using 6k ± 1 optimization
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}
