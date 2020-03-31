#include<stdio.h>

void main()
{
    int n;
    printf("Input the number of elements to store in the array: ");
    scanf("%d",&n);
    int A[n];
    printf("Input %d number of elements in the array:\n",n);
    for(int i=0;i<n;i++)
    {
        printf("element - %d: ",i);
        scanf("%d",A+i);
        //p[i] = &A[i];
    }
    printf("The elements you entered are:\n");
    for(int i=0;i<n;i++)
    {
        printf("element - %d : %d\n",i,*(A+i));
    }
}