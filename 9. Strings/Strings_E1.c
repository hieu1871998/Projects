#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getOccurs(char *str1, char *str2)
{
	int length1 = strlen(str1);
	int length2 = strlen(str2);
	str2 = str2 + (length2 - length1);
	return strcmp(str1,str2);
}

void main()
{
	char *str1, *str2;
	str1 = (char*)malloc(sizeof(char));
	str2 = (char*)malloc(sizeof(char));
	printf("Input string 1:\n");
	gets(str1);
	printf("Input string 2:\n");
	gets(str2);
	if(getOccurs(str1,str2) == 0)
	{
		printf("String 1 occurs at the end of String 2.");
	}
	else
	{
		printf("String 1 does not occur at the end of String 2.");
	}
}