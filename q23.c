//take two numbers n & m print the multiplication table runing from n to m from 1 to 10
#include<stdio.h>
int main(){
    int N, M, i,j;
    printf("Enter N & M :");
    scanf("%d %d" , &N, &M);

    for(i=N; i<=M; i++){
        printf("\n Table of %d:%d\n", i);
        for(j=1; j<=10; j++){
            printf("%d \n", i*j);
        }
        printf("\n");
    }
    return 0;


}