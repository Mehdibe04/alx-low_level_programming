#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pass[7], *cdx;
	int l = strlen(argv[1]), j, t;

	cdx = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	t = (l ^ 59) & 63;
	pass[0] = cdx[t];
	t = 0;
	for (j = 0; j < l; j++)
		t += argv[1][j];
	pass[1] = cdx[(t ^ 79) & 63];
	t = 1;
	for (j = 0; j < l; j++)
		t *= argv[1][j];
	pass[2] = cdx[(t ^ 85) & 63];
	t = 0;
	for (j = 0; j < l; j++)
	{
		if (argv[1][j] > t)
			t = argv[1][j];
	}
	srand(t ^ 14);
	pass[3] = cdx[rand() & 63];
	t = 0;
	for (j = 0; j < l; j++)
		t += (argv[1][j] * argv[1][j]);
	pass[4] = cdx[(t ^ 239) & 63];
	for (j = 0; j < argv[1][0]; j++)
		t = rand();
	pass[5] = cdx[(t ^ 229) & 63];

	pass[6] = '\0';
	printf("%s", pass);
	return (0);
}
