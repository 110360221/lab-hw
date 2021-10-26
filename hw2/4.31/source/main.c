#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k;

	for (i = 0; i < 5; i++)  // 上半部(包括最寬)
	{
		for (k = 0; k < (5 - i); k++)
		{
			printf(" ");
		}
		for (j = 0; j < (2 * i - 1); j++)
		{
			printf("*");
		}
		printf("\n ");
	}
	for (i = 5; i > 0; i--)  //下半部
	{
		for (k = 0; k < (5 - i); k++)
		{
			printf(" ");
		}
		for (j = 0; j < (2 * i - 1); j++)
		{
			printf("*");
		}
		printf("\n ");
	}

	system("pause");
	return 0;
}

/*int main()
{
	int i, j, k, num, len;
	printf("enter an odd number(between 1 and 19): ");
	scanf_s("%d", &num);
	len = num / 2 + 1;

	while (num % 2 == 0)
	{
		printf("it's not an odd number, please try again.\n");
		printf("enter an odd number(between 1 and 19): ");
		scanf_s("%d", &num);
	}

	while (num > 19)
	{
		printf("it's over 19, please try again.\n");
		printf("enter an odd number(between 1 and 19): ");
		scanf_s("%d", &num);
	}

	if(num % 2 == 1 && num <= 19)
	{
		for (i = 0; i < len; i++)
		{
			for (k = 0; k < (len - i); k++)
			{
				printf(" ");
			}
			for (j = 0; j < (2 * i - 1); j++)
			{
				printf("*");
			}
			printf("\n ");
		}
		for (i = len; i > 0; i--)
		{
			for (k = 0; k < (len - i); k++)
			{
				printf(" ");
			}
			for (j = 0; j < (2 * i - 1); j++)
			{
				printf("*");
			}
			printf("\n ");
		}
	}

	system("pause");
	return 0;
}*/