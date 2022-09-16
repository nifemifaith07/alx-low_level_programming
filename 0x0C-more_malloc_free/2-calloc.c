#include "main.h"

/**
 * _memset - fills memory area pointed by s with a constant byte b
 * @s: string pointer/ memory area
 * @b: constant byte to fill with
 * @n: no of bytes to fill with b
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int  i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array and sets it to 0
 * @nmemb: number of elements in the array
 * @size: size(bytes) of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);

	_memset(a, 0, nmemb * size);

	return (a);
}
