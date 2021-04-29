#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isVowel(char c)
{
	c = toupper(c);
	if(c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O')
	{
		return 1;
	}
	return 0;
}

void main()
{
	char myStr[1000];
	int i, countVow = 0, countCon = 0;
	printf("Enter your line: \n");
	scanf("%s",&myStr);
	for(i = 0;i < strlen(myStr);i++)
	{
		if(isVowel(myStr[i]))
		{
			countVow++;
		}
		else
		{
			countCon++;
		}
	}
	printf("Vowels: %d\n",countVow);
	printf("Consonants: %d\n",countCon);
}