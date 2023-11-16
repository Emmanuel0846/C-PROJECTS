#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[2][3], i, j;
    int sum = 0;

    printf("Enter 2D array elements: ");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
         scanf("%d", &array[i][j]);
        }
    }

    // TO PRINT MATRIX AND SUM
    printf("Matrix is given as: \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
         printf("%d\t", array[i][j]);
         sum = sum + array[i][j];
        }
        printf("\n");
    }
    printf("\nSum is %d", sum);
    return 0;
}
