#include "main.h"

/**
 * _memcpy - copies nbytes from memory area src to dest
 * @src:memeory area to copy from
 * @dest: memory area to copy to
 * @n: no of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
