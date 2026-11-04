// take 10 nos as input from the user calc their sum and ignore negative numbers
#include<stdio.h>
int main(){
    int i , sum=0;
    for( i=1; i<=10; i++){
        if(i<0)
        continue;

        sum=sum+i;
        printf("Sum=%d\n", sum);

    }
    return 0;
}