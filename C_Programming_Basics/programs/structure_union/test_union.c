#include<stdio.h>
int main()
{
union revant
{
    int age ;
    //char name[10];
    int name ;
}name1;
//name1.name="revant koriya"; this will not work as this is the assigment to an array variable
// this will print more than the total memory because processor does read 1 word == 2byte at a time for 32bit procesorr 
//printf("enter name \n");
//scanf("%[^\n]c",&name1.name);
name1.age=21;
name1.name =10;
printf("size of structure : %d \n",sizeof(union revant));
printf("size of struct member : %d \n",sizeof(name1));
//printf("name assigned is : %s \n",name1.name);
printf("age is : %d ",name1.age);
return 0;
}