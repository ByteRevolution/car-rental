#include<stdio.h>
int call();
int main()

    static int revant;
{
    printf("%d\n", revant);
    revant = 1;
    printf("%d\n", revant);
    call();
    return 0;
}
call(){
    printf("%d",revant);
}

