#include <stdio.h>
int main()
{
    char name[30];
    printf("enter a string:");
    scanf("%s", name);
    printf("%s", &name[3]);
}