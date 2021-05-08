#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pluralizer(char *name)
{
	int length, i;
	length = strlen(name);
	char *ptr;
	ptr = name + strlen(name) - 1;
	if(*ptr == 'y')
	{
		*ptr = 'i';
		strcat(name,"es");
	}
	else if(*ptr == 's' 
	|| (*ptr - 1 == 's' && *ptr == 'h')
	|| (*ptr - 1 == 'c' && *ptr == 'h'))
	{
		strcat(name,"es");
	}
	else
	{
		strcat(name,"s");
	}
}

void main()
{
	char animalName[1000], birdName[1000];
	printf("Input an singular animal name:\n");
	scanf("%s",animalName);
	printf("Input a singular bird name:\n");
	scanf("%s",birdName);
	char *aPtr, *bPtr;
	pluralizer(animalName);
	pluralizer(birdName);
	aPtr = animalName;
	bPtr = birdName;
	printf("Animal plural form:\n");
	while(*aPtr != '\0')
	{
		printf("%c",*aPtr++);
	}
	printf("\nBird plural form:\n");
	while(*bPtr != 0)
	{
		printf("%c",*bPtr++);
	}
}
