#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string parameter
 * @c: character to find
 *
 * Return: pointer to first occurence of c in string or
 * NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
