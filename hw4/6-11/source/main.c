#include<stdio.h>
#include<stdlib.h>
//a �w�g�Ʀn�N���Φb�ˬd
//b �Ƥ��e���y�A��m��F�N���α��y

void bubblesort_a(int *p, int len)
{
	int i = 0;
	int j = 0;
	int ta = 0;
	for (i = 0; i < len - 1; i++) 			/*�C�ƧǤ@��A�h�ܤ֦��@�Ӥ����w�g���ǡA�� j<len-i-1 �i�H�Y�p�Ƨǽd�� */
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (p[j] > p[j + 1])            /*��e���������j��᭱�������ɡA�洫��m*/
			{
				int tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
			ta++;
		}
	}
	printf("(a): %d\n", ta);
}

void bubblesort_b(int *p, int len)
{
	int i = 0;
	int j = 0;
	int flag;
	int tb = 0;
	for (i = 0; i < len - 1; i++)
	{
		flag = 0;
		for (j = 0; j < len - 1 - i; j++) /*�C�ƧǤ@��A�h�ܤ֦��@�Ӥ����w�g���ǡA�� j<len-i-1 �i�H�Y�p�Ƨǽd�� */
		{
			if (p[j] > p[j + 1])          /*��e���������j��᭱�������ɡA�洫��m*/
			{
				int tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;           /*�Y�{���i�Jif�y�y,�h���M�|�o�ͥ洫�A��o�ͥ洫�ɧ�flag�m�� 1 */
				flag = 1;
			}
			tb++;
		}
		if (flag == 0) 		              /*�P�_,�p�Gflag=0�A�����W�@��ƧǨS���o�ͥ洫�A�ƦC�w�g���ǡAbreak*/
		{
			break;
		}
	}
	printf("(b): %d\n", tb);
}
int main()
{
	int num1[5] = { 1,2,9,4,5,};
	int num2[5] = { 1,2,9,4,5 };
	int n1 = sizeof(num1) / sizeof(int);
	int n2 = sizeof(num2) / sizeof(int);
	int i = 0;
	bubblesort_a(num1, n1);
	bubblesort_b(num2, n2);
	printf("\n(a) ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", num1[i]);
	}
	printf("\n(b) ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", num2[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}
