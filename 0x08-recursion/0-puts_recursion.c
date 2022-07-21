#include "main.h"

/**
 * _puts_recursion - prints a string followed by a newlime
 * @s: string
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else if (*s == '\0')
		_putchar(10);
}
