#include <stdio.h>
#include <stdlib.h>

int odd(int u);
int even(int u);
int totalsum(int u);

int main(void)
{
	int n, sum;
	char add;
	printf("1+2+...+n=?�п�Jn=");
	scanf_s("%d", &n);
	printf("�аݭn���M�N�M(o),���ƩM(e), �٬O��ƩM(i)?�п��:");
	scanf_s(" %c", &add);

	switch (add)
	{
	case 'o':
		sum = odd(n);
		break;
	case 'e':
		sum = even(n);
		break;
	case 'i':
		sum = totalsum(n);
		break;
	default:
		printf("��ܿ��~");
		return -1;
	}
	printf("�`�X��%d\n", sum);
	system("pause");
	return 0;
}


int odd(int u)
{
	int i, total = 0;
	for (i = 1; i <= u; i++)
		if (i % 2 == 1)
			total = total + i;
	return total;
}

int even(int u)
{
	int i, total = 0;
	for (i = 1; i <= u; i++)
		if (i % 2 == 0)
			total = total + i;
	return total;
}

int totalsum(int u)
{
	return odd(u) + even(u);
}