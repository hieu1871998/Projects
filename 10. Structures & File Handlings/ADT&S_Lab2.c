#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct employee{
	char empID[50];
	char name[50];
	int salary;
	int dateOfJoining;
}details;

details employees[5];

int currentYear;
int getCurrentYear(){
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	currentYear = tm.tm_year + 1900;
	return currentYear;
}

void drawDrawer(){
	printf("\n|ID       |NAME     |SALARY   |JOIN DATE|\n");
}

details inputDetails(){
	int i = 0;
	char d = 0;
	for(i = 0; i < 5 ; i++){
		printf("\nEMPLOYEE %d\n", i + 1);
		printf("Enter ID: ");
		fflush(stdin);
		scanf("%s", &employees[i].empID);
		printf("Enter name: ");
		fflush(stdin);
		scanf("%s", &employees[i].name);
		printf("Enter salary: ");
		fflush(stdin);
		scanf("%d", &employees[i].salary);
		printf("Enter date: ");
		scanf("%d", &employees[i].dateOfJoining);
	}
}

void getRaises(){
	int i = 0;
	for(i = 0; i < 5 ; i++){
		if(employees[i].salary <= 2000){
			employees[i].salary += (0.15)*employees[i].salary;
		}
		else if(employees[i].salary > 2000 && employees[i].salary <= 5000){
			employees[i].salary += (0.1)*employees[i].salary;
		}
	}
	drawDrawer();
	for(i = 0; i < 5 ; i++){
		printf("|%-9s|%-9s|%-9d|%-9d|\n", employees[i].empID, employees[i].name, employees[i].salary, employees[i].dateOfJoining);
	}
}

void getYears(){
	int i = 0;
	getCurrentYear();
	drawDrawer();
	for(i = 0; i < 5 ; i++){
		if((currentYear - employees[i].dateOfJoining ) >= 10){
			printf("|%-9s|%-9s|%-9d|%-9d|\n", employees[i].empID, employees[i].name, employees[i].salary, employees[i].dateOfJoining);
		}
	}
}

void main(){
//	int i = 0;
	char d = 0;
//	for(i = 0; i < 5 ; i++){
//		printf("\nEMPLOYEE %d\n", i + 1);
//		printf("Enter ID: ");
//		fflush(stdin);
//		scanf("%s", &employees[i].empID);
//		printf("Enter name: ");
//		fflush(stdin);
//		scanf("%s", &employees[i].name);
//		printf("Enter salary: ");
//		fflush(stdin);
//		scanf("%d", &employees[i].salary);
//		printf("Enter date: ");
//		scanf("%d", &employees[i].dateOfJoining);
//	}
	inputDetails();
	inputChoice:
	printf("\n1. Calculate employees raises.\n2. Display employees who completed 10 years.\n3. Exit\n");
	fflush(stdin);
	scanf("%d", &d);
	switch(d){
		case 1:
			printf("\nCalculate employees raises:\n");
			getRaises();
			break;
		case 2:
			printf("\nDisplay details of employees who completed 10 years:\n");
			getYears();
			break;
		case 3:
			printf("\nEXIT\n");
			exit(0);
		default:
			printf("\n|INVALID CHOICE|\n");
			break;
	}
	goto inputChoice;
}