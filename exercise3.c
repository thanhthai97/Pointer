#include<stdio.h>

void main()
{
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';
    int *p1;
    float *p2;
    char *p3;
    p1 =&m;
    p2 = &fx;
    p3 = &cht;
    printf("address of m: %p\n",&m);
    printf("address of fx: %p\n",&fx);
    printf("address of cht: %p\n\n",&cht);
    printf("value at address of m: %d\n",m);
    printf("value at address fx: %f\n",fx);
    printf("value at address of cht: %c\n",cht);

    printf("address of pointer: %p\n",p1);
    printf("value of pointer: %d\n",*p1);
    
    printf("address of pointer fx: %p\n",p2);
    printf("value of pointer fx: %f\n",*p2);
    
    printf("Address of pointer in cht: %p\n",p3);
    printf("Value of pointer at cht: %c\n",*p3);


}