#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Using qsort function:
//int compare(const void * a, const void * b)
//{
//	return strcmp(*(char**)a, *(char**)b);
//}
//  
//void main()
//{
//	char* arr[] = { "George", "Albert", "Tina", "Xavier", "Roger", "Tim", "William" };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	printf("Original given array:\n");
//	for(i = 0;i < n;i++)
//	{
//		printf("%d. %s\n",i + 1,arr[i]);
//	}
//	qsort(arr, n, sizeof(arr[0]), compare);
//	printf("\nGiven array sorted:\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("%d: %s \n", i + 1, arr[i]);
//	}
//}

//Using only strcmp function
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
