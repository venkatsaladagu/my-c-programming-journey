#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = &a[0];
    int *q = &a[0];
    printf("value is:%d\n", *p);
    printf("address value is:%d\n", p);
    p = p + 2;
    *p = 32;
    printf("value is:%d\n", *p);
    printf("address value is:%d\n", p);
}