#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float w, h, bmi;
	printf("enter your weight(kg):");
	scanf_s("%f", &w);
	printf("enter your height(m):");
	scanf_s("%f", &h);
	bmi = w / (h * h);
	printf("%.2f\n", bmi);
	if (bmi < 18.5) printf("underweight\n");
	else if (bmi <24.9) printf("normal\n");
	else if (bmi < 29.9) printf("overweight\n");
	else  printf("obese\n");
	system("pause");
	return 0;
}