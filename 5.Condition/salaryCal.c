#include<stdio.h>
#include<stdlib.h>

void main()
{
	int salary, A = 300, B = 250, C = 100;
	char grade[1];
	printf("Enter your salary: \n");
	scanf("%d",&salary);
	printf("Enter your grade: \n");
	scanf("%c",&grade);
	if(grade == 'A')
	{
		printf("Your salary is: %d\n",salary + A);
	}
	else if(grade == 'B')
	{
		printf("Your salary is: %d\n",salary + B);
	}
	else
	{
		printf("Your salary is: %d\n",salary + C);
	}
}
