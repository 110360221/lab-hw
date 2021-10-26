#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("  |");
	for (int i = 1; i < 10; i++)
		printf("%3d", i);
	printf("\n-------------------------------\n");
	for (int i = 1; i < 10; i++)
	{
		printf("%d |", i);
		for (int j = 1; j < 10; j++) 
			printf("%3d", i * j);
		printf("\n");
	}
}