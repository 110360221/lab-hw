#include<stdio.h>
#include<stdlib.h>

double power(double, int);

void main(void)
{
	int k;
	double a;
	printf("計算3.5的k次方?請輸入k=");
	scanf_s("%d", &k);
	a = power(3.5, k);
	printf("3.5的%d次方=%f\n", k, a);
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