#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a = 0, b = 0;
	float c;

	for (a = 1; a < 500; a++)
	{
		for (b = a; b < 500; b++)
		{
			c = sqrt(a * a + b * b);
			if (c == (int)c && c < 500)
				printf("%d\n", (int)c);
		}
	}

	system("pause");
	return 0;
}