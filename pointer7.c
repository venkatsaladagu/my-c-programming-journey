#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    p=p+2;
    printf("%d\n",p);
    printf("%d\n",*p);
}