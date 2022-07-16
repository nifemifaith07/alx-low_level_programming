#include "main.h"

/**
 * print_rev - prints string in reverse, followed by newline
 * @s: string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;


	len--;
	while (len  >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
