#include<stdio.h>
int main ()
{
    char s1[10];
    printf("enter a string:");
    scanf("%s",s1);
    printf("%s",&s1[3]);
}