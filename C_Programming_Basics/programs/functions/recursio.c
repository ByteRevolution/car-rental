#include<stdio.h>
int function(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n * function(n-1);
}
int main()
{
    printf("\n********************************************\n");
    int n;
    printf("enter the number of which you want to find the factorial\n");
    scanf("%d",&n);
    long long int sum = function(n);
    printf("%lld",sum);
    printf("%d",sizeof(long long int));
    printf("\n********************************************\n");
    return 0;
}


