#include<stdio.h>
int main()
{
    int i=1 , fact =1;
    while(i<=4){
        fact = fact*i;
        i++;
    }
    printf("%d",fact);
    return 0;

}