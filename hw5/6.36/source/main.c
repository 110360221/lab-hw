#include <stdio.h>
#include <stdlib.h>

void reverse(char str[]);

int main()
{

	char str[90];

	printf("�п�J�@�Ӧr��: ");
	gets(str);
	reverse(str);

	system("pause");
	return 0;
}
void reverse(char str[])
{
	int i = 0, j = 0;
	while (str[i] != '\0')  //�p���`�r����
		i++;

	printf("�ഫ�᪺�r��: ");

	for (j = i - 1; j >= 0; j--) 
		printf("%c", str[j]);
	printf("\n");
}