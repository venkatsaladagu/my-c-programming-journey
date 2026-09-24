#include <stdio.h>
int main()
{
    int a[3],i;
    int sum=0,avg=0;
    printf("enter array elements");
    for (i = 0; i < 3; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < 3; i++)
    {
        sum =sum+a[i];
         avg=sum/3; 
    }
        printf("\nthe sum is %d", sum);
       
        printf("\nthe avg is %d",avg);
    
    return 0;
}
