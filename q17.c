// wap to chech whether a number is pallindrome or not
#include<stdio.h>
int main(){
    int n, reverse=0, remainder, orignal;
    printf("Enter n:");
    scanf("%d", &n);

    orignal=n;

    while(n!=0){
        remainder=n%10;
        reverse= reverse*10+remainder;
        n=n/10;
    }
    if (orignal==reverse){
        printf("Palindrome");
    }
    else{
        printf("not pallindrome");
    }
    return 0;
}