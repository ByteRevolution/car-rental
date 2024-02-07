#include<stdio.h>
int swap(int *x,int *y)
{
int temp ;
printf("address of x is %x \n",&x);
printf("value of x is %x \n",x);
temp = *x;
*x=*y;
*y= temp;
}
int main()
{
    int a,b;
    printf("\n********************************************\n");
    printf("enter the first number \n : ");
    scanf("%d",&a);
    printf("enter the secod number \n :");
    scanf("%d",&b);
    printf("value of a :%d \n",a);
    printf("adddress of a :%x \n",&a);
    printf("value of b :%d \n",b);
    printf("address of b :%x \n",&b);
    swap(&a,&b);
    printf("new value of a : %d \n",a);
    printf("new value of b :%d \n",b);

    printf("\n********************************************\n");
    return 0;
}


