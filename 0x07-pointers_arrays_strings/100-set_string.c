#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: double pointer input
 * @to: pointer input
 *
 * Return: Nothing
*/

void set_string(char **s, char *to)
{
	**to = *s;
}
