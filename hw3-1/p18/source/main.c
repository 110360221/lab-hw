#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(void)
{
	char str1[60] = "WELCOME", str2[60];
	int len;

	strcpy(str2, str1);
	printf("string2 = %s\n", str2);

	len = strlen(str2);
	printf("�r����׬�%d\n", len);

	system("pause");
}