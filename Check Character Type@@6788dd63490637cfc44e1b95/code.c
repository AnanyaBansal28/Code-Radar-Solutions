#include <stdio.h>
int main() {
 char ch[1];
    scanf("%s", ch);
    if(ch = 'a' || ch = 'e' || ch = 'i' || ch =' o '|| ch = 'u' ){
        printf("Vowel");
    }
    else if(('b'<=ch<='z') && (ch='e' || ch='i' || ch='o' || ch='u')){
        printf("Constant");
    }
    else if(1<=ch<=100){
        printf("Digit");
    }
    else{
        printf("Special character");
    }
    return 0;
}