#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 except 2&4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		if (j == 50 || j == 52)
			continue;

		_putchar(j);
	}
	_putchar(10);
}
