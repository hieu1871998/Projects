#include <stdio.h>
#include <stdlib.h>

void getMinMax(int *t)
{
	int i= 0, min = 0, max = 0;
	min = max = *t;
	for(i = 0;i < 5;i++)
	{
		if(min > t[i])
		{
			min = t[i];
		}
		if(max < t[i])
		{
			max = t[i];
		}
	}
	printf("Min: %d\nMax: %d\n",min,max);
}

void main()
{
	char *city[5];
	int *temps, i = 0, j = 0;
	for(i = 0;i < 5;i++)
	{
		city[i] = (char*)malloc(50);
		free(city[i]);
	}
	temps = (int*)malloc(25 * sizeof(int));
	for(i = 0;i < 5;i++)
	{
		printf("Enter city: ");
		fflush(stdin);
		gets(city[i]);
		printf("Yearly temperatures of city: %s\n",city[i]);
		for(j = i * 5;j < (i * 5) + 5;j++)
		{
			scanf("%d",&temps[j]);
		}
		getMinMax(temps + (i * 5));
	}
}