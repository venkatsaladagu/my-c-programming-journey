#include<stdio.h>
int main()
{
    int a;
    printf("enter a:");
    scanf("%d",&a);
    if(a<=18)
    printf("voting is not possible");
    else
    printf("voting is possible");
    return 0;
}