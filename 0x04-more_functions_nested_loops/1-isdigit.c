#include "main.h"

/**
 * _isdigit - check if c is a digit
 *
 * @c: input of the function
 *
 * Return: 1 is c is a digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
