#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isVowel(char c)
{
	c = toupper(c);
	if(c == 'A' || c == 'I' || c == 'E' || c == 'U' || c == 'O')
	{
		return 1;
	}
	return 0;
}

void main()
{
	char mystr[1000];
	printf("Enter your line: \n");
	scanf("%s",&mystr);
	int i, count = 0;
	for(i = 0;i < strlen(mystr);i++)
	{
//		int j = mystr[i];
		if(isVowel(mystr[i]))
		{
			count++;
		}
//		j++;
	}
	printf("Number of vowels: %d",count);
}