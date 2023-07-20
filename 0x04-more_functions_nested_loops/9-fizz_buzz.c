#include <stdio.h>

/**
 * main - prints numbers 1 to 100 followed by a new line
 *        numbers that are miltiples of 3 print Fizz
 *        numbers that are multiples of 5 print Buzz
 *        numbers that are multiples of both 3 and 5 print FizzBuzz
 *        each number and word to be followed by a space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 1;

	while (i < 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
		i++;
	}
	printf("Buzz\n");

	return (0);
}
