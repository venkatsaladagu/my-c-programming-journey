#include<stdio.h>
#include<string.h>
int main()
{
    char a;
    int lenght,i;
    char name[20]="venkat";
    lenght=strlen(name);
    for(i=0;i<lenght/2;i++)
    {
        a=name[i];
        name[i]=name[lenght-1-i];
        name[lenght-1-i]=a;
    }
    printf("%s",name);
}