#include <stdio.h>

int main() {
    char ch;
    
    scanf("%c", &ch);

    // Check if it's a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel");
    }
    // Check if it's a consonant
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant");
    }
    // Check if it's a digit
    else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    // If it's neither, it's a special character
    else {
        printf("Special character");
    }

    return 0;
}
