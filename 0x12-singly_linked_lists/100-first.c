#include <stdio.h>

void _const(void) __attribute__ ((constructor));

/**
 * _const - prints a sentence before the main
 * function is executed
 */

void _const(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
