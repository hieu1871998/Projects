#include <stdio.h>
#include <stdlib.h>

int pop;

typedef struct student
{
	char name[50];
	char province[50];
	int birthYear;
	float mark;
} studentInfo;
studentInfo *obj;

void inputInfo()
{
	int i;
	printf("Number of students: ");
	scanf("%d",&pop);
	obj = (studentInfo*)malloc(pop * sizeof(studentInfo));
	printf("Input student info:\n");
	for(i = 0;i < pop;i++)
	{
		printf("STUDENT %d-----\n",i + 1);
		printf("Enter name: ");
		scanf("%s",&(obj + i)->name);
		printf("Enter province: ");
		scanf("%s",&(obj + i)->province);
		printf("Enter birth year: ");
		scanf("%d",&(obj + i)->birthYear);
		printf("Enter mark: ");
		scanf("%f",&(obj + i)->mark);	
	}
}

void printHeaders()
{
	printf("STUDENT INFORMATIONS\n");
	printf("NO\tNAME\tPROVINCE\tBIRTH YEAR\tMARK\n");
}

void printInfo()
{
	for(int i = 0;i < pop;i++)
	{
		printf("%d\t%s\t%s\t\t%d\t\t%.2f\n",i + 1,(obj + i)->name,(obj + i)->province,(obj + i)->birthYear,(obj + i)->mark);
	}
}

void main()
{
	inputInfo();
	printHeaders();
	printInfo();
}
