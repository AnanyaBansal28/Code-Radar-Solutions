#include <stdio.h>
int isPrime(int num);
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
int isPrime(int num){
    if(num==2){
        return 1;
    }
    else if((num%2==0) || (num%3==0) || (num%5==0)){
        return 0;
    }
    else{
       return 1;
    }

}
 