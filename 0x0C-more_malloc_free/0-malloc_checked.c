#include "main.h"
#include <std.lib>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int parameter
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
