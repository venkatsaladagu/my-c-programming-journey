#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age<=18)
    {
        printf("voting is not possible");
    }
    else if(age>=18 && age<=80)
    {
    printf("voting is possible");
    }
    else
     printf("you are not in the earth");
    return 0;
}