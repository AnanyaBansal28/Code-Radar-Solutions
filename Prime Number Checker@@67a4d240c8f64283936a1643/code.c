#include <stdio.h>
void primeno(int t);
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
void primeno(int t){
    if(t%2==0){
        printf("0");
    }
    else if(t==2){
        printf("1");
    }
    else{
        printf("1"),
    }

}
 