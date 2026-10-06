// void pointer in c//
#include<stdio.h>
int main()
{
void *vp;
int a=5;
float b=12.6;
char ch='a';
vp=&a;
printf("%d\n",*(int*)vp);
vp=&b;
printf("%f\n",*(float*)vp);
vp=&ch;
printf("%c\n",*(char*)vp);
}