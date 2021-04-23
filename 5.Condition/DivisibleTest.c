#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
	int a, b; float c;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
/*	if (a % b == 0)
	{
		printf("%d is divisible by %d, remainder: %i\n",a,b,a%b);
	}
	else
	{
		printf("%d is not divisible by %d, remainder: %i\n",a,b,a%b);
	}*/
	if (divisibleTest(a,b))
	{
		printf("%d is divisible by %d, remainder: %i\n",a,b,a%b);
	}
	else
	{
		printf("%d is not divisible by %d, remainder: %i\n",a,b,a%b);
	}
}

int divisibleTest(int a, int b)
{
	if(a % b == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
