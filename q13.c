// print nos from 1 to 100 and stops when the first multiple of 13 is entered
#include<stdio.h>
int main(){
   int i;
   for(i=1; i<=100; i++){
      if(i%13==0)
      break;

      printf("%d\n", i);
    
   }
   return 0;
}