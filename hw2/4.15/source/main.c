#include <stdio.h>
#include <stdlib.h>

int main()
{
	float intersest = 5000, rate = 0.1;
	int i;

	for (i = 0; i < 15; i++)
	{
		printf("year : %d  ", i + 1);
		printf("rate = %.2f  f", rate);
		intersest = intersest + intersest * rate;
		printf("interest = %.2f\n", intersest);
		rate += 0.05; 
	}

}