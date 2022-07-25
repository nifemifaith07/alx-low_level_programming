#include "main.h"

/**
 * _strlen - fumction that returns lenght of a string
 * @s: string
 * Return: string lenght
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
