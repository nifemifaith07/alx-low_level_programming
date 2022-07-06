#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * @void: no argument
 *
 * Return: Nothing
 */

void times_table(void)
{
	int j, mp, k;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			mp = j * k;
			if (k == 0)
				_putchar(mp + '0');
			else if (mp > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mp / 10 + '0');
				_putchar(mp % 10 + '0');
			}
			else if (mp <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mp + '0');
			}
		}
		_putchar('\n');
	}
}
