#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("\n********************************************\n");
    int ram;
    char c ;
    while(c != 'q'){
        printf("enter q if you want to quit");
        scanf("%c" &c);
    srand(time(NULL));
            int min =1 ;
            int max =6 ;
    ram  = rand() % (max - min + 1) + min;
    //ram = rand();
    printf("\n%d\n",ram);
    printf("\n********************************************\n");
    }
    return 0;

}


