#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: pointer to the string
 */

char *leet(char *s)
{
	int y, i = 0;
	char src[] = {'a', 'A', 'E', 'e', 't', 'T', 'l', 'L', 'o', 'O'};
	char sub[] = {'4', '4', '3', '3', '7', '7', '1', '1', '0', '0'};

	while (s[i])
	{
		for (y = 0; y < 10; y++)
		{
			if (s[i] == src[y])
			{
				s[i] = sub[y];
			}
		}
		i++;
	}
	return (s);
}
