#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


char upper_to_lower(char ch)
{
    return ch + 32;
}

char lower_to_upper(char ch)
{
    return ch - 32;
}

int main()
{
    char str[101] = { '\n' };
    int len = 0;

    printf("Input : ");
    gets(str);

    for (int i = 0; str[i] != NULL; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = upper_to_lower(str[i]);
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = lower_to_upper(str[i]);
        }
    }

    printf("Output : ");
    puts(str);

    return 0;
}