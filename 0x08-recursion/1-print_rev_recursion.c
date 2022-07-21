#include "main.h"

/**
 * _print_rev_recursion - prints in reverse
 * @s: string
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
