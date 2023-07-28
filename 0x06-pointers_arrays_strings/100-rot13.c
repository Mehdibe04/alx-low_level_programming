#include "main.h"

/**
 * rot13 - rotate by 13 places 'Caesar Cipher'
 *
 * @s: string input to be converted
 *
 * Return: converted string
*/

char *rot13(char *s)
{
	int i = 0, j;
	char *array1 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *array2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	while (s[i])
	{
		j = 0;
		while (array2[j])
		{
			if (array2[j] == s[i])
			{
				s[i] = array1[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
