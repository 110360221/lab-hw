#include<stdio.h>
#include<stdlib.h>
//a 已經排好就不用在檢查
//b 排之前掃描，位置對了就不用掃描

void bubblesort_a(int *p, int len)
{
	int i = 0;
	int j = 0;
	int ta = 0;
	for (i = 0; i < len - 1; i++) 			/*每排序一趟，則至少有一個元素已經有序，用 j<len-i-1 可以縮小排序範圍 */
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (p[j] > p[j + 1])            /*當前面的元素大於後面的元素時，交換位置*/
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
		for (j = 0; j < len - 1 - i; j++) /*每排序一趟，則至少有一個元素已經有序，用 j<len-i-1 可以縮小排序範圍 */
		{
			if (p[j] > p[j + 1])          /*當前面的元素大於後面的元素時，交換位置*/
			{
				int tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;           /*若程式進入if語句,則必然會發生交換，當發生交換時把flag置成 1 */
				flag = 1;
			}
			tb++;
		}
		if (flag == 0) 		              /*判斷,如果flag=0，說明上一趟排序沒有發生交換，數列已經有序，break*/
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
