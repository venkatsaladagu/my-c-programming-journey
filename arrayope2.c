#include<stdio.h>
int main()
{
    int a[5],i;
    printf("enter array elements:");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    int key;
    printf("enter element to search:");
    scanf("%d",&key);
    int index =-1;
    for(i=0;i<5;i++)
    {
        if(a[i]==key)
        {
            index =i;
            break;
        }
    }
    if (index !=-1)
    {
        printf("found at index =%d\n",index);
    }
    else{
        printf("not found\n");
    }
    return 0;
}    