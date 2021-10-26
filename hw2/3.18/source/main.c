#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float sale, salary;

	printf("enter account(-1 to end): ");
	scanf_s("%f", &sale);
	salary = 200 + 0.9 * sale;

	while (sale != -1)
	{
		printf("salary is : $ %.2f\n", salary);
		printf("enter account(-1 to end): ");
		scanf_s("%f", &sale);
	}

	system("pause");
	return 0;
}