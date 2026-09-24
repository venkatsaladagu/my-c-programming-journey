#include <stdio.h>
int main()
{
    int i = 0;
    char ch = 'a';
    while (ch < 127 && i == 0)
    {
        // printf("%c",ch); infinet loop
    }
    return 0;
}