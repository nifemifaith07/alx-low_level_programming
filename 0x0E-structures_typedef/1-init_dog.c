#include "dog.h"

/**
 * init_dog - initialises a variable of type struct dog
 * @d:
 * @name:
 * @age:
 * @owner:
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
