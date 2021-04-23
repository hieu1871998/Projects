#include<stdio.h>
#include<stdlib.h>

void main()
{
	Ex4();
}

int Ex4()
{
	char* name;
	int basic,daper;
	float bonper,loandet, salary;
	name = "MARK";
	basic = 2500;
	daper = 55;
	bonper = 33.33;
	loandet = 250.00;
	salary = basic + basic * daper / 100 + bonper * basic / 100 - loandet;
	printf("|NAME|\t|BASIC|\t|SALARY|\n");
	printf("|%s|\t| %d|\t|%.1f|",name,basic,salary);
//	printf("%5s%10d%15.2f",name,basic,salary);
	return 0;
}
