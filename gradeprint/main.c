#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;
    printf("Enter your score:");
    scanf("%d", &score);

    if(score > 74)
    {
        printf("Your Grade is A1\n");
        printf("********** OUTSTANDING !!! **********");
    }
    else if(score > 69)
    {
        printf("Your Grade is B2\n");
        printf("********** MAGNIFICENT !!! **********");
    }
     else if(score > 64)
    {
        printf("Your Grade is B3\n");
        printf("********** AWESOME !!! **********");
    }
     else if(score > 59)
    {
        printf("Your Grade is C4\n");
        printf("********** MARVELOUS !!! **********");
    }
     else if(score > 54)
    {
        printf("Your Grade is C5\n");
        printf("********** GREAT !!! **********");
    }
     else if(score > 49)
    {
        printf("Your Grade is C6\n");
        printf("********** PASS !!! **********");
    }
     else if(score > 44)
    {
        printf("Your Grade is D7\n");
        printf("********** NOT YET !!! **********");
    }
     else if(score > 39)
    {
        printf("Your Grade is E8\n");
        printf("********** YOU CAN DO BETTER !!! **********");
    }
     else
    {
        printf("Your Grade is F9\n");
        printf("********** You are not YET there, Keep being consistent. You can do it **********");
    }
    return 0;
}
