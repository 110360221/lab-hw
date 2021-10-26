#include <stdio.h>
#include <stdlib.h>

int main()
{
	float interest, prin, rate;
	int day;

	printf("enter loan principal: ");
	scanf_s("%f", &prin);
	while (prin != -1)
	{
		printf("enter interest rate: ");
		scanf_s("%f", &rate);
		printf("enter terms of the loan in days: ");
		scanf_s("%d", &day);
		interest = prin * rate * day / 365;
		printf("the interest charge is: %.2f\n", interest);
		printf("\nenter loan principal: ");
		scanf_s("%f", &prin);
	}

	return 0;
}