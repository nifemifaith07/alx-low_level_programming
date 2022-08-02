#include "main.h"

/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf(Name: );
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf(Age: );
		d->age == NULL ? printf("(nil)\n") : printf("%f\n", d->age);
		printf(Owner: );
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
