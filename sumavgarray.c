#include <stdio.h>
int main()
{
    int marks[5], i;
    float sum = 0, avg;
    printf("enter the marks of five students");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum += marks[i];
    }
    avg = sum / 5;
    printf("%f", sum);
    printf("\n%f", avg);
    return 0;
}