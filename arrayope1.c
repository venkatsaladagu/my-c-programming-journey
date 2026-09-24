#include<stdio.h>
int main()
{
    int a[5],i;
    int pos=0,neg=0,zero=0;
    printf("enter array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>0)
        pos++;
        if(a[i]<0)
        neg++;
        if(a[i]==0)
        zero++;
    }
    printf("\npositive numbers =%d",pos);
     printf("\nnegative numbers =%d",neg);
      printf("\nzero numbers =%d",zero);

}