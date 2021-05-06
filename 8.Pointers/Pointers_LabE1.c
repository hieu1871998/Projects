#include <stdio.h>
#include <stdlib.h>

void main()
{
	int numArray[1000], i, n, min, max;
	printf("Enter array size: ");
	scanf("%d",&n);
	printf("Enter values: \n");
	for(i = 0;i < n;i++)
	{
		scanf("%d",&numArray[i]);
	}
	min = max = numArray[0];
	for(i = 0;i < n;i++)
	{
		if(*(numArray + i) < min)
		{
			min = *(numArray + i);
		}
		if(*(numArray + i) > max)
		{
			max = *(numArray + i);
		}
	}
	printf("Min: %d\nMax: %d",min,max);
}