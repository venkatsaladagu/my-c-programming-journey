#include <stdio.h>
void sum(int a, int b); //function decleration 
int main()//function call
{
    sum(5, 7);
    printf("hello\n");
    sum(1,2);
    sum(3,4);
    return 0;
}
void sum(int a, int b)//function definition
{
    int sum = 0;
    sum = a + b;
    printf("sum=%d\n", sum);
}