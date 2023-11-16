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

    // TO PRINT MATRIX
    printf("Matrix is given as: \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
         printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    // TO PRINT TRANSPOSE
    printf("Transpose Matrix is given as: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
         printf("%d\t", array[j][i]);
        }
        printf("\n");
    }
    return 0;
}
