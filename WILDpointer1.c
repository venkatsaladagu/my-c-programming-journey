#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=(int*)malloc(4);
    *ptr=5;
    printf("%d",*ptr);
    free(ptr);
}