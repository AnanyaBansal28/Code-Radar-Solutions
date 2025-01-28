#include <stdio.h>
int main() {
    char a;
    scanf("%s", &a);
    if(a>='A' && a<='Z'){
        printf("Uppercase");
    }
    eles if(a>='a' && a<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}