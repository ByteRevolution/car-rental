#include<string.h>
#include<stdio.h>
int main()
{
    printf("\n********************************************\n");
    char repass[5]; 
    char passwd[5]="revant";
    printf("your password is : %s \n",passwd);
    printf("reenter the passwd you set\n");
    scanf("%s",repass);

    printf("your password is : %s \n",repass);
    if (strcmp(passwd,repass)= 0 );
    {
        printf("you entered correct password");
        else
        {
        break;
        }
    }
    
    printf("\n********************************************\n");
    return 0;
}


