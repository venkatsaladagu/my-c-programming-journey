#include<stdio.h>
int main()
{
    int a[7],i;
    printf("enter array elements");
    for(i=0;i<7;i++)
    {
    scanf("%d",&a[i]);
    }
    int key,count=0;
    printf("enter counting element");
    scanf("%d",&key);
    for(i=0;i<7;i++)
    {
        if(a[i]==key)
        count++;
        else
        printf("element is not found");
    }
    printf("total counting=%d",count);
}