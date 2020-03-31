#include<stdio.h>

void main()
{
    int m;
    m=29;
    printf("Address of m: %p\n",&m);
    printf("Value of m: %d\n\n",m);

    int *ab;
    ab = &m;
    printf("Address of pointer ab: %p\n",ab);
    printf("COntent of pointer ab: %d\n\n",*ab);

    m = 34;
    printf("Address of pointer ab: %p\n",ab);
    printf("Content of pointer ab: %d\n\n",*ab);
    *ab = 7;
    printf("Address of m: %p\n",&m);
    printf("Value of m: %d\n",m);

}