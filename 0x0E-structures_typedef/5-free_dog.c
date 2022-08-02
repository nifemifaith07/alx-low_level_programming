#include "dog.h"

/**
 * free_dog - frees dog
 * @d: pointer to dog
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
