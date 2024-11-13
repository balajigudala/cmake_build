#include "header.h"

int main() 
{
	int a, b;
	printf("Hello Everyone!\n");
	printf("VAL : %d\n", VAL);
	printf("enter integer for a, b:");
	scanf("%d%d",&a,&b);
	printf("addition: %d + %d = %d\n ", a, b, add(a, b));
	return 0;
}
