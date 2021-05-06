#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void isPalindrome(char *string)
{
	char *fwPtr, *bwPtr;
	fwPtr = string;
	bwPtr = fwPtr + strlen(string) - 1;
	for(fwPtr = string;bwPtr >= fwPtr;)
	{
		if(*fwPtr == *bwPtr)
		{
			fwPtr++;
			bwPtr--;
		}
		else
		{
			break;
		}
	}
	if(fwPtr > bwPtr)
	{
		printf("%s is a palindrome.",string);
	}
	else
	{
		printf("%s is not a palindrome.",string);
	}
}

void main()
{
	char str[1000];
	printf("Enter your string:\n");
	scanf("%s",&str);
	for(int i = 0;i < strlen(str);i++)
	{
		str[i] = toupper(str[i]);
	}
	isPalindrome(str);
}