#include<stdio.h>
int main()
{
    int a[5],i;
    printf("enter array elements");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=5;i>0;i--)
    {
    printf("\narray elements is %d",a[i]);
    }
    return 0;
}