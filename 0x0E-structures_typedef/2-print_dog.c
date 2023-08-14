#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: struct dog object
 *
 * Return: Nothing
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (name == NULL)
		d->name == "(nil)";

	if (owner == NULL)
                d->owner == "(nil)";

	printf("Name: %s\nAge: %f\nowner: %s\n", d->name, d->age, d->owner);
}
