#include<stdio.h>

void main()
{
    int m=10;
    int n,o, *z;
    z = &m;
    printf("z stores the address of m = %p\n",z);
    printf("*z stores the value of m = %d\n",*z);
    printf("&m is the address of m = %p\n",&m);
    printf("&n stores the address of n = %p\n",&n);
    printf("&o stores the address of o = %p\n",&o);
    printf("&z stores the address of z = %p\n",&z);

}