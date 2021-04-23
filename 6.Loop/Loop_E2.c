#include<stdio.h>
#include<stdlib.h>

void main()
{
	int num1,num2,sum = 0;
	printf("Input num1 and num2:\n");
	scanf("%d%d",&num1,&num2);
	printf("Sum of all odd numbers between %d and %d is: ",num1,num2);
	if(num1 > num2)
	{
		for(num1 = num1 - 1;num1 > num2;num1--)
		{
			if(num1 % 2 == 0)
			{
				sum += num1;
			}
		}
		printf("%d",sum);
	}
	else
	{
		for(num2 = num2 - 1;num2 > num1;num2--)
		{
			if(num2 % 2 == 0)
			{
				sum +=num2;
			}
		}
		printf("%d",sum);
	}
}
