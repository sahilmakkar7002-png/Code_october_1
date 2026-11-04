//wap to check if the entered charcter is lower case or upper case
#include <stdio.h>
int main(){
    char ch;
    printf("Enter a Character:");
    scanf("%c" , &ch);

    if (ch >='A' && ch<='Z'){
        printf("Upper Case character!\n");
    }
    else if(ch >= 'a' && ch<='z'){
        printf("Lower Case character!\n");
    }
    else{
        printf("Invalid character!\n");
    }
}