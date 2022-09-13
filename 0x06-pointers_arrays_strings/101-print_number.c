#include "main.h"

/**
 * print_number - print an integer using _putchar only
 * @n: integer to be printed
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if ((i / 10) > 0)
		print_number(i / 10);

	_putchar(i % 10 + '0');
}
