#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 7

int main(void)
{
	int face, roll;
	int fre[size] = { 0 };

	srand(time(NULL));

	for (roll = 1; roll <= 6000; roll++)
	{
		face = 1 + rand() % 6;
		++fre[face];
	}

	printf("%s%17s\n", "face", "frequency");

	for (face = 1; face < size; face++)
		printf("%4d%17d\n", face, fre[face]);

	system("pause");
	return 0;
}