#include<stdio.h>
int main()
{
    int a;
    printf("enter a ");
    scanf("%d",&a);
    int *p;
    p=&a;
    printf("a=%d\n",a);
    printf("%d\n",*p);
     printf("%d\n",p);
}
