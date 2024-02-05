#include<stdio.h>
int main()
{
struct revant
{
    int age ;
  //  char name[10];
    int name ;
}name1;
//name1.name="revant koriya"; this will not work as this is the assigment to an array variable 
//printf("enter name \n");
//scanf("%[^\n]c",&name1.name);
name1.age=21;
printf("size of structure : %d \n",sizeof(struct revant));
printf("size of struct member : %d \n",sizeof(name1));
//printf("name assigned is : %s \n",name1.name);
printf("age is : %d ",name1.age);
return 0;
}