#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int *p=&a[3];
    printf("%d",*p);
    printf("%d %d",*--p,*--p);

}