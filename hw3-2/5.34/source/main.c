#include<stdio.h>
#include<stdlib.h>

float power(float bi, int ei);

int main()
{
	float b;
	int e;
	printf("輸入底數, 次方 = ");
	scanf_s("%f %d", &b, &e);
	printf("結果為:%f\n", power(b, e));

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