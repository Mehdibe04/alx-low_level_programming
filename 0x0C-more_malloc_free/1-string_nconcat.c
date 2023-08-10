#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat -  concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: int input
 *
 * Return: pointer to the concatenated array
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, lenS1, lenS2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (lenS1 = 0; s1[lenS1] != '\0'; lenS1++)
		;
	for (lenS2 = 0; s2[lenS2] != '\0'; lenS2++)
		;

	s = malloc(lenS1 + n + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
