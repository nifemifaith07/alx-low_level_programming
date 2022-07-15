#include "main.h"
/**
 * _strncat - cincatenates two strings using at most nbytes from src 
 * @src: string to concatenate
 * @dest: destination
 * @n: number of bytes of strings
 *
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
