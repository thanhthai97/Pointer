#include<stdio.h>

void main()
{
    int *p1;
    int sum,no1,no2;
    int *p2;
    printf("Test data: \n");
    printf("Input the first number: ");
    scanf("%d",&no1);
    
    printf("Input the sencond number: ");
    scanf("%d",&no2);
    p1 = &no1;
    p2 = &no2;
    sum = *p1 + *p2;
    printf("The sum of the enterd numbers is : %d\n",sum);
    

}