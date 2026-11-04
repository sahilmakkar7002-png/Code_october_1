// stops when 0 get entered
#include<stdio.h>
int main(){
    int n;
    while(1){
        printf("Enter Number:");
        scanf("%d", &n);

        if(n==0)
        break;

        printf("You entered:%d\n", n);
    }
    return 0;
}