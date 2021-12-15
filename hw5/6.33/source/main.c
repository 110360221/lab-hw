#include<stdio.h>
#include<stdlib.h>
#define size 50

int b_search(char arr[], int left, int right, int key)
{
	if (left > right || key > right)
		return -1;

	int mid = left + (right - left) / 2;
	if (key < arr[mid])
	{
		 return b_search(arr, left, mid, key);
	}

	else if (key  > arr[mid])
	{
		 return b_search(arr, mid, right, key);
	}
	else
	{
		return mid;                 //�̫��˴��۵��O�]���h�Ʒj�M���p���O�j��n���N�p��
	}

}
int main()
{
	char r[size+1] = { 0 };
	int k, tar, i;

	for (i = 0; i < size; i++)
		r[i] = i;

	printf("�Q�䪺�Ʀr(0~%d):", size-1);
	scanf("%d", &k);
	tar = b_search(r, 0, size-1, k);
	if (tar == -1) printf("�S���\n");
	else printf("%d�b�}�C��%d��m\n", k, tar+1);

	system("pause");
}
