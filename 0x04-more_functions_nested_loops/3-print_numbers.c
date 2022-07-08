#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar(10); /* 10 is ASCII for newline */
}
