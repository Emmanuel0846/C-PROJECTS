#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]= {3,2,67,0,56};
    int* p;
    p = &a[3];
    printf("%d %d %d", *--p, *--p, (*p)--);
    return 0;
}
