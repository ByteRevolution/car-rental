#include<stdio.h>
#include<stdlib.h>
void astrick(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("*");
    }
    printf("\n ");
}
void init_display()
{
    (void) system("clear");// type casted it to void to remove the warning.
    printf("\n ************** TRAVEL TRACK CAR RENTLAS **************\n");
    astrick(60);
}


