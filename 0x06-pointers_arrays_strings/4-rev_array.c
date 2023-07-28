#include "main.h"

/**
 * reverse_array - reverses an array of integers
 *
 * @a: string input
 * @n: the size of the string
 *
 * Return: Nothing
*/

void reverse_array(int *a, int n)
{
	int i, j;
	int s;

	i = 0;
	j = n - 1;
	while (i < n / 2)
	{
		s = a[i];
		a[i] = a[j];
		a[j] = s;
		i++;
		j--;
	}
}
