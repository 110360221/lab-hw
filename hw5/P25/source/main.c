#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13], const char *wFace[], const char *wSuit[]);

int main(void)
{
	const char *suit[4] = { "Hearts","Diamonds","Clubs","Spades" };
	const char *face[13] = { "Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King" };
	int deck[4][13] = { 0 };
	srand(time(0));
	shuffle(deck);
	deal(deck, face, suit); 				//發完，列印全部
	system("pause");
	return 0;
}

void shuffle(int wDeck[][13])				//範圍固定，隨機
{
	int row,column,card;
	for ( card = 1; card <=52; card++)
	{
		do
		{
			row = rand() % 4;				//0~3  花色
			column = rand() % 13;			//0~12 數字
		} while (wDeck[row][column] != 0);  //直到找到沒有資料寫入的格子時(wDeck == 0)
		wDeck[row][column] = card;			//寫入card(數值)
	}
}

void deal(const int wDeck[][13], const char *wFace[], const char *wSuit[])
{
	int card, row, column;
	for ( card = 1; card <=52; card++)
	{
		for (row = 0; row <= 3; row++)
		{
			for ( column = 0; column < 12; column++)
			{
				if (wDeck[row][column] == card)
				{
					printf("%5s of %-8s%c", wFace[column], wSuit[row], card % 2 == 0 ? '\n' : '\t'); //按照card順序列印，發2張便換行(true -> '\n', false -> '\t')
				}
			}
		}
	}
}