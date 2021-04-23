#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num,i;
	printf("Enter number: ");
	scanf("%d",&num);
	for(i = 1;i <= 10;i++)
	{
		printf("%d\n",num*i);
	}
}
