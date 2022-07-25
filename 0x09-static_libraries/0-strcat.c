#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination
 * @src: string to concatenate
 *
 * Return: resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
