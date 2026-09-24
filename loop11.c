#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 3)
    {
        int j = 1;
        while (j <= 2)
        {
            printf("%d%d ", i, j);
            j++;
        }
        i++;
    }
    return 0;
}