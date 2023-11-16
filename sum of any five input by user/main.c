#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i;
    int sum = 0;

    //USING FOR LOOP
    /* for(i = 1; i <= 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &a);
        if(a < 0)
        {
            break;
        }
        sum = sum + a;
    } */

    //USING WHILE LOOP
    /* while(1)
    {
        printf("Enter a number: ");
        scanf("%d", &a);
        if(a < 0)
        {
            break;
        }
        sum = sum + a;
    } */

    //USING FOR LOOP (CONTINUE)
   /* for(i = 1; i <= 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &a);
        if(a < 0)
        {
        printf("WARNING!!! You have entered a NEGATIVE number. It will not add\n");
        printf("Please enter a POSITIVE number\n");
            continue;
        }
        sum = sum + a;
    } */

    //USING WHILE LOOP (CONTINUE)
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d", &a);
        if(a < 0)
        {
        printf("WARNING!!! You have just entered a NEGATIVE number. It will be omitted\n");
        printf("Please enter a POSITIVE number\n");
            continue;
        } else if(a==0)
        {
            break;
        }
        sum = sum + a;
    }
    printf("The sum is %d", sum);
    return 0;
}
