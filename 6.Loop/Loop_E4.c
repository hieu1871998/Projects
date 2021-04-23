#include<stdio.h>
#include<stdlib.h>

void main()
{
	printf("(a)\t");a();
	printf("\n(b)\t");b();
}

int a(int i, int j)
{
	for(i = 1;i <= 5;i++)
	{
		for(j = 1;j <= i;j++)
		{
			printf("%d",j);
		}
		printf("\n\t");
	}
	return 0;
}

int b(int i, int j)
{
	for (i = 5;i > 0;i--)
	{
		for(j = 1;j <= i;j++)
		{
			printf("%d",j);
		}
		printf("\n\t");
	}
	return 0;
}
