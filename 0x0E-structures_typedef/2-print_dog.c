#include <stdio.h>
#include "dog.h"
#include <stdlib>

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

	if (d->name == NULL)
		d->name == "(nil)";

	if (d->owner == NULL)
                d->owner == "(nil)";

	printf("Name: %s\nAge: %f\nowner: %s\n", d->name, d->age, d->owner);
}
