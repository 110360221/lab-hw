#include<stdio.h>
#include<stdlib.h>

int maximum(int x, int y, int z);

int main(void)
{
	int num1, num2, num3;
	printf("enter 3 integers: ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	printf("maximum is : %d\n", max(num1, num2, num3));

	system("pause");
}

int maximum(int x, int y, int z)
{
	int max = x;
	if (y > max)
		max = y;
	if (z > max)
		max = z;
	return max;
}
