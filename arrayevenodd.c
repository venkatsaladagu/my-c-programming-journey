#include <stdio.h>
int main()
{
    int a[10], i;
    int even[10], odd[10];
    int evec=0;
    int oddc=0;
    printf("enter integers:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        even[evec]=a[i];
        evec++;
    }
    else
    {
    odd[oddc]=a[i];
    oddc++;
    }
    
}