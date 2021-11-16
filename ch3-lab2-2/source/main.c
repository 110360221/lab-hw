#include<stdio.h>
#include<stdlib.h>

long int re_fac(int a);

int main(void)
{
	int m, n;
	long int ans, a, b, c;

	printf("求排列組合c(m,n)\n");
	printf("m=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);

	a = re_fac(m);
	b = re_fac(n);
	c = re_fac(m - n);

	ans = a / (b*c);
	printf("c(%d,%d)=%d\n", m, n, ans);

	system("pause");
}

long int re_fac(int p)
{
	if (p > 1)
	{
		long int result = p * re_fac(p - 1);
		return result;
	}
	else
	{
		return 1;
	}
}