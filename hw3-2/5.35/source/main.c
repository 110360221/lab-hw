//�O��ƦC: (a)����recursive,unsigned int �d�� (b)�C�L�X�̤j���O�ƭ�
//unsigned int �̤j4294967295
//unsigned long long �̤j18446744073709551615 
//                       15502175190115679

#include<stdio.h>
#include<stdlib.h>

//int face();

int main()
{
	printf("(b)\nlargest = %d\n", face());

	system("pause");
}

int face()
{
	int n = 9999;
	int max = 0, i = 2;
	int f[10000];
	f[0] = 0;
	f[1] = 1;
	while (max == 0 && i <= n)
	{
		f[i] = f[i - 1] + f[i - 2];
		//printf("%d %u ",i , f[i]);
		if (f[i] < 0)
			max = f[i - 1];
		//printf("%d\n", max);
		i++;
	}

	return max;
}