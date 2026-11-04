//print calculator using switch
#include <stdio.h>
int main(){
    int x,y,result;
    char operator;

    printf("Enter x:");
    scanf("%d", &x);
    printf("Enter y:"); 
    scanf("%d", &y);

   printf("Enter operator(+, -,*,/,%%):");
   scanf(" %c", &operator);

   switch(operator){

    case'+':
    printf("Result=%d\n", x+y);
    break;

    case'-':
    printf("Result=%d\n", x-y);
    break;

    case'*':
    printf("Result=%d\n", x*y);
    break;

    case'/':
    printf("Result=%d\n", x/y);
    break;

    case'%':
    printf("Result=%d\n", x%y);
    break;

    default:
    printf("Entered invalid operator");

   }

   return 0;
  
}
