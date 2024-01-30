#include <stdio.h>

int x,y;
int swap(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    int x,y;
    x=a;
    y=b;
    return(x+y);
}

int main() {
    int num1 = 5, num2 = 10;
int sum ;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

   sum = swap(num1, num2);
   num1=sum-num1;
   num2=sum-num2;
   printf("%d \n",num1);
   printf("%d \n",num2);

    return 0;
}

