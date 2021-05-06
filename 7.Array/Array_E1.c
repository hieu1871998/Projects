#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char * arr[] = { "George", "Albert", "Tina", "Xavier", "Roger", "Tim", "William" };
	char * temp;
	int n = sizeof(arr) / sizeof(arr[0]);
	int i, j;
	printf("Original given array:\n");
	for(i = 0;i < n;i++)
	{
		printf("%d. %s\n",i + 1,arr[i]);
	}
	printf("\nGiven array sorted:\n");
	for (i = 0; i < n; i++)
	{
		for(j = i + 1;j < n;j++)
		{
			if(strcmp(arr[i],arr[j]) > 0)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		printf("%d. %s\n",i + 1,arr[i]);
	}
}
