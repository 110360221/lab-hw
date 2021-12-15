#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	typedef struct _dates
	{
		int years, month, day;
	}dates;

	typedef struct _order
	{
		char num[11];
		dates  date;
		int amount;
	}order;

	order o1 = { "ahk08a1024", {1994,3,8}, 1487 };
	order o2 = { "usa08a1025", {2015,5,20}, 54530 };
	order o3 = { "unk08a1028", {2020,8,7}, 6638613 };

	printf("     *******************\n");
	printf("     *     訂單資料    *\n");
	printf("     *******************\n");

	printf("================================\n");
	printf("訂單編      訂貨日期     訂貨金額\n");
	printf("================================\n");

	printf("%-10s %8d/%02d/%02d  NT$%10d\n", o1.num, o1.date.years, o1.date.month, o1.date.day, o1.amount);
	printf("%-10s %8d/%02d/%02d  NT$%10d\n", o2.num, o2.date.years, o2.date.month, o2.date.day, o2.amount);
	printf("%-10s %8d/%02d/%02d  NT$%10d\n", o3.num, o3.date.years, o3.date.month, o3.date.day, o3.amount);
	printf("\n\n");

	printf("pause");
	return 0;
}