#include <stdio.h>
#include <stdlib.h>

// FOR ONLY THREE BY THREE MATRIX
/*int main()
{
    int a[3][3], b[3][3], c[3][3], i, j, k;
    int sum;

    printf("Enter 2D array elements for Matrix A: \n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
         scanf("%d", &a[i][j]);
        }
    }

    printf("Enter 2D array elements for Matrix B: \n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
         scanf("%d", &b[i][j]);
        }
    }
           sum = 0;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 3; k++)
         {
         sum = sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
         sum = 0;
        }
    }
    printf("The first Matrix is given as: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
         printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("The second Matrix is given as: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
         printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("The Multiplication is given as: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
                printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
} */

//FOR RANGE BETWEEN 1 AND 10
int main(void)
{
  int c, d, p, q, m, n, k, tot = 0;
  int fst[10][10], sec[10][10], mul[10][10];

  printf(" Please insert the number of rows and columns for first matrix \n ");
  scanf("%d%d", &m, &n);

  printf(" Insert your matrix elements : \n ");
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &fst[c][d]);

  printf(" Please insert the number of rows and columns for second matrix\n");
  scanf(" %d %d", &p, &q);

  if (n != p)
    printf(" Your given matrices cannot be multiplied with each other. \n ");
  else
  {
    printf(" Insert your elements for second matrix \n ");

    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &sec[c][d] );

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          tot = tot + fst[c][k] * sec[k][d];
        }
        mul[c][d] = tot;
        tot = 0;
      }
    }

    printf(" The result of matrix multiplication or product of the matrices is: \n ");
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d \t", mul[c][d] );
      printf(" \n ");
    }
  }
  return 0;
}
