#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: string input
 *
 * Return: the length of s
*/

int _strlen(const char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);
}

/**
 * _strcpy - copy the content of a string to another one
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: the destination of the copied string
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 *
 * Return: a pointer to a dog_t data type variable
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || age < 0 || !owner)
		return (NULL);

	d = (dog_t *) malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(_strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(_strlen(owner + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}

	d->name = _strcpy(d->name, name);
	d->age = age;
	d->owner = _strcpy(d->owner, owner);

	return (d);
}
