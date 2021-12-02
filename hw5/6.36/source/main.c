#include <stdio.h>
#include <stdlib.h>

void reverse(char str[]);

int main()
{

	char str[90];

	printf("請輸入一個字串: ");
	gets(str);
	reverse(str);

	system("pause");
	return 0;
}
void reverse(char str[])
{
	int i = 0, j = 0;
	while (str[i] != '\0')  //計算總字元數
		i++;

	printf("轉換後的字串: ");

	for (j = i - 1; j >= 0; j--) 
		printf("%c", str[j]);
	printf("\n");
}