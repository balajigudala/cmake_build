#include "header.h"

int main()
{
	int a, b;
	
	printf("enter the integers (a, b): ");
	scanf("%d%d", &a, &b);

	printf("\nthe addition of %d and %d is %d\n", a, b, add(a, b));
	printf("\nthe subtraction of %d from %d is %d\n", b, a, sub(a, b));
	
	return 0;
}
