#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string !
 * @s2: string 2
 *
 * Return: difference between the ASCII value of the first not matching characters
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
