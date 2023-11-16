#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][3], b[2][3], c[2][3], i, j;
    int sum = 0;

    printf("Enter 2D array elements for Matrix A: \n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
         scanf("%d", &a[i][j]);
        }
    }

    printf("Enter 2D array elements for Matrix B: \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
         scanf("%d", &b[i][j]);
        }
    }
    printf("The first Matrix is given as: \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
         printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("The second Matrix is given as: \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
         printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("The addition is given as: \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
         c[i][j] = a[i][j] + b[i][j];
         printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
