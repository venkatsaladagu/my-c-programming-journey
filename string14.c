// comparing string without strcmp//
#include <stdio.h>
#include <string.h>
int main()
{
    int flag = 0, i;
    char s1[20];
    char s2[20];
    puts("enter a string1:");
    gets(s1);
    puts("enter a string2:");
    gets(s2);
    for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
    if (s1[i]!=s2[i])
    {
        flag = 1;
        break;
    }
    if (flag==1)
    {
     puts("not same");
    }
    if(flag==0)
    {
        puts(" same");
    }
    

}