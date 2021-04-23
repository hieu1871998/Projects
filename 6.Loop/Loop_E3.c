#include<stdio.h>
#include<stdlib.h>

void main()
{
	int a = 0,b = 1,i,n;
	int c = 0;
//	printf("Limit: ");
//	scanf("%d",&n);
//	for(i = 1;i <= n;++i)
	for(i = 1;c <= 13;++i)
	{
		if(c != 0)
		{
			printf("%d,",c);
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("...");
}
