#include <stdio.h>
void main ()
{
	char letter;
	printf("Enter a letter of the alphabet: ");
	scanf("%c",&letter);
	switch(letter)
	{
		case 'A': case 'a':
			printf("Ada\n");
			break;
		case 'B': case 'b':
			printf("Basic\n");
			break;
		case 'C': case 'c':
			printf("Cobol\n");
			break;
		case 'D': case 'd': 
			printf("dBase III\n");
			break;
		case 'F': case 'f':
			printf("Fortran\n");
			break;
		case 'P': case 'p':
			printf("Pascal\n");
			break;
		case 'V': case 'v':
			printf("Visual C++\n");
			break;
		default:
			printf("The letter entered is not match any of the letter provided in data\n");
			break;
	}
}

