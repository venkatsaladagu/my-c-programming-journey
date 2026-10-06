//Double pointers in c//
#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;
    int **q = &p;
    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%d\n", &a);
    printf("%d\n", p);
    printf("%d\n", q);
    printf("%d\n", **q);
    printf("%d\n", *q);
    printf("%d", &q);
}