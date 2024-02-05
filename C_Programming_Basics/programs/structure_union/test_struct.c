#include<stdio.h>
int main()
    /*
     * this is the code explains the memory allocation of structure
     * 
     * here if we print the size of structure it will give the higher value due to the padding between the variables to maintain the good hardware architure */
{
    printf("\n********************************************\n");
    struct revant{
        int age;
        char name[10];
    }person1;
    printf("enter name\n");
    printf("this is the size of the structure member:%ld\n",sizeof(person1));
    printf("this is the size of the structure:%ld\n",sizeof(struct revant));
    printf("this is the size of the integer:%ld\n",sizeof(int));
    printf("this is the size of the character:%ld\n",sizeof(char));
    printf("\n********************************************\n");
    return 0;
}


