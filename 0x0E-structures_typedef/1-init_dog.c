#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: a struct of type struct dog
 * @name: dog's name input
 * @age: dog's age input
 * @owner: dog's owner name input
 *
 * Return: Nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d -> name = *name;
	d -> age = age;
	d -> owner = *owner;
}
