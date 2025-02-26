#include <stdio.h>
void isPrime(num);
int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
void isPrime(num){
    if(num%2==0){
        printf("0");
    }
    else if(num==2){
        printf("1");
    }
    else{
        printf("1"),
    }

}
 