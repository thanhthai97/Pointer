#include<stdio.h>
int add2Number(int *a,int *b)
{
    return *a + *b;
}
void main()
{
    int no1,no2,sum;
    
    printf("Input the first number: ");
    scanf("%d",&no1);
    printf("Input the second number: ");
    scanf("%d",&no2);
    
    sum = add2Number(&no1,&no2);
    printf("The sum of %d and %d is %d\n",no1,no2,sum);
}