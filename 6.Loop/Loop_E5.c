#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i,j;
	for(i = 7; i > 0;i--)
	{
		for(j = 1;j <= i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
