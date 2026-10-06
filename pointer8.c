#include <stdio.h>
int main()
{
    int a[5] = {0, 1, 2, 3, 4};
    int *p = a;
    p = p + 1;
    p = p + 1;
    p = p - 1;
    *p = 2;
    printf("%d\n", p);
    printf("%d", &p);
}