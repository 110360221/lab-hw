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
	deal(deck, face, suit); 				//�o���A�C�L����
	system("pause");
	return 0;
}

void shuffle(int wDeck[][13])				//�d��T�w�A�H��
{
	int row,column,card;
	for ( card = 1; card <=52; card++)
	{
		do
		{
			row = rand() % 4;				//0~3  ���
			column = rand() % 13;			//0~12 �Ʀr
		} while (wDeck[row][column] != 0);  //������S����Ƽg�J����l��(wDeck == 0)
		wDeck[row][column] = card;			//�g�Jcard(�ƭ�)
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
					printf("%5s of %-8s%c", wFace[column], wSuit[row], card % 2 == 0 ? '\n' : '\t'); //����card���ǦC�L�A�o2�i�K����(true -> '\n', false -> '\t')
				}
			}
		}
	}
}