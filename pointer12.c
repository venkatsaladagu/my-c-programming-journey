// Arithmatic operations on the pointer subtraction//
#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = &a[0];
    int *q = &a[3];
    int d;
    d = p - q;
    printf("%d\n", d);
    d = q - p;
    printf("%d\n", d);
    printf("%d\n", *p);
    *q = 25;
    printf("%d\n", *q);
    q = q - 3;
    printf("%d\n", *q);
    p = p + 3;
    printf("%d\n", *p);
}