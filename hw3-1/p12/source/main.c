#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x;

	for (x = 1; x <= 10; x++)
	{
		printf("%d ", square(x));
	}
	printf("\n");
	system("pause");
}

int square(int y)
{
	return y*y;
}