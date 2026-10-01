//concadination of two strings with strcat//
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20] = "saladagu";
    char s2[20] = "venkat";
    strcat(s2, s1);
    printf("%s", s2);
}