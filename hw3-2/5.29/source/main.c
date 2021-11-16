//程そ计

#include<stdio.h>
#include<stdlib.h>

int lcm(int x, int y);

int  main()
{
	int a=0, b=0;

	printf("块2计:");
	scanf_s("%d%d", &a, &b);

	printf("程そ计 = %d\n", lcm(a, b));
	system("pause");
	return 0;
}

int lcm(int x, int y)
{
	int i, j;
	for (i = x; i < 9999999999999999999; i += x)
	{
		for (j = y; j < 9999999999999999999; j += y)
		{
			if (i == j)
				return i;
		}
	}
}