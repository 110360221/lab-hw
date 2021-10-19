#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, max, min;
	printf("enter 3 intergers :\n");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b)
	{
		if (b > c) //a>b>c
		{
			max = a;
			min = c;
		}
		else
		{
			if (a > c) //a>c>b
			{
				max = a;
				min = b;

			}
			else //c>a>b
			{
				max = c;
				min = b;
			}
		}
	}
	else //b>a>c
	{
		if (a > c)
		{
			max = b;
			min = c;
		}
		else
		{
			if (b > c) //b>c>a
			{
				max = b;
				min = a;
			}
			else //c>b>a
			{
				max = c;
				min = a;
			}
		}
	}
	printf("%d is the largest\n", max);
	printf("%d is the smallest\n", min);

	system("pause");
	return 0;
}