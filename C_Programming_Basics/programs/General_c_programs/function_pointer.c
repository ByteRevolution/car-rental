#include<stdio.h>
int *revant(int *a);
int main()
{
    printf("\n********************************************\n");
    int a =1  ;
    printf("value of a is %d \n",a);
    printf("address  of a is %x \n",&a);
    int n = revant(a);
    printf("value of n is %d \n",n);
    printf("address  of n is %x\n",&n);
    printf("\n********************************************\n");
    return 0;
}
int *revant(int *a)
{
int b =1;
return a+b;
}


