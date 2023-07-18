#include "main.h"

/**
 * _islower - function to check if character is lowercase
 *
 * @c: checks input of function
 *
 * Return: 1 if c is lowercase
 *         0 otherwise (Success)
*/

int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
		if (i == c)
			return (1);
	return (0);
}
