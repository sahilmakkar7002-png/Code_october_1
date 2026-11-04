//print reverse of a table for a number n
#include<stdio.h>
int main(){
    int n;
    printf("Enter N=");
    scanf("%d", &n);

    for(int i=10; i>=1; i--){
        printf("%d\n", n*i);
    }
    return 0;
}