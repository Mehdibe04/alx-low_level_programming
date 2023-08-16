#include "3-calc.h"

/**
 * op_add - returns sum of a and b
 *
 * @a: first input
 * @b: second input
 *
 * Return: result of a plus b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference between a and b
 *
 * @a: first input
 * @b: second input
 *
 * Return: result of the difference
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns a multiplied by b
 *
 * @a: first input
 * @b: second input
 *
 * Return: result of the multiplication
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns a divided by b
 *
 * @a: first input
 * @b: second input
 *
 * Return: result of the division
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of a divided by b
 *
 * @a: first input
 * @b: second input
 *
 * Return: remainder of the division
*/

int op_mod(int a, int b)
{
	return (a % b);
}
