#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	printf("enter 1 intergers : ");
	scanf_s("%d", &a);
	if (a % 2 == 0) //³Q2¾ã°£
	{
		printf("%d is even\n", a);
	}
	else
	{
		printf("%d is odd\n", a);
	}
	system("pause");
	return 0;
}