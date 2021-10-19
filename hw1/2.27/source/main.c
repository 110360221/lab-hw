#include <stdio.h>
#include <stdlib.h>

int main()
{
	for (int i = 1; i < 6; i++) //i代表行
	{
		for (int j = 1; j < 6 - i; j++) //j負責空格
		{
			printf(" ");
		}
		for (int k = 1; k < 2*i; k++) //k負責*
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}