#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


double Calculate(double* arr_ptr)
{
	double sum = 0, var = 0;
	double* ptr = arr_ptr;

	for (int i = 0; i < 5; i++)
		sum += *(ptr++);

	ptr = arr_ptr;

	for (int i = 0; i < 5; i++)
		var += pow((*(ptr++) - (sum / 5)), 2);

	return sqrt(var / 5);
}

int main()
{
	double arr[5];

	printf("Enter 5 real numbers: ");

	for (int i = 0; i < 5; i++)
		scanf("%lf", &arr[i]);

	printf("Standard Deviation = %.3lf \n", Calculate(arr));
	return 0;
}
