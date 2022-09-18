#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double num1;
	double result;
	printf("please enter kilometers: ");
	scanf("%lf", &num1);

	result = num1 / 1.609;

	printf("%.1f km is equal to %.1f miles ", num1, result);

	return 0;
}