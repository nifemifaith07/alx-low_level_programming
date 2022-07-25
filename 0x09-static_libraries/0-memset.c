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
