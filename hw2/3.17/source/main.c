#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e, nb;

	printf("enter account(-1 to end): ");
	scanf_s("%f", &a);
	while (a != -1)
	{
		printf("enter begining balance: ");
		scanf_s("%f", &b);
		printf("enter total charges: ");
		scanf_s("%f", &c);
		printf("enter total credit: ");
		scanf_s("%f", &d);
		printf("enter credit limit: ");
		scanf_s("%f", &e);

		nb = b + c - d;

		printf("account:\t%.2f\n", a);
		printf("credit limit:\t%.2f\n", e);
		printf("balance:\t%.2f\n", nb);

		if (nb > e) printf("credit limit exceeded\n");
		printf("\nenter account: ");
		scanf_s("%f", &a);
	}

	system("pause");
	return 0;
}