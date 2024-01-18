#include<stdio.h>
int main()
{
    printf("\n********************************************\n");
    int a[2][2]={{1,2},{3,4}};
    for(int i=0;i<=1;i++)
        {
            for(int j=0;j<=1;j++)
            {
                printf("%d,%d th element of 2d array is %d\n",i,j,a[i][j]);
            }
        }
    printf("\n********************************************\n");

    return 0;
}


