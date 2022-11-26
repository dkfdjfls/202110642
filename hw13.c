#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef struct
{
	char name[20];
	char country[20];
	int pop;
}Informa;

int main()
{
	Informa arr[3];
	int i;

	printf("Input three cities: \n");
	for (i = 0; i < 3; i++)
	{
		printf("Name> ");
		scanf(" %[^\n]s", &arr[i].name);
		printf("Contry> ");
		scanf(" %[^\n]s", &arr[i].country);
		printf("Population> ");
		scanf(" %d", &arr[i].pop);
	}

	printf("\nPrinting the three cities: \n");
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people \n", i+1, arr[i].name, arr[i].country, arr[i].pop);
	}
}