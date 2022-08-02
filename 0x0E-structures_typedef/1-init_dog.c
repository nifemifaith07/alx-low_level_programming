#include "dog.h"

/**
 * init_dog - initialises a variable of type struct dog
 * @d: pointer to strut dog
 * @name: pointer to dog name
 * @age: dog age
 * @owner: pointer to dog's owner
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
