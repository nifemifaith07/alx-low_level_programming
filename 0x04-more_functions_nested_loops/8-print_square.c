#include  "main.h"

/**
 * print_square - prints square using #
 * @size: size of the square
 *
 * Return: nothing
 */

void print_square(int size)
{
	int c, d;

	if (size <= 0)
		_putchar('\n');

	for (c = 0; c < size; c++)
	{
		for (d = 0; d < size; d++)
			{
				_putchar(35);
			}
		_putchar(10);
	}
}
