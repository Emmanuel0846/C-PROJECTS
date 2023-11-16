#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i, answer;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number != 0)
    {
        printf("Multiplication table %d\n", number);
        for(i = 1; i < 21; i++)
    {
        answer = number * i;
        printf("%d * %d = %d\n", number, i, answer);
    }
    }
    else if(number == 0)
    {
        printf("********** WARNING !!!!! INVALID INPUT **********\n");
    }
    return 0;
}
