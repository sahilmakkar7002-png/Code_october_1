//wap to check whether a number is armstrong or not
#include<stdio.h>
#include<math.h>
int main(){
    int n, orignal, digit, count=0;
    int sum=0;
    printf("Enter a number:");
    scanf("%d", &n);
    orignal =n;

    //count digit
    int temp=n;
    while(temp>0){
        count++;
        temp=temp/10;
    }
    //sum of power of digit
    temp=n;
    while(temp>0){
        digit=temp%10;
        sum=sum+(int)pow(digit, count);
        temp = temp/10;
    }
    if(sum==orignal){
        printf("%d is an armstrong number", orignal);
    }
    else{
        printf("%d is not an armstrong number", orignal);
    }
    return 0;
}