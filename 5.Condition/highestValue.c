#include<stdio.h>
#include<stdlib.h>

void main()
{
	int a,b,c;
	printf("Input three variables: \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a > b && a > c)
	{
		printf("[%d] is the highest value",a);
	}
	else if(b > a && b > c)
	{
		printf("[%d] is the highest value",b);
	}
	else
	{
		printf("[%d] is the highest value",c);
	}
}
