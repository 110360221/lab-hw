#include<stdio.h>
#include<stdlib.h>

typedef struct _st
{
	char num[7];
	char class[20];
	char name[20];
	int score[3];
}st;

void sub(st *p)
{
	for (int i = 0; i < 3; i++)
	{
		(p + i)->score[0] += 10;
		(p + i)->score[1] += 10;
		(p + i)->score[2] += 10;
	}
}

int main()
{
	int i;
	st stud[3] = { {"970101", "四子一甲","王小明",61,71,81},
					{"970102", "四子一甲","李雄中",92,82,72} ,
					{"970103", "四子一甲","張大成",73,63,83} };

	st *ps;
	ps = stud;
	printf("\n");
	printf("===========================================================\n");
	printf("  學號  班級\t姓名\t   國文   英文   社學\n");
	printf("===========================================================\n");

	for (i = 0; i < 3; i++)
	{
		printf("%6s %-10s %-8s %4d %4d %4d\n",
			(ps + i)->num, (ps + i)->class, (ps + i)->name,
			(ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}

	printf("\t呼叫函式前\n\n");
	sub(ps);
	printf("\t呼叫函式後\n\n");

	for (i = 0; i < 3; i++)
	{
		printf("%6s %-10s %-8s %4d %4d %4d\n",
			(ps + i)->num, (ps + i)->class, (ps + i)->name,
			(ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}

	printf("\n");
	printf("pause");
	return 0;
}