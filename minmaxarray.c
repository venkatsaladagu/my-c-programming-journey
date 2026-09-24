#include <stdio.h>
int main()
{
    int a[10], i;
    printf("enter array elements:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    int min = a[0];
    for (i = 0; i < 10; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("maximum value =%d", max);
    printf("\nmanium value =%d", min);
    return 0;
}