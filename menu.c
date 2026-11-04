/*Create a menu:

1. Find Square
2. Find Cube
3. Check Even/Odd
4. Exit

Perform the operation selected by the user using switch.*/
#include<stdio.h>
int main(){
    int n, choice;
    printf("Enter a number:");
    scanf("%d", &n);
   

    printf("1.find square\n");
    printf("2. Find Cube\n");
    printf("3. Check Even odd\n");
    printf("4. Exiting\n");

    printf("Enter your choice:");
    scanf("%d", &choice);

    switch(choice){
        case 1:
       printf("Square=%d\n", n*n);
        break;

        case 2:
        printf("%d", n*n*n);
        break;

        case 3:
        if(n%2==0)
        printf("Even\n");
        else
        printf("Odd\n");
        break;

        case 4:
        printf("Exiting program....\n");
        break;

        default:
        printf("Invalid choice\n");

        return 0;

       
    }

}