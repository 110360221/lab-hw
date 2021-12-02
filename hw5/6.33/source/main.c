#include<stdio.h>
#include<stdlib.h>
#define size 50

int b_search(char arr[], int left, int right, int key)
{
	if (left > right)
		return -1;

	int mid = left + (right - left) / 2;
	if (key < arr[mid])
	{
		 return b_search(arr, left, mid + 1, key);
	}

	else if (key  > arr[mid])
	{
		 return b_search(arr, mid + 1, right, key);
	}
	else
	{
		return mid;                 //程浪代单琌计穓碝猵ぃ琌璶ぃ碞
	}

}
int main()
{
	char r[size+1] = { 0 };
	int k, tar, i;

	for (i = 0; i < size; i++)
		r[i] = i;

	printf("稱т计(0~%d):", size-1);
	scanf("%d", &k);
	tar = b_search(r, 0, size-1, k);
	if (tar == -1) printf("⊿т");
	printf("%d皚材%d竚\n", k, tar+1);

	system("pause");
}
