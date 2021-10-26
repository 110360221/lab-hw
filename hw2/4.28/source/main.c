#include <stdio.h>
#include <stdlib.h>

int main()
{
	float manager_s, hourly_s, commission_s, piece_s, ws, hs;
	float hour, price;
	int code,amount;
	int weekly_sale;

	printf("enter paycode: ");
	scanf_s("%d", &code);

	while (code == 1 || code == 2 || code == 3 || code == 4)
	{
		switch (code)
		{
			case 1:   //manager
			{
				printf("enter the weekly salary: "); //weekly salary 
				scanf_s("%f", &ws);
				manager_s = ws * 1;
				printf("manager's salary is : %.2f\n", manager_s);
				printf("\nenter paycode: ");
				scanf_s("%d", &code);
				break;
			}

			case 2:  //hourly
			{
				printf("enter the hourly salary: "); //hourly salary 
				scanf_s("%f", &hs);
				printf("enter the hours th worker work: "); //hour
				scanf_s("%f", &hour);
				if (hour > 40)
				hourly_s = hs * 40 + 1.5 * ((int)hour - 40) *hs;
				if (hour <= 40)
				hourly_s = hs * hour;
				printf("hourly worker's salary is : %.2f\n", hourly_s);
				printf("\nenter paycode: ");
				scanf_s("%d", &code);
				break;
			}

			case 3:  //commission
			{
				printf("enter the gross weekly sale: "); //sale 
				scanf_s("%d", &weekly_sale);
				commission_s = 250 + 0.057 * weekly_sale;  
				printf("commission worker's salary is : %.2f\n", commission_s);
				printf("\nenter paycode: ");
				scanf_s("%d", &code);
				break;
			}

			case 4: //piece
			{
				printf("enter the price per item: "); //sale 
				scanf_s("%f", &price);
				printf("enter the amount of the item: "); //sale 
				scanf_s("%d", &amount);
				piece_s = price * amount;
				printf("pieceworker's salary is : %.2f\n", piece_s);
				printf("\nenter paycode: ");
				scanf_s("%d", &code);
				break;
			}
		}
	}

	system("pause");
	return 0;
}