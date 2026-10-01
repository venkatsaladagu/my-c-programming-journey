//finding lenght of string with out strlen//
#include <stdio.h>
#include<string.h>
int main()
{
    int count=0,i=0;
    char name[10];
    puts("enter string:");  //by using fgets buffer over flow can con be possible//
    gets(name);
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    puts(name);
    printf("%d",count);
    return 0;
}
