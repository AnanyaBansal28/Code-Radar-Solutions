#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if(a%3==0 && a%5==0){
        pritf("Divisible by both");
    }
    else if(a%3==0 && a%5!=0){
        printf("Divisible by 3");
    }
    else if(a%5==0 && a%3!=0){
        printf("Divisible by 5");
    }
    else{
        printff("Not Divible");
    }
    return 0;
}