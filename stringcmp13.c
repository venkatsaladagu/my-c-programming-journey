//compare two string using the strcmp//
#include <stdio.h>
#include <string.h>
int main()
{
    int value;
    int s1[20];
    int s2[20];
    puts("enter a string:");
    gets(s1);
    puts("enter secont string:");
    gets(s2);
    value = strcmp(s1, s2);
    if (value == 0)

        puts("strings are equal!");
    else
        puts("not equal!");
}