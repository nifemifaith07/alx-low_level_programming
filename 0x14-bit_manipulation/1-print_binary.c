#include "main.h"

/**
 * _Length - finds length of an integer by getting 
 * the number of times the integer can be divided by 2
 * @n: integer parameter
 *
 * Return: length of integer in bit
 */

int _Length(unsigned long int n)
{
	int len = 0;

	while (n > 0)
	{
		len++;
		n >>= 1; /* same as n / 2 */
	}
	len--;

	return (len);
}

/**
 * print_binary - prints binary rep of an integer
 * @n: number to be represented
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int post = 1; /* position of bit in integer */
	int len;

	len = _Length(n);

	if (len > 0) /* create position based on len of integer */
		post <<= len; /* shift position to left by len */

	while (post > 0)
	{
		if (n & post) /* print 1 if true */
			_putchar('1');
		else /* print 0 if false */
			_putchar('0');

		post >>= 1; /* shift position to right by 1 */
	}
}
