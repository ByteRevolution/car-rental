#include<stdio.h>
int main()
{
    struct person
{
    int age ;
    char name[50];
}name1;
printf("size of this structure : %d ",sizeof(struct person));
printf("enter name \n");
scanf("%[^\n]c",name1.name);
printf("enter age");
scanf("%d",name1.age);
return 0;
}