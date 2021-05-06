#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pluralizer(char name[])
{
	int length, i;
	length = strlen(name);
	if(name[length - 1] == 'y')
	{
		name[length - 1] = 'i';
		strcat(name,"es");
	}
	else if(name[length - 1] == 's' 
	|| (name[length - 2] == 's' && name[length - 1] == 'h')
	|| (name[length - 2] == 'c' && name[length - 1] == 'h'))
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
//	printf("Plural form:\n%s\n%s",animalName,birdName);
}