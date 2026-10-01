//finding string lenght using the strlen//
#include<stdio.h>
#include<string.h>
int main()
{
    int count = 0;
    char name[20];
    printf("enter a string:");
    gets(name);
    count=strlen(name);
    printf("%s",name);
    printf("\n%d",count);
}