#include<stdio.h>
#include<stdlib.h>

double power(double, int);

void main(void)
{
	int k;
	double a;
	printf("�p��3.5��k����?�п�Jk=");
	scanf_s("%d", &k);
	a = power(3.5, k);
	printf("3.5��%d����=%f\n", k, a);
	system("pause");
}

double power(double x, int k)
{
	int i;
	double pxn = 1;
	for (i = 1; i <= k; i++)
		pxn = pxn * x;
	return pxn;
}