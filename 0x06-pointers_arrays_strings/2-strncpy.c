#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: string to copy
 * @n: number of bytes of string
 * Return: pointer to resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for ( ; i < n; i++)
	{	
		dest[i] = '\0';
	}
	return (dest);
}
