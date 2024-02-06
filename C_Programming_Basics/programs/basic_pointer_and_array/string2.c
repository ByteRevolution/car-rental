#include<stdio.h>
int main()
{
    printf("\n********************************************\n");

  //  char revant;
    char input[25];
    printf("enter string\n");
    scanf("%[^\n]s",&input);
    printf("you entered %s",input);
    
    //scanf("%c",&revant);
   
 //   printf("you entered:\t %c\n",revant);
    printf("\n********************************************\n");
    return 0;
}


