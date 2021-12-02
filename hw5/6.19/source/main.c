#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int a[11] = { 0 };
	int i, j, x, y, z;

	srand(time(NULL));

	for (i = 0; i < 36000; i++) //36000¦¸
	{
		x = (rand() % 6) + 1;  //2~12
		y = (rand() % 6) + 1;
		z = x + y;
		for (j = 2; j < 13; j++)
			if (z == j) a[j-2]++;
	}

	for (i = 0; i < 11; i++)
		printf("%d = %d\n",i+2 ,a[i]);

	system("pause");
}