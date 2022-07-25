#include "main.h"

/**
 * _strpbrk - search a string for any set of bytes
 * @s: string
 * @accept: set of bytes to search for
 *
 * Return: pointer to byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
