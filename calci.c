#include<stdio.h>

int main()
{
    //variable intislization
   float x, y;
   char operator;
   
   //user input 
   printf("Enter the operator (+,-,*,/):\n");
   scanf("%c", &operator);
   printf("Enter the first number:\n");
   scanf("%f", &x);
   printf("Enter the second number:\n");
   scanf("%f", &y);

    
    switch (operator)
    {
        case '+':
            printf("The Result is %f", x+y);
            break;
        case '-':
            printf("The Result is %f", x-y);
            break;
        case '*':
            printf("The Result is %f", x*y);
            break;
        case '/':
            printf("The Result is %f", x/y);
            break;
        default:
            printf("Invalid operatar detected!");
            break;
    }

    return 0;
}