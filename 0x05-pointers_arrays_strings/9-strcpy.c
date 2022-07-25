#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including (\0),
 * to the buffer pointed to by dest
 * @dest: destination pointer
 * @src: string pointer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
		len++;
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
