#include<stdio.h>
int main()
{
    int a,i,number;
    printf("enter a number:");
    scanf("%d",&number);
    for(i=1;i<=10;i++)
    {
        a=number*i;
        printf("%d\n",a);
    }
    return 0;
}