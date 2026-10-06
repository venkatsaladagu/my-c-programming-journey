//pointer subtraction//
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *p=&a[0];
    int *q=&a[3];
    printf("%d\n",*p);
     printf("%d\n",p);
     int d;
     d=q-p;
     printf("%d\n",d);
}
