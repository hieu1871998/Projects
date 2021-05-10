#include <stdio.h>
#include <stdlib.h>

float averageCalculator(int* arr, int n)
{
	float sum;
	float average;
	for(int i = 0;i < n;i++)
	{
		sum += arr[i];
	}
	average = sum / n;
	return average;
}

void main()
{
	int* arr;
	int n = 0;
	printf("Enter number of elements in the array: ");
	scanf("%d",&n);
	arr = (int*)malloc(n * sizeof(int));
	printf("Enter the elements:\n");
	for(int i = 0;i < n;i++)
	{
		scanf("%d",arr + i);
	}
	printf("Average: %.2f",averageCalculator(arr,n));
}