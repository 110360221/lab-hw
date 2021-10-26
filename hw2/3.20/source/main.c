#include <stdio.h>
#include <stdlib.h>

int main()
{
	float rate, salary;
	int hr;

	printf("enter # of hours worked: ");
	scanf_s("%d", &hr);
	while (hr != -1)
	{
		printf("enter the hours rate of the worker: ");
		scanf_s("%f", &rate);
		salary = hr * rate;
		printf("salary is: %.2f\n", salary);
		printf("\nenter # of hours worked: ");
		scanf_s("%d", &hr);
	}

	return 0;
}