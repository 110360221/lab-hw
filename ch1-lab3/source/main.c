#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2;

	printf("enter 2 intergers, and i will tell you\n");
	printf("the relationship they satisfy: ");

	scanf_s("%d %d", &num1, &num2);

	if (num1 == num2)
	{
		printf("%d is equal to %d\n", num1, num2);
	}
	if (num1 != num2)
	{
		printf("%d is not equal to %d\n", num1, num2);
	}
	if (num1 < num2)
	{
		printf("%d is less to %d\n", num1, num2);
	}
	if (num1 > num2)
	{
		printf("%d is greater to %d\n", num1, num2);
	}
	if (num1 <= num2)
	{
		printf("%d is less than or equal to %d\n", num1, num2);
	}
	if (num1 >= num2)
	{
		printf("%d is greater than or equal to %d\n", num1, num2);
	}
	system("pause");
	return 0;
}