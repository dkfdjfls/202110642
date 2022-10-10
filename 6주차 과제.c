#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void binary(int i)
{
	if (i == 0)
		return;

	binary(i / 2);

	printf("%d", i % 2);
}



int main()
{
	int a;


	printf("Please enter a number: ");
	scanf("%d", &a);

	binary(a);
}