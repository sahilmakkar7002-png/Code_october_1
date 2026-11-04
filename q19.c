#include<stdio.h>
int isEven(long long n){
    return n%2 == 0;
}

int main(void){
    long long n;
    scanf("%lld", &n);
    if(isEven(n))
        printf("Even\n");
     else
        printf("odd\n");
        return 0;
}