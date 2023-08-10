#include "main.h"

/**
 * _isdigit - checks if character is digit
 *
 * @c: the character to check
 *
 * Return: 1 if digit, 0 otherwise
*/

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 *
 * @s: the string whose length to check
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);
}

/**
 * _mult - multiply two big number strings
 *
 * @s1: the first big number string
 * @s2: the second big number string
 *
 * Return: the product big number string
*/

char *_mult(char *s1, char *s2)
{
	char *s;
	int l, ll, x, y, z, n;

	l = _strlen(s1);
	ll = _strlen(s2);
	s = malloc(x = n = l + ll);
	if (!s)
		printf("Error\n"), exit(98);
	while (x--)
		s[x] = 0;

	for (l--; l >= 0; l--)
	{
		if (!_isdigit(s1[l]))
		{
			free(s);
			printf("Error\n"), exit(98);
		}
		x = s1[l] - '0';
		z = 0;

		for (ll = _strlen(s2) - 1; ll >= 0; ll--)
		{
			if (!_isdigit(s2[ll]))
			{
				free(s);
				printf("Error\n"), exit(98);
			}
			y = s2[ll] - '0';

			z += s[l + ll + 1] + (x * y);
			s[l + ll + 1] = z % 10;

			z /= 10;
		}
		if (z)
			s[l + ll + 1] += z;
	}
	return (s);
}


/**
 * main - multiply two big number strings
 *
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	char *s;
	int x, y, z;

	if (argc != 3)
		printf("Error\n"), exit(98);

	z = _strlen(argv[1]) + _strlen(argv[2]);
	s = _mult(argv[1], argv[2]);
	y = 0;
	x = 0;
	while (y < z)
	{
		if (s[y])
			x = 1;
		if (x)
			_putchar(s[y] + '0');
		y++;
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(s);
	return (0);
}
