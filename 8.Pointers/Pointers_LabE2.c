#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
	char myStr[1000], *ptr;
	int i, countVow = 0, countCon = 0;
	printf("Enter your line: \n");
	scanf("%s",&myStr);
	ptr = myStr;
	for(i = 0;i < strlen(myStr);i++)
	{
		myStr[i] = toupper(myStr[i]);
	}
	for(i = 0;i < strlen(myStr);i++)
	{
		if(*ptr == 'U' || *ptr == 'E' || *ptr == 'O' || *ptr == 'A' || *ptr == 'I')
		{
			countVow++;
		}
		else
		{
			countCon++;
		}
		ptr++;
	}
	printf("Vowels: %d\n",countVow);
	printf("Consonants: %d\n",countCon);
}