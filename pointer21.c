#include<stdio.h>
int main()
{
    char str[]="Welcome TO Jennys Lectures";
    char *p=str;
     printf("%c\n",*p++ +1);
      printf("%c\n",*p);
}