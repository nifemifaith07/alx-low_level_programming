#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @c: number
 *
 * Return: value of the last digit
 */

int print_last_digit(int c)
{
	int ld = c % 10;

	if (c < 0)
		ld = 0 - ld;
	_putchar(ld + '0');
	return (ld);
}
