#include<stdio.h>
#include<stdlib.h>

float power(float bi, int ei);

int main()
{
	float b;
	int e;
	printf("��J����, ���� = ");
	scanf_s("%f %d", &b, &e);
	printf("���G��:%f\n", power(b, e));

	system("pause");
}

float power(float bi, int ei)
{
	if (ei > 0)
	{
		bi = bi * power(bi, ei - 1);
		return bi;
	}
	else
		return 1;
}