#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c, d, e, cost;

	printf("total miles driven per day:");
	scanf_s("%f", &a);
	printf("cost per gallon of gassline:");
	scanf_s("%f", &b);
	printf("average miles per gallon:");
	scanf_s("%f", &c);
	printf("parking fees per day:");
	scanf_s("%f", &d);
	printf("tolls per day:");
	scanf_s("%f", &e);

	cost = (a / c) * b + d + e;
	printf("total cost per day: %.2f\n", cost);

	system("pause");
	return 0;
}