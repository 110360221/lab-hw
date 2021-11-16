//�e����, 1 = �̤U�L(�̤j)

#include<stdio.h>
#include<stdlib.h>

void hanoi(int n, char A, char B, char C) 
{
	if (n == 1)
	{
		printf("Move disk from %c to %c\n", A, C);
		//printf("%d\n", n);
	}
	else 
	{
		hanoi(n - 1, A, C, B); //printf("%d\n", n);
		hanoi(1, A, B, C);     //printf("%d\n", n);
		hanoi(n - 1, B, A, C); //printf("%d\n", n);
	}
}

int main() 
{
	int n;
	printf("�L�� = ");
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}