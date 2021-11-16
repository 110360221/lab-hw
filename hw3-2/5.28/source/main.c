//¦r¥À¤j¤p¼gÂà´«
#include<stdio.h>
#include<stdlib.h>

int alphaber(char a);

int main()
{
	while (1)
	{
		char b;
		scanf_s("%c", &b);
		alphaber(b);
	}

	system("pause");
	return 0;
}

int alphaber(char a)
{
	if (a >= 'A' && a <= 'Z')
	{
		a = a + 32;
		printf("%c", a);
	}

	else if (a >= 'a' && a <= 'z')
	{
		a = a - 32;
		printf("%c", a);
	}
	return a;
}