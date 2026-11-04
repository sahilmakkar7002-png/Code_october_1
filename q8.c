//wap to print all even nos from 1-n
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter N:");
    scanf("%d", &n);

    while(i<=n){
        if(i%2==0){
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}