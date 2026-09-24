#include<stdio.h>
int main()
{
    int a[5],b[5],i;
    printf("enter array elements:");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
    b[i]=a[i];
    }
    printf("array a");
    for(i=0;i<5;i++)
    {
    printf("\n%d",a[i]);
    }
     printf("\narray b");
    for(i=0;i<5;i++)
    {
    printf("\n%d",a[i]);
    }

}