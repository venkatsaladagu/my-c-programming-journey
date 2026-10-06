#include<stdio.h>
void sum(int,int);
int main()
{
    int a=7,b=5;
    sum(a,b);
    printf("hello");
}
void sum(int a,int b)
{
 int sum=0;
sum=a+b;
printf("sum=%d\n",sum);
}
