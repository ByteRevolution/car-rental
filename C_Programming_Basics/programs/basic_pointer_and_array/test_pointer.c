#include<stdio.h>
int main()
{
    printf("\n********************************************\n");
    int m=10,*z;
    z=&m ;
    printf("value of the m is %d\n",m);
    printf("address of m is %d\n",z);
    printf("value of m using the pointer is  %d\n",*z);
    printf("\n********************************************\n");
    return 0;
}


