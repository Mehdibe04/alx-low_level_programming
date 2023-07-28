#include "main.h"
#include <stdio.h>

/**
 * rev_array - reverse array
 *
 * @n: input integer
 *
 * Return: Nothing
 */

void rev_array(char *n)
{
	int i = 0, j = 0;
	char tmp;

	while (*(n + i) != '\0')
		i++;
	i--;

	for (j = 0; j < i; j++, i--)
	{
		tmp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = tmp;
	}
}

/**
 * infinite_add - add 2 numbers
 *
 * @n1: string representation of first number
 * @n2: string representation of second number
 * @r: pointer to buffer
 * @size_r: buffer size
 *
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c = 0, i = 0, j = 0, dig = 0;
	int v1 = 0, v2 = 0, t = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || c == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		total = v1 + v2 + c;
		if (t >= 10)
			c = 1;
		else
			c = 0;
		if (dig >= (size_r - 1))
			return (0);
		r[dig] = (t % 10) + '0';
		dig++;
		j--;
		i--;
	}
	if (dig == size_r)
		return (0);
	r[dig] = '\0';
	rev_array(r);
	return (r);
}
