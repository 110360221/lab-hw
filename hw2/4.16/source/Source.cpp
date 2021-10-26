#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k;

	printf("(1)\n");
	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	printf("(2)\n");
	for (i = 0; i < 11; i++)
	{
		for (j = 10; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("(3)\n");
	for (i = 0; i < 11; i++)
	{
		for (k = 11; k > (11 - i); k--)
			printf(" ");
		for (j = 10; j > i; j--)
			printf("*");
		printf("\n");
	}

	printf("(4)\n");
	for (i = 0; i < 11; i++)
	{
		for (k = 1; k < (11 - i); k++)
			printf(" ");
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}