#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("ENTER FIRST MATRIX:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER SECOND MATRIX:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&b[i][j]);
        }
    }
     printf("ENTER THIRD MATRIX:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        c[i][j]=a[i][j]+b[i][j];
        printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}