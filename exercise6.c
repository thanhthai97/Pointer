#include<stdio.h>

void main()
{
    int no1,no2,max = 0;
    int *p;
    printf("Input the first number: ");
    scanf("%d",&no1);
    p = &no1;
    if(*p > max)
    {
        max = *p;
    }
    printf("Input the second number: ");
    scanf("%d",&no2);
    p = &no2;
    if(*p > max)
    {
        max = *p;
    }
    printf("%d if the maximum number.\n",max);
}