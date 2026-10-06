//this program helps to learn beginers to lacate exact value of a and//
//address value of a and also pointer pointing//
#include<stdio.h>
int main()
{
    int a=10,b=11;
    int *p,*q;
    p=&a;
    q=&b;
    printf("a=%d\n",a);
     printf("a=%d\n",*p);
      printf("a=%d\n",b);
       printf("a=%d\n",*q);
       printf("a=%d\n",&a);
       printf("a=%d\n",p);
       printf("a=%d\n",&p);
       printf("a=%d\n",&b);
       printf("a=%d\n",q);
       printf("a=%d\n",&q);
}