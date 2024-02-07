#include<stdio.h>
int main()
{
    printf("\n********************************************\n");
    int i;
    printf("enter the value:\n");
    scanf("%d",&i);
    printf("this code will print %dx%d of *\n",i,i);
//    int j=i+1;
  //  i= j;
    for(int p=0;p<i;p++)
    {
        for(int q=0;q<i;q++)
          {
                if(p>0 && p<i-1 && q>0 && q<i-1)
                {
                     printf(" ");
                }
                else
                {
                     printf("*");
                }
     //  printf("\n");
    }

       printf("\n");
    }
        printf("\n********************************************\n");
    return 0;
    }



