#include<stdio.h>
#include<stdlib.h>

void main()
{
	int a, b;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	if(calculateProduct(a,b))
	{
		printf("Product of %d and %d is greater than or equal to 1000 (%d x %d = %d)",a,b,a,b,a*b);
	}
	else
	{
		printf("Product of %d and %d is not greater than or equal to 1000 (%d x %d = %d)",a,b,a,b,a*b);
	}
}

int calculateProduct(int a, int b)
{
	if(a * b >= 1000)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
