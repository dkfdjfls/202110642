#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{

    int n;

    printf("Please enter a number : ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)  
        {
            printf("It is not a prime number.");
            return 0;
        }
    }

    printf("It is a prime number.");

    return 0;
}