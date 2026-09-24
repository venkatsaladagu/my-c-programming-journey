#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1, j = 0; i <= 5, j < 3; i++) // infinity loop
    {
        printf("%d%d\n", i, j);
    }
    return 0;
}