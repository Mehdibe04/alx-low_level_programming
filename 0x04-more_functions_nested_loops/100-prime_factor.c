#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prints the largest prime number
 *              of the number given
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 2, size = 0;
	int *PRIME = NULL;
	long long n = 612852475143, new_n;
	int LPrime = 0;

	new_n = n;
	while (i)
	{
		if (is_prime(i))
		{
			while (new_n % i == 0)
			{
				size++;
				PRIME = (int *)realloc(PRIME, size * sizeof(int));
				PRIME[size - 1] = i;
				new_n /= i;
			}
		}
		if (is_prime(new_n))
		{
			size++;
			PRIME = (int *)realloc(PRIME, size * sizeof(int));
			PRIME[size - 1] = new_n;
			break;
		}
		i++;
	}
	printf("Prime Factors: ");
	for (int k = 0; k < size; k++)
		printf("%d ", PRIME[k]);
	printf("\n");
	for (int k = 0; k < size; k++)
	{
		if (PRIME[k] > LPrime)
			LPrime = PRIME[k];
	}
	printf("Largest Prime Factor: %d\n", LPrime);
	free(PRIME);
	return (0);
}
