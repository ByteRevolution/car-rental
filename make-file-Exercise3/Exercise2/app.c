#include <stdio.h>
//#include "sampleLib.h"
#include "sampleAdd.h"
#include "sampleSub.h"
#include "sampleMultiply.h"
#include "sampleDivide.h"
void main()
{
	int a = 0, b = 0;
#ifdef DECORATE
	printf("###############################\r\n");
#endif
	printf("Enter first value:");
	scanf("%d", &a);
	printf("Enter second value:");
	scanf("%d", &b);
	printf("Addition of %d and %d is %d\r\n", a, b, sampleAdd(a,b));
	printf("Addition of %d and %d is %d\r\n", a, b, sampleSub(a,b));
	printf("Multiplication of %d and %d is %d\r\n", a, b, sampleMultiply(a,b));
	printf("division of %d and %d is %d\r\n", a, b, sampleDivide(a,b));
#ifdef DECORATE
	printf("###############################\r\n");
#endif
}
