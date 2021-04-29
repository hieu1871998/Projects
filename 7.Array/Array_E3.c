#include <stdio.h>
#include <stdlib.h>

int reverse(int numArray[], int start, int end)
{
	int temp;
	for(start = 0;start < end;start++, end--)
	{
		temp = numArray[start];
		numArray[start] = numArray[end];
		numArray[end] = temp;
	}
	return 0;
}

void main()
{
	int numArray[] = {34 , 45 , 56 , 67, 89};
	int n = sizeof(numArray) / sizeof(numArray[0]);
	int i;
	reverse(numArray, 0, n-1);
	for(i = 0;i < n;i++)
	{
		printf("%d\n",numArray[i]);
	}
}