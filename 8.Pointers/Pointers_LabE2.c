#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int toupper();

void main()
{
	char myStr[1000], *ptr;
	int i, countVow = 0, countCon = 0, countSpace = 0;
	printf("Enter your line: \n");
	gets(myStr);
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
		else if(*ptr == ' ')
		{
			countSpace++;
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
