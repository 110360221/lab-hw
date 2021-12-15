#include<stdio.h>
#include<stdlib.h>
#include"info.h"

int main()
{
	person person;
	printf("please input your name: ");
	scanf_s("%s", &person.name, 8);
	printf("please input your gerder: 0 for man , 1 for woman ");
	scanf_s("%d", &person.gender);
	printf("please input your age: ");
	scanf_s("%d", &person.age);

	printf("\nhi! %s\n", person.name);

	if (person.gender == 0)
		printf("you are %d-year-old man.\n", person.age);
	else
		printf("you are %d-year-old woman.\n", person.age);

	system("pause");
}