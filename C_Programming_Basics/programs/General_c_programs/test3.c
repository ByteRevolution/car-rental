#include<stdio.h>
#include<limits.h>

int main()
{
    printf("\n********************************************\n");
    int i;
    printf("enter any value:");
    scanf("%d",&i);
    printf("this is the size %ld\n",sizeof(i));
    printf("you entered  %d\n",i);
    printf("this is the maximaum size %d\n",INT_MAX);
    printf("this is the minimum size %d\n",INT_MIN);
    printf("\n********************************************\n");
    return 0;
}


