#include "main.h"

/**
 * rev_string - function that reverses string
 * @s: string parameter input
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len, i, tmp;

	for (len = 0; s[len] != '\0'; len++)
		;
	len--;
	i = 0;
	while (i < len)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		i++;
		len--;
	}
}
