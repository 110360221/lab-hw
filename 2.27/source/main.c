#include <stdio.h>
#include <stdlib.h>

int main()
{
	for (int i = 1; i < 6; i++) //i�N���
	{
		for (int j = 1; j < 6 - i; j++) //j�t�d�Ů�
		{
			printf(" ");
		}
		for (int k = 1; k < 2*i; k++) //k�t�d*
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}