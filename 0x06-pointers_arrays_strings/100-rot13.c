#include "main.h"

/**
 * rot13 - function that encodes a string into using rot13.
 * @str: pointer to string to be encoded.
 *
 * You can only use if statement once and only use two loops in your code.
 * You are not allowed to use switch.
 *
 * Return: pointer to the encoded string.
*/

char *rot13(char *str)
{
	int i, x = 0;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while ( str[x] != '\0')
	{
		for (i = 0; i <= 52; i++)
		{
			if (str[x] == alpha[i])
			{
				str[x] = rot13[i];
			}
		}
		x++;
	}
	return (str);
}
