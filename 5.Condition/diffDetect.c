#include<stdio.h>
#include<stdlib.h>

void main()
{
	int a, b;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	if(abs(a - b) == a)
	{
		printf("Difference is equal to value %d",a);
	}
	else if(abs(a - b) == b)
	{
		printf("Difference is equal to value %d",b);
	}
	else
	{
		printf("Difference is not equal to any of the values entered");
	}
}
