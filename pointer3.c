#include<stdio.h>
int main()
{
    int a=10,c;
    int *p;
    p=&a;
    c=*p;
    printf("%d\n",c);
    printf("%x\n",c);
    printf("%d",&p);
    printf("%x",&p);

}