#include<stdio.h>
/*
 * if we want to declare a fuction before main we can do so by just writing this 
 * type name(int,int)
 * */
void hello()
{
    printf("hello\n");
   // hello(); this line generates a segmenation fault and runs a infinite loop 

}
int sum (int a,int b)
{
    return a+b;
}
int value()
{
    return 1;
}
int main()
{
    printf("\n********************************************\n");
    /*
     * this code is for understanding of functions in c 
     * */
    hello();
    int n = value();
    printf("value is : %d\n",n);
    int m =sum(1,2);
    printf("\nsum is %d ",m);
    printf("\n********************************************\n");
    return 0;
}


