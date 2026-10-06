//pointer assignment//
#include<stdio.h>
int main()
{
    int a=10,b=11;
    int *p,*q;
    p=&a,q=&b;
    *q=*p;
    printf("%d %d %d %d %d",a,*p,*q,p,q);
}