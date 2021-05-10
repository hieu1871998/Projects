#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void prefixIns(char *n[], char *pre)
{
	char *temp;
	int i;
	for(i = 0;i < 5;i++)
	{
		strcpy(temp,pre);
		strcat(temp,n[i]);
		printf("Name %d: %s\n",i + 1,temp);		
	}
}

void main()
{
	char *name[5], *prefix;
	int i;
	for(i = 0;i < 5;i++)
	{
		name[i] = (char*)malloc(50);
	}
	prefix = (char*)malloc(50);
	printf("Input prefix: ");
	scanf("%s",prefix);
	printf("Input five names:\n");
	for(i = 0;i < 5;i++)
	{
		printf("Name %d: ",i + 1);
		scanf("%s",name[i]);
	}
	printf("Modified names:\n");
	prefixIns(name,prefix);
}