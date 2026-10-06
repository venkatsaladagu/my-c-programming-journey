//NO ARGUMENTS WITHOUT RETURN TYPE//
#include<stdio.h>
void sum();
void main()
{
    sum(3,4);  // it will no not show to many arguments in sum//
}
void sum ()
{
    int a=5,b=7,sum=0;
    sum=a+b;
    printf("sum=%d",sum);

}