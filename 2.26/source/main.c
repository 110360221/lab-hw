#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	printf("enter 2 intergers :");
	scanf_s("%d%d", &a, &b);
	if (b % a == 0) //b�Qa�㰣
	{
		printf("%d is a multiple of %d", a, b);
	}
	else
	{
		printf("%d is not a multiple of %d", a, b);
	}
	system("pause");
	return 0;
}