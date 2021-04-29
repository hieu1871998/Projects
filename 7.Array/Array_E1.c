#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void * a, const void * b)
{
	return strcmp(*(char**)a, *(char**)b);
}
  
void main()
{
	char* arr[] = { "George", "Albert", "Tina", "Xavier", "Roger", "Tim", "William" };
	int n = sizeof(arr) / sizeof(arr[0]);
	int i;
	qsort(arr, n, sizeof(arr[0]), compare);
	printf("\nSorted array is\n");
	for (i = 0; i < n; i++)
	{
		printf("%d: %s \n", i + 1, arr[i]);
	}
}