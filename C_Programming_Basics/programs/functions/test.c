#include<stdio.h>

int main()
{
    printf("\n********************************************\n");
    int x = 1;
    void * rev;
    rev =&x;
    printf("\nvalue of x is %d",*(int *)rev);
    printf("\naddress of x is %p",rev);
    printf("\nvalue of x is %d",x);
    printf("\naddress of x is %p",&x);
    printf("\n********************************************\n");
    return 0;
}


