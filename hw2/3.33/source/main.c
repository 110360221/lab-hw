#include <stdio.h>
#include <stdlib.h>

int main()
{
	int wideth, length, i, j;

	printf("enter wideth: "); 
	scanf_s("%d", &wideth);
	printf("enter length: ");
	scanf_s("%d", &length);

	for (i = 1; i <= wideth; i++)
	{
		for (j = 1; j <= length; j++)
		{
			if (i == 1 || i == wideth || j == 1 || j == length)
				printf("+ ");
			else
				printf("  ");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}