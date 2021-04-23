#include<stdio.h>
#include<stdlib.h>

void main()
{
    int x, y;
    printf("Input x: ");
    scanf("%d",&x);
    printf("Input y: ",&y);
    scanf("%d",&y);
	if(xCondition(x))
	{
		printf("%d\n",x);
	}
	else
	{
//		printf("x=%d is between 2000 and 3000\n",x);
	}
	if(yCondition(y))
	{
		printf("%d\n",y);
	}
	else
	{
//		printf("y=%d is not between 100 and 500\n",y);
	}
}

int xCondition(int x)
{
	if(x < 2000 || x > 3000)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int yCondition(int y)
{
	if(y > 100 && y < 500)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
