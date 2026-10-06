#include <stdio.h>
//void sum(int a, int b);  implicit decleration of the function
int main()
{
    sum(5, 7);
    printf("hello");
    return 0;
}
void sum(int a, int b)
{
    int sum = 0;
    sum = a + b;
    printf("sum=%d\n", sum);
}