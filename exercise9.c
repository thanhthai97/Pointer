#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n;
    printf("Input total number of elements(1 to 100): ");
    scanf("%d",&n);
    float *element = (float*) calloc(n,sizeof(float));
    if(element == NULL)
    {
        printf("No memory is allocated !\n");
        exit(0);
    }
    for(int i=0;i<n;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%e",element+i);
    }
    for(int i=1;i<n;i++)
    {
        if(*(element) < *(element+i))
        {
            *element = *(element+i);
        }
    }
    printf("The largest number is: %.2f\n",*element);
}