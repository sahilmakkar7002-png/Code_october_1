//wap to print the reverse of a number
#include<stdio.h>
int main(){
    int n , reverse=0, remainder;

    printf("Enter n=");
    scanf("%d", &n);

     while(n!=0){
        remainder=n%10;
        reverse= reverse*10+remainder;
        n=n/10;
        printf(" Reverse=%d\n", reverse);
     }
     return 0;
}
