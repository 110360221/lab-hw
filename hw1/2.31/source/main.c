#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	printf("table\tsquare\tcube\n"); //1���� 2����  3����
	for (int i = 0; i < 11; i++)
	{
		int a, b;
		a = i * i;
		b = i * i * i;
		printf("%d\t%d\t%d\n", i, a, b);
	}
	/*printf("table\tsquare\tcube\n"); //1���� 2����  3����
	for (float j = 0; j < 11; j++)
	{
		printf("%.1f\t%.1f\t%.1f\n", j, pow(j,2), pow(j,3)); //pow�Ω�B�I��
	}*/
	system("pause");
	return 0;
}