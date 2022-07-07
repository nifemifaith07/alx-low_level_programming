#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 * @void: no argument
 *
 * Return: Nothing
 */

void jack_bauer(void)
{
	int j, k;

	for (j = 0; j < 24; j++)
	{
		for (k = 0; k < 60; k++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(':');
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar('\n');
		}
	}
}
