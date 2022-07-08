#include "main.h"

/**
 * more_number - print 0 to 14 folloed by a newline
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int c, t;

	t = 0;
	while (t < 10)
	{
		c = 0;
		while (c < 15)
		{
			if (c > 9)
				_putchar(c / 10 + '0');

			_putchar(c % 10 + '0');
			c++;
		}
		_putchar(10);
		t++;
	}
}
