#include <stdio.h>
int main()
{
    int a = -11;
    const int *p = &a;
    a=10;
    printf("%d", a);
}