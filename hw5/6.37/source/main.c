#include<stdio.h>
#include<stdlib.h>

int arr_max(char arr[])
{
	int max = 0;
	int i = 0;
	while (arr[i] != '\0')
	{
		if (max < arr[i])
			max = arr[i];
		i++;
	}
	return max;
}

int main()
{
	char a[] = {5,6,2,1,7,3,1,4,11,12,9,0};
	int m;
	m = arr_max(a);
	printf("%d\n", m);

	system("pause");
}