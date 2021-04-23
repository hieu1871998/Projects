#include<stdio.h>
#include<stdlib.h>

void main()
{
	printf("Exercise 2:\n");
	Ex2();
	printf("Exercise 5:\n");
	Ex5();
}

//int Ex1()
//{
//	int sum;
//	char letter;
//	float discount,dump,discount_rate;
//	printf("%d",sum);
//	printf("\nWelcome");
//	printf("\n%c",letter);
//	printf("\n%f",discount);
//	printf("\n%.2f",dump);
//	scanf("%d",&sum);
//	scanf("%f",&discount_rate);
//}

int Ex2()
{
	char a,b;
	a = 'A';
	b = 'b';
	printf("ASCII value of %c: %d\n",a,a);
	printf("ASCII value of %c: %d\n",b,b);
	return 0;
}

//int Ex3()
//{
//#include <stdio.h>
//void main()
//{
//	int breadth;
//	float length, height;
//	scanf("%d%f%6.2f",&breadth,&length,&height);
//	printf("%d %f %e",breadth, length, height);
//}*/

int Ex5()
{
	char firstName[20],lastName[20];
	printf("Enter your first name: ");
	scanf("%s",&firstName);
	printf("Enter your last name: ");
	scanf("%s",&lastName);
	printf("%s %s",lastName,firstName);
	return 0;
}
