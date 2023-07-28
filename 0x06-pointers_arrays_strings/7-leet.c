#include "main.h"

/**
 * leet - take strings and capitalize words
 *
 * @str: string input to be capitalized
 *
 * Return: capitalized string
 */
char *leet(char *str)
{
	int i = 0, j;
	char stg[] = "aAeEoOtTlL4433007711";

	while (*(str + i) != '\0')
	{
		for (j = 0; stg[j] != '\0'; j++)
		{
			if (str[i] == stg[j])
			{
				str[i] = stg[j + 10];
				break;
			}
		}
		i++;
	}
	return (str);
}
