#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
int num1, num2, num3;
printf("Enter the first number:");
scanf("%d", &num1);
printf("Enter the second number:");
scanf("%d", &num2);
printf("Enter the third number:");
scanf("%d", &num3);

if (num1 > num2)
{
    if(num2 > num3)
    {
       printf("The maximum number is: %d", num1);
    }
}
else if(num2 > num3)
    {
       printf("The maximum number is: %d", num2);
    }
else
    {
        printf("The maximum number is: %d", num3);
    }
}
