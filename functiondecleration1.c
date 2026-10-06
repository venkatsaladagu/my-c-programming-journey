#include <stdio.h>
void sum(int a,int b);//function decleration

int main()//function call
{
   sum(5,7);
   return 0;
}
void sum(int a,int b)//function definition
{
    int sum=0;
    sum = a + b;
    printf("%d", sum);
}