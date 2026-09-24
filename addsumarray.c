#include <stdio.h>
int main()
{
    int a[5], b[5], c[5];
    int i;
    printf("enter elements of first array:");
    for (i = 0; i < 5; i++)
        scanf("%d",&a[i]);
    printf("enter elements of secont array:");
    for (i = 0; i < 5; i++)
        scanf("%d",&b[i]);
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
        printf("\n third array elements at index %d is:%d", i, c[i]);
    }
    return 0;
}
